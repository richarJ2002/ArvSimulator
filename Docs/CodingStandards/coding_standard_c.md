# C Coding Standard

> A practical standard for readable, maintainable and agent-compatible C
> software.

**Status:** Normative  
**Applies to:** Project-owned C source code, headers, tests and examples  
**Primary goals:** Readability, predictable structure, safe maintenance and
behaviour-preserving automated refactoring

---

## Contents

1. [How to Use This Standard](#1-how-to-use-this-standard)
2. [Quick Reference](#2-quick-reference)
3. [Project Architecture](#3-project-architecture)
4. [Module and File Organization](#4-module-and-file-organization)
5. [File Layout and Include Order](#5-file-layout-and-include-order)
6. [Identifier Naming](#6-identifier-naming)
7. [Frames, Units and Transformations](#7-frames-units-and-transformations)
8. [Types, Objects, Enumerations and Constants](#8-types-objects-enumerations-and-constants)
9. [Comments and Doxygen](#9-comments-and-doxygen)
10. [Formatting and Editor Support](#10-formatting-and-editor-support)
11. [Agentic Coding Contract](#11-agentic-coding-contract)
12. [Review Checklists](#12-review-checklists)
13. [Appendix A: Canonical Templates](#appendix-a-canonical-templates)
14. [Appendix B: VS Code Snippets](#appendix-b-vs-code-snippets)

---

# 1. How to Use This Standard

This document is both:

- A learning reference for developers writing or reviewing C.
- A deterministic instruction set for automated coding agents.

The examples explain not only the required style, but also why the rules
exist. A developer unfamiliar with the repository should be able to identify:

- Where a function is declared and implemented.
- Whether a function or object is public or private.
- What a variable represents.
- The units and coordinate frame of a physical quantity.
- Whether a parameter is an input, output or input-output parameter.
- Which behaviour is safe to change.

## 1.1 Normative Language

The following terms have specific meanings:

| Term | Meaning |
|---|---|
| **shall** | Mandatory requirement. |
| **shall not** | Prohibited practice. |
| **should** | Preferred practice; deviations require a reason. |
| **may** | Optional practice. |

## 1.2 Scope

This standard applies to project-owned C code. It does not require changes to:

- Generated code.
- Third-party or vendored code.
- Standard-library declarations.
- Hardware-vendor headers.
- Externally controlled protocols or interfaces.

When external code violates this standard, isolate it behind a compliant
project-owned interface rather than rewriting the external dependency.

## 1.3 Rule Precedence

When rules appear to conflict, use the following order:

1. Explicit task-specific requirements approved by the maintainer.
2. Documented project or module exceptions.
3. This coding standard.
4. Tool defaults.

An exception shall be narrow, documented and justified. Existing
non-conforming code is not automatically an approved exception.

---

# 2. Quick Reference

## 2.1 Naming Summary

| Entity | Required form | Example |
|---|---|---|
| Variable | `lowerCamelCase` | `validMeasurementCount` |
| Pointer variable | `p_lowerCamelCase` | `p_sensorMeasurement` |
| Function parameter | Semantic direction suffix | `sampleCount_in` |
| Pointer parameter | Prefix and direction suffix | `p_status_out` |
| Function | `lowerCamelCase` with action verb | `sensorReadMeasurement()` |
| Function source file | Exact function name | `sensorReadMeasurement.c` |
| Type or structure | `PascalCase` | `SensorConfiguration` |
| Structure header | Exact type name | `SensorConfiguration.h` |
| Enumeration type | `PascalCase` | `SensorState` |
| Enumerator | `UPPER_SNAKE_CASE` | `SENSOR_STATE_READY` |
| Constant | `UPPER_SNAKE_CASE` | `SENSOR_MAX_SAMPLE_COUNT` |
| Macro | `UPPER_SNAKE_CASE` | `SENSOR_IS_VALID()` |
| Public function header | One per module | `public_functions.h` |
| Private function header | One per module | `private_functions.h` |

## 2.2 Non-Negotiable Rules

- Use spaces, never tabs.
- Limit C code and comment lines to 80 columns.
- Define exactly one function in each `.c` file.
- Use one `public_functions.h` and one `private_functions.h` per module.
- Do not create a header for each function.
- Prefix every pointer variable with `p_`.
- Use only `_in`, `_out` and `_inout` for parameter direction.
- Give every variable a descriptive name.
- Do not use single-letter variables unless the equation is shown and fully
  explained immediately beside the implementation.
- Document every function, structure, structure member, enumeration and
  enumerator with Doxygen.
- Do not change runtime behaviour during a code-quality refactor.

---

# 3. Project Architecture

Two source-tree structures are recognized:

1. Flat/monolithic source structure.
2. Hierarchical modular library structure.

The hierarchical modular library structure is the preferred long-term
architecture.

## 3.1 Flat/Monolithic Source Structure

A flat/monolithic structure places most project files in one source and one
include directory:

```text
project/
├── CMakeLists.txt
├── include/
│   ├── module.h
│   ├── objects.h
│   ├── public_functions.h
│   ├── SensorConfiguration.h
│   └── SensorState.h
└── src/
    ├── private_functions.h
    ├── sensorInitialize.c
    ├── sensorReadMeasurement.c
    └── sensorValidateConfiguration.c
```

This structure is acceptable during early development because it:

- Requires little architectural planning.
- Keeps a small prototype easy to inspect.
- Allows responsibilities to evolve quickly.
- Requires a simple build configuration.

It is not preferred for a growing project because it can:

- Make directories overwhelming.
- Hide module boundaries.
- Encourage unrelated dependencies.
- Make ownership unclear.
- Cause widely included headers and unnecessary recompilation.
- Make later restructuring expensive.

A flat directory does not inherently cause slow builds. The usual causes are
large translation units, shared headers and uncontrolled dependencies, which a
flat structure tends to encourage.

## 3.2 Monolithic Size Limit

A flat/monolithic structure may contain no more than 10 project-owned `.c` and
`.h` files.

Review the architecture when the eighth file is added. Transition to the
hierarchical modular library structure before adding the eleventh file.

The count excludes:

- Generated files.
- Third-party files.
- Build files.
- Documentation.
- Test data.

The limit is a required architectural checkpoint, not a claim that every
project becomes unmaintainable at exactly 10 files.

A project may exceed the limit only when it is deliberately temporary and the
maintainer documents the exception.

## 3.3 Monolithic Transition Rules

Even a prototype shall be written so it can be modularized without redesigning
its behaviour.

Therefore, a monolithic project shall:

- Keep exactly one function definition per `.c` file.
- Give each logical module a clear responsibility.
- Separate public and private declarations.
- Use one public-functions header and one private-functions header per logical
  module.
- Use module prefixes for public C symbols.
- Prevent one module from accessing another module's private state.
- Never include a `.c` file.
- Use the final naming and documentation rules from the beginning.

These rules make the later transition primarily a movement of files and build
targets rather than a redesign of the software.

## 3.4 Hierarchical Modular Library Structure

The preferred architecture is called the **Hierarchical Modular Library
Structure**.

Its hierarchy is:

```text
project
└── library
    └── module
        ├── public functions
        ├── private functions
        └── public objects
```

The normal structure is:

```text
project/
├── CMakeLists.txt
├── include/
│   └── library_name/
│       ├── library_name.h
│       └── module_name/
│           ├── module_name.h
│           ├── objects.h
│           ├── public_functions.h
│           └── objects/
│               ├── SensorConfiguration.h
│               ├── SensorMeasurement.h
│               ├── SensorState.h
│               ├── constants.h
│               └── enumerations.h
├── src/
│   └── library_name/
│       ├── CMakeLists.txt
│       └── module_name/
│           ├── CMakeLists.txt
│           ├── private_functions.h
│           ├── public_functions/
│           │   ├── sensorInitialize.c
│           │   ├── sensorReadMeasurement.c
│           │   └── sensorShutdown.c
│           └── private_functions/
│               ├── sensorValidateConfiguration.c
│               ├── sensorOpenConnection.c
│               └── sensorCalculateChecksum.c
└── tests/
    └── library_name/
        └── module_name/
```

Empty directories shall not be created merely to imitate this example.

## 3.5 Library and Module Responsibilities

A library is a collection of related modules built and distributed together.
A module is a cohesive part of a library with one responsibility.

Each module shall:

- Expose a documented public interface.
- Hide its implementation details.
- Avoid circular dependencies.
- Depend on another module only through that module's public interface.
- Keep tests organized under the same module hierarchy.

---

# 4. Module and File Organization

## 4.1 One Function per Source File

Each `.c` file shall contain exactly one function definition.

```text
sensorInitialize.c
└── sensorInitialize()

sensorReadMeasurement.c
└── sensorReadMeasurement()
```

The filename shall exactly match the function name, including capitalization.

Additional `static` helper functions shall not be added to the same file. A
helper receives:

- A descriptive function name.
- Its own `.c` file.
- A declaration in `private_functions.h`.

Private functions distributed across separate `.c` files have external C
linkage, but they are not part of the public API. Toolchain-supported hidden
symbol visibility should be used for private library symbols.

## 4.2 Public Functions Header

Each module shall have exactly one:

```text
public_functions.h
```

It contains:

- Every public function declaration for the module.
- Complete Doxygen documentation for every public function.
- Includes required by those declarations.
- The C++ linkage guard when required.

It shall not contain:

- Function definitions.
- Private declarations.
- Implementation-only constants.
- Private object definitions.

Public function declarations shall use `extern`:

```c
extern int sensorInitialize(
    const SensorConfiguration *p_configuration_in,
    SensorStatus *p_status_out);

extern int sensorShutdown(void);
```

Use `(void)` for a function with no parameters. In C, an empty `()` means the
parameters are unspecified.

## 4.3 Private Functions Header

Each module shall have exactly one:

```text
private_functions.h
```

It contains every private function declaration and its complete Doxygen
documentation.

The header shall:

- Remain under the implementation tree.
- Never be installed or exported.
- Never be included by a public header.
- Be included by a `.c` file only when required.

Private declarations also use `extern` for consistency:

```c
extern int sensorValidateConfiguration(
    const SensorConfiguration *p_configuration_in);
```

## 4.4 Public Objects

The public `objects/` directory contains structures, enumerations, type aliases
and constants used by callers.

Each public structure shall normally have one header:

```text
objects/
├── SensorConfiguration.h
├── SensorMeasurement.h
└── SensorStatus.h
```

Small related constants may share `constants.h`. Small related enumerations
may share `enumerations.h`. Move a declaration into its own header when it
becomes large, independently useful or independently documented.

The public `objects.h` umbrella header includes all public object headers:

```c
#ifndef SENSOR_OBJECTS_H
#define SENSOR_OBJECTS_H

#include "library_name/sensor/objects/SensorConfiguration.h"
#include "library_name/sensor/objects/SensorMeasurement.h"
#include "library_name/sensor/objects/SensorStatus.h"
#include "library_name/sensor/objects/constants.h"
#include "library_name/sensor/objects/enumerations.h"

#endif /* SENSOR_OBJECTS_H */
```

## 4.5 Private Objects Exception

Private objects are an exception, not part of the normal module template.

Create:

```text
src/library_name/module_name/private_objects/
```

only when an implementation-only type must be shared by multiple `.c` files.

Valid reasons include:

- A shared internal state structure.
- The private definition of an opaque public type.
- A shared private enumeration.
- Shared implementation-only constants.

If a private type is used by only one `.c` file, define it in that file. Do not
create a private header for it.

Private object headers shall never be included by `objects.h`,
`public_functions.h` or the module header.

## 4.6 Module and Library Headers

The public module header includes only:

- `objects.h`
- `public_functions.h`

```c
#ifndef SENSOR_H
#define SENSOR_H

#include "library_name/sensor/objects.h"
#include "library_name/sensor/public_functions.h"

#endif /* SENSOR_H */
```

A top-level library header may include the public module headers. It shall not
include private headers.

---

# 5. File Layout and Include Order

## 5.1 Source-File Layout

A `.c` file shall use this order:

1. File documentation.
2. Standard-library includes.
3. External-library includes.
4. Module includes.
5. Object includes.
6. The single function definition.

```c
/*!
 * @file            sensorInitialize.c
 *
 * @brief           Implements sensor-interface initialization.
 *
 * @date            12/08/2026
 */

/* Standard Library Includes */
/* None */

/* External Library Includes */
/* None */

/* Module Includes */
#include "library_name/sensor/public_functions.h"

#include "../private_functions.h"

/* Object Includes */
/* None */

int sensorInitialize(
    const SensorConfiguration *p_configuration_in,
    SensorStatus *p_status_out)
{
    /* Declare the status returned by configuration validation. */
    int validationStatus;

    /* Validate the configuration before opening the connection. */
    validationStatus = sensorValidateConfiguration(p_configuration_in);

    /* Stop initialization when the supplied configuration is invalid. */
    if (validationStatus != SENSOR_SUCCESS)
    {
        return validationStatus;
    }

    /* Report that validation completed and the sensor is ready to open. */
    *p_status_out = SENSOR_STATUS_READY;

    return SENSOR_SUCCESS;
}
```

A public function implementation includes `public_functions.h`. It includes
`private_functions.h` only when it calls a private module function.

A private function implementation includes `private_functions.h`.

## 5.2 Header-File Layout

A header shall use this order:

1. File documentation.
2. Include guard.
3. Standard-library includes.
4. External-library includes.
5. Module includes.
6. Object includes.
7. C++ linkage guard.
8. Declarations.
9. End of C++ linkage guard.
10. End of include guard.

Include directives remain outside `extern "C"`.

## 5.3 Include Groups

Include groups shall appear in this order:

```c
/* Standard Library Includes */
#include <stddef.h>
#include <stdint.h>

/* External Library Includes */
#include <external_library/external_header.h>

/* Module Includes */
#include "library_name/sensor/public_functions.h"

/* Object Includes */
#include "library_name/sensor/objects/SensorConfiguration.h"
```

An empty group may contain:

```c
/* None */
```

Rules:

- Standard-library headers use angle brackets.
- Project-owned headers use quotation marks.
- Include only headers directly required by the file.
- Never include a `.c` file.
- Do not depend on unrelated transitive includes.
- Sort includes alphabetically within each group.

## 5.4 Include Guards

Include guards shall identify the library, module and header:

```text
<LIBRARY>_<MODULE>_<HEADER>_H
```

```c
#ifndef SENSOR_LIBRARY_FILTER_PUBLIC_FUNCTIONS_H
#define SENSOR_LIBRARY_FILTER_PUBLIC_FUNCTIONS_H
```

A filename-only guard is prohibited because multiple modules may contain
`objects.h`, `constants.h` or `public_functions.h`.

---

# 6. Identifier Naming

## 6.1 General Rules

Identifiers shall:

- Use English words.
- Be correctly spelled.
- Describe purpose rather than only type.
- Use consistent project terminology.
- Avoid unexplained abbreviations.
- Avoid names that differ only by capitalization.

Names such as `data`, `value`, `object`, `item`, `thing`, `temp`, `result`,
`matrix` and `vector` require a descriptive qualifier.

```c
/* Incorrect */
double value;
Matrix matrix;

/* Correct */
double objectRadius_m;
Matrix measurementInformationMatrix;
```

## 6.2 Variables

Variables use lower camel case:

```c
size_t validMeasurementCount;
double objectRadius_m;
SensorConfiguration sensorConfiguration;
```

A variable should normally contain at least two descriptive words. A single
complete word such as `index`, `status` or `configuration` is permitted only
when its meaning is unambiguous in the immediate scope.

## 6.3 Mandatory Descriptive Mathematical Names

Single-letter and purely symbolic names are prohibited during normal
implementation.

```c
/* Incorrect */
double r;
Quaternion q;
Matrix A;
Matrix H;
Matrix J;
Vector b;

/* Correct */
double objectRadius_m;
Quaternion uavQuat_bodyToMap;
Matrix equalityConstraintMatrix;
Matrix optimizationHessianMatrix;
Matrix measurementJacobianMatrix;
Vector optimizationGradientVector;
```

Loop indices are also descriptive:

```c
for (size_t measurementIndex = 0U;
     measurementIndex < measurementCount;
     ++measurementIndex)
{
    processMeasurement(&measurements[measurementIndex]);
}
```

The mathematical-notation exception is defined in
[Section 9.8](#98-mathematical-notation-exception).

## 6.4 Pointer Variables

Every pointer variable begins with `p_`:

```c
SensorMeasurement *p_sensorMeasurement;
const SensorConfiguration *p_configuration_in;
uint8_t *p_receivedMessageBuffer;
```

This is the deliberate exception to the general rule against encoding a C type
in a name.

The prefix applies to:

- Parameters.
- Local variables.
- Structure members.
- File-scope variables.
- Function-pointer variables.

It does not apply to an array declaration:

```c
uint8_t messageBuffer[MESSAGE_BUFFER_SIZE];
uint8_t *p_currentMessageByte;
```

A function returning a pointer is not prefixed with `p_`; the rule applies to
variables, not function names.

## 6.5 Parameter Direction

Every function parameter ends with exactly one of:

```text
_in
_out
_inout
```

Longer alternatives such as `_input`, `_output` and `_inOut` are prohibited.

```c
extern int filterUpdateState(
    const SensorMeasurement *p_measurement_in,
    FilterState *p_filterState_inout,
    InnovationVector *p_innovation_out);
```

The suffix, Doxygen direction and type qualifiers shall agree:

- `_in`: consumed but not modified.
- `_out`: assigned by the function.
- `_inout`: consumed and modified.

Input pointers shall use `const` whenever the pointed-to value is not modified.

Direction suffixes do not apply to locals, structure members, globals or
function names.

## 6.6 Complete Variable Grammar

The full variable form is:

```text
[p_]<descriptiveName>[_<frame>][_<unit>][_<direction>]
```

Only applicable fields are included. Their order is fixed.

```c
double objectRadius_m;
Vector3 uavPosition_map_m;
const Vector3 *p_uavPosition_body_m_in;
Vector3 *p_uavPosition_map_m_out;
```

## 6.7 Boolean Variables

Boolean variables read as conditions and begin with terms such as:

```text
is  has  can  should  was  will
```

```c
bool isSensorReady;
bool hasValidMeasurement;
bool shouldPublishResult;
```

Prefer positive logic. `isConfigurationValid` is clearer than
`isConfigurationInvalid`, particularly when negated.

## 6.8 Counts, Indices and Collections

Use the exact concept represented:

```c
size_t measurementCount;
size_t measurementIndex;
size_t messageSize_bytes;
size_t bufferCapacity;
```

Collections use plural names:

```c
SensorMeasurement measurements[MAX_MEASUREMENT_COUNT];
```

## 6.9 Function Names

Functions use lower camel case and begin with an action:

```text
<module><Action><Subject><Qualifier>
```

```c
sensorInitialize();
sensorReadMeasurement();
sensorValidateConfiguration();
navigationTransformPosition();
```

C has no namespaces, so public functions begin with the module name. Add a
library prefix when module names may collide across libraries.

Preferred verbs include:

| Verb | Meaning |
|---|---|
| `initialize` | Prepare an existing module or object. |
| `deinitialize` | Release initialization resources. |
| `create` | Allocate or construct a new object. |
| `destroy` | Release a created object. |
| `read` | Obtain information from hardware, storage or a stream. |
| `write` | Send information to hardware, storage or a stream. |
| `calculate` | Produce a direct mathematical result. |
| `compute` | Perform a substantial calculation. |
| `convert` | Change representation, encoding or unit. |
| `transform` | Express a geometric quantity in another frame. |
| `validate` | Check whether requirements are satisfied. |
| `update` | Modify existing state using new information. |
| `handle` | Respond to an event or condition. |

Related operations use symmetric names:

```c
sensorInitialize();
sensorDeinitialize();

sensorCreate();
sensorDestroy();
```

Predicate functions read as questions:

```c
sensorIsReady();
configurationIsValid();
bufferHasCapacity();
```

---

# 7. Frames, Units and Transformations

## 7.1 Frame Tags

A frame-dependent quantity includes the frame in which its components are
expressed:

```c
Vector3 uavPosition_map_m;
Vector3 uavVelocity_body_mPerS;
Vector3 angularVelocity_sensor_radPerS;
```

The project shall define one canonical name for each frame, for example:

```text
map  odom  body  sensor  camera  ned  ecef
```

Do not use several abbreviations for the same frame.

If a quantity is relative to another origin, include `RelTo` in the descriptive
name:

```c
Vector3 sensorPositionRelToUav_body_m;
```

This means the sensor position is relative to the UAV origin and expressed in
the body frame.

## 7.2 Unit Tags

Physical quantities include a unit tag when the unit is not unambiguously
expressed by the type.

| Quantity | Tag | Example |
|---|---|---|
| Metres | `m` | `objectRadius_m` |
| Seconds | `s` | `samplePeriod_s` |
| Milliseconds | `ms` | `timeout_ms` |
| Hertz | `hz` | `sampleFrequency_hz` |
| Kilograms | `kg` | `vehicleMass_kg` |
| Radians | `rad` | `yawAngle_rad` |
| Degrees | `deg` | `servoAngle_deg` |
| Metres per second | `mPerS` | `uavSpeed_mPerS` |
| Metres per second squared | `mPerS2` | `uavAcceleration_mPerS2` |
| Radians per second | `radPerS` | `yawRate_radPerS` |
| Bytes | `bytes` | `messageSize_bytes` |

`ms` means milliseconds. It shall not mean metres-per-second.

A container with members using different units shall not claim one unit for the
whole container. Put units on the member names:

```c
typedef struct SphericalPosition
{
    double radius_m;
    double azimuth_rad;
    double elevation_rad;
} SphericalPosition;
```

## 7.3 Transformation Direction

Transformation direction is always:

```text
<sourceFrame>To<targetFrame>
```

```c
Transform transform_bodyToMap;
Quaternion uavQuat_bodyToMap;
Matrix uavRotationMatrix_bodyToMap;
```

`transform_bodyToMap` converts coordinates expressed in the body frame into
coordinates expressed in the map frame:

```text
position_map = transform_bodyToMap(position_body)
```

Generic names are prohibited:

```c
/* Incorrect */
Quaternion quat;
Matrix rotationMatrix;
Transform transform;

/* Correct */
Quaternion uavQuat_bodyToMap;
Matrix cameraRotationMatrix_cameraToBody;
Transform transform_sensorToMap;
```

Use `transform` for a frame change and `convert` for a representation or unit
change:

```c
navigationTransformPosition();
rotationConvertQuatToMatrix();
angleConvertDegreesToRadians();
```

Every transformation interface shall document source frame, target frame,
rotation convention, multiplication order and units.

---

# 8. Types, Objects, Enumerations and Constants

## 8.1 Structures and Type Names

Structures, unions, enumerations and type aliases use Pascal case:

```c
SensorConfiguration
SensorMeasurement
NavigationState
```

Do not append `Struct` merely to repeat the C category:

```c
/* Incorrect */
SensorConfigurationStruct;

/* Correct */
SensorConfiguration;
```

Each structure and every member shall have Doxygen documentation:

```c
/*!
 * @brief           Contains a position expressed in the map frame.
 */
typedef struct MapPosition
{
    /*!
     * @brief           Position along the map x-axis.
     *
     * @units           Metres.
     * @frame           Map frame.
     */
    double positionX_m;

    /*!
     * @brief           Position along the map y-axis.
     *
     * @units           Metres.
     * @frame           Map frame.
     */
    double positionY_m;
} MapPosition;
```

`@units` and `@frame` are project-defined Doxygen aliases. See
[Section 9.7](#97-project-defined-doxygen-aliases).

## 8.2 Enumerations

Enumeration types use Pascal case. Enumerators use upper snake case and include
the module and enumeration concept:

```text
<MODULE>_<ENUMERATION>_<VALUE>
```

Every enumeration and every enumerator shall have its own Doxygen comment:

```c
/*!
 * @brief           Represents the operational state of the sensor.
 */
typedef enum SensorState
{
    /*!
     * @brief           The sensor has not been initialized.
     */
    SENSOR_STATE_UNINITIALIZED = 0,

    /*!
     * @brief           The sensor is initialized and ready to start.
     */
    SENSOR_STATE_READY = 1,

    /*!
     * @brief           The sensor is producing measurements.
     */
    SENSOR_STATE_ACTIVE = 2,

    /*!
     * @brief           The sensor encountered an unrecoverable error.
     */
    SENSOR_STATE_ERROR = 3
} SensorState;
```

Enumerator documentation explains meaning and behaviour, not merely the words
in the identifier.

Use explicit values when an enumeration is serialized, persisted, exposed by
a stable API, mapped to hardware or used in a protocol.

## 8.3 Constants

Constants use upper snake case and include a module prefix when public:

```c
#define SENSOR_MAX_SAMPLE_COUNT 100U

static const double STANDARD_GRAVITY_M_PER_S2 = 9.80665;
```

Include units in constants representing physical quantities.

## 8.4 Macros

Macros use upper snake case and a module or library prefix:

```c
#define SENSOR_IS_SAMPLE_VALID(SAMPLE) (...)
```

Prefer an inline function when it provides the same behaviour with type
checking and single argument evaluation.

---

# 9. Comments and Doxygen

Comments explain intent, assumptions and functional logic without needlessly
restating the code.

Comments shall be concise, accurate and updated with the associated code.
Comment lines shall not exceed 80 columns.

## 9.1 Implementation Comments

Implementation comments explain meaningful logical operations, including:

- Why an operation is required.
- Assumptions and invariants.
- Frames and units.
- Ownership and lifetime.
- Thread safety and synchronization.
- Non-obvious algorithms or mathematics.
- External-interface requirements.

Avoid restating code:

```c
/* Incorrect: Increment the counter. */
validMeasurementCount++;

/* Correct: Exclude the reserved invalid observation from later searches. */
nextObservationIdentifier++;
```

## 9.2 Standard Logic Comment

Place a brief block comment before a meaningful operation:

```c
/* Convert the measured position from the sensor frame to the map frame. */
mapPosition = navigationTransformPosition(sensorPosition);
```

One comment may describe several closely related statements.

## 9.3 Detailed Implementation Comment

Use a detailed comment sparingly for mathematics, algorithms, concurrency or
important non-obvious behaviour:

```c
/*!
 * @brief           Explains the non-obvious implementation decision.
 *
 *                  Describe the assumption, method and required behaviour.
 */
```

## 9.4 Section Comments

Use section comments only for major logical regions:

```c
/* -------------------------------------------------------------------------- *
 * SECTION NAME
 * -------------------------------------------------------------------------- */
```

Reduce the separator width when indentation requires it. Never exceed 80
columns.

## 9.5 Doxygen Location

Documentation has one authoritative location:

| Interface | Documentation location |
|---|---|
| Public functions | `public_functions.h` |
| Private functions | `private_functions.h` |
| Public structures and members | Corresponding object header |
| Enumerations and enumerators | Corresponding object header |
| Constants and public macros | Header containing the declaration |
| Implementation decisions | Corresponding `.c` file |

Do not duplicate a function contract in its `.c` file. Each `.c` file still
receives `@file` documentation and implementation comments.

## 9.6 Function Documentation

Use only commands that apply to the function:

```c
/*!
 * @brief           Transforms a position into the map frame.
 *
 *                  Applies the supplied sensor-to-map transformation.
 *
 * @param[in]       p_position_sensor_m_in
 *                  Position expressed in the sensor frame, in metres.
 *
 * @param[in]       p_transform_sensorToMap_in
 *                  Transformation from the sensor frame to the map frame.
 *
 * @param[out]      p_position_map_m_out
 *                  Transformed position expressed in the map frame, in
 *                  metres.
 *
 * @retval           0
 *                  Transformation completed successfully.
 *
 * @retval          -1
 *                  At least one required pointer is null.
 *
 * @pre             The transformation is valid and normalized.
 *
 * @post            The output is valid when zero is returned.
 */
extern int navigationTransformPosition(
    const Vector3 *p_position_sensor_m_in,
    const Transform *p_transform_sensorToMap_in,
    Vector3 *p_position_map_m_out);
```

Omit `@return` and `@retval` for a `void` function. Use `@retval` when
individual return codes need separate explanations.

## 9.7 Project-Defined Doxygen Aliases

`@units` and `@frame` are not standard Doxygen commands. Projects using them
shall define aliases in the `Doxyfile`:

```text
ALIASES += units="Units:"
ALIASES += frame="Frame:"
```

Use them without a colon in source comments:

```c
/*!
 * @brief           UAV position along the map x-axis.
 *
 * @units           Metres.
 * @frame           Map frame.
 */
double uavPositionX_m;
```

## 9.8 Mathematical-Notation Exception

Short mathematical identifiers are permitted only when the implementation is
a direct local transcription of an equation.

A detailed multiline comment immediately above the calculation shall:

- Show the complete equation.
- Define every short identifier.
- State dimensions.
- State units and frames where relevant.
- Define multiplication and transformation direction.
- Bound the code to which the notation applies.

Documentation in a paper, README, Doxygen page or another function does not
satisfy this exception.

```c
/*!
 * @brief           Solves the local Newton system.
 *
 *                  The following calculation directly implements:
 *
 *                      H deltaX = -g
 *
 *                  H
 *                  Objective Hessian matrix with dimensions N by N.
 *
 *                  deltaX
 *                  Optimization-state increment with dimension N.
 *
 *                  g
 *                  Objective-gradient vector with dimension N.
 *
 *                  These short identifiers apply only to the immediately
 *                  following equation implementation.
 */
Matrix H = calculateObjectiveHessian();
Vector g = calculateObjectiveGradient();
Vector deltaX = solveLinearSystem(H, negateVector(g));
```

Descriptive names remain preferred even when the exception is available.

## 9.9 Comment Alignment

Alignment uses spaces exclusively. Literal tabs shall not appear in comments.

Within a Doxygen comment:

- `*` characters align vertically.
- Commands begin immediately after `* `.
- The command field occupies 17 characters.
- Descriptions begin after that field.
- Continuation lines align with the description.
- Related entries are separated by a blank comment line.

```text
@brief           Description
@param[in]       Description
@param[out]      Description
@param[in,out]   Description
@return          Description
@retval          Description
@pre             Description
@post            Description
@note            Description
@units           Description
@frame           Description
```

The description column is fixed; the number of spaces after each command is
not fixed.

## 9.10 Documentation Quality

Documentation shall not:

- Claim behaviour not enforced by the implementation.
- Describe obsolete behaviour.
- Depend on ambiguous words without context.
- Omit relevant units or frames.
- Contain commented-out code.
- Repeat an identifier without adding meaning.

Reference external standards and publications using `@see`, `@cite` or the
project-defined reference convention.

---

# 10. Formatting and Editor Support

## 10.1 Required Formatting Baseline

The repository shall contain `.clang-format`. Developers, CI and agents shall
use the same supported `clang-format` version.

At minimum:

```yaml
ColumnLimit: 80
IndentWidth: 4
ContinuationIndentWidth: 4
TabWidth: 4
UseTab: Never
BreakBeforeBraces: Allman
DerivePointerAlignment: false
PointerAlignment: Right
ReflowComments: false
IncludeBlocks: Preserve
SortIncludes: CaseSensitive
```

`ReflowComments: false` protects intentionally aligned Doxygen blocks.
`clang-format` does not fully enforce the custom Doxygen table, so a separate
style check is required.

The style check should detect:

- Tabs.
- Lines over 80 columns.
- Misaligned Doxygen descriptions.
- Incorrect parameter suffixes.
- Pointer variables missing `p_`.
- More than one function definition in a `.c` file.
- Per-function headers.
- Missing enumerator documentation.

## 10.2 Editor Snippets

Canonical snippets should be stored in the repository:

```text
.vscode/c.code-snippets
```

Snippets are scaffolding, not enforcement. They shall:

- Follow this standard.
- Use spaces.
- Produce four-space indentation.
- Follow the include-group order.
- Use the Doxygen description column.
- Avoid undeclared project-specific constants.
- Be updated when the standard changes.

Snippet placeholders shall not remain in committed code.

---

# 11. Agentic Coding Contract

This section is normative for coding agents and automated refactoring tools.

## 11.1 Required Agent Behaviour

Before editing, an agent shall:

1. Read this complete standard.
2. Read repository-level agent instructions.
3. Identify the files and symbols within scope.
4. Identify generated, third-party and externally controlled files.
5. Record observable interfaces that must not change.
6. Determine the relevant build and test commands.

The agent shall not invent a convention that is already defined here.

## 11.2 Behaviour Preservation

A code-quality refactor may change:

- Identifier names.
- File locations.
- Formatting.
- Comments and Doxygen.
- Include organization.
- Public/private organization when all consumers remain compatible.

It shall not unintentionally change:

- Algorithms or mathematical behaviour.
- Constants, thresholds or initial values.
- Evaluation or operation order.
- Error codes.
- Memory ownership or lifetime.
- Threading or synchronization.
- Timing-sensitive behaviour.
- Binary or serialized representations.
- Runtime-visible strings.
- Configuration keys.
- Protocol field names.
- Hardware identifiers.
- External APIs.

## 11.3 Naming and Rename Rules

Agents shall use symbol-aware renaming through `clangd`, an AST-aware tool or
an equivalent mechanism whenever possible.

Repository-wide text replacement shall not be used for C symbols.

A rename shall update:

- Declaration.
- Definition.
- Call sites.
- Function pointers.
- Tests.
- Doxygen references.
- Matching `.c` filename.
- Build-system source lists.

An agent shall not guess a missing frame, unit, direction or mathematical role.
If meaning is unclear, preserve the identifier and report the ambiguity.

## 11.4 Public API Protection

A public function name is part of the source API and compiled symbol
interface. Rename it only when:

- Every consumer is migrated atomically; or
- A compatibility wrapper is provided.

Do not rename externally controlled strings merely because they violate the C
identifier style.

## 11.5 Bounded Refactoring Batches

Each batch shall have one primary purpose, such as:

- Format one module.
- Rename one coherent symbol family.
- Split one module into one-function source files.
- Consolidate declarations into the two required function headers.
- Add missing Doxygen documentation.

Do not mix code-quality work with algorithmic improvements.

After each batch, the agent shall:

1. Format changed C and header files.
2. Run relevant static checks.
3. Build the affected module.
4. Build known downstream consumers when public headers change.
5. Run relevant tests.
6. Inspect the diff for unrelated changes.

## 11.6 Agent Stop Conditions

An agent shall stop and request human direction when:

- A variable's physical meaning is unclear.
- A frame or transformation direction cannot be proven.
- A unit cannot be determined.
- Public versus private status is ambiguous.
- A rename may break an unknown external consumer.
- Behavioural equivalence cannot be verified.
- Required tests or build dependencies are unavailable.
- Existing rules conflict without a documented precedence decision.

Silently guessing is prohibited.

## 11.7 Required Completion Report

An agent shall report:

- Files changed.
- Symbols renamed.
- Files moved or created.
- Public interfaces affected.
- Exceptions used.
- Formatting and lint results.
- Build results.
- Test results.
- Unresolved ambiguities.

## 11.8 Agent Task Template

Use this contract when assigning a refactor:

```text
Refactor only the listed files and symbols according to C_CODING_STANDARD.md.
Preserve all observable behaviour. Do not modify algorithms, constants,
operation order, ownership, timing, runtime-visible strings, configuration
keys, serialized fields, generated code or third-party code.

Use symbol-aware renaming. Do not guess frames, units, parameter directions,
public/private status or mathematical meaning. Stop and report any ambiguity.

Keep exactly one function definition per .c file. Use one
public_functions.h and one private_functions.h per module. Do not create
per-function headers.

Format, build and test the affected module after editing. Report every renamed
symbol, interface risk, command result and unresolved issue.
```

---

# 12. Review Checklists

## 12.1 New Function Checklist

- [ ] Function begins with a clear action verb.
- [ ] Public function begins with its module prefix.
- [ ] Exactly one function is defined in the `.c` file.
- [ ] The `.c` filename exactly matches the function name.
- [ ] Declaration is in the module's existing function header.
- [ ] No per-function header was created.
- [ ] All parameters use `_in`, `_out` or `_inout`.
- [ ] Pointer parameters use `p_`.
- [ ] Input pointers use `const` where possible.
- [ ] Doxygen documents every parameter and return condition.
- [ ] Units and frames are explicit.

## 12.2 New Object Checklist

- [ ] Type uses Pascal case.
- [ ] Public structure has one object header.
- [ ] Structure has Doxygen documentation.
- [ ] Every member has Doxygen documentation.
- [ ] Pointer members use `p_`.
- [ ] Units and frames are documented.
- [ ] Every enumerator has its own Doxygen comment.
- [ ] Private object directory is used only when justified.

## 12.3 Refactoring Checklist

- [ ] Baseline build and tests were recorded.
- [ ] Generated and third-party code were excluded.
- [ ] Public and runtime-visible interfaces were identified.
- [ ] Renames were symbol-aware.
- [ ] No frames, units or directions were guessed.
- [ ] Formatting-only changes are separated where practical.
- [ ] Affected modules and consumers build.
- [ ] Relevant tests pass.
- [ ] The diff contains no algorithmic changes.
- [ ] The completion report records all changes and uncertainties.

---

# Appendix A: Canonical Templates

## A.1 Public Functions Header

```c
/*!
 * @file            public_functions.h
 *
 * @brief           Declares the public sensor-module functions.
 *
 * @date            DD/MM/YYYY
 */

#ifndef LIBRARY_SENSOR_PUBLIC_FUNCTIONS_H
#define LIBRARY_SENSOR_PUBLIC_FUNCTIONS_H

/* Standard Library Includes */
/* None */

/* External Library Includes */
/* None */

/* Module Includes */
/* None */

/* Object Includes */
#include "library_name/sensor/objects.h"

#ifdef __cplusplus
extern "C"
{
#endif

/* Public function Doxygen and declarations appear here. */

#ifdef __cplusplus
}
#endif

#endif /* LIBRARY_SENSOR_PUBLIC_FUNCTIONS_H */
```

## A.2 Private Functions Header

```c
/*!
 * @file            private_functions.h
 *
 * @brief           Declares the private sensor-module functions.
 *
 * @date            DD/MM/YYYY
 */

#ifndef LIBRARY_SENSOR_PRIVATE_FUNCTIONS_H
#define LIBRARY_SENSOR_PRIVATE_FUNCTIONS_H

/* Standard Library Includes */
/* None */

/* External Library Includes */
/* None */

/* Module Includes */
/* None */

/* Object Includes */
#include "library_name/sensor/objects.h"

#ifdef __cplusplus
extern "C"
{
#endif

/* Private function Doxygen and declarations appear here. */

#ifdef __cplusplus
}
#endif

#endif /* LIBRARY_SENSOR_PRIVATE_FUNCTIONS_H */
```

## A.3 Function Implementation

```c
/*!
 * @file            functionName.c
 *
 * @brief           Implements the function purpose.
 *
 * @date            DD/MM/YYYY
 */

/* Standard Library Includes */
/* None */

/* External Library Includes */
/* None */

/* Module Includes */
#include "library_name/module_name/public_functions.h"

/* Object Includes */
/* None */

int functionName(void)
{
    /* Implement one documented logical operation at a time. */
    return 0;
}
```

---

# Appendix B: VS Code Snippets

The following reference snippets implement the required spacing and section
order. Projects may extend them without weakening the standard.

```json
{
    "Template_SOURCE": {
        "prefix": "file_template_C",
        "body": [
            "/*!",
            " * @file            ${TM_FILENAME}",
            " *",
            " * @brief           ${1:Brief description.}",
            " *",
            " * @date            ${CURRENT_DATE}/${CURRENT_MONTH}/${CURRENT_YEAR}",
            " */",
            "",
            "/* Standard Library Includes */",
            "/* None */",
            "",
            "/* External Library Includes */",
            "/* None */",
            "",
            "/* Module Includes */",
            "/* None */",
            "",
            "/* Object Includes */",
            "/* None */",
            "",
            "${2:int} ${TM_FILENAME_BASE}(${3:void})",
            "{",
            "    /* Declare local variables. */",
            "    /* None */",
            "",
            "    ${4:return 0;}",
            "}"
        ],
        "description": "Creates a standard C function source file"
    },
    "Template_HEADER": {
        "prefix": "header_template_C",
        "body": [
            "/*!",
            " * @file            ${TM_FILENAME}",
            " *",
            " * @brief           ${1:Brief description.}",
            " *",
            " * @date            ${CURRENT_DATE}/${CURRENT_MONTH}/${CURRENT_YEAR}",
            " */",
            "",
            "#ifndef ${2:LIBRARY_MODULE}_${TM_FILENAME_BASE/(.*)/${1:/upcase}/}_H",
            "#define ${2}_${TM_FILENAME_BASE/(.*)/${1:/upcase}/}_H",
            "",
            "/* Standard Library Includes */",
            "/* None */",
            "",
            "/* External Library Includes */",
            "/* None */",
            "",
            "/* Module Includes */",
            "/* None */",
            "",
            "/* Object Includes */",
            "/* None */",
            "",
            "#ifdef __cplusplus",
            "extern \"C\"",
            "{",
            "#endif",
            "",
            "${3:/* Declarations. */}",
            "",
            "#ifdef __cplusplus",
            "}",
            "#endif",
            "",
            "#endif /* ${2}_${TM_FILENAME_BASE/(.*)/${1:/upcase}/}_H */"
        ],
        "description": "Creates a standard C header"
    },
    "Switch": {
        "prefix": "switch",
        "body": [
            "switch (${1:expression})",
            "{",
            "    case ${2:CASE_VALUE}:",
            "        ${3:/* Handle the selected case. */}",
            "        break;",
            "",
            "    default:",
            "        ${4:/* Handle unsupported values. */}",
            "        break;",
            "}"
        ],
        "description": "Creates a standard C switch statement"
    },
    "SectionHeader": {
        "prefix": "section",
        "body": [
            "/* -------------------------------------------------------------------------- *",
            " * ${1:SECTION NAME}",
            " * -------------------------------------------------------------------------- */"
        ],
        "description": "Creates a major section header"
    },
    "SubSectionHeader": {
        "prefix": "sub-section",
        "body": [
            "/* ------------------------ ${1:SUBSECTION NAME} ------------------------ */"
        ],
        "description": "Creates a subsection header"
    }
}
```

The subsection separator shall be manually shortened when its completed name
would exceed 80 columns.
