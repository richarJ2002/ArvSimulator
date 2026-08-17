# C++ Coding Standard

> A practical ISO C++17 standard for readable, maintainable, robotics-oriented
> and agent-compatible software.

**Status:** Normative

**Language baseline:** ISO C++17

**Applies to:** Project-owned C++ source code, headers, tests and examples
**Primary goals:** Readability, predictable structure, explicit ownership,
safe robotics software and behaviour-preserving agentic development

---

## Contents

1. [How to Use This Standard](#1-how-to-use-this-standard)
2. [Quick Reference](#2-quick-reference)
3. [Language and Compliance Profiles](#3-language-and-compliance-profiles)
4. [Project Architecture](#4-project-architecture)
5. [Module, Object and File Organization](#5-module-object-and-file-organization)
6. [Namespaces and Identifiers](#6-namespaces-and-identifiers)
7. [Objects, Members and Inheritance](#7-objects-members-and-inheritance)
8. [Functions, Methods and Parameters](#8-functions-methods-and-parameters)
9. [Ownership, Lifetime and Resource Management](#9-ownership-lifetime-and-resource-management)
10. [Templates, Inline Code and Compile-Time Code](#10-templates-inline-code-and-compile-time-code)
11. [Enumerations, Constants and Operators](#11-enumerations-constants-and-operators)
12. [Frames, Units and Mathematics](#12-frames-units-and-mathematics)
13. [Error Handling and Optional Values](#13-error-handling-and-optional-values)
14. [Comments and Doxygen](#14-comments-and-doxygen)
15. [Formatting, Builds and Static Analysis](#15-formatting-builds-and-static-analysis)
16. [ROS and Robotics Integration](#16-ros-and-robotics-integration)
17. [Agentic Coding Contract](#17-agentic-coding-contract)
18. [Review Checklists](#18-review-checklists)
19. [Appendix A: Canonical Templates](#appendix-a-canonical-templates)
20. [Appendix B: Compliance Reference](#appendix-b-compliance-reference)

---

# 1. How to Use This Standard

This document serves two audiences:

- Developers learning how this repository is organized and why.
- Coding agents creating, reviewing or refactoring project-owned C++17 code.

A new developer should be able to determine, without guessing:

- Which library and module own a symbol.
- Where an object is declared and each method is implemented.
- Whether a function, method or object is part of the public interface.
- Who owns a resource and whether a pointer may be null.
- The coordinate frame and unit of every physical quantity.
- Which build, test and compliance profile applies.

## 1.1 Normative Language

| Term | Meaning |
|---|---|
| **shall** | Mandatory requirement. |
| **shall not** | Prohibited practice. |
| **should** | Preferred practice; deviations require a reason. |
| **may** | Optional practice. |

## 1.2 Scope

This standard applies to project-owned C++17. It does not require changes to:

- Generated ROS messages, services or actions.
- Third-party, vendored or tool-generated code.
- Standard-library declarations.
- Hardware-vendor headers.
- Externally specified topic names, parameters, frames or protocols.

Non-conforming external code shall be isolated behind a compliant
project-owned interface rather than rewritten.

## 1.3 Rule Precedence

Use the following precedence when rules conflict:

1. Applicable legal, safety, certification and external interface rules.
2. A documented project compliance profile and approved deviations.
3. Explicit maintainer requirements for the current task.
4. This standard.
5. Tool defaults.

An existing violation is not an approved exception. A deviation shall identify
the rule, affected scope, reason, approver and verification method.

## 1.4 Suggested Learning Path

A new developer should read the document in this order:

1. Quick Reference for the everyday rules.
2. Language and Compliance Profiles to identify the active constraints.
3. Project Architecture and File Organization to learn where code belongs.
4. Namespaces, Objects, Functions and Ownership before designing an API.
5. The relevant checklist and canonical template while implementing.

Coding agents shall read the complete document, not only this learning path.

---

# 2. Quick Reference

## 2.1 Naming Summary

| Entity | Required form | Example |
|---|---|---|
| Namespace | `lower_snake_case` | `navigation_library::semantic_mapping` |
| Object type | `PascalCase` | `MapManager` |
| Variable or member | `lowerCamelCase` | `validMeasurementCount` |
| Pointer-like variable | `p_lowerCamelCase` | `p_currentMap` |
| Parameter | Direction suffix | `configuration_in` |
| Function or method | Action-oriented `lowerCamelCase` | `calculateMapArea()` |
| Boolean | Reads as a condition | `isMapValid` |
| Enumerator | `UPPER_SNAKE_CASE` | `MAP_STATE_READY` |
| Constant | `UPPER_SNAKE_CASE` | `MAX_MAP_COUNT` |
| Ordinary implementation | `.cc` | `calculateMapArea.cc` |
| Object declaration | One type per `.h` | `MapManager.h` |
| Template method | One method per `.tpp` | `push.tpp` |

## 2.2 Non-Negotiable Rules

- Compile project-owned code as ISO C++17 without compiler extensions.
- Use spaces, never tabs, and limit project code to 80 columns.
- Keep headers beside sources except where a framework requires export headers.
- Define one free function or one ordinary method overload per `.cc` file.
- Define one project-owned object type per object header.
- Use namespaces that mirror the library/module path.
- Prefix raw and smart pointer variables with `p_`.
- Do not prefix references with `p_`.
- Use only `_in`, `_out` and `_inout` for parameter direction.
- Use descriptive names; symbolic names require an immediate equation comment.
- Use `std::unique_ptr` for ownership by default.
- Use `auto` only when the language effectively requires type deduction.
- Document all public and private declarations in their authoritative headers.
- Preserve behaviour during code-quality refactors.

---

# 3. Language and Compliance Profiles

## 3.1 ISO C++17 Baseline

The normal profile is ISO C++17:

```cmake
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
```

The repository shall document the supported compilers and warning baseline.
Project-owned code shall build without warnings on those compilers.

## 3.2 General Robotics Profile

Unless another profile is declared, use the general robotics profile:

- Return a single ordinary output by value.
- Use a reference for a required non-null input-output object.
- Use a pointer only for a pointer-like resource or nullable object.
- Permit exceptions outside real-time and C ABI boundaries.
- Use status results in control loops, real-time callbacks and ABI boundaries.
- Permit dynamic allocation outside documented deterministic regions.

## 3.3 JSF AV C++ Profile

A project claiming the Joint Strike Fighter Air Vehicle C++ profile shall name
the exact revision, compliance tools and approved deviations. The published
Revision C is based on C++03; applying it to C++17 requires a documented mapping
for newer language and library features.

Under this profile:

- Applicable JSF AV rules override the general profile.
- C++ exceptions are prohibited.
- Allocation and deallocation from the heap shall not occur after the defined
  initialization phase.
- Fallible operations return a documented status value.
- Every returned error indication shall be tested.
- Infallible accessors and predicates may return values directly.
- Infallible commands may return `void`.
- Construction shall not fail; fallible setup belongs in `initialize()`.
- Template instantiations shall be enumerated, reviewed and tested.

The canonical templates in this document target the general C++17 profile.
They are not drop-in certification templates. For example, the published JSF
rules impose their own comment syntax and restrict which definitions should be
inlined. A JSF project shall apply those rules or record an approved deviation
rather than silently following a conflicting general-profile example.

JSF AV does not require every ordinary function to return a status code. A
project wanting that stronger API shall enable the strict status profile below.

## 3.4 Strict Status API Profile

The optional strict status profile requires every ordinary function and method
to return a project status enumeration. Data is produced through output
parameters.

Constructors, destructors and language-required operators cannot follow this
shape. They shall be non-failing or prohibited as appropriate.

```cpp
MapStatus calculateMap(
    const MapConfiguration &configuration_in,
    Map &map_out);
```

The strict status profile is a project rule, not an automatic JSF requirement.

---

# 4. Project Architecture

## 4.1 Default Co-Located Structure

Headers and implementation files normally live together under `src/`. This
keeps a module visible in one directory and lets umbrella headers guide a
developer through the repository.

```text
project/
├── CMakeLists.txt
├── src/
│   └── navigation_library/
│       ├── navigation_library.h
│       └── semantic_mapping/
│           ├── CMakeLists.txt
│           ├── semantic_mapping.h
│           ├── objects.h
│           ├── public_functions.h
│           ├── private_functions.h
│           ├── objects/
│           │   ├── Map.h
│           │   ├── MapConfiguration.h
│           │   ├── MapManager.h
│           │   └── MapState.h
│           ├── public_functions/
│           │   └── calculateMapArea.cc
│           ├── private_functions/
│           │   └── validateMapConfiguration.cc
│           └── methods/
│               └── MapManager/
│                   ├── initialize.cc
│                   ├── isMapValid.cc
│                   └── setConfiguration/
│                       ├── fromFile.cc
│                       └── fromObject.cc
└── tests/
    └── navigation_library/
        └── semantic_mapping/
```

The build exports only public headers even though public and private files are
co-located. Co-location does not make a private header public.

## 4.2 Library and Module Meaning

A library is a collection of related modules built or distributed together.
A module is a cohesive responsibility within that library.

Each module shall:

- Own a clear public interface.
- Hide implementation details.
- Avoid circular dependencies.
- Use another module only through its public interface.
- Keep tests in a matching hierarchy.

## 4.3 Small Prototype Structure

A prototype with no more than 10 project-owned C++ files may use a flatter
layout. Review modularization when the eighth file is added and modularize
before adding the eleventh unless a temporary exception is documented.

Even a prototype shall preserve one definition per implementation file,
descriptive names, public/private boundaries and final documentation rules.

## 4.4 Framework-Mandated Split Structure

Use a separate `include/` tree only when required by a framework, packaging
system or installed public SDK. The ROS structure is defined in Section 16.

---

# 5. Module, Object and File Organization

## 5.1 Module Headers

Each module has these aggregate headers when the corresponding interface
exists:

```text
module_name.h
objects.h
public_functions.h
private_functions.h
```

`module_name.h` includes only the public aggregates:

```cpp
#ifndef NAVIGATION_LIBRARY_SEMANTIC_MAPPING_H
#define NAVIGATION_LIBRARY_SEMANTIC_MAPPING_H

#include "navigation_library/semantic_mapping/objects.h"
#include "navigation_library/semantic_mapping/public_functions.h"

#endif /* NAVIGATION_LIBRARY_SEMANTIC_MAPPING_H */
```

`private_functions.h` is not exported or included by a public header.

## 5.2 One Object Type per Header

Every project-owned class, structure, union and enumeration has one object
header whose filename exactly matches the type:

```text
objects/MapManager.h
objects/MapConfiguration.h
objects/MapState.h
```

A class shall not define a nested project-owned class, structure or enumeration
merely because it uses that type. The associated type receives its own header.

Aliases that exist only to express one object's interface may remain in that
object header. Independently meaningful aliases receive their own header.

## 5.3 Class Header as Authoritative Documentation

The class or structure header contains:

- The complete type declaration.
- Complete Doxygen for the object and every member.
- All public, protected and private method declarations.
- Constructor and destructor bodies.
- Explicitly defaulted or deleted special members.

Method contracts shall not be duplicated in `.cc` files.

## 5.4 One Free Function per `.cc`

Every ordinary free function has one `.cc` file. The filename exactly matches
the function name:

```text
public_functions/calculateMapArea.cc
private_functions/validateMapConfiguration.cc
```

Public declarations and Doxygen are consolidated in `public_functions.h`.
Private declarations and Doxygen are consolidated in `private_functions.h`.
Do not create one ordinary header per free function.

## 5.5 One Method Overload per `.cc`

Each ordinary method overload has one `.cc` file under its object's method
directory:

```text
methods/MapManager/initialize.cc
methods/MapManager/isMapValid.cc
```

When a method is overloaded, use a directory named after the method and a
descriptive filename for each overload:

```text
methods/MapManager/setConfiguration/fromFile.cc
methods/MapManager/setConfiguration/fromObject.cc
```

Each file contains exactly one overload. Names such as `overload1.cc` and
`version2.cc` are prohibited. The descriptive filename shall identify the
semantic distinction, not reproduce an unreadable mangled signature.

## 5.6 Constructors and Destructors

Every constructor and destructor body remains in the object header so a reader
can see how the object begins and ends its lifetime.

A definition inside the object declaration is implicitly `inline`. A
definition later in the same header shall explicitly use `inline`.

This rule exposes implementation dependencies and can increase recompilation.
That trade-off is accepted by this standard. An owned type shall therefore be
complete in the header. A PIMPL design that requires an out-of-line destructor
is prohibited.

Under a stricter external standard, a conflict shall be handled through the
precedence and deviation process in Section 1.3.

## 5.7 Static Data Members

A static data member belongs to the class rather than to each instance. All
instances observe the same value, and destroying one instance does not destroy
the static member.

Static members use ordinary variable naming. Pointer-like static members use
`p_`.

```cpp
class Sensor
{
public:
    static std::size_t getActiveSensorCount();

private:
    static std::size_t activeSensorCount;
};
```

Non-inline static data definitions may share one `static_members.cc` file per
object because they are data definitions, not function definitions.

---

# 6. Namespaces and Identifiers

## 6.1 Namespace Mapping

Namespace names use `lower_snake_case` and mirror the project-owned path below
`src/`:

```text
src/navigation_library/semantic_mapping/
```

```cpp
namespace navigation_library::semantic_mapping
{
}
```

The filesystem directory named `src` is not a namespace. In ROS, the package
name forms the first namespace component.

Do not use `using namespace` in a header or at namespace scope in a source
file. A narrow `using` declaration inside a function may be used when it makes
the code clearer without creating ambiguity.

## 6.2 General Identifier Rules

Identifiers shall use English words, correct spelling and established project
terminology. They shall describe purpose rather than only type.

Names such as `data`, `value`, `object`, `item`, `temp`, `result`, `matrix` and
`vector` require a descriptive qualifier.

Single-letter variables are prohibited except under the immediate mathematical
notation exception in Section 12.4. Loop indices shall describe what they
index.

## 6.3 Variables and Members

Local variables, parameters and data members use `lowerCamelCase`:

```cpp
std::size_t validMeasurementCount;
double objectRadius_m;
MapState mapState;
```

Members do not use `m_` or a trailing underscore. Static members do not receive
a special prefix.

Boolean names read as conditions:

```cpp
bool isMapValid;
bool hasLoopClosure;
bool shouldPublishMap;
```

## 6.4 Pointer-Like Variables

Every raw or smart pointer variable begins with `p_`:

```cpp
Map *p_map;
std::unique_ptr<Map> p_ownedMap;
std::shared_ptr<Map> p_sharedMap;
std::weak_ptr<Map> p_observedMap;
```

The prefix indicates pointer-like address or handle semantics. It does not
indicate ownership. Ownership is documented by the type and contract.

References do not use `p_`:

```cpp
void updateMap(MapState &mapState_inout);
```

Functions returning pointers are not prefixed with `p_`; the rule applies to
variables, not function names.

## 6.5 Functions and Methods

Functions and methods use action-oriented `lowerCamelCase`:

```cpp
calculateMapArea();
transformPosition();
validateConfiguration();
```

Namespaces replace the C requirement to prefix a public function with its
module name:

```cpp
navigation_library::semantic_mapping::calculateMapArea();
```

Do not write redundant names such as
`semanticMappingCalculateMapArea()` inside that namespace.

Methods do not repeat the class name:

```cpp
mapManager.updateMap();
```

Predicate functions and methods read as questions:

```cpp
isMapValid();
hasLoopClosure();
canAcceptMeasurement();
```

## 6.6 Restricted `auto`

`auto` is permitted only where the language effectively requires deduction,
including unnamed lambda closure types, structured bindings and generic lambda
parameters.

```cpp
const auto measurementCallback =
    [](const SensorMeasurement &measurement_in)
    {
        processMeasurement(measurement_in);
    };

const auto [mapIdentifier, mapStatus] = findMapRecord();
```

Convenience, shorter typing, range loops and long iterator types do not alone
justify `auto`.

```cpp
/* Incorrect */
auto mapResolution_m = calculateMapResolution();

/* Correct */
double mapResolution_m = calculateMapResolution();
```

---

# 7. Objects, Members and Inheritance

## 7.1 Object Type Terminology

In this standard, **object type** means a project-owned class, structure, union
or enumeration that represents a software concept. In core C++ terminology,
an object is an instance; this broader documentation term does not change the
language meaning.

`class` and `struct` may be used without assigning them different design
semantics. Both shall state access explicitly rather than rely on defaults.

## 7.2 Access Sections

Access sections appear in this order:

1. `public`
2. `protected`
3. `private`

Each access section appears at most once. Omit an unused section.

```cpp
class MapManager
{
public:
    bool isMapValid() const;

protected:
    void validateMapState();

private:
    MapState mapState;
};
```

Even a structure with only public members states `public:` explicitly.

## 7.3 Data Members

Every data member shall be initialized before use. Prefer in-class member
initializers for stable defaults and constructor initializer lists for
constructor-specific values.

The declaration order shall match the initialization dependency order.
Constructor initializer lists shall follow declaration order.

Every member has Doxygen documentation including ownership, units, frames and
thread-safety meaning where applicable.

## 7.4 Rule of Zero and Special Members

Use the rule of zero normally. Explicitly default or delete copy and move
operations when ownership, inheritance or API intent would otherwise be
unclear.

```cpp
MapManager(const MapManager &otherMapManager_in) = delete;
MapManager &operator=(const MapManager &otherMapManager_in) = delete;

MapManager(MapManager &&otherMapManager_in) = default;
MapManager &operator=(MapManager &&otherMapManager_in) = default;
```

Defaulted and deleted special members remain in the object header.

## 7.5 Constructors

A constructor that accepts one semantic argument shall normally be `explicit`.
Implicit converting constructors require a documented reason.

Constructors shall establish a valid object invariant. Under a no-exception
profile, construction shall be non-failing and fallible setup shall use
`initialize()`.

## 7.6 Inheritance

Prefer composition. Use public inheritance only when the derived type is safely
substitutable for the base interface.

Multiple inheritance is limited to interface-only base classes. A base used
polymorphically shall have either:

- A public virtual destructor; or
- A protected non-virtual destructor that prevents deletion through the base.

Every overriding method shall use `override`. Do not repeat `virtual` on an
override. Use `final` only when further overriding or inheritance would violate
the design.

Downcasts shall be avoided. A required downcast shall be narrow, checked and
documented.

---

# 8. Functions, Methods and Parameters

## 8.1 Parameter Direction

Every named parameter ends with exactly one direction suffix:

```text
_in
_out
_inout
```

```cpp
MapStatus updateMap(
    const MapMeasurement &measurement_in,
    MapState &mapState_inout,
    MapStatistics &statistics_out);
```

The suffix, Doxygen direction and qualifiers shall agree. Direction suffixes do
not apply to locals, members, globals or function names.

## 8.2 Parameter Passing

Use these defaults in the general profile:

| Situation | Form |
|---|---|
| Small scalar or cheap value input | Pass by value |
| Required larger input | `const T &` |
| Required mutable input-output | `T &` |
| Nullable borrowed input | `const T *` |
| Nullable borrowed input-output | `T *` |
| Transferred ownership | Smart pointer by value |

A reference does not use `p_`. A pointer does.

## 8.3 Return Values and Outputs

In the general profile:

- Return one ordinary output by value.
- Return a small aggregate when several outputs form one concept.
- Use an output parameter only for multiple independent outputs, API
  compatibility or a compliance-profile requirement.
- Use a reference for a required output or input-output object.
- Use a pointer for a nullable borrowed object.

```cpp
Map calculateMap(const MapConfiguration &configuration_in);

void updateMap(MapState &mapState_inout);
```

Do not return a reference or pointer to an automatic local object.

## 8.4 `const`, `noexcept` and `nodiscard`

A method that does not modify observable object state shall be `const`.

Use `noexcept` only when the complete operation is guaranteed not to throw.
Destructors shall not allow exceptions to escape. Move operations should be
`noexcept` when their members permit it.

Apply `[[nodiscard]]` to status results, resource factories and values whose
discard would probably be a defect. Do not use it mechanically on every value.

## 8.5 Default Arguments and Overloading

Use default arguments only when the default is stable, unsurprising and part of
the public contract. Do not use a default argument merely to avoid an overload.

Overloads shall have the same purpose and semantics. If two operations differ
conceptually, give them different action-oriented names.

## 8.6 Callbacks

Callback type names use Pascal case and normally end in `Callback`:

```cpp
using SensorMeasurementCallback =
    std::function<void(const SensorMeasurement &measurement_in)>;
```

A callback variable that is not pointer-like does not receive `p_`. Document
thread, lifetime, invocation order and exception behaviour.

## 8.7 C Interoperability

A C ABI boundary follows `C_CODING_STANDARD.md` for its exported identifiers,
types, status values and parameter shape. Declare the boundary with
`extern "C"` in a C-compatible public header.

Do not expose namespaces, overloads, references, templates, exceptions,
`std::string`, containers or smart pointers through a C ABI. Translate between
the C interface and C++ implementation in a narrow wrapper.

An exception shall never cross the boundary. Catch it on the C++ side and
translate it into a documented C status value.

---

# 9. Ownership, Lifetime and Resource Management

## 9.1 Ownership Hierarchy

Use this hierarchy:

```text
std::unique_ptr  exclusive ownership; default owning pointer
std::shared_ptr  explicitly documented shared ownership
std::weak_ptr    non-owning observation of shared ownership
raw pointer      non-owning and possibly null
reference        non-owning and normally non-null
```

Shared ownership shall not be used merely because object lifetime is unclear.
Clarify the owner first.

## 9.2 Allocation

Use `std::make_unique` and `std::make_shared` rather than direct `new`. Direct
`new` and `delete` are limited to low-level resource abstractions with a
documented reason.

Under the JSF profile, heap allocation and deallocation stop after the declared
initialization phase. The ownership type does not relax that timing rule.

## 9.3 RAII

Every resource shall have an owner whose destructor releases it. Use RAII for
memory, files, locks, sockets, device handles and temporary state changes.

Do not manually unlock a mutex on multiple control paths. Use the applicable
standard lock wrapper.

## 9.4 Nullability and Lifetime

Use a reference when null is not meaningful. Use a pointer when absence is part
of the contract. Document whether a pointer is borrowed, observed or owned and
how long it remains valid.

Use `nullptr`, never `NULL`, `0` or a C-style null macro in C++17 project code,
unless an external interface requires otherwise.

## 9.5 Complete Owned Types

Owned object types shall be complete in the owning class header. Do not use an
incomplete `std::unique_ptr<T>` member whose destruction requires an out-of-line
destructor. Include the separate `T` object header.

---

# 10. Templates, Inline Code and Compile-Time Code

## 10.1 General Rule

Functions and methods belong in `.cc` files. Definitions appear in headers only
when C++ requires visibility or the code is an approved inline exception.

This is an exception, not permission to move ordinary implementation into
headers for assumed performance.

## 10.2 Template Methods

Each template-method implementation has one `.tpp` file and is included from
the object header after the object declaration:

```text
objects/MeasurementBuffer.h
methods/MeasurementBuffer/push.tpp
methods/MeasurementBuffer/read.tpp
```

```cpp
#include "navigation_library/buffering/methods/MeasurementBuffer/push.tpp"
#include "navigation_library/buffering/methods/MeasurementBuffer/read.tpp"
```

The `.tpp` file contains exactly one template method overload.

## 10.3 Template Free Functions

Each template free function uses one `.tpp` implementation fragment under the
appropriate `public_functions/` or `private_functions/` directory. Its aggregate
header includes the fragment after declaring the template.

## 10.4 Inline and `constexpr` Exceptions

An inline or header-required `constexpr` free function may have one `.h`
implementation header under its function directory. The aggregate public or
private function header includes it.

An inline or header-required `constexpr` method uses one method `.h` fragment
included by the object header.

Header-defined functions shall be short, deterministic and free of mutable
function-local static state unless that state is explicitly part of the design.

Ordinary getters shall not be moved into a header merely because inlining might
be faster. Compilers and link-time optimization can inline out-of-line methods.

## 10.5 Template Verification

Template parameter requirements shall be documented. Under a safety profile,
all production instantiations shall be enumerated, statically checked where
possible, reviewed and tested.

---

# 11. Enumerations, Constants and Operators

## 11.1 Scoped Enumerations

Project-owned enumerations use `enum class`. An unscoped enumeration is
permitted only for required external compatibility.

Each enumeration has one object header. Every enumerator has its own Doxygen
comment.

```cpp
enum class MapState : std::uint8_t
{
    /*! The map has not been initialized. */
    MAP_STATE_UNINITIALIZED = 0U,

    /*! The map is ready to accept measurements. */
    MAP_STATE_READY = 1U,

    /*! The map cannot continue without recovery. */
    MAP_STATE_ERROR = 2U
};
```

Specify an underlying type for serialized, hardware-mapped or ABI-visible
enumerations.

## 11.2 Constants

Constants use upper snake case and include units where applicable:

```cpp
inline constexpr std::size_t MAX_MAP_COUNT = 32U;
inline constexpr double STANDARD_GRAVITY_M_PER_S2 = 9.80665;
```

Prefer `constexpr` or `const` to macros. Public constants rely on namespace
scope rather than repeating the module name unless collision risk remains.

## 11.3 Macros

Macros are limited to include guards, required platform integration and cases
that cannot be expressed safely in C++17. Function-like macros shall not be
used when an inline function or template provides type checking and single
evaluation.

## 11.4 Operator Overloading

Overload an operator only when its conventional meaning is natural for the
type. Do not overload operators to hide unrelated work, allocation, I/O or
state transitions.

Each operator overload has one implementation file under a descriptive
operator directory:

```text
methods/MapPose/operators/equality/withMapPose.cc
methods/MapPose/operators/addition/withPositionOffset.cc
```

Operators required in a header by templates follow the `.tpp` rule. Document
units, frames and mathematical meaning.

---

# 12. Frames, Units and Mathematics

## 12.1 Frame Tags

A frame-dependent variable includes the frame in which its components are
expressed:

```cpp
Vector3 uavPosition_map_m;
Vector3 uavVelocity_body_mPerS;
Vector3 angularVelocity_sensor_radPerS;
```

The project shall define one canonical spelling for each frame.

## 12.2 Unit Tags

Physical values include a unit tag unless the type unambiguously enforces the
unit:

```cpp
double objectRadius_m;
double timeout_ms;
double yawRate_radPerS;
std::size_t messageSize_bytes;
```

`ms` means milliseconds and shall not mean metres per second. Mixed-unit
objects put units on their individual member names.

## 12.3 Transformation Direction

Transformation direction is always:

```text
<sourceFrame>To<targetFrame>
```

```cpp
Transform transform_bodyToMap;
Quaternion uavQuat_bodyToMap;
Matrix uavRotationMatrix_bodyToMap;
```

Every transformation contract documents source and target frames, active or
passive interpretation where relevant, translation meaning, rotation
convention, multiplication order and units.

## 12.4 Descriptive Mathematical Names

Symbolic names such as `A`, `H`, `J`, `q`, `r` and `x` are prohibited in normal
implementation. Use names such as:

```cpp
double objectRadius_m;
Quaternion uavQuat_bodyToMap;
Matrix optimizationHessianMatrix;
Matrix measurementJacobianMatrix;
Vector optimizationGradientVector;
```

Short notation is permitted only for a direct local equation transcription.
An immediately preceding multiline comment shall show the complete equation,
define every symbol, give dimensions, units and frames, state multiplication
order and bound the notation to the following implementation. Documentation
elsewhere does not satisfy the exception.

---

# 13. Error Handling and Optional Values

## 13.1 General Profile

Exceptions may represent failures outside real-time code. Expected absence is
not exceptional. Every throwing interface documents exception type, condition
and guarantee.

Exceptions shall not cross:

- A C ABI boundary.
- A real-time control-loop boundary.
- A callback boundary whose executor cannot safely handle it.
- A thread entry point.

Catch at the owning boundary, restore a valid state and translate the failure
into the boundary's result mechanism.

## 13.2 Status Values

Use a scoped status enumeration rather than unexplained integer codes:

```cpp
enum class MapStatus : std::uint8_t
{
    MAP_STATUS_SUCCESS = 0U,
    MAP_STATUS_INVALID_CONFIGURATION = 1U,
    MAP_STATUS_NOT_INITIALIZED = 2U
};
```

A fallible JSF-profile operation returns a status. Every caller tests it.

## 13.3 Initialization Failure

In a no-exception profile, constructors are non-failing. Use two-phase
initialization:

```cpp
MapManager() noexcept
{
    /* Establish a valid uninitialized state. */
}

[[nodiscard]] MapStatus initialize(
    const MapConfiguration &configuration_in);
```

Methods that require initialization return `MAP_STATUS_NOT_INITIALIZED` or the
project equivalent when called too early.

## 13.4 Optional Values

Use `std::optional<T>` for an optional owned value that is not an error. Use a
pointer for an optional borrowed object.

```cpp
std::optional<Map> findMap(MapIdentifier mapIdentifier_in);

const Map *findBorrowedMap(MapIdentifier mapIdentifier_in);
```

Do not use sentinel values such as `-1`, invalid coordinates or empty strings
unless an external protocol requires them.

Under a compliance profile that cannot approve `std::optional`, use a
documented status plus output representation and record the mapping.

---

# 14. Comments and Doxygen

## 14.1 Authoritative Documentation

| Entity | Authoritative location |
|---|---|
| Free function | `public_functions.h` or `private_functions.h` |
| Object and members | Corresponding object header |
| Method | Corresponding object header |
| Enumeration and enumerators | Enumeration object header |
| Template requirements | Declaration header and `.tpp` implementation |
| Implementation decision | Corresponding `.cc`, `.h` or `.tpp` file |

Do not duplicate a complete contract in an implementation file.

## 14.2 Required Doxygen

Document every project-owned:

- Public and private free function.
- Class, structure, union and enumeration.
- Public, protected and private method.
- Data member.
- Enumerator.
- Public constant and callback type.

Function documentation includes only applicable commands: `@brief`, parameter
directions, return meaning, exceptions, preconditions, postconditions, units,
frames, ownership and thread-safety rules.

## 14.3 Implementation Comments

Comments explain intent, assumptions, invariants, ownership, synchronization
and non-obvious mathematics. Do not paraphrase obvious syntax.

Use a brief block comment before a meaningful logical operation. Use detailed
multiline comments sparingly for algorithms, equations and concurrency.

## 14.4 Doxygen Alignment

Use spaces only. Align descriptions to the established command field:

```text
@brief           Description
@param[in]       Description
@param[out]      Description
@param[in,out]   Description
@return          Description
@retval          Description
@throws          Description
@pre             Description
@post            Description
@note            Description
@units           Description
@frame           Description
```

Projects using `@units` or `@frame` define them as Doxygen aliases.

## 14.5 File Documentation

Every project-owned source, header and template implementation begins with
`@file`, `@brief` and the project-required metadata. Comments shall not claim
behaviour that the implementation does not enforce.

---

# 15. Formatting, Builds and Static Analysis

## 15.1 Formatting Baseline

The repository shall contain one `.clang-format` and use one documented
`clang-format` version. At minimum:

```yaml
ColumnLimit: 80
IndentWidth: 4
ContinuationIndentWidth: 4
TabWidth: 4
UseTab: Never
BreakBeforeBraces: Allman
DerivePointerAlignment: false
PointerAlignment: Right
ReferenceAlignment: Right
ReflowComments: false
IncludeBlocks: Preserve
SortIncludes: CaseSensitive
Standard: c++17
```

The C++ declaration style is:

```cpp
Map *p_map;
const Map &map_in;
```

## 15.2 Include Order

Use these groups in order:

1. Matching project declaration header.
2. C++ standard library.
3. C standard library when required.
4. External libraries.
5. Other project module headers.
6. Object headers.

Include only what the file directly uses. Do not rely on transitive includes.
Sort within groups.

## 15.3 Warning Baseline

GCC and Clang projects should begin with:

```text
-Wall -Wextra -Wpedantic -Wconversion -Wshadow
```

The project may tune compiler-specific warnings, but shall document every
disabled warning and its scope. Project-owned code shall be warning-free.
Continuous integration should treat project warnings as errors after the
baseline is clean. Do not apply project warning-as-error flags to third-party
headers.

## 15.4 Static Analysis and Sanitizers

Use `clang-tidy` or an equivalent analyzer with a versioned configuration.
Where supported, non-production test jobs should use address, undefined
behaviour and thread sanitizers in separate compatible configurations.

A safety profile uses its approved analyzer and compliance matrix. General
tools do not establish certification by themselves.

## 15.5 Casts and Conversions

C-style casts are prohibited. Use the narrowest C++ named cast and document
non-obvious conversions. Avoid `reinterpret_cast` and `const_cast`; their use
requires a narrow systems-level reason.

Implicit narrowing and signed/unsigned mixing shall be avoided. Do not silence
a warning with a cast until the range and intent are proven.

---

# 16. ROS and Robotics Integration

## 16.1 Mirrored ROS Package Structure

ROS packages use `include/<package>/` for exported public headers. The include
tree mirrors the module structure in `src/`:

```text
ros_workspace/src/mapping_package/
├── CMakeLists.txt
├── package.xml
├── include/
│   └── mapping_package/
│       └── semantic_mapping/
│           ├── semantic_mapping.h
│           ├── objects.h
│           ├── public_functions.h
│           ├── objects/
│           │   ├── MapManager.h
│           │   └── MapState.h
│           └── methods/
│               └── MeasurementBuffer/
│                   └── push.tpp
└── src/
    └── semantic_mapping/
        ├── private_functions.h
        ├── public_functions/
        ├── private_functions/
        └── methods/
            └── MapManager/
                ├── initialize.cc
                └── updateMap.cc
```

Only declarations and compiler-visible template/inline implementations are
mirrored under `include/`. Ordinary `.cc` files remain under `src/`.

## 16.2 ROS Namespace Mapping

The namespace follows the project-owned include path beneath the package:

```cpp
namespace mapping_package::semantic_mapping
{
}
```

This matches ROS lowercase package naming and keeps include paths and C++ scope
predictable.

## 16.3 Framework-Controlled Names

Do not rename these merely to satisfy C++ identifier style:

- ROS topics, services and actions.
- ROS parameter names.
- Runtime frame identifiers.
- Generated message fields.
- Plugin identifiers.
- Launch and YAML keys.

Wrap or translate them at the project-owned boundary when needed.

## 16.4 Callbacks and Real-Time Paths

Document the executor, callback group, thread-safety, lock order and real-time
expectations of every ROS callback. Do not allocate, block, log synchronously or
throw in a real-time callback unless the declared architecture explicitly
permits and verifies it.

---

# 17. Agentic Coding Contract

This section is normative for coding agents and automated refactoring tools.

## 17.1 Before Editing

An agent shall:

1. Read this complete standard and repository agent instructions.
2. Identify the active compliance profile.
3. Identify generated, third-party and externally controlled files.
4. Resolve public APIs, ABI, runtime strings and serialization boundaries.
5. Determine ownership, frames, units and parameter directions.
6. Record the relevant format, build, analysis and test commands.
7. Inspect the baseline result before changing code.

## 17.2 New Development

For a new feature, an agent shall:

1. Identify the owning library, module and namespace.
2. Define required object types one per header.
3. Add declarations and complete Doxygen before implementation.
4. Create one `.cc` or required header fragment per definition.
5. Update aggregate headers and build files.
6. Add tests for normal, boundary and failure behaviour.
7. Format, analyze, build and test the complete affected dependency chain.

## 17.3 Behaviour-Preserving Refactoring

A code-quality refactor shall not unintentionally change:

- Algorithms, mathematics, constants or operation order.
- Error handling, ownership or lifetime.
- Threading, synchronization or timing.
- Binary layout, serialization or protocols.
- Runtime-visible strings or configuration keys.
- ROS names, frames or generated interfaces.
- Public API or ABI.

Use symbol-aware rename tools. Do not use repository-wide textual replacement
for C++ symbols.

## 17.4 Stop Conditions

An agent shall stop and request human direction when:

- A frame, unit, direction, ownership relation or mathematical role is unclear.
- A public/private boundary cannot be proven.
- A rename may affect unknown consumers or plugin loading.
- A compliance rule conflicts without an approved precedence decision.
- Behavioural equivalence cannot be verified.
- Required dependencies, tests or tools are unavailable.
- A safety-critical deviation would be required.

Silently guessing is prohibited.

## 17.5 Required Completion Report

Report:

- Files created, moved and changed.
- Symbols and namespaces changed.
- Public API, ABI and runtime interfaces affected.
- Ownership or concurrency implications.
- Compliance profile and deviations.
- Formatting, warning and analysis results.
- Build and test commands with results.
- Remaining ambiguities or unverified risks.

## 17.6 Agent Task Template

```text
Implement the requested feature according to CPP_CODING_STANDARD.md and the
active project compliance profile. Work only in project-owned files. Preserve
external APIs, ABI, ROS names, serialized fields and runtime-visible strings
unless the task explicitly changes them.

Use the namespace matching the library/module path. Keep one object type per
header and one free-function or ordinary method overload per implementation
file. Use descriptive names, p_ for pointer-like variables, and _in, _out or
_inout for every named parameter.

Do not guess ownership, frames, units, parameter direction or mathematical
meaning. Stop and report ambiguity. Update declarations, Doxygen, aggregate
headers, build files and tests. Format, analyze, build and test the affected
dependency chain, then report every result and unresolved risk.
```

---

# 18. Review Checklists

## 18.1 New Object

- [ ] One object type is declared in the header.
- [ ] Filename exactly matches the Pascal-case type.
- [ ] Namespace matches the library/module path.
- [ ] Access is explicit and ordered public, protected, private.
- [ ] Object and every member have Doxygen documentation.
- [ ] Constructors and destructor are defined in the header.
- [ ] Rule-of-zero or explicit copy/move policy is clear.
- [ ] Ownership, nullability, units, frames and thread safety are clear.

## 18.2 New Method or Function

- [ ] Name begins with an accurate action or predicate.
- [ ] One overload is defined in the implementation file.
- [ ] Overload directory and filename are descriptive when needed.
- [ ] Every parameter has a direction suffix.
- [ ] Pointer-like parameters use `p_`; references do not.
- [ ] `const`, `noexcept` and `[[nodiscard]]` are correct.
- [ ] Authoritative Doxygen is in the declaration header.
- [ ] Errors and optional absence use the selected profile.

## 18.3 Review or Refactor

- [ ] Active compliance profile and baseline results are recorded.
- [ ] Generated and third-party code are excluded.
- [ ] Public API, ABI and runtime names are identified.
- [ ] Renames are symbol-aware.
- [ ] No ownership, frame, unit or behaviour was guessed.
- [ ] Aggregate headers and build files are current.
- [ ] Formatting, warnings, analysis, build and tests pass.
- [ ] Completion report lists deviations and unresolved risks.

---

# Appendix A: Canonical Templates

## A.1 Object Header

```cpp
/*!
 * @file            MapManager.h
 *
 * @brief           Declares the map-management object.
 *
 * @date            DD/MM/YYYY
 */

#ifndef NAVIGATION_LIBRARY_SEMANTIC_MAPPING_MAP_MANAGER_H
#define NAVIGATION_LIBRARY_SEMANTIC_MAPPING_MAP_MANAGER_H

/* C++ Standard Library Includes */
#include <memory>

/* External Library Includes */
/* None */

/* Module Includes */
/* None */

/* Object Includes */
#include "navigation_library/semantic_mapping/objects/Map.h"
#include "navigation_library/semantic_mapping/objects/MapConfiguration.h"
#include "navigation_library/semantic_mapping/objects/MapStatus.h"

namespace navigation_library::semantic_mapping
{

/*!
 * @brief           Owns and updates one semantic map.
 */
class MapManager
{
public:
    /*!
     * @brief           Creates a valid uninitialized map manager.
     */
    MapManager() noexcept
        : p_map(nullptr)
    {
    }

    /*!
     * @brief           Releases the owned map.
     */
    ~MapManager() noexcept
    {
    }

    MapManager(const MapManager &otherMapManager_in) = delete;
    MapManager &operator=(
        const MapManager &otherMapManager_in) = delete;
    MapManager(MapManager &&otherMapManager_in) = default;
    MapManager &operator=(MapManager &&otherMapManager_in) = default;

    /*!
     * @brief           Initializes map management.
     *
     * @param[in]       configuration_in
     *                  Configuration applied to the managed map.
     *
     * @return          Status describing the initialization result.
     */
    [[nodiscard]] MapStatus initialize(
        const MapConfiguration &configuration_in);

private:
    /*!
     * @brief           Exclusively owned semantic map.
     */
    std::unique_ptr<Map> p_map;
};

} /* namespace navigation_library::semantic_mapping */

#endif /* NAVIGATION_LIBRARY_SEMANTIC_MAPPING_MAP_MANAGER_H */
```

## A.2 Method Implementation

```cpp
/*!
 * @file            initialize.cc
 *
 * @brief           Implements map-manager initialization.
 *
 * @date            DD/MM/YYYY
 */

/* Matching Declaration Include */
#include "navigation_library/semantic_mapping/objects/MapManager.h"

/* C++ Standard Library Includes */
#include <memory>

/* External Library Includes */
/* None */

/* Module Includes */
/* None */

/* Object Includes */
/* None */

namespace navigation_library::semantic_mapping
{

MapStatus MapManager::initialize(
    const MapConfiguration &configuration_in)
{
    /* Create the map only after the configuration has been validated. */
    p_map = std::make_unique<Map>(configuration_in);

    return MapStatus::MAP_STATUS_SUCCESS;
}

} /* namespace navigation_library::semantic_mapping */
```

## A.3 Overload Layout

```text
methods/MapManager/setConfiguration/
├── fromFile.cc
└── fromObject.cc
```

Each file includes `MapManager.h`, opens the module namespace and defines one
`MapManager::setConfiguration()` overload.

## A.4 Template Method Fragment

```cpp
/*!
 * @file            push.tpp
 *
 * @brief           Implements insertion into a measurement buffer.
 */

namespace navigation_library::buffering
{

template<typename MeasurementType>
BufferStatus MeasurementBuffer<MeasurementType>::push(
    const MeasurementType &measurement_in)
{
    /* Store the measurement after verifying available capacity. */
    return BufferStatus::BUFFER_STATUS_SUCCESS;
}

} /* namespace navigation_library::buffering */
```

## A.5 Public Functions Header

```cpp
/*!
 * @file            public_functions.h
 *
 * @brief           Declares the public semantic-mapping functions.
 */

#ifndef NAVIGATION_LIBRARY_SEMANTIC_MAPPING_PUBLIC_FUNCTIONS_H
#define NAVIGATION_LIBRARY_SEMANTIC_MAPPING_PUBLIC_FUNCTIONS_H

#include "navigation_library/semantic_mapping/objects.h"

namespace navigation_library::semantic_mapping
{

/* Public free-function declarations and Doxygen appear here. */

} /* namespace navigation_library::semantic_mapping */

#endif /* NAVIGATION_LIBRARY_SEMANTIC_MAPPING_PUBLIC_FUNCTIONS_H */
```

---

# Appendix B: Compliance Reference

The JSF profile in this document refers to:

> *Joint Strike Fighter Air Vehicle C++ Coding Standards for the System
> Development and Demonstration Program*, Document 2RDU00001, Revision C,
> December 2005, Lockheed Martin Corporation.

Public copy:
<https://www.stroustrup.com/JSF-AV-rules.pdf>

Particularly relevant rules include:

- AV Rule 115: returned error information is tested.
- AV Rules 116--118: value, reference and pointer parameter selection.
- AV Rules 121--123: inline functions and accessors.
- AV Rules 206 and 208: post-initialization heap use and exceptions.

The source standard predates C++17. A project shall not infer formal compliance
for C++17 constructs without an explicit tool-supported compliance mapping.
