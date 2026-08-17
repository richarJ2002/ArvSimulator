


Space engineering
Verification


# Foreword
This Standard is one of the series of ECSS Standards intended to be applied together for the
management, engineering and product assurance in space projects and applications. ECSS is a
cooperative effort of the European Space Agency, national space agencies and European industry
associations for the purpose of developing and maintaining common standards. Requirements in this
Standard are defined in terms of what shall be accomplished, rather than in terms of how to organize
and perform the necessary work. This allows existing organizational structures and methods to be
applied where they are effective, and for the structures and methods to evolve as necessary without
rewriting the standards.
This Standard has been prepared by the ECSS-E-ST-10-02C Rev.1 Working Group, reviewed by the
ECSS Executive Secretariat and approved by the ECSS Technical Authority.


# Disclaimer
ECSS does not provide any warranty whatsoever, whether expressed, implied, or statutory, including,
but not limited to, any warranty of merchantability or fitness for a particular purpose or any warranty
that the contents of the item are error-free. In no respect shall ECSS incur any liability for any
damages, including, but not limited to, direct, indirect, special, or consequential damages arising out
of, resulting from, or in any way connected to the use of this Standard, whether or not based upon
warranty, business agreement, tort, or otherwise; whether or not injury was sustained by persons or
property or otherwise; and whether or not loss was sustained from, or arose out of, the results of, the
item, or any services that may be provided by ECSS.


Published by:   ESA Requirements and Standards Division
                ESTEC, P.O. Box 299,
2200 AG Noordwijk
                The Netherlands
Copyright:      2018 © by the European Space Agency for the members of ECSS


# Change log


ECSS-E-10-02A           First issue
1 February 2018         Major changes of this version with regard to the previous version are:
                        - Implementation of Change Requests
                        - Addition of the Pre-tailoring matrix per space product types in clause 6
                        - Clause 3 Terms, definitions and abbreviated terms updated. List of
                          Abbreviated terms deleted as all are covered by ECSS-S-ST-00-01
                        - Clause 3.4 Nomenclature added
                        - Figure 4-1 redrawn
                        - Deletion of inf. Annex G "Verification documents delivery per review"


                        Added requirements
                        5.2.4.2d; 5.4.2f-g; C.2.1<2>b.
                        Modified requirement
                        5.2.1a-c; 5.2.2.1e; 5.2.2.3c-d; 5.2.3a; 5.2.4.1a; 5.2.4.2a; 5.2.4.3.1a-b; 5.2.4.5a;
                        5.2.4.5d NOTE added; 5.2.4.6b; 5.2.6.1b; 5.2.6.2b; 5.2.7b; 5.2.7e NOTE
                        added; 5.2.7.g; 5.2.8.1a NOTE ; 5.2.8.2a NOTE; 5.2.8.2b; 5.2.8.3a-b; 5.3.1a, d;
                        5.3.2.1a-d; 5.3.2.2a, c-d; 5.3.2.3a-d; 5.3.2.4a-d; 5.3.2.5a-d; 5.3.2.6e NOTE 2
                        added; 5.4.1b-d; 5.4.2a, c-d; 5.4.3a; 5.4.4.1b, d NOTE; B.2.1<6>a (two
                        interleaved Notes moved to end of requirement); C.2.1<1>a; C.2.1<2>a;
                        C.2.1<3>a; C.2.1<4>a-c; C.2.1<5>a; C.2.1<6>a; D.2.1<1>a; D.2.1<3>a;
                        D.2.1<4>a; D.2.1<5>a; E.2.1<1>a; E.2.1<2>a; E.2.1<3>a; E.2.1<4>a; E.2.1<5>a;
                        F.2.1<1>a; E.2.1<2>a; E.2.1<3>a; E.2.1<4>a-b; E.2.1<5>a-b.
                        Deleted requirements
                        5.2.2.1b-c; 5.2.2.2b-g; 5.2.2.3b; 5.2.4.5e; 5.2.6.1c; 5.2.6.3a-b; 5.3.1b; 5.3.2.2b;
                        5.3.2.6a-d.
                        Editorial modifications and corrections:
                        Update of Scope; Punctuation in text of clause 2 corrected, Title of clause 3
                        corrected; ECSS reference number in clause 3.1 corrected to read ECSS-S-
                        ST-00-01; List of Abbreviated terms in clause 4.3.1 deleted; Correction of
                        typo in text of C.1.2; Replacement of abbreviated terms for "TSPE", "TPRO",
                        "TRPT", "ARPT", "RRPT"; "IRPT" and "VRPT" by their full term.


                                                                                    Table of contents

Change log ................................................................................................................. 3

1 Scope ....................................................................................................................... 6

# 2 Normative references ............................................................................................. 7

# 3 Terms, definitions and abbreviated terms............................................................ 8
    3.1     Terms from other standards......................................................................................8
## 3.2 Terms specific to the present standard .....................................................................8
    3.3     Abbreviated terms.....................................................................................................9
    3.4     Nomenclature ...........................................................................................................9

# 4 Verification principles .......................................................................................... 10
    4.1     Verification process ................................................................................................10
### 4.1.1 Verification objectives ...............................................................................10
### 4.1.2 Verification activities..................................................................................10
### 4.1.3 Verification documentation ........................................................................ 11
    4.2     Verification planning ...............................................................................................12
### 4.2.1 Verification approach ................................................................................12
### 4.2.2 Verification methods..................................................................................12
### 4.2.3 Verification levels ......................................................................................12
### 4.2.4 Verification stages .....................................................................................13
### 4.2.5 Model philosophy ......................................................................................13
            4.2.6       Verification tools ........................................................................................13
   4.3      Verification execution and reporting ........................................................................ 13
   4.4      Verification control and closeout .............................................................................13

# 5 Verification requirements .................................................................................... 14
    5.1     Verification process ................................................................................................14
    5.2     Verification planning ...............................................................................................14
### 5.2.1 Verification approach ................................................................................14
### 5.2.2 Verification methods..................................................................................15
### 5.2.3 Verification levels ......................................................................................17


### 5.2.4 Verification stages .....................................................................................17
           5.2.5       Models ......................................................................................................19
           5.2.6       Verification tools ........................................................................................19
### 5.2.7 Verification process phasing ..................................................................... 20
### 5.2.8 Verification planning documents................................................................ 21
## 5.3 Verification execution and reporting ........................................................................ 22
           5.3.1       General .....................................................................................................22
### 5.3.2 Verification execution and reporting documentation .................................. 22
   5.4     Verification control and close-out ............................................................................ 24
           5.4.1       General .....................................................................................................24
### 5.4.2 Verification control board (VCB) ................................................................ 24
           5.4.3       Re-verification ...........................................................................................25
### 5.4.4 Verification control and close-out documentation ...................................... 26

# 6 Pre-tailoring matrix per space product types .................................................... 27

Annex A (normative) Verification plan (VP) - DRD ................................................ 36

Annex B (normative) Verification control document (VCD) - DRD ...................... 39

Annex C (normative) Test report - DRD ................................................................. 42

Annex D (normative) Review-of-design report - DRD ........................................... 44

Annex E (normative) Inspection report - DRD....................................................... 46

Annex F (normative) Verification report - DRD ..................................................... 48

Annex G.............................................................................................. 50

Bibliography............................................................................................................. 51


Figures
Figure 4-1: Verification process and activities ....................................................................... 11


Tables
Table 5-1: Product categories according to heritage............................................................. 18
Table 6-1: Definitions of the columns of Table 6-2 ................................................................ 28
Table 6-2: Pre-tailoring matrix per “Space product types” ..................................................... 29


# Scope

This Standard establishes the requirements for the verification of a space system
product.
It defines the fundamental concepts of the verification process, the criteria for
defining the verification strategy and specifies the requirements for the
implementation of the verification programme. It includes also the list of the
expected documentation (i.e. Document requirements definitions, DRDs).
This Standard is intended to apply to different products at different levels from
a single equipment to the overall system.
Discipline related verification aspects are complemented in Standards specific
to those disciplines.
For verification process for SW the following standards are considered fully
sufficient for development of these items:
- ECSS-E-ST-40 Space engineering -- Software
- ECSS-Q-ST-80 Space product assurance - Software product assurance
Detailed requirements for Testing are covered in the ECSS E-ST-10-03.
This standard does not specifically address Validation of space products as a
separate process, since product Verification is performed against requirements
that also address the suitability of the product to fulfil the needs of its intended
use. As such, Validation is achieved through the Verification process provided
adequate requirements are placed on the product.
It is recognised that testing and analysis also occur during the product
development process, but they are not addressed by this standard as they are
not formal requirement verification activities in the sense of the customer-
supplier relationship.
The guidelines on verification are provided in the associated handbook ECSS-E-
HB-10-02A.
The requirements on the systems engineering process are gathered in ECSS-E-
ST-10 “System Engineering”; specific aspects of the SE process are further
elaborated in dedicated standards, in particular: ECSS-E-ST-10-06 “Technical
Specification”, ECSS-E-ST-10-02 “Verification” (the present standard), and
process and documentation model.
The applicability of each these standards can therefore not be considered in
isolation from the others
This standard may be tailored for the specific characteristic and constraints of a
space project in conformance with ECSS-S-ST-00.


# Normative references

The following normative documents contain provisions which, through
reference in this text, constitute provisions of this ECSS Standard. For dated
references, subsequent amendments to, or revision of any of these publications
do not apply. However, parties to agreements based on this ECSS Standard are
encouraged to investigate the possibility of applying the more recent editions of
the normative documents indicated below. For undated references, the latest
edition of the publication referred to applies.


                       requirements
                       implementation
                       system


# Terms, definitions and abbreviated terms

## 3.1 Terms from other standards
              a.      For the purpose of this Standard, the terms and definitions from ECSS-S-
                      ST-00-01 apply, in particular for the following terms:
                      1.    acceptance
                      2.    analysis
                      3.    commissioning
                      4.    inspection
                      5.    qualification
                      6.    test
                      7.    validation
                      8.    verification


## 3.2 Terms specific to the present standard
### 3.2.1 model philosophy
              definition of the optimum number and the characteristics of physical, virtual,
              and hybrid models required to achieve confidence in the product verification
              with the shortest planning and a suitable weighting of costs and risks

### 3.2.2 review­of­design
              verification method using approved records or evidence that unambiguously
              show that the requirement is met
                              NOTE          design documents, design reports, technical
                                            descriptions, engineering drawings

### 3.2.3 Verification Control Board (VCB)
              board composed of customer and supplier representatives that monitors the
              verification process and assesses the requirements verification close-out.

### 3.2.4 verification level
              product architectural level at which the relevant verification is performed


## 3.3 Abbreviated terms
            For the purpose of this Standard, the abbreviated terms from ECSS-S-ST-00-01
            apply.


## 3.4 Nomenclature
            The following nomenclature applies throughout this document:
            a.    The word “shall” is used in this Standard to express requirements. All
                  the requirements are expressed with the word “shall”.
            b.    The word “should” is used in this Standard to express recommendations.
                  All the recommendations are expressed with the word “should”.
                          NOTE      It is expected that, during tailoring,
                                    recommendations in this document are either
                                    converted into requirements or tailored out.
            c.    The words “may” and “need not” are used in this Standard to express
                  positive and negative permissions, respectively. All the positive
                  permissions are expressed with the word “may”. All the negative
                  permissions are expressed with the words “need not”.
            d.    The word “can” is used in this Standard to express capabilities or
                  possibilities, and therefore, if not accompanied by one of the previous
                  words, it implies descriptive text.
                          NOTE      In ECSS “may” and “can” have completely
                                    different meanings: “may” is normative
                                    (permission), and “can” is descriptive.
            e.    The present and past tenses are used in this Standard to express
                  statements of fact, and therefore they imply descriptive text.


                                          Verification principles

## 4.1 Verification process

### 4.1.1 Verification objectives
             The overall objective of verification is to demonstrate, through a dedicated
             process, that the deliverable product meets the specified requirements.
             A satisfactory completion of the verification process is the basis for a
             contractual acceptance (as defined in ECSS-S-ST-00-01) of the product by the
             Customer.
             The objectives of the Verification process are as follows:
             - to demonstrate the qualification of design and performance, as meeting
                   the specified requirements at the specified levels;
             - to ensure that the product is in agreement with the qualified design, is
                   free from workmanship defects and acceptable for use;
             - to confirm product integrity and performance at particular steps of the
                   project life cycle (e.g. launch, commissioning, mission events and
                   landing).
             - to confirm that the overall system (including tools, procedures and
                   resources) is able to fulfil mission requirements;


### 4.1.2 Verification activities
             The verification process activities consist of planning, execution, reporting,
             control and closeout as summarized in Figure 4-1.


                                                 Initial Verification
Product                                          Control Document
requirements   Verification
                Verification
                planning
                 planning
                                       Verification
                                       Plan
            Supplier   Customer


                                               Verification
                                               Execution &
Additional technical                            reporting
documentation to support
Verification
                                                  Supplier                                 Final Verification
                                                                          Verification     Control Document
                                                                           Control &
                                                                           Closeout


                                                                           Verification
                                                                          Control Board


                       Figure 4-1: Verification process and activities


### 4.1.3 Verification documentation
                       The verification process and its implementation activities are documented by
                       means of a specific set of verification documents.
                       - Verification plan (VP), see clause 5.2.8.1.
                       - Assembly, integration and test (AIT) plan, see ECSS-E-ST-10-03.
                                        NOTE           The Verification Plan and the AIT Plan can be
                                                       combined in one single AIV Plan (i.e. in this
                                                       case VP and AIT plans do not exist anymore as
                                                       single entities).
                       - Verification control document (VCD), see clauses 5.2.8.2 and 5.4.4.1.
                       - Test specification, see ECSS-E-ST-10-03.
                       - Test procedure, see ECSS-E-ST-10-03.
                       - Test report, see ECSS-E-ST-10-03, and clause 5.3.2.1 of the present
                               standard.
                       - Analysis report, see ECSS-E-ST-10, and clause 5.3.2.2 of the present
                               standard.
                       - Review of design report, see clause 5.3.2.3.
                       - Inspection report, see clause 5.3.2.4.
                       - Verification report, see clause 5.3.2.5.


## 4.2 Verification planning

### 4.2.1 Verification approach
             To reach the verification objectives the verification approach is established in
             early phases of a project by analyzing the requirements to be verified, taking
             into account:
             - design peculiarities and constraints,
             - qualification status of candidate solutions (product category),
             - availability and maturity of verification tools,
             - verification (including test) methodologies,
             - ground segment and in orbit constraints for the in-orbit stage (including
                   commissioning),
             - programmatic constraints, and
             - cost and schedule.
             In generating the verification approach, the supplier conducts the following
             steps:
                        Identify “what” are the products and requirements subject of the
                         verification process;
                        Identify “How” to verify them by considering the methods stated
                         in the technical specification
                        Identify “When” to implement by applying the chosen verification
                         strategy.
             These steps are generally conducted in an iterative process based on technical,
             cost and schedule considerations, ensuring that the approach is agreed by both
             the supplier and the customer.


### 4.2.2 Verification methods
             The verification is executed by one or more of the following verification
             methods: test, analysis, review of design and inspection. This list shows the
             order of precedence that, in general, provides more confidence in the results.


### 4.2.3 Verification levels
             The verification is performed incrementally at different product decomposition
             levels. The number and type of verification levels depends upon the complexity
             of the project and on its characteristics.
             The usual verification levels for a space product are equipment, subsystem,
             element, segment and overall system.


### 4.2.4 Verification stages
             The verification process is implemented in subsequent verification stages along
             the project life cycle.
             The stages depend upon project characteristics and identify a type of
             verification. The verification stages are qualification, acceptance, pre­launch,
             in­orbit (including commissioning) and post­landing.


### 4.2.5 Model philosophy
             The verification by test is implemented on the selected models chosen for the
             project.
             Model philosophy is defined by means of an iterative process which combines
             programmatic constraints, verification strategies and the integration and test
             programme, taking into account the development status of the candidate design
             solution.


### 4.2.6 Verification tools
             The verification tools to be used to perform verification activities are identified
             and their procurement and utilisation planned. The extent to which the tools
             are themselves subjected to formal verification depends upon their role.


## 4.3 Verification execution and reporting
             The verification process activities are incrementally performed at different
             product decomposition levels and in different stages, applying a coherent
             bottom-up strategy and utilizing a suitable combination of different verification
             methods.
             In particular the verification by test is carried-out on different physical models
             in agreement with the selected model philosophy.


## 4.4 Verification control and closeout
             The verification process is monitored in its execution by the Verification Control
             Board (see 5.4.2) and confirmed completed when, based on objective evidence,
             the VCD deems the product as verified against the identified requirements and
             the associated verification objectives. This has to be finally confirmed by the
             customer.


                               Verification requirements

## 5.1 Verification process
             a.   The verification process shall demonstrate that the deliverable product
                  meets the specified customer requirements and is capable of sustaining
                  its operational role through:
                  1.    Verification planning;
                  2.    Verification execution and reporting;
                  3.    Verification control and close-out.


## 5.2 Verification planning

### 5.2.1 Verification approach
             a.   The supplier shall identify any constraints on the verification process
                  arising from both the verification objectives and the requirements
                  defined by the customer as needing verification.
                          NOTE       For example, ground segment characteristics,
                                     launch service, envisaged end to end tests
                                     involving several suppliers. The usual general
                                     objectives are listed in clause 4.1.1 “Verification
                                     objectives”.
             b.   The requirements specified in 5.2.1a shall always include those of the
                  technical specification.
             c.   The supplier shall define the verification approach by conducting the
                  following steps:
                  1.    Identify and agree with the customer the set of requirements to be
                        subject of the verification process.
                  2.    Select the methods and the levels of verification, the associated
                        model philosophy and the verification tools.
                  3.    Identify the stages and events in which the verification is
                        implemented.


d.   The verification approach shall be defined by the supplier in the
     Verification Plan (VP) for approval by the customer prior to
     implementation.
e.   For each requirement to be verified, the verification strategy shall be
     defined in terms of the combination of the selected verification methods
     for the different verification levels at the applicable verification stages, in
     the initial issue of the Verification Control Document (VCD) also called
     verification matrix (see Annex B), for approval by the customer.


### 5.2.2 Verification methods

#### 5.2.2.1 General
a.   Verification shall be accomplished by one or more of the following
     verification methods:
     1.    test (including demonstration);
     2.    analysis (including similarity);
     3.    review­of­design;
     4.    inspection.
b.c.d.   For each requirement verified only by analysis or review-of-design, a risk
     assessment (part of the VP) shall be conducted to determine the level
     (major/minor) of the impact of this requirement on the mission.
e.   For each case where the risk assessment performed as a result of 5.2.2.1d
     identifies the impact of the requirement as being major, risk mitigation
     planning shall be defined and reported as part of the Verification Plan.


#### 5.2.2.2 Test
a.   Verification by test shall consist of measuring product performance and
     functions under representative simulated environments.
b.c.d.e.f.g.5.2.2.3    Analysis
a.   Verification by analysis shall consist of performing theoretical or
     empirical evaluation using techniques agreed with the Customer.


             NOTE       Techniques comprise systematic, statistical and
                        qualitative design analysis, modelling and
                        computational simulation.
b.c.   Analysis to demonstrate qualification of a product by similarity with an
     already qualified product shall fulfil the following criteria:
     1.    The already qualified product was not qualified by similarity.
     2.    The product to be verified belongs to category A or to category B
           (defined in Table 5-1) but no testing is required to achieve
           qualification.
             NOTE       Implicitly the product to be verified cannot
                        belong to categories C and D equipment
                        (defined in Table 5-1).
d.   Similarity analysis shall define differences that can dictate additional
     verification activities.
e.   An analysis programme shall be defined in the Verification Plan (VP).
f.   An analysis programme shall be applicable to qualification and in-orbit
     stages only.


#### 5.2.2.4 Review­of­design (ROD)
a.   Verification by Review-of design (ROD) shall consist of using approved
     records or evidence that unambiguously show that the requirement is
     met.
             NOTE       Examples of such approved records are design
                        documents and reports, technical descriptions,
                        and engineering drawings.
b.   A review-of-design programme shall be defined in the Verification Plan
     (VP).
c.   A review-of-design programme shall only be applicable in the
     qualification stage or in the in-orbit stage.


#### 5.2.2.5 Inspection
a.   Verification by inspection shall consist of visual determination of
     physical characteristics.
             NOTE       Physical characteristics include constructional
                        features, hardware conformance to document
                        drawing or workmanship requirements,
                        physical conditions, software source code
                        conformance with coding standards.
b.   An inspection programme shall be defined in the Verification Plan (VP).


### 5.2.3 Verification levels
a.   Verification shall be accomplished through the verification levels in
     conformance with those defined with the Annex A Verification Plan
     DRD.
             NOTE       Usual levels are defined in 4.2.3.
b.   When a requirement is fully verified at lower level, the traceability to
     lower level verification evidence shall be identified.
c.   Formal close-out of qualification and acceptance at lower levels shall be
     performed prior to close-out at higher level.


### 5.2.4 Verification stages

#### 5.2.4.1 General
a.   The Verification Plan shall state which verification activities are to be
     accomplished in each of relevant verification stages.
b.   Qualification, acceptance and pre-launch stages shall be completed
     before launch.
c.   When the verification programme includes an in-orbit stage, the
     verification shall not rely only on in-orbit activities.
d.   When the verification programme includes a post landing stage, the
     verification shall not rely only on in-orbit activities or post landing
     activities.


#### 5.2.4.2 Qualification
a.   In the qualification stage the supplier shall demonstrate that the design,
     including margins, meets the applicable requirements.
b.   Qualification shall be carried-out on hardware and software which is
     representative of the end item configuration in terms of design, materials,
     tooling and methods.
c.   The qualification programme shall be prepared considering the product
     category according to heritage as defined in Table 5-1.
d.   For product categories A, B and C, the supplier shall state the
     qualification status at the EQSR (Equipment Qualification Status
     Review).


                   Table 5-1: Product categories according to heritage
Category                        Description                        Qualification programme
   A       Off-the-shelf product without modifications and      None
               - subjected to a qualification test
                    programme at least as severe as that
                    imposed by the actual project
                    specifications including environment
                    and
               - produced by the same manufacturer or
                    supplier and using the same tools and
                    manufacturing processes and procedures
   B       Off-the-shelf product without modifications.         Delta qualification programme,
           However:                                             decided on a case by case basis.

           It has been subjected to a qualification test
           programme less severe or different to that
           imposed by the actual project specifications
           (including environment).
   C       Off-the-shelf product with modifications.            Delta or full qualification
           Modification includes changes to design, parts,      programme (including testing),
           materials, tools, processes, procedures, supplier,   decided on a case by case basis
           or manufacturer.                                     depending on the impact of the
                                                                modification.
   D       Newly designed and developed product.                Full qualification programme.


#### 5.2.4.3 Acceptance

##### 5.2.4.3.1 General
                    a.    In the stage the verification shall demonstrate that the product meets
                          specified margins with the agreed deviations and waivers, and it is free
                          of defects when delivered by the supplier.
                    b.    Acceptance shall be carried-out on the product which is declared as the
                          acceptance article with a defined configuration of hardware and
                          software.

##### 5.2.4.3.2 Acceptance article
                    a.    The acceptance article shall be manufactured in agreement with the
                          qualified design.
                    b.    The acceptance article shall perform as the qualified product.


#### 5.2.4.4 Pre-launch
                    a.    In the pre-launch stage the verification shall demonstrate that the
                          product is properly configured for launch activities and early operations.
                    b.    In the pre-launch stage the verification shall confirm that the product is
                          capable of functioning as planned during launch and early operations.


#### 5.2.4.5 In-orbit
a.   In the in-orbit stage the verification shall address the minimum set of
     requirements that cannot be verified on ground.
b.   In the in-orbit stage the verification shall supplement/confirm ground
     verification by providing operating conditions which cannot be fully or
     cost effectively duplicated or simulated on ground.
c.   In the in-orbit stage the verification shall characterize the system under
     operational conditions especially for the aspects that cannot be
     determined before the launch.
d.   In the in-orbit stage the verification shall confirm that the space and
     ground elements are compatible with each other.
             NOTE       The working arrangement between the
                        elements suppliers (e.g. satellite, ground
                        segment) and the final customer defines the
                        share of responsibilities for preparing,
                        conducting and reporting the in orbit -
                        commissioning activities. The completion of
                        this stage allows declaring readiness for routine
                        operations (Phase E2-exploitation).
e.5.2.4.6    Post-landing
a.   The verification in the post-landing stage shall address the product
     integrity and performance after the mission.
b.   In case the product is intended to be re-launched the verification shall
     address:
     1.    a health check, at periodical intervals agreed with the customer,
           during storage periods;
     2.    the product performance after modification, repair or replacement;
     3.    the readiness for reuse.


### 5.2.5 Models
a.   The model philosophy shall be defined as part of the overall verification
     planning.


### 5.2.6 Verification tools

#### 5.2.6.1 General
a.   Tools to be used to support the implementation of the verification
     process shall be identified.
b.   All verification tools shall be validated and maintained for their intended
     use.


c.d.   Formal verification procedures shall be established and applied to tools
     which are specified as deliverable items.


#### 5.2.6.2 Ground support equipment (GSE)
a.   All ground support equipment (GSE) shall be verified under expected
     environmental conditions and operational constraints.
b.   The compatibility of the interfaces of the ground support equipment
     (GSE) with flight products and facilities shall be verified.
c.   The prevention of damage on the flight product due to ground support
     equipment (GSE) failure shall be verified.
             NOTE       For hazards to personnel, flight hardware,
                        facilities and environments related to GSE, see
d.   Ground support equipment (GSE) that is modified or used in a new
     application shall be re-verified or re-validated.


5.2.6.3a.b.5.2.6.4    Simulators
a.   Simulators shall be verified to demonstrate that the simulator
     characteristics are representative of the simulated product to the extent
     required for the verification to be supported.


#### 5.2.6.5 Software tools for verification by analysis
a.   Suitability of previously validated analytical software tools shall be
     assessed for the intended application.
b.   Non-validated analytical software tools shall be subjected to a validation
     process prior to their use.


#### 5.2.6.6 Integration and test facilities and test tools
a.   The capability of the integration and test facilities and test tools to
     perform their intended function in terms of performance and calibration
     shall be verified as part of the overall integration and test process.
             NOTE       See ECSS-Q-ST-20-07 for test facilities.


### 5.2.7 Verification process phasing
a.   The verification process shall be phased with the project life cycle, in
     accordance with ECSS-M-ST-10.


b.   Verification planning to assess feasibility and support development
     planning shall start during phase A.
c.   The preliminary verification planning shall cover all products and
     requirements by the end of phase B.
d.   Verification planning shall be completed by the end of Phase C.
             NOTE       Covering all verification stages e.g. pre-launch,
                        in-orbit (including commissioning) and post
                        landing.
e.   Verification execution and reporting shall be incrementally carried out
     through the project life cycle starting from phase C.
             NOTE       The majority of verification execution is
                        undertaken during phase D, however
                        verification by analysis and review of design
                        (and potentially for long lead items) starts in
                        phase C.
f.   Verification control shall start with the initial issue of the verification
     control document (VCD) during phase B.
g.   The supplier shall provide the Verification close out status for each
     product at the end of each stage to the customer for approval.
             NOTE       E.g. qualification close out status at the end of
                        the qualification stage during the Qualification
                        Review (QR).


### 5.2.8 Verification planning documents

#### 5.2.8.1 Verification plan (VP)
a.   The supplier shall provide a Verification plan (VP) for the reviews as
     agreed with the customer
             NOTE       See ECSS-E-ST-10      Table   A-1    for   review
                        deliverables.
b.   The contents of the Verification plan (VP) shall be in conformance with
     the DRD in Annex A.


#### 5.2.8.2 Verification Control Document (VCD)
a.   The supplier shall provide a Verification Control Document (VCD) for
     the reviews as agreed with the customer
             NOTE       See ECSS-E-ST-10      Table   A-1    for   review
                        deliverables.
b.   The Verification Control Document (VCD) shall be in conformance with
     the DRD in Annex B.


#### 5.2.8.3 Other verification planning Document
             a.   The supplier shall provide the AIT Plan for the reviews as agreed with
                  the customer
                          NOTE       See ECSS-E-ST-10      Table   A-1   for   review
                                     deliverables.
             b.   The AIT plan shall be in accordance with the DRD in ECSS-E-ST-10-03
                  Annex A.


## 5.3 Verification execution and reporting

### 5.3.1 General
             a.   The supplier shall identify those responsible for the implementation of
                  the verification activities.
             b.c.   When nonconformity is detected during the verification process, a
                  Nonconformance Report (NCR), in conformance with Annex A of ECSS-
                  Q-ST-10-09, shall be raised and processed according to ECSS-Q-ST-20.
             d.   The verification results shall be recorded by the supplier in verification
                  reports and provided to the Verification Control Board (VCB) for review.


### 5.3.2 Verification execution and reporting
                        documentation

#### 5.3.2.1 Test report
             a.   The test report for each test verification task as identified in the VP or
                  AIT Plan shall be submitted to the Verification Control Board (VCB) after
                  the test completion, within the time frame agreed with the customer.
             b.   The supplier shall provide Test reports for the reviews in conformance
                  with the DRD in Annex C.
             c.   The supplier shall provide the Test reports for the reviews as agreed with
                  the customer
                          NOTE       See ECSS-E-ST-10      Table   A-1   for   review
                                     deliverables.
             d.   A Test report shall be provided for each Test verification task as
                  identified in the VP or AIT Plan.


#### 5.3.2.2 Analysis report
             a.   The Analysis report for each analysis verification task identified in the
                  Verification Plan shall be submitted to the Verification Control Board
                  (VCB) after analysis completion, within the time frame agreed with the
                  customer.


b.c.   The supplier shall provide an Analysis report for the reviews as agreed
     with the customer.
             NOTE 1     See ECSS-E-ST-10      Table   A-1   for   review
                        deliverables.
             NOTE 2     For each discipline specific analysis reports is
                        covered in the respective ECSS standard. A
                        generic guideline for the content of an Analysis
                        Report is given in Annex S of ECSS-E-ST-10.
d.   An Analysis report shall be provided for each Analysis verification task
     identified in the Verification Plan.


#### 5.3.2.3 Review-of-design report
a.   The Review-of-design report shall be submitted for each Review-of-
     design verification task identified in the Verification Plan to the
     Verification Control Board (VCB) after the Review-of-Design completion,
     within the time frame agreed with the customer.
b.   The supplier shall provide the Review-of-design report in conformance
     with the DRD in Annex D.
c.   The supplier shall provide a Review-of-design for the reviews as agreed
     with the customer
             NOTE       See ECSS-E-ST-10      Table   A-1   for   review
                        deliverables.
d.   A Review-of-design report shall be provided for each Review-of-design
     verification task identified in the Verification Plan.


#### 5.3.2.4 Inspection report
a.   The Inspection report shall be submitted for each Inspection verification
     task identified in the Verification Plan to the Verification Control Board
     (VCB) after the inspection completion, within the time frame agreed with
     the customer.
b.   The supplier shall provide the Inspection report in conformance with the
     DRD in Annex E.
c.   The supplier shall provide an Inspection report for the reviews as agreed
     with the customer
             NOTE       See ECSS-E-ST-10      Table   A-1   for   review
                        deliverables.
d.   An Inspection report shall be provided for each Inspection verification
     task identified in the Verification Plan.


#### 5.3.2.5 Verification report
a.   The supplier shall prepare a Verification report when more than one of
     the defined verification methods are utilized to verify a requirement or a
     specific set of requirements.


             b.   The supplier shall provide the Verification report in conformance with
                  the DRD in Annex F.
             c.   The Verification report shall be submitted to the Verification Control
                  Board (VCB) after the completion of the last contributing verification
                  activities, within the time frame agreed with the customer.
             d.   The supplier shall provide a Verification report for the reviews as agreed
                  with the customer
                          NOTE       See ECSS-E-ST-10      Table   A-1   for   review
                                     deliverables.


#### 5.3.2.6 Other verification execution and reporting
                        Document
             a.b.c.d.e.   The rules for the analysis, inspection and review of design shall be
                  defined in writing before their execution.
                          NOTE 1     For example, analysis, inspection or review of
                                     design procedures.
                          NOTE 2     The rules for Test are as detailed in ECSS-E-ST-
                                     10-03.


## 5.4 Verification control and close-out

### 5.4.1 General
             a.   The implementation of the verification process shall be monitored by the
                  Verification Control Board (VCB).
             b.   The supplier shall provide a computer based verification database to
                  support the verification process control.
             c.   The supplier shall deliver the verification database to the customer in an
                  electronic form to be agreed with the customer.
             d.   The supplier shall capture and provide verification close-out evidence in
                  the verification database for those customers requirements agreed to be
                  verified.


### 5.4.2 Verification control board (VCB)
             a.   A Verification Control Board (VCB) shall be established by the supplier
                  and invite the participation of the customer, to assess the achievements
                  and status of the verification process.


             NOTE       The VCB is set-up in relation to the complexity
                        and the extents of the verification activities.
b.   The verification process shall be considered completed when the
     Verification Control Board (VCB) confirms that:
     1.    documented evidence is recorded in the VCD,
     2.    identified requirements have been verified
     3.    associated product verification objectives are reached
c.   The conclusions of the VCB shall be submitted for approval to the
     customer.
d.   The supplier’s Verification Control Board (VCB) representative shall
     support the VCB in the assessment of the verification status with a
     periodicity agreed with the customer.
             NOTE       The results of the VCB are at least presented on
                        the occasions of project reviews as defined in
e.   The supplier's VCB representative shall ensure the Verification Control
     Board (VCB) endorses the final issue of the Verification Control
     Document (VCD).
f.   The supplier's VCB representative shall ensure the Verification Control
     Board (VCB) includes participation of Engineering and Quality
     Assurance representatives within its members.
g.   The supplier's VCB representative shall ensure that for VCBs related to
     qualification the QA representative acts as the board chair.


### 5.4.3 Re-verification
a.   The extent of the re-verification to be performed shall be determined by
     Supplier and agreed with the customer, in the following cases:
     1.    failure and repair as decided by Nonconformance Review Board
           (NRB);
     2.    unplanned disassembly or demating;
     3.    refurbishment, maintenance or design changes;
     4.    changes of requirements after initial verification;
     5.    long duration storage in case of storage duration in excess to the
           qualified storage duration;
     6.    flight use of qualification hardware.
b.   The Verification Control Document (VCD) shall be updated by the
     supplier to record as open, those requirements subject to re-verification
     until this is performed and closeout agreed by the customer.


### 5.4.4 Verification control and close-out
           documentation

#### 5.4.4.1 Verification Control Document (VCD)
a.   The content of the completed Verification Control Document (VCD) shall
     be in conformance with the DRD in Annex B.
b.   The supplier shall update the Verification database after approval of a
     report in line with the timescale agreed with the customer and stated in
     the Verification Plan.
c.   The intermediate issues of the Verification Control Document (VCD),
     reflecting the current status of the verification database, shall be made
     available to the Verification Control Board (VCB) upon request.
d.   The intermediate issues of the Verification Control Document (VCD),
     reflecting the current verification and compliance status, shall be
     delivered at each formal review as agreed with the customer
             NOTE       See ECSS-E-ST-10     Table   A-1   for   review
                        deliverables.
e.   The final issue of the Verification Control Document (VCD) shall be
     submitted to the Verification Control Board (VCB) after the approval of
     the last report, within the time frame agreed with the customer.


#### 5.4.4.2 Other close-out documents
a.   The supplier shall make available to the customer for consultation the
     evidences mentioned in the VCD in addition to the deliverable reports.


Pre-tailoring matrix per space product
                                 types

    The Matrix of Table 6-1 presents the pre-tailoring of this ECSS Standard per
    space product type.
    For the terminology and definitions of the space product types see ECSS-S-ST-
    00-01.


                  NOTE 1    “Ground segment equipment” is not to be
                            confused with “Ground support equipment”.
                  NOTE 2    Clauses are proposed as applicable to a given
                            decomposition level but not to the level below
                            when they address an element and
                            its constituents at that level, but not what is
                            inside the constituents (at the level below). In
                            particular, no clause is proposed in the pre-
                            tailoring as applicable to the product type
                            “software” understood here as the applicability
                            to the development of software when not
                            installed in hardware.
                  NOTE 3    Clauses applicability to the product type
                            “launch segment element and sub-system” is
                            proposed in the pre-tailoring on the basis of
                            “launcher” and “launcher element”, covered by
                            this product type, and not of the other elements
                            and sub-systems that this product type also
                            covers.
                  NOTE 4    Some clauses use the word “system” with a
                            more general meaning than the terminology
                            used for the product types. Therefore some of
                            these clauses could be proposed as applicable
                            to other product types, than “space system” in
                            the pre-tailoring.


                            Table 6-1: Definitions of the columns of Table 6-2
 Column title                                        Description
Applicability   There are nine product types, one per column.
status          For each product type the possible values for each requirement are:
                  X     when applicable
                  -     when not applicable
                  //    when pre-tailoring applicability not definable - to be determined during
                        tailoring
                  >>    the requirement is applicable to a lower product type. Responsibility of
                        tailoring (if needed) resides with the customer of this lower product type


                  X#    when requirement is applicable except in a specific case - the criteria for
                        being “not applicable” are defined in the Comments column
                  //#   when pre-tailoring applicability not definable - however supplementary
                        indications regarding applicability in the tailoring are given in the
                        Comments column
                        NOTE "#” is a number to uniquely identify every comment in the same
                             row.
                A requirement is considered applicable for a product type if it is verified on this
                product type.
Comments        The column “Comments”
                 - provides information on the limitation of applicability -- it provides
                   clarification on the limited and specific conditions for the applicability of the
                   requirement.
                 - is not used to modify a requirement.


                                                 Table 6-2: Pre-tailoring matrix per “Space product types”
                          Space                      Launch                   Ground
                                       Space                     Launch                    Ground      Ground
               Space     segment                    segment                   segment
ECSS req. #                           segment                    segment                   segment     support    Software   Comments
              system   element and                element and               element and
                                     equipment                  equipment                 equipment   equipment
                       sub-system                 sub-system                sub-system
   5.1a         X          X            X             X            X            X            X           X
  5.2.1a        X          X            X             X            X            X            X           X
  5.2.1b        X          X            X             X            X            X            X           X
   5.2.1c       X          X            X             X            X            X            X           X
  5.2.1d        X          X            X             X            X            X            X           X
  5.2.1e        X          X            X             X            X            X            X           X
  5.2.2.1a      X          X            X             X            X            X            X           X
 5.2.2.1d       X          X            X             X            X            X            X           X
  5.2.2.1e      X          X            X             X            X            X            X           X
  5.2.2.2a      X          X            X             X            X            X            X           X
  5.2.2.3a      X          X            X             X            X            X            X           X
  5.2.2.3c      X          X            X             X            X            X            X           X
 5.2.2.3d       X          X            X             X            X            X            X           X
  5.2.2.3e      X          X            X             X            X            X            X           X
  5.2.2.3f      X          X            X             X            X            X            X           X
  5.2.2.4a      X          X            X             X            X            X            X           X
  5.2.2.4b      X          X            X             X            X            X            X           X
  5.2.2.4c      X          X            X             X            X            X            X           X
  5.2.2.5a      X          X            X             X            X            X            X           X
  5.2.2.5b      X          X            X             X            X            X            X           X
  5.2.3a        X          X            X             X            X            X            X           X
  5.2.3b        X          X            X             X            X            X            X           X
   5.2.3c       X          X            X             X            X            X            X           X
  5.2.4.1a      X          X            X             X            X            X            X           X


                          Space                     Launch                   Ground
                                       Space                    Launch                    Ground      Ground
               Space     segment                   segment                   segment
ECSS req. #                           segment                   segment                   segment     support    Software   Comments
              system   element and               element and               element and
                                     equipment                 equipment                 equipment   equipment
                       sub-system                sub-system                sub-system
  5.2.4.1b      X          X            X            X            X            X            X           X
  5.2.4.1c      X          X            X            X            X             -            -           -
 5.2.4.1d       X          X            X            X            X             -            -           -
  5.2.4.2a      X          X            X            X            X            X            X           X
  5.2.4.2b      X          X            X            X            X            X            X           X
  5.2.4.2c      X          X            X            X            X            X            X           X
 5.2.4.2d       X          X            X            X            X            X            X           X
 5.2.4.3.1a     X          X            X            X            X            X            X           X
 5.2.4.3.1b     X          X            X            X            X            X            X           X
 5.2.4.3.2a     X          X            X            X            X            X            X           X
 5.2.4.3.2b     X          X            X            X            X            X            X           X
  5.2.4.4a      X          X            X            X            X            X            X           X
  5.2.4.4b      X          X            X            X            X            X            X           X
  5.2.4.5a      X          X            X             -            -           X            X            -
  5.2.4.5b      X          X            X             -            -           X            X            -
  5.2.4.5c      X          X            X             -            -           X            X            -
 5.2.4.5d       X          X            X             -            -           X            X            -
  5.2.4.6a      X          X            X             -            -            -            -           -
  5.2.4.6b      X          X            X            X            X             -            -           -
  5.2.5a        X          X            X            X            X            X            X           X
  5.2.6.1a      X          X            X            X            X            X            X           X
  5.2.6.1b      X          X            X            X            X            X            X           X
 5.2.6.1d       X          X            X            X            X            X            X           X
  5.2.6.2a      -           -            -            -            -            -            -          X
  5.2.6.2b      -           -            -            -            -            -            -          X
  5.2.6.2c      -           -            -            -            -            -            -          X


                          Space                     Launch                   Ground
                                       Space                    Launch                    Ground      Ground
               Space     segment                   segment                   segment
ECSS req. #                           segment                   segment                   segment     support    Software   Comments
              system   element and               element and               element and
                                     equipment                 equipment                 equipment   equipment
                       sub-system                sub-system                sub-system
 5.2.6.2d       -           -            -            -            -            -            -          X
  5.2.6.4a      X          X            X            X            X            X            X           X
  5.2.6.5a      X          X            X            X            X            X            X           X
  5.2.6.5b      X          X            X            X            X            X            X           X
  5.2.6.6a      X          X            X            X            X            X            X           X
  5.2.7a        X          X            X            X            X            X            X           X
  5.2.7b        X          X            X            X            X            X            X           X
   5.2.7c       X          X            X            X            X            X            X           X
  5.2.7d        X          X            X            X            X            X            X           X
  5.2.7e        X          X            X            X            X            X            X           X
   5.2.7f       X          X            X            X            X            X            X           X
  5.2.7g        X          X            X            X            X            X            X           X
  5.2.8.1a      X          X            X            X            X            X            X           X
  5.2.8.1b      X          X            X            X            X            X            X           X
  5.2.8.2a      X          X            X            X            X            X            X           X
  5.2.8.2b      X          X            X            X            X            X            X           X
  5.2.8.3a      >>         X            X            X            X            X            X           X
  5.2.8.3b      >>         X            X            X            X            X            X           X
  5.3.1a        X          X            X            X            X            X            X           X
   5.3.1c       X          X            X            X            X            X            X           X
  5.3.1d        X          X            X            X            X            X            X           X
  5.3.2.1a      X          X            X            X            X            X            X           X
  5.3.2.1b      X          X            X            X            X            X            X           X
  5.3.2.1c      X          X            X            X            X            X            X           X
 5.3.2.1d       X          X            X            X            X            X            X           X
  5.3.2.2a      X          X            X            X            X            X            X           X


                          Space                     Launch                   Ground
                                       Space                    Launch                    Ground      Ground
               Space     segment                   segment                   segment
ECSS req. #                           segment                   segment                   segment     support    Software   Comments
              system   element and               element and               element and
                                     equipment                 equipment                 equipment   equipment
                       sub-system                sub-system                sub-system
  5.3.2.2b      X          X            X            X            X            X            X           X
  5.3.2.2c      X          X            X            X            X            X            X           X
 5.3.2.2d       X          X            X            X            X            X            X           X
  5.3.2.3a      X          X            X            X            X            X            X           X
  5.3.2.3b      X          X            X            X            X            X            X           X
  5.3.2.3c      X          X            X            X            X            X            X           X
 5.3.2.3d       X          X            X            X            X            X            X           X
  5.3.2.4a      X          X            X            X            X            X            X           X
  5.3.2.4b      X          X            X            X            X            X            X           X
  5.3.2.4c      X          X            X            X            X            X            X           X
 5.3.2.4d       X          X            X            X            X            X            X           X
  5.3.2.5a      X          X            X            X            X            X            X           X
  5.3.2.5b      X          X            X            X            X            X            X           X
  5.3.2.5c      X          X            X            X            X            X            X           X
 5.3.2.5d       X          X            X            X            X            X            X           X
  5.3.2.6e      X          X            X            X            X            X            X           X
  5.4.1a        X          X            X            X            X            X            X           X
  5.4.1b        X          X            X            X            X            X            X           X
   5.4.1c       X          X            X            X            X            X            X           X
  5.4.1d        X          X            X            X            X            X            X           X
  5.4.2a        X          X            X            X            X            X            X           X
  5.4.2b        X          X            X            X            X            X            X           X
   5.4.2c       X          X            X            X            X            X            X           X
  5.4.2d        X          X            X            X            X            X            X           X
  5.4.2e        X          X            X            X            X            X            X           X
   5.4.2f       X          X            X            X            X            X            X           X


                          Space                     Launch                   Ground
                                       Space                    Launch                    Ground      Ground
               Space     segment                   segment                   segment
ECSS req. #                           segment                   segment                   segment     support    Software   Comments
              system   element and               element and               element and
                                     equipment                 equipment                 equipment   equipment
                       sub-system                sub-system                sub-system
  5.4.2g        X          X            X            X            X            X            X           X
  5.4.3a        X          X            X            X            X            X            X           X
  5.4.3b        X          X            X            X            X            X            X           X
  5.4.4.1a      X          X            X            X            X            X            X           X
  5.4.4.1b      X          X            X            X            X            X            X           X
  5.4.4.1c      X          X            X            X            X            X            X           X
 5.4.4.1d       X          X            X            X            X            X            X           X
  5.4.4.1e      X          X            X            X            X            X            X           X
  5.4.4.2a      X          X            X            X            X            X            X           X
 A.2.1<1>a      X          X            X            X            X            X            X           X
A.2.1<1>b       X          X            X            X            X            X            X           X
 A.2.1<2>a      X          X            X            X            X            X            X           X
 A.2.1<3>a      X          X            X            X            X            X            X           X
 A.2.1<4>a      X          X            X            X            X            X            X           X
 A.2.1<5>a      X          X            X            X            X            X            X           X
 A.2.1<6>a      X          X            X            X            X            X            X           X
 A.2.1<7>a      X          X            X            X            X            X            X           X
A.2.1<7>b       X          X            X            X            X            X            X           X
 A.2.1<8>a      X          X            X            X            X            X            X           X
A.2.1<8>b       X          X            X            X            X            X            X           X
 A.2.1<9>a      X          X            X            X            X            X            X           X
A.2.1<10>a      X          X            X            X            X            X            X           X
A.2.1<11>a      X          X            X            X            X            X            X           X
A.2.1<12>a      X          X            X            X            X            X            X           X
A.2.1<12>b      X          X            X            X            X            X            X           X
A.2.1<12>c      X          X            X            X            X            X            X           X


                          Space                     Launch                   Ground
                                       Space                    Launch                    Ground      Ground
               Space     segment                   segment                   segment
ECSS req. #                           segment                   segment                   segment     support    Software   Comments
              system   element and               element and               element and
                                     equipment                 equipment                 equipment   equipment
                       sub-system                sub-system                sub-system
  A.2.2a        X          X            X            X            X            X            X           X
 B.2.1<1>a      X          X            X            X            X            X            X           X
 B.2.1<1>b      X          X            X            X            X            X            X           X
 B.2.1<1>c      X          X            X            X            X            X            X           X
 B.2.1<2>a      X          X            X            X            X            X            X           X
 B.2.1<3>a      X          X            X            X            X            X            X           X
 B.2.1<4>a      X          X            X            X            X            X            X           X
 B.2.1<4>b      X          X            X            X            X            X            X           X
 B.2.1<5>a      X          X            X            X            X            X            X           X
 B.2.1<6>a      X          X            X            X            X            X            X           X
 B.2.1<6>b      X          X            X            X            X            X            X           X
 C.2.1<1>a      X          X            X            X            X            X            X           X
 C.2.1<1>b      X          X            X            X            X            X            X           X
 C.2.1<2>a      X          X            X            X            X            X            X           X
 C.2.1<2>b      X          X            X            X            X            X            X           X
 C.2.1<3>a      X          X            X            X            X            X            X           X
 C.2.1<4>a      X          X            X            X            X            X            X           X
 C.2.1<4>b      X          X            X            X            X            X            X           X
 C.2.1<4>c      X          X            X            X            X            X            X           X
 C.2.1<5>a      X          X            X            X            X            X            X           X
 C.2.1<6>a      X          X            X            X            X            X            X           X
 C.2.1<6>b      X          X            X            X            X            X            X           X
 C.2.1<6>c      X          X            X            X            X            X            X           X
 D.2.1<1>a      X          X            X            X            X            X            X           X
D.2.1<1>b       X          X            X            X            X            X            X           X
 D.2.1<2>a      X          X            X            X            X            X            X           X


                          Space                     Launch                   Ground
                                       Space                    Launch                    Ground      Ground
               Space     segment                   segment                   segment
ECSS req. #                           segment                   segment                   segment     support    Software   Comments
              system   element and               element and               element and
                                     equipment                 equipment                 equipment   equipment
                       sub-system                sub-system                sub-system
 D.2.1<3>a      X          X            X            X            X            X            X           X
 D.2.1<4>a      X          X            X            X            X            X            X           X
 D.2.1<5>a      X          X            X            X            X            X            X           X
D.2.1<5>b       X          X            X            X            X            X            X           X
 E.2.1<1>a      X          X            X            X            X            X            X           X
 E.2.1<1>b      X          X            X            X            X            X            X           X
 E.2.1<2>a      X          X            X            X            X            X            X           X
 E.2.1<3>a      X          X            X            X            X            X            X           X
 E.2.1<4>a      X          X            X            X            X            X            X           X
 E.2.1<5>a      X          X            X            X            X            X            X           X
 E.2.1<5>b      X          X            X            X            X            X            X           X
 F.2.1<1>a      X          X            X            X            X            X            X           X
 F.2.1<1>b      X          X            X            X            X            X            X           X
 F.2.1<2>a      X          X            X            X            X            X            X           X
 F.2.1<3>a      X          X            X            X            X            X            X           X
 F.2.1<4>a      X          X            X            X            X            X            X           X
 F.2.1<4>b      X          X            X            X            X            X            X           X
 F.2.1<5>a      X          X            X            X            X            X            X           X
 F.2.1<5>b      X          X            X            X            X            X            X           X
 F.2.1<5>c      X          X            X            X            X            X            X           X


                                   Annex A (normative)
                           Verification plan (VP) - DRD

A.1   DRD identification

             A.1.1       Requirement identification and source
                         document
             This DRD is called up from ECSS-E-ST-10-02, requirement 5.2.8.1b.


             A.1.2       Purpose and objective
             The Verification Plan contains the overall verification approach, the model
             philosophy, the product matrix, the verification strategies for the requirements
             (the interrelation between different methods/levels/stages of verification to be
             used to demonstrate status of compliance to requirements), the test, inspection,
             analysis and review-of-design programme with the relevant activity sheets and
             planning, the verification tools, the verification control methodology, the
             involved documentation, the verification management and organization.


A.2   Expected response

             A.2.1       Scope and content

             <1>      Introduction
             a.    The VP shall contain a description of the purpose, objective, content and
                   the reason prompting its preparation.
             b.    Open issues, assumptions and constraints relevant to this document shall
                   be stated and described.


             <2>      Applicable and reference documents
             a.    The VP shall list the applicable and reference documents in support to
                   the generation of the document.


<3>       Definitions and abbreviations
a.     The VP shall list the applicable dictionary or glossary and the meaning of
       specific terms or abbreviations utilized in the document.


<4>       Verification subject
a.     The VP shall briefly describe the subject of the verification process.


<5>       Verification approach
a.     The VP shall describe the basic verification concepts and definitions
       (methods, levels and stages).


<6>       Model philosophy
a.     The VP shall describe the selected models and the associated model
       philosophy, product matrix.


<7>       Verification Strategy
a.     The VP shall describe the selected combination of the different
       verification methods at the applicable verification levels and stages, in
       general and for each requirement type/group (including software).
b.     The allocation of the requirements to the specific verification tasks shall
       be given.


<8>       Verification programme
a.     The VP shall document the verification activities and associated planning
       in the applicable verification stages.
b.     Analysis, review­of­design, inspection and test programmes should be
       detailed through dedicated activity sheets, or through reference to the
       AIT Plan.


<9>       Verification tools
a.     The VP shall describe high level definitions of the verification tools to be
       used, such as S/W facilities, special tools, simulators, analytical tools.


<10>      Verification control methodology
a.     The VP shall describe the proposed methodology to be utilized for
       verification monitoring and control including the use of a verification
       data base.


<11>      Documentation
a.     The VP shall list the involved verification documents and describe their
       content.


<12>      Organization and management
a.     The VP shall describe the responsibility and management tools
       applicable to the described verification process.
b.     It shall describe the responsibilities within the project team, the relation
       to product assurance, quality control and configuration control
       (including anomaly handling and change control) as well as the
       responsibility sharing with external partners.
c.     The relevant reviews shall be planned and responsibilities described.


A.2.2        Special remarks
a.     The Verification Plan may be combined with the AIT Plan in one single
       AIV Plan.
               NOTE       In this case VP and AIT plans do not exist
                          anymore as single entities.


                       Annex B (normative)
Verification control document (VCD) - DRD

B.1   DRD identification

             B.1.1       Requirement identification and source document
             This DRD is called up from ECSS-ST-E-10-02, requirement 5.2.8.2b and 5.4.4.1b.


             B.1.2       Purpose and objective
             The Verification Control Document lists the requirements to be verified with
             the selected methods in the applicable stages at the defined levels.
             It includes the Verification Matrix. The VCD is a living document and provides
             traceability during the phase C, D and E, how and when each requirement is
             planned to be verified and is actually verified.
             The VCD becomes part of the EIDP, as detailed in ECSS-Q-ST-20.


B.2   Expected response

             B.2.1       Scope and content

             <1>      Introduction
             a.    The VCD shall contain a description of the purpose, objective, content
                   and the reason prompting its preparation.
             b.    Open issues, assumptions and constraints relevant to this document shall
                   be stated and described.
             c.    The VCD content shall be phased with the product life-cycle such that the
                   initial issue contains the verification matrix, intermediate issues cover the
                   planned on-ground verifications and their executions evidence (in
                   particular for qualification and acceptance completion), the in-orbit and
                   post landing activities; final issue provides evidence of the close-out of
                   the overall verification process.


<2>         Applicable and reference documents
a.    The VCD shall list the applicable and reference documents in support to
      the generation of the document.


<3>         Definitions and abbreviations
a.    The VCD shall list the applicable dictionary or glossary and the meaning
      of specific terms or abbreviations utilized in the document.


<4>         Verification subject
a.    The VCD shall describe the verification control approach applied to the
      product, the involved documentation and the computerized tool used to
      support the process.
b.    The VCD shall include the requirements to be verified (with reference to
      the specifications involved), call up the verification methods, levels and
      stages definitions and explain the verification close­out criteria..


<5>         Verification summary status
a.    Each issue of the VCD shall summarize the current Verification Close-out
      status.


<6>         Verification control data
a.    The VCD shall collect in the form of a matrix, for each requirement, the
      following verification information:
      1.      Requirement identifier,
      2.      Requirement text
      3.      traceability between requirement,
      4.      Levels and stages of verification,
      5.      methods,
      6.      link to the relevant section of the verification plan and any
              planning document,
      7.      References to any documentation that demonstrates compliance to
              the requirements,
      8.      Status of Compliance (yes, no, partial),
      9.      Close-out status (open / closed),
      10.     Reasons of the close-out status,
                NOTE 1     to item 6: For example, test specification.
                NOTE 2     to item 7: For example, report, analysis,
                           waivers, RFD, NCR, NRB, customer closeout
                           records.
b.    The initial issue of the VCD shall contain a verification matrix limited to:


        1.   Requirement identifier,
        2.   Requirement text,
        3.   traceability between requirement,
        4.   Levels and stages of verification,
        5.   methods,
        6.   link to the relevant section of the verification plan.


B.2.2        Special remarks
None.


                                              Annex C (normative)
                                                Test report - DRD

C.1   DRD identification

             C.1.1        Requirement identification and source document
             This DRD is called up from ECSS-E-ST-10-02, requirement 5.3.2.1b.


             C.1.2        Purpose and objective
             The test report describes test execution, test and engineering assessment of
             results and conclusions in the light of the test requirements (including pass-fail
             criteria).
             The test report contains the scope of the test, the test description, the test article
             and set-up configuration, and the test results including the as­run test
             procedures, the considerations and conclusions with particular emphasis on the
             close­out of the relevant verification requirements including deviations.


C.2   Expected response

             C.2.1        Scope and content

             <1>       Introduction
             a.    The Test Report shall contain a description of the purpose, objective,
                   content and the reason prompting its preparation.
             b.    Open issues, assumptions and constraints relevant to this document shall
                   be stated and described.


             <2>       Applicable and reference documents
             a.    The Test Report shall list the applicable and reference documents in
                   support to the generation of the document.
             b.    The Test Report shall include as applicable reference documents the
                   corresponding test procedure and test specification as specified in the
                   DRDs in ECSS-E-ST-10-03.


<3>          Definitions and abbreviations
a.      The Test Report shall list the applicable dictionary or glossary and the
        meaning of specific terms or abbreviations utilized in the document


<4>          Test results
a.      The Test Report shall contain the test results with supporting data
        (including the test execution dates, the as run procedure, and the test
        facility results).
b.      The Test Report shall contain the analysis of test data and the relevant
        assessment.
c.      The Test Report shall provide a synthesis of the test results.


<5>          Anomalies
a.      The Test Report shall include the list of deviations to the test procedure,
        the nonconformance including failures and the problems.


<6>          Conclusions
a.      The Test Report shall summarize:
        1.     the test results, including:
               (a)   the list of the requirements to be verified (in correlation with
                     the VCD),
               (b)   traceability to used documentation,
               (c)   conformance or deviation          including   references   and
                     signature and date),
        2.     the comparison with the requirements and
        3.     the verification close-out judgment.
b.      Open issues shall be clearly stated and described.
c.      Separate test analyses shall be cross-referenced.


C.2.2          Special remarks
None.


                              Annex D (normative)
                     Review-of-design report - DRD

D.1   DRD identification

             D.1.1       Requirement identification and source document
             This DRD is called up from ECSS-E-ST-10-02, requirement 5.3.2.3b.


             D.1.2       Purpose and objective
             The review­of­design report describes each verification activity performed for
             reviewing documentation.
             The review­of­design report contains proper evidence that the relevant
             requirements are verified and the indication of deviations.


D.2   Expected response

             D.2.1       Scope and content

             <1>      Introduction
             a.    The Review-of-Design Report shall contain a description of the purpose,
                   objective, content and the reason prompting its preparation.
             b.    Open issues, assumptions and constraints relevant to this document shall
                   be stated and described.


             <2>      Applicable and reference documents
             a.    The Review-of-Design Report shall list the applicable and reference
                   documents in support to the generation of the document.


             <3>      Definitions and abbreviations
             a.    The Review-of-Design Report shall list the applicable dictionary or
                   glossary and the meaning of specific terms or abbreviations utilized in
                   the document with the relevant meaning.


<4>          Review-of-design summary
a.      The Review-of-Design Report shall describe the review-of-design activity
        in terms of method and procedures used.


<5>          Conclusions
a.      The Review-of-Design Report shall summarize
        1.     the review-of-design results, including
               (a)   the list of the requirements to be verified (in correlation with
                     the VCD),
               (b)   traceability to used documentation,
               (c)   conformance or deviation         including    references   and
                     signature and date,
        2.     the comparison with the requirements and
        3.     the verification close-out judgment.
b.      Open issues shall be clearly stated and described.


D.2.2          Special remarks
None.


                                       Annex E (normative)
                                    Inspection report - DRD

E.1   DRD identification

             E.1.1       Requirement identification and source
                         document
             This DRD is called up from ECSS-E-ST-10-02, requirement 5.3.2.4b.


             E.1.2       Purpose and objective
             The inspection report describes each verification activity performed for
             inspecting hardware or software.
             The inspection report contains proper evidence that the relevant requirements
             are verified and the indication of deviations.
             The inspection report may be embedded in the Test Report if the verification by
             Inspection is carried-out in combination with Testing.


E.2   Expected response

             E.2.1       Scope and content

             <1>      Introduction
             a.    The Inspection Report shall contain a description of the purpose,
                   objective, content and the reason prompting its preparation.
             b.    Open issues, assumptions and constraints relevant to this document shall
                   be stated and described.


             <2>      Applicable and reference documents
             a.    The Inspection Report shall list the applicable and reference documents
                   in support to the generation of the document.


<3>          Definitions and abbreviations
a.      The Inspection Report shall list the applicable dictionary or glossary and
        the meaning of specific terms or abbreviations utilized in the document
        with the relevant meaning.


<4>          Inspection summary
a.      The Inspection Report shall describe the product configuration data of
        the inspected item.


<5>          Conclusions
a.      The Inspection Report shall summarize the:
        1.     inspection results, including:
               (a)   the list of the requirements to be verified (in correlation with
                     the VCD),
               (b)   traceability to used documentation,
               (c)   inspection event location and date,
               (d)   expected finding,
               (e)   conformance or deviation including proper references and
                     signature and date,
        2.     comparison with the requirements, and
        3.     verification close-out judgement.
b.      Open issues shall be clearly stated and described.


E.2.2          Special remarks
None.


                                      Annex F (normative)
                                  Verification report - DRD

F.1   DRD identification

             F.1.1       Requirement identification and source
                         document
             This DRD is called up from ECSS-E-ST-10-02, requirement 5.3.2.5b.


             F.1.2       Purpose and objective
             The Verification Report is prepared when more than one of the defined
             verification methods are utilized to verify a requirement or a specific set of
             requirements.
             It reports the approach followed and how the verification methods were
             combined to achieve the verification objectives.
             The positive achievement constitutes the completion of verification for the
             particular requirement.


F.2   Expected response

             F.2.1       Scope and content

             <1>      Introduction
             a.    The Verification Report shall contain a description of the purpose,
                   objective, content and the reason prompting its preparation.
             b.    Open issues, assumptions and constraints relevant to this document shall
                   be stated and described.


             <2>      Applicable and reference documents
             a.    The Verification Report shall list the applicable and reference documents
                   in support to the generation of the document.


<3>        Definitions and Abbreviations
a.      The Verification Report shall list the applicable dictionary or glossary
        and the meaning of specific terms or abbreviations utilized in the
        document with the relevant meaning Verification subject.


<4>        Verification results
a.      The Verification Report shall describe the verification approach, the
        associated problems and results with reference to the relevant test,
        analysis, review­of­design and inspection reports.
b.      The Verification Report shall identify the deviations from the verification
        plan.


<5>        Conclusions
a.      The Verification Report shall list the requirements to be verified (in
        correlation with the VCD).
b.      The Verification Report shall summarize verification results, the
        comparison with the requirements and the verification close­out
        judgement.
c.      Open issues shall be clearly stated and described.


F.2.2         Special remarks
None.


Annex GBibliography


                  requirements
                  centres
ECSS-E-HB-10-02   Space engineering --- Verification guidelines


