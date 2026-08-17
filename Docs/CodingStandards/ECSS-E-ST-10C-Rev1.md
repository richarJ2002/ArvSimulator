


Space engineering
System engineering general
requirements


# Foreword
This Standard is one of the series of ECSS Standards intended to be applied together for the
management, engineering and product assurance in space projects and applications. ECSS is a
cooperative effort of the European Space Agency, national space agencies and European industry
associations for the purpose of developing and maintaining common standards. Requirements in this
Standard are defined in terms of what shall be accomplished, rather than in terms of how to organize
and perform the necessary work. This allows existing organizational structures and methods to be
applied where they are effective, and for the structures and methods to evolve as necessary without
rewriting the standards.
This Standard has been prepared by the ECSS-E-ST-10C Rev.1 Working Group, reviewed by the ECSS
Executive Secretariat and approved by the ECSS Technical Authority.


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
Copyright:      2017 © by the European Space Agency for the members of ECSS


# Change log


ECSS-E-10A            First issue
ECSS-E-10 Part 1B     Second issue
15 February 2017      Major changes of this version with regard to the previous version are:
                          - Implementation of Change Requests
                          - Update of Scope of document
                          - Inclusion of ECSS-E-AS-11 " Adoption Notice of ISO 16290, Space
                              systems - Definition of the Technology Readiness Levels (TRLs) and
                              their criteria of assessment" as Normative Reference
                          - Update of clause 3 "Terms, definitions and abbreviated terms"
                          - Term "system engineering organisation" replaced in the whole
                              document by "system engineering function"
                          - Updated of clause 4 "Overview of system engineering" including
                              Figure 4-1
                          - Former clause 6 "Overview of system engineering tasks per project
                              phase" deleted and added with modifications as new clause 4.3
                              "Overview of system engineering tasks per project phase" as
                              informative material.
                          - Clause 7 "Pre-tailoring matrix per space product types" added
                          - Annex A including Table A-1 updated
                          - Annex M "Interface Requirement document (IRD) - DRD" deleted as
                              this DRD is now part of ECSS-E-ST-10-24 "Interface management"
                          - Annex Q "Analysis report -- DRD" deleted and added with
                              modifications as informative Annex S "Guideline content of Analysis
                              Report" as last Annex.
                          - All references to ECSS-E-HB-10 "System engineering guidelines"
                              removed as this document was never published and is not planned
                              anymore.
                      Added requirements
                          - 5.1d; 5.2.3.3c; 5.6.3c; 5.6.7d-g; E.2.1<5>b.


Modified requirement
   - 5.1a; 5.1c; 5.2.1a-e; 5.2.2a-c; 5.2.3.1a-c; 5.2.3.2a-b; 5.2.3.3b; 5.2.3.4a-b;
       5.2.3.5a; 5.2.3.7a; 5.2.3.8a; 5.2.3.9a; 5.3.1a-j; 5.3.2a-e; 5.3.3a-c; 5.3.4a-h;
       5.4.1.1a-f; 5.4.1.2a-c; 5.4.1.3a-f; 5.4.1.4a-c; 5.4.2.1a-c; 5.2.2.2a; 5.4.2.3a;
       5.5.1a; 5.5.2b-d and f; 5.6.1a and f-g; 5.6.2a; 5.6.3a-b; 5.6.4a; 5.6.5a-b;
       5.6.7a-c; 5.6.8a and c; 5.6.9a-c; B.2.1<4>a ; D.2.1<3.1>a.4 and 5;
       D.2.1<4.1>b; D.2.1<4.4>a; D.2.1<5.1.1>a and b NOTE deleted;
       D.2.1<5.1.2>f; D.2.1<5.2>b (all interleaved NOTES moved to end of
       requirement); F.2.1<4>b.1 and 2; G.2.1<5.5>a; G.2.1<8>a; I.2.1<3>a
       (interleaved Note moved to end of requirement); P.2.1<5.3>a.4; all
       requirements of Annex Q deleted as this Annex was converted into
       the new informative Annex S.
Deleted requirements
   - 5.1b; 5.2.3.1d; 5.2.3.3a; 5.2.3.6a-b; 5.2.3.8b; 5.4.2.3b; 5.5.2a and e; 5.6.1b-
       e; 5.6.4b-c; 5.6.6a-b; 5.6.8b; 6.2a-e; 6.3a-c; 6.4a-c; 6.5a-c; 6.6a-c; 6.7a-c;
       6.8a-d; 6.9a-b; B.2.1<4>b (moved into requirement B.2.1<4>a); all
       requirements of Annex M and Annex Q.
Editorial modifications and corrections:
   - E.1.2 Reference to Annex referred to corrected to read "Annex D"
   - Title of header of E.2.1<5> changed from "Critical issues" to
       "Technology issues"
   - ECSS references in Annex R completed
   - Bibliography updated and corrected.
   - All embedded Notes moved to the end of the respective requirement.


                                                                                      Table of contents

Change log ................................................................................................................. 3

1 Scope ....................................................................................................................... 8

# 2 Normative references ........................................................................................... 10

# 3 Terms, definitions and abbreviated terms.......................................................... 11
## 3.1 Terms from other standards....................................................................................11
## 3.2 Terms specific to the present standard ................................................................... 11
    3.3     Abbreviated terms...................................................................................................12

# 4 Overview of system engineering......................................................................... 15
## 4.1 The system engineering discipline .......................................................................... 15
## 4.2 The system engineering process ............................................................................ 19
## 4.3 Overview of system engineering tasks per project phase........................................ 20
            4.3.1       Overview ...................................................................................................20
            4.3.2       General .....................................................................................................20
### 4.3.3 Phase 0 Overview: Mission analysis-need identification ............................ 21
### 4.3.4 Phase A Overview: Feasibility ................................................................... 21
### 4.3.5 Phase B Overview: Preliminary definition .................................................. 21
### 4.3.6 Phase C Overview: Detailed definition ...................................................... 22
### 4.3.7 Phase D Overview : Qualification and production ...................................... 22
### 4.3.8 Phase E Overview: Operations / utilization ................................................ 22
### 4.3.9 Phase F Overview: Disposal ..................................................................... 22

# 5 General requirements........................................................................................... 24
    5.1     System engineering plan ........................................................................................24
    5.2     Requirement engineering........................................................................................25
            5.2.1       General .....................................................................................................25
### 5.2.2 Requirement traceability............................................................................ 25
### 5.2.3 Requirement engineering process............................................................. 26
    5.3     Analysis ..................................................................................................................28
### 5.3.1 System analysis ........................................................................................28


### 5.3.2 System environments and design and test factors .................................... 29
### 5.3.3 Trade-off analyses ....................................................................................29
### 5.3.4 Analysis methods, tools and models ......................................................... 30
   5.4   Design and configuration ........................................................................................31
         5.4.1       Design.......................................................................................................31
### 5.4.2 Configuration.............................................................................................32
   5.5   Verification ..............................................................................................................33
         5.5.1       General .....................................................................................................33
### 5.5.2 Product verification.................................................................................... 33
## 5.6 System engineering integration and control ............................................................ 34
### 5.6.1 Management of system engineering activities ........................................... 34
         5.6.2       Planning ....................................................................................................34
### 5.6.3 Engineering data .......................................................................................34
### 5.6.4 Interface control ........................................................................................35
### 5.6.5 Coordinate systems and units ................................................................... 35
### 5.6.6 Technical budgets and margin policy ........................................................ 35
### 5.6.7 Technology ...............................................................................................35
### 5.6.8 Risk management .....................................................................................36
### 5.6.9 Changes and nonconformances control .................................................... 36

6........................ 37
   6.1...........................................................................................................37
   6.2.................................................... 37
   6.3.................................................... 37
   6.4.................................................... 37
   6.5.................................................... 37
   6.6.................................................... 37
   6.7.................................................... 37
   6.8.................................................... 37
   6.9.................................................... 37

# 7 Pre-tailoring matrix per space product types .................................................... 38

Annex A (informative) System engineering documents delivery per review ..... 52

Annex B (normative) Mission description document (MDD) - DRD .................... 56

Annex C (normative) System concept report - DRD ............................................. 60

Annex D (normative) System engineering plan (SEP) - DRD ............................... 61

Annex E (normative) Technology plan (TP) - DRD ............................................... 70


Annex F (normative) Technology matrix - DRD .................................................... 74

Annex G (normative) Design definition file (DDF) - DRD...................................... 76

Annex H (normative) Function tree - DRD ............................................................. 81

Annex I (normative) Technical budget - DRD ........................................................ 83

Annex J (normative) Specification tree - DRD ...................................................... 85

Annex K (normative) Design justification file (DJF) - DRD .................................. 87

Annex L (normative) Trade-off report - DRD ......................................................... 94

Annex M (normative)......................................................................... 97

Annex N (normative) Requirements traceability matrix (RTM) - DRD ................. 98

Annex O (normative) Requirements justification file (RJF) - DRD .................... 100

Annex P (normative) Product user manual (PUM or UM) - DRD ........................ 103

Annex Q........................... 111

Annex R (informative) Mapping of typical DDP to ECSS documents ............... 112

Annex S (informative) Guideline content of Analysis Report ............................ 114

Bibliography........................................................................................................... 116


Figures
Figure 4-1: System engineering, sub-functions and boundaries ........................................... 17
Figure 4-2: System engineering sub-functions inter-relationships ......................................... 18
Figure B-1 : Relationship between documents ..................................................................... 57
Figure E-1 : TRSL template ..................................................................................................73


Tables
Table A-1 : System engineering deliverable documents ....................................................... 53


# Scope

This standard specifies the system engineering implementation requirements
for space systems and space products development.
Specific objectives of this standard are:
- to implement the system engineering requirements to establish a firm
      technical basis and to minimize technical risk and cost for space systems
      and space products development;
- to specify the essential system engineering tasks, their objectives and
      outputs;
- to implement integration and control of engineering disciplines and
      lower level system engineering work;
- to implement the “customer-system-supplier model” through the
      development of systems and products for space applications.
Depending of the product category, the application of this standard needs to be
checked and if needed tailored. The pre-tailoring table in clause 7 contains the
applicability of the requirements of this document and its annexes according to
product type. Specific requirements related to system engineering, like technical
specification, verification, and testing are specified in dedicated documents and
standards within the set of ECSS system engineering standards ECSS-E-ST-10-
XX.
Discipline or element specific engineering implementation requirements are
covered in dedicated ECSS standards. These standards are based on the same
principles, process and documentation model. The applicability of each these
standards can therefore not be considered in isolation from the others.
               NOTE 1      The term “Discipline” is defined in ECSS-M-ST-
                           10, as “a specific area of expertise within a
                           general subject”. The name of the discipline
                           normally indicates the type of expertise, e.g. in
                           the ECSS system mechanical engineering,
                           software and communications are disciplines
                           within the engineering domain.
               NOTE 2      The requirements on the system engineering
                           process are gathered in this standard; specific
                           aspects of the SE process are further elaborated
                           in dedicated standards.


For engineering process both for SW and for Ground Segment and Operations
the following standards are considered fully sufficient for development of these
items:
- ECSS-E-ST-70 Space engineering - Ground systems and operations
- ECSS-E-ST-40 Space engineering - Software
- ECSS-Q-ST-80 Space product assurance - Software product assurance
This standard may be tailored for the specific characteristic and constrains of a
space project in conformance with ECSS-S-ST-00.


# Normative references

The following normative documents contain provisions which, through
reference in this text, constitute provisions of this ECSS Standard. For dated
references, subsequent amendments to, or revision of any of these publications
do not apply, However, parties to agreements based on this ECSS Standard are
encouraged to investigate the possibility of applying the more recent editions of
the normative documents indicated below. For undated references, the latest
edition of the publication referred to applies.


 ECSS-E-AS-11          Adoption Notice of ISO 16290, Space systems - Definition
                       of the Technology Readiness Levels (TRLs) and their
                       criteria of assessment
                       implementation
                       information management


# Terms, definitions and abbreviated terms

## 3.1 Terms from other standards
              a.      For the purpose of this Standard, the terms and definitions from ECSS-S-
                      ST-00-01 apply, in particular for the following terms:
                      1.    acceptance
                      2.    approval
                      3.    configuration baseline
                      4.    critical
                      5.    development
                      6.    equipment
                      7.    inspection
                      8.    integration
                      9.    mission statement
                      10.   product tree
                      11.   requirement
                      12.   specification
                      13.   subsystem
                      14.   system
                      15.   test
                      16.   verification
              b.      For the purpose of this Standard, the terms and definitions from ECSS-E-
                      AS-11 apply, in particular for the following terms:
                      1.    technology readiness level


## 3.2 Terms specific to the present standard
### 3.2.1 requirement traceability
              requirement attribute that links each single requirement to its higher level
              requirements inside the requirement set


                          NOTE       This enables the derivation of a requirement
                                     tree, which demonstrates the coherent flow-
                                     down of the requirements.

### 3.2.2 recurring product
            product which conforms to a qualified design and is produced according to the
            corresponding production master file

### 3.2.3 system engineering
            interdisciplinary approach governing the total technical effort required to
            transform requirements into a system solution
                          NOTE       From IEEE P1220.


### 3.2.4 verification matrix
            initial issue of the VCD which contains for each requirement to be verified the
            methods, levels and stages of product verification
                          NOTE       See ECSS-E-ST-10-02 for a more detailed
                                     definition of the VCD.


## 3.3 Abbreviated terms
            For the purpose of this Standard, the abbreviated terms from ECSS-S-ST-00-01
            and the following apply:


             Abbreviation Meaning
             AIT              assembly, integration and test

             AIV plan         assembly, integration and verification plan

             AOCS             attitude and orbit control sub-system

             AR               acceptance review
             CDR              critical design review

             COTS             commercial off-the-shelf

             CRR              commissioning results review
                              NOTE For space vehicles (e.g. launcher, transfer vehicle,
                                   crew transport vehicle) the CRR can be replaced or
                                   complemented by a flight qualification review
                                   (FQR).
             DDF              design definition file
             DDP              design development plan
             DJF              design justification file
             DRD              document requirements definition

             ECSS             European Cooperation for Space Standardization


ELR       end-of-life review
FDIR      failure, detection, isolation, recovery
FM        flight model
FMECA     failure modes, effects, and criticality analysis

FOM       flight operations manual
FRR       flight readiness review
FTA       fault tree analysis

GSE       ground support equipment
HITL      human-in-the-loop

ICD       interface control document

ILS       integrated logistic support
IRD       interface requirement document
LRR       launch readiness review

MCR       mission closed-out review

MDD       mission description document

MDR       mission definition review

MOP       mission operations plan

MS        mission statement
ORR       operational readiness review

PDR       preliminary design review

PM&P      parts materials and processes

PMP       project management plan

PRR       preliminary requirement review

PUM       product user manual
QR        qualification review

RAMS      reliability, availability, maintainability, safety

RAR       risk assessment report
RF        radio frequency

RJF       requirement justification file
ROD       review of design
ROM/RAM   read only memory / random access memory

RTM       requirement traceability matrix
R&D       research and development
SE        system engineering

SEP       system engineering plan
SFT       system functional test
SRR       system requirement review


SVT      system validation test
TP       technology plan
TRA      technology readiness assessment
TRL      technology readiness level

TRSL     technology readiness status list
TS       technical requirements specification
UM       user manual

VCD      verification control document
VP       verification plan

w.r.t.   with respect to


                 Overview of system engineering

## 4.1 The system engineering discipline
             System engineering is an interdisciplinary approach governing the total
             technical effort to transform requirements into a system solution.
             A system is an integrated set of elements to accomplish a defined objective.
             These elements include hardware, software, firmware, human resources,
             information, techniques, facilities services, and other support elements.
             In this standard the concept of “system” is used in a wide sense. The highest
             level, often called “mission level” or “space system”, consists usually of one (or
             more) space segment(s), of a ground segment, and of a user segment. Elements
             of system decomposition are also considered a system. For the purpose of this
             standard the system can be any element at any level of decomposition as
             defined by the function tree (see Annex H) or the product tree (see ECSS-M-ST-
10 Annex B). The scope of an element can include hardware, software,
             procedures, man-in-the-loop, facilities and services.
             From the perspective of the considered system, requirements originate from the
             next upper level (the customer) and elements are procured from the next lower
             level (the suppliers).
                            NOTE 1     The customer-supplier model is described in
                            NOTE 2     Through this standard the notion of customer
                                       refers to several actors ,in relation to the project
                                       phase. In fact a customer can be e.g. a scientific
                                       community in phase 0, a commercial user in
                                       phase A or an Agency in phase B. A supplier can
                                       on the other hand be an Agency in both phase 0
                                       and phase A.
             Figure 4-1 shows the boundaries of system engineering (for which the indicated
             interactions between the identified major disciplines is not exhaustive but
             indicative), its relationship with production, operations, product assurance and
             management disciplines (and their cross-interaction is indicated as “interface
             areas” in the figure) and its internal partition into the following system
             engineering sub-functions:
             - requirement engineering, which consist on requirement analysis and
                   validation, requirement allocation, and requirement maintenance;


- analysis, which is performed for the purpose of resolving requirements
      conflicts, decomposing and allocating requirements during functional
      analysis, assessing system effectiveness (including analysing risk factors);
      and complementing testing evaluation and providing trade studies for
      assessing effectiveness, risk, cost and planning;
- design and configuration which results in a physical architecture, and its
      complete system functional, physical and software characteristics;
- verification, which objective is to demonstrate that the deliverables
      conform to the specified requirements, including qualification and
      acceptance;
- system engineering integration and control, coordinating the various
      engineering disciplines and participants throughout all the project
      phases.
Figure 4-2 shows system engineering sub-functions, their inter-relationships
and their main activities during the system engineering process.
System engineering sub-functions are applied in an iterative mode during
implementation of the system engineering process described in clause 4.2.
Within the frame of a project, the system engineering function is generally
implemented by a system engineering organisation of the supplier which is in
charge of transforming the requirements of the customer into a system solution
delivered by the supplier. For the purpose of this standard, the ‘system
engineering function’ only is referred to in the normative statements,
independent of whether the supplier has a formal ‘system engineering
organisation’ or not.
              NOTE       With respect to the next lower level, the
                         supplier plays the role of the customer.


                                                                                                                                                Management
                                                                                                                      - Cost
                                                                                                                      - Planning
                                                                                                                      - Configuration control
                                                                                                                      - Procurement
                                                                                                                      - Information
                                                                                                                      - Documentation
                                                                                                                      - Schedule


                                                                                                    SYSTEM ENGINEERING INTEGRATION AND CONTROL                             - Product
                                                                                                                                                                             assurance
                                                                                                                                                                           - Dependability
                                                                                                                                                                           - Verification
                                                                                                                          ANALYSIS                                         - Procurement
                                                                        - Development
                                                                        - AIT                                                                                              - Criticality
                                                                                                                                                                             analysis
                                                                                            REQUIREMENTS                                            DESIGN AND             - PM&P
                                                                                             ENGINEERING                                           CONFIGURATION           - Safety
                                                                                                                                                                           - EEE component
                                                                                                                                                                           - SW PA
                                                                                                                VERIFICATION & VALIDATION


                                                                                                                                                               SYSTEM
                                                                                                                                                             ENGINEERING
                                                                                                                    - Operations Engineering
                                                                                                                    - Operations Verification
                                                                                                                    - Logistic Analysis

                                                                    Production
                                                                                                                                                                                    Product
                                                                                                                                    Operations and Logistics                      Assurance


     Figure 4-1: System engineering, sub-functions and boundaries
                                                                                 = System Engineering Scope                   = Other Programme Disciplines                = Interface Area

                                                                      AIT = assembly, integration and test  SW PA = Software Product Assurance
                                                                      PM&P = parts, materials and processes


                                                                                                                                      System Engineering Data Base
                                                                                                                                            Technical Plans
                                                                                                                                   System Engineering Tools and Models
                                                                                                        Integration and Control


                                                                                                                                          System Analysis                      System Analysis


                                                                        Plans and Data
                                                                                                               System Analysis
                                                                                                                                                                                                                       Plans and Data


                                                                                         Analysis


                                                                                                                 Requirement            Functional Analysis                       Design and
                                                                          Customer input                         Engineering              and allocation                         configuration

                                                                                                         Requirement Engineering                                         Design and configuration


                                                                        Plans and Data
                                                                                                                 Requirements               Functional                             Product          Qualified product design
                                                                                                                  Verification              Verification                          Verification

                                                                                         Verification


     Figure 4-2: System engineering sub-functions inter-relationships


## 4.2 The system engineering process
            The system engineering activities of a project are conducted by an entity or
            resources within the project team of a supplier. This entity or the resources that
            perform this function is called in this document “system engineering function”.
            The system engineering process is in turn applied by each system engineering
            function of each supplier of the elements of the product decomposition.
            The system engineering process consists of activities to be performed by the
            system engineering function within each project phase according to the
            designated lifecycle model. The objective is to obtain a product which satisfies
            the customer technical requirements within pre-established objectives of cost
            time and quality. The requirements for these activities are described in clause 5.
            The system engineering process is intrinsically iterative across the whole life of
            a project, in particular in the initial phases (i.e. 0, A, and B) of the development
            of a complex system (e.g. a spacecraft), procured through a multi-layered set of
            suppliers.
            During these phases, the system engineering function derives design oriented
            technical solutions starting from the design-independent customer
            requirements contained in a technical requirements specification (TS). This is
            achieved through an iterative top-down process by trading off several design
            solutions at an increasing level of detail.
                           NOTE       For definition and requirements for a technical
                                      requirements specification see ECSS-E-ST-10-06.
            Through this process the system engineering function performs a
            multidisciplinary functional decomposition to obtain logical lower level
            products (both hardware and software). At the same time the system
            engineering function decides on balanced allocations, throughout the system, of
            resources allocated by the customer and respects agreed margin philosophies as
            a function of the relevant technology readiness levels.
            The functional decomposition defines, for each level of the system, the technical
            requirements for the procurement of subassemblies or lower level products as
            well as the requirements for the verification of the final characteristics of each
            product.
            The system engineering process uses the results of these lower level verification
            activities to build a bottom-up multi-layered evidence that the customer
            requirements have been met.
            The system engineering process is applied with various degrees of depth
            depending on the level of maturity of the product (e.g. new development or off-
            the-shelf).
            The system engineering process can be applied with different level of tailoring
            as agreed between customer and supplier in their business agreement.
            The system engineering function has interfaces with those other functions in
            charge of management, product assurance, engineering disciplines, production,
            and operations and logistics.
                           NOTE       The project phases are defined in ECSS-M-ST-10.


## 4.3 Overview of system engineering tasks per project
      phase

### 4.3.1 Overview
             The allocation of specific system engineering requirements per phase depends
             strongly on the type of business agreement established between customer and
             supplier and the nature and level of complexity of the system subject of the
             agreement. The breakdown and the details of the tasks are defined in the
             business agreement specific documents.
                           NOTE       Some projects define them in a Statement of
                                      work (SoW).
             The actors in the customer-supplier relationship change between phases and
             across levels. In the following clauses each system engineering function is
             meant to be the supplier’s system engineering function during that phase.


### 4.3.2 General
             a.    The system engineering function plans its activities in conformance with
                   the project phases as defined in the Project Management Plan in
                   accordance with ECSS-M-ST-10 and document it in the SEP as per Annex
                   D.
                           NOTE       The phases or combination thereof to be
                                      implemented for a project are specified in the
                                      business agreement.
             b.    The system engineering function monitors the execution of all system
                   engineering activities including lower levels.
             c.    The system engineering function identifies the critical items in
                   cooperation with the Product Assurance (PA) according to ECSS-Q-ST-10
                   (PA being tasked to manage the critical items throughout the project life).
             d.    The system engineering function ensures that for critical items the
                   technical requirements specification, the design definition file and the
                   design justification file are available at latest by end of Phase B .
                           NOTE       Information regarding the expected delivery of
                                      system engineering documents for each project
                                      review is provided in 7.
                                      The documents to be approved by the customer
                                      as well as the time of their approval are listed in
                                      the business agreement.
             e.    The system engineering function activities need to be aligned with
                   Product Assurance (PA) activities according to ECSS-Q-ST-10 throughout
                   the project life. This includes definition and execution of tasks in which
                   PA activities are involved (detailed in the Product Assurance Plan).


### 4.3.3 Phase 0 Overview: Mission analysis-need
           identification
a.   For Phase 0, the system engineering function
     1.    supports the identification of customer needs.
     2.    proposes possible system concepts.
     3.    supports the Mission Definition Review (MDR) and ensures
           implementation of the MDR actions.
     4.    performs an analysis of the Mission Statement document, and
           integrates this analysis and any relevant contribution from lower
           level suppliers in to a Mission Description document(s) in
           conformance with Annex B, and maintains this latter document for
           the final selected concept.
     5.    proposes the requirements against the expressed user needs for
           agreement with the customer.
             NOTE       Mission Statement captures the declared “user
                        needs”.


### 4.3.4 Phase A Overview: Feasibility
a.   For Phase A, the system engineering function
     1.    finalises the expression of the needs identified in Phase 0.
     2.    proposes system solutions (including identification of critical items
           and risks) to meet the customer needs.
     3.    supports the Preliminary Requirement Review (PRR) and ensure
           implementation of PRR actions.
     4.    finalises the validation of the requirements against the expressed
           needs together with the customer.
             NOTE       Mission Statement captures the declared “user
                        needs”.


### 4.3.5 Phase B Overview: Preliminary definition
a.   For Phase B, the system engineering function
     1.    establishes the system preliminary definition for the system
           solution selected at end of Phase A.
     2.    demonstrates that the solution meets the technical requirements
           according to the schedule, the target cost and the customer
           requirements.
     3.    supports the System Requirements Review (SRR) and Preliminary
           Design Review (PDR), and ensuring implementation of the SRR
           and PDR actions.
     4.    define development approach and plan of engineering activities.


### 4.3.6 Phase C Overview: Detailed definition
a.   For Phase C, the system engineering function
     1.    establishes the system detailed definition.
     2.    demonstrates the capability to meet the technical requirements of
           the system technical requirements specification.
     3.    supports the Critical Design Review (CDR) and ensures
           implementation of the CDR actions.


### 4.3.7 Phase D Overview : Qualification and
           production
a.   For Phase D, the system engineering function
     1.    finalizes the development of the system by qualification and
           acceptance.
     2.    finalizes the preparation for operations and utilization.
     3.    supports Qualification Review (QR) and Acceptance Review (AR)
           and ensures implementation of the QR and AR actions.


### 4.3.8 Phase E Overview: Operations / utilization
a.   For Phase E, the system engineering function
     1.    supports the launch campaign.
     2.    supports the entity in charge of the operations and utilization
           following the terms of a business agreement.
     3.    supports the Flight Readiness Review (FRR), Operations Readiness
           Review (ORR), Launch Readiness Review (LRR), Commissioning
           Results Review (CRR), End-of-Life Review (ELR), and recurring
           products AR, and ensure implementation of the actions of those
           reviews.
     4.    supports the execution of all system engineering activities and
           provision of documents in support to anomaly investigations and
           resolutions.
             NOTE       Phase E and its reviews as presented in Table
                        A-1 refer only to mission level. In case of lower
                        level product, activities to be considered by the
                        system engineering function are only related to
                        maintenance and anomaly investigations.


### 4.3.9 Phase F Overview: Disposal
a.   For Phase F, the system engineering function
     1.    supports the entity in charge of the disposal following the terms of
           a business agreement.


2.   supports the Mission Close-out Review (MCR) and ensure
     implementation of the actions of the MCR.
      NOTE     Phase F and its review as presented in Table A-
1 refer only to mission level. In case of lower
               level product, activities to be considered by the
               system engineering function are only related to
               disposal.


                                      General requirements

## 5.1 System engineering plan
            a.   The system engineering function shall produce and maintain a system
                 engineering plan (SEP) in conformance with Annex D.
                         NOTE      The system engineering function establishes the
                                   SEP with the contributions and constraints of
                                   management, product assurance, engineering
                                   disciplines, production, and operations and
                                   logistics.
            b.c.   The SEP shall take consideration of the lower level plans, ensure
                 consistency between these plans, and, be consistent with these plans.
                         NOTE 1    The early version of the Project Management
                                   Plan (PMP), which includes the early version of
                                   the SEP, contains all the information which was
                                   traditionally contained in the Design and
                                   Development Plan (DDP). See Annex R which
                                   illustrates the mapping between a typical DDP
                                   and ECSS DRDs.
                         NOTE 2    The SEP content evolves with the phase of the
                                   project, with more information on risk analysis
                                   and new technologies in early phases 0, A and
                                   B, and more information on verification and
                                   validation aspects in phases C, D.
                         NOTE 3    The SEP can be considered a collection of
                                   documents delivered over the life-cycle as
                                   illustrated in Table A-1.
                         NOTE 4    No SEP lower than equipment/unit.
            d.   The system engineering function shall support the project manager in the
                 project reviews as defined in the Project Management Plan in accordance
                 with ECSS-M-ST-10.


## 5.2 Requirement engineering

### 5.2.1 General
            a.   The system engineering function shall analyse the requirements for the
                 system issued by the customer.
                         NOTE 1     This analysis enables the transformation of
                                    customer requirements into the supplier’s
                                    system solution.
                         NOTE 2     The level of the required analysis and form of
                                    any deliverable is expressed in the business
                                    agreement.
            b.   The system engineering function shall derive, generate, control and
                 maintain the set of requirements for the lower level elements, defining
                 their design and operational constraints and the parameters of
                 functionality, performance, and verification necessary to meet the system
                 requirements issued by the customer.
            c.   The system engineering function shall ensure consistency of the
                 requirements at system level, at lower levels, as well as amongst levels.
                         NOTE       Consistency of requirements of different system
                                    engineering sub-functions at the same level is
                                    the responsibility of the higher level system
                                    engineering function.
            d.   The system engineering function shall ensure requirements generated in
                 5.2.1b. are in conformance with characteristics specified in ECSS-E-ST-10-
06 clause 8.
            e.   The system engineering function shall ensure that each requirement for
                 the lower level elements has a justification reflected in the requirement
                 justification file in conformance with Annex O.
                         NOTE       Tailoring of a standard in a list of applicable
                                    standards, or of a requirement in an applicable
                                    standard, is possible where each tailoring
                                    measure is duly justified.


### 5.2.2 Requirement traceability
            a.   The system engineering function shall ensure forward and backward
                 traceability of all requirements:
                 1.    to their sources;
                 2.    to the lower level requirements, if existing;
                 3.    to changes in the design inducing modifications of the
                       requirements;
                 4.    to their verification close-out.
                         NOTE       to item 1: Examples for sources: a higher level
                                    requirement,   an     imposed     management


                        constraint, an applicable standard          or   an
                        accepted lower level constraint.
b.   The system engineering function shall establish and maintain the
     requirements traceability matrix in conformance with Annex N.
c.   The system engineering function shall ensure that the requirement close-
     out traceability is documented in the VCD in conformance with ECSS-E-
     ST-10-02 Annex B.


### 5.2.3 Requirement engineering process

#### 5.2.3.1 Technical requirements specifications
a.   The system engineering function shall establish technical requirements
     specifications of the next lower level products consistent among them
     and with the technical specification received from the customer.
b.   The system engineering function shall ensure that the technical
     requirements specifications it establishes conform to ECSS-E-ST-10-06
     and its DRD in Annex A.
c.   The system engineering function shall establish a specification tree in
     conformance with Annex J.
             NOTE 1     Requirements common to more than one lower
                        level product can be gathered in “common”
                        technical    specifications  called   “support
                        specifications” (e.g. GDIR “General Design and
                        Interface Requirements”, environmental, test,
                        EMC requirements specifications).
             NOTE 2     Requirements for equipment level products (or
                        lower level products) can be issued in self-
                        contained specifications.
d.5.2.3.2    Requirement consolidation
a.   The system engineering function shall involve the customer in the
     consolidation of requirements by identifying and resolving incomplete,
     duplicate, ambiguous, and contradictory requirements for customer-
     issued requirements.
b.   The system engineering function shall reflect the              consolidated
     requirements in the release of the technical specifications.


#### 5.2.3.3 Requirement risk analysis
a.b.   The system engineering function shall perform the requirements analysis
     to identify impacts on system risks.


c.   As part of the risk management process implemented on the project, the
     system engineering function shall report the requirement impacts on the
     risk.
             NOTE       ECSS-M-ST-80 Annex E describes the risk
                        reporting process.


#### 5.2.3.4 Requirements verification methods
a.   The system engineering function shall ensure that for each requirement
     contained in the technical requirements specification, one or a
     combination of verification methods are identified.
             NOTE       Technical requirements specification is defined
                        in ECSS-E-ST-10-06 Annex A.
b.   The system engineering function shall ensure that for each requirement
     contained in the technical requirements specification, the verification
     methods are reflected in the verification matrix.
             NOTE       Technical requirements specification is defined
                        in ECSS-E-ST-10-06 Annex A.


#### 5.2.3.5 Requirement allocation
a.   The system engineering function shall ensure that the system
     requirements and their verification methods are allocated to lower levels
     and included in the specifications of the related products.


#### 5.2.3.6 Requirements consistency
a..
b.5.2.3.7    Requirements agreement
a.   In phase 0 the system engineering function shall propose requirements
     in response to the expressed user needs, for agreement with the
     customer.
             NOTE       ”User needs” are expressed in the Mission
                        Statement document.
             NOTE       In some contexts this activity is called
                        “requirements validation”. This terminology has
                        not been used to avoid confusion with the term
                        “validation” as defined in ECSS-S-ST-00-01.


#### 5.2.3.8 Requirements maintenance
a.   The system engineering function shall ensure that agreed changes to
     requirements are applied to and maintained in system and lower level
     specifications.
b..


#### 5.2.3.9 Requirements baseline
            a.   The system engineering function shall establish the list of documents
                 constituting the system requirements baselines in contribution to the
                 configuration baselines.
                         NOTE       Details on configuration baselines are provided
                                    in ECSS-M-ST-40.


## 5.3 Analysis

### 5.3.1 System analysis
            a.   In phase 0 the system engineering function shall perform an analysis of
                 the Mission Statement document, produce Mission Description
                 document(s) in conformance with Annex B, and maintain this latter
                 document for the final selected concept.
            b.   The system engineering function shall perform a functional analysis,
                 produce the functional architecture, and produce the function tree which
                 satisfy the customer technical requirements specification, in conformance
                 with Annex H.
            c.   The system engineering function shall document the functional
                 architecture in the design definition file (DDF) in conformance with
                 Annex G.
            d.   The system engineering function shall justify the functional architecture
                 in the DJF in conformance with Annex K.
            e.   The system engineering function shall perform a physical analysis,
                 produce the physical architecture and produce the product tree in
                 conformance with ECSS-M-ST-10 Annex B.
            f.   The system engineering function shall document              the   physical
                 architecture in the DDF in conformance with Annex G.
            g.   The system engineering function shall justify the physical architecture in
                 the DJF in conformance with Annex K.
            h.   The system engineering function shall analyse the performance of the
                 system, including end-to-end evaluation, documenting the results of the
                 analysis in the Design Justification File in conformance with Annex K.
            i.   The system engineering function shall analyse the influence of mission,
                 design, development, operations and constraints on cost and schedule as
                 an input to the project cost and schedule consolidation and to the
                 utilisation recurring cost
            j.   The system engineering function shall document analysis that it performs
                 in an analysis report.
                         NOTE       An example of an analysis report is given in
                                    Annex S.


### 5.3.2 System environments and design and test
           factors
a.   The system engineering function shall establish the influence of all types
     of environments applied during each life profile event on system and its
     elements in terms of nominal and extreme environmental conditions
     including all applicable operational phases.
b.   The system engineering function shall establish the criteria for
     qualification and acceptance in conformance with Annex K of system and
     system elements for all types of environment.
c.   The system engineering function shall ensure that analyses include
     design induced effects between system components or the system and its
     external environment and account for analysis uncertainties, in
     conformance with Annex K.
d.   The system engineering function shall establish the design and test
     factors and margins applicable for design in conformance with Annex K.
             NOTE 1     Design factors are factors applied to specified
                        loads to ensure robustness of the design.
             NOTE 2     Test factors are factors applied to specified
                        loads to demonstrate margins w.r.t. these loads
                        (e.g. qualification / acceptance factors).
e.   The system engineering function shall establish test environment
     conditions for product verification in test specifications.


### 5.3.3 Trade-off analyses
a.   The system engineering function shall conduct or consolidate trade-off
     analyses to:
     1.    assist in selecting system concepts, designs and solutions
           (including people, parts and materials availability);
     2.    support material selection and process decisions;
     3.    support make-or-buy and supplier selection;
     4.    examine alternative technologies to satisfy functional and design
           requirements;
     5.    evaluate environmental and cost impacts of materials and
           processes;
     6.    evaluate alternative physical architectures to select preferred
           products and processes;
     7.    establish the system and its configuration items;
     8.    analyze planning critical paths and propose alternatives;
     9.    select standard components, techniques, services and facilities that
           reduce system life-cycle cost;


     10.   establish model and product verification philosophy for achieving
           qualification and acceptance objectives while considering
           testability;
     11.   assess design capacity to evolve.
b.   The system engineering function shall evaluate alternative concepts,
     designs and solutions against each other in a Trade-off report in
     conformance with Annex L.
c.   The system engineering function shall document alternative system
     concepts considered during system trade-off studies in a System Concept
     Report in conformance with Annex C.


### 5.3.4 Analysis methods, tools and models
a.   The system engineering function shall define the analysis methods and
     tools to be used during the product life cycle, as well as the related
     models and data exchanges between the tools, and document these in the
     SEP in conformance with Annex D.
b.   The system engineering function shall ensure that analysis tools are
     validated.
c.   The system engineering function shall ensure that analysis tools are
     maintained.
d.   The system engineering function shall ensure that analysis tools are
     capable of exchanging and using models and data where agreed by
     customer and supplier.
             NOTE 1     For exchange of models and data, see ECSS-E-
                        TM-10-20 and ECSS-E-TM-10-21.
             NOTE 2     Exchange can be either direct or via interfaces.
e.   The system engineering function shall ensure that analysis tools are
     capable of transferring models and data for multi-disciplinary analysis
     where agreed by customer and supplier.
             NOTE 1     Details on product data exchange and system
                        modelling and simulation are provided in
                        ECSS-E-TM-10-20 and ECSS-E-TM-10-21.
             NOTE 2     Exchange can be either direct or via interfaces.
f.   The system engineering function shall ensure that models produced by
     analysis tools are validated based on documented procedures and
     results.
g.   The system engineering function shall ensure that modelling and test
     accuracy as well as limitations are considered (as part of Annex K) when
     establishing the performances and specifying environmental conditions
     for product verification.
h.   The system engineering function shall ensure that models are kept
     operational in accordance with the terms of the business agreement.


## 5.4 Design and configuration

### 5.4.1 Design

#### 5.4.1.1 General
             a.   The system engineering function shall establish a design of the system
                  from its functional architecture, requirement allocation, and technology
                  selection.
                          NOTE       This includes definition of the interfaces and
                                     corresponding ICDs.
             b.   The system engineering function shall ensure that the design addresses
                  system aspects, covering its whole lifecycle, producing the physical
                  architecture documented in conformance with Annex G and the product
                  tree in conformance with ECSS-M-ST-10 Annex B.
             c.   The system engineering function shall take into account the outcome of
                  the design and verification activities of the lower level products.
             d.   The system engineering function shall ensure that the design covers
                  hardware, software, and human-in-the-loop (HITL).
             e.   The system engineering function shall ensure that the design is
                  supported by analyses consistent with the level of maturity of the design.
             f.   The system engineering function shall coordinate with all entities for
                  design data exchange..
                          NOTE       This relates to coordination between the
                                     various functions given in Figure 4-1.


#### 5.4.1.2 Technical budgets and margin policy
             a.   The system engineering function shall define, control and maintain all
                  technical budgets of the system in conformance with Annex I in terms of
                  target, current status and their trends.
             b.   The system engineering function shall apportion and control budget
                  requirements to all levels of system decomposition.
             c.   The system engineering function shall define and apply the margin
                  policy agreed between customer and supplier in compliance with Annex
                  D.2.1<4.2>b.5.
                          NOTE       The system margin policy is defined in the SEP.


#### 5.4.1.3 Design methods, tools and models
             a.   The system engineering function shall define the design methods, tools
                  and related models to be used during the product life cycle and
                  document them in the SEP.
             b.   The system engineering function shall ensure that design tools are
                  validated and maintained.


c.   The system engineering function shall ensure that design tools are
     capable of exchanging and using design models and data where agreed
     by the customer and supplier.
d.   The system engineering function shall ensure that models       are kept
     operational in accordance with the business agreements.
e.   The system engineering function shall ensure that design models
     produced by design tools are validated.
f.   The system engineering function shall ensure that all design models are
     defined in accordance with the Coordinate System Document with
     transformation methods as defined in ECSS-E-ST-10-09.
             NOTE      Coordinate system document is delivered as
                       part of the SEP.


#### 5.4.1.4 Design files
a.   The system engineering function shall establish and maintain a design
     definition file in conformance with Annex G.
b.   The system engineering function shall establish and maintain a design
     justification file in conformance with Annex K.
c.   The system engineering function shall establish and maintain a product
     user’s manual (PUM) or user’s manual (UM) in conformance with Annex
     P.
             NOTE      In case the product considered is a space
                       segment, the Space Segment User Manual
                       defined in ECSS-E-ST-70 Annex E is generated
                       with support of the system engineering
                       function.


### 5.4.2 Configuration

#### 5.4.2.1 Configuration content
a.   The system engineering function shall ensure that the configuration
     includes the system functional, physical and software characteristics,
     budgets, and, internal and external interfaces.
b.   The system engineering function shall ensure that the configuration
     includes lower decomposition levels.
c.   The system engineering function shall ensure that the configuration is
     documented in the DDF and in configuration definition documents.
             NOTE      Details on configuration definition documents
                       are provided in ECSS-M-ST-40.


#### 5.4.2.2 Configuration baselines
a.   The system engineering function shall establish the system configuration
     baselines to be placed under control at defined project milestones.


                          NOTE       Details on system configuration baselines are
                                     provided in ECSS-M-ST-40.


#### 5.4.2.3 Configuration assembly constraints
             a.   The system engineering function shall define and document the
                  hierarchy and assembly sequence of the system elements in line with the
                  physical architecture.
             b..


## 5.5 Verification

### 5.5.1 General
             a.   The system engineering function shall define the Verification Plan in
                  accordance with ECSS-E-ST-10-02 Annex A and coordinate the product
                  verification accordingly..


### 5.5.2 Product verification
             a..
             b.   The system engineering function shall assign the product to a verification
                  product category, as defined in ECSS-E-ST-10-02 Table 5-1.
             c.   The system engineering function shall specify the configuration and
                  environment conditions for product verification and the criteria for its
                  qualification and acceptance.
             d.   The system engineering function shall confirm that all product
                  verification objectives are achieved by analysing the results of the
                  verification activities.
                          NOTE       This includes analysis of Verification Control
                                     Document and its closeout documents, as
                                     defined in ECSS-E-ST-10-02 Annex B.
             e.f.   The system engineering function shall ensure that the verification covers
                  the complete product including hardware, software, human-in-the-loop
                  (HITL), operations and representative mission scenarios (including pre-
                  launch, launch and early orbit, in-orbit, post-landing, or other mission
                  scenario).
                          NOTE 1     The testing performed during and at the end of
                                     the integration of a system is defined as System
                                     Functional Test (SFT).
                          NOTE 2     For system composed of different segments
                                     (e.g. space segment, ground segment), the
                                     testing performed to ensure operability and


                                     functionality of the complete system is defined
                                     as System Validation Test (SVT).
                          NOTE 3     System validation is performed against user
                                     needs and is typically performed under
                                     customer authority, with supplier involvement
                                     as detailed in the business agreement.


## 5.6 System engineering integration and control

### 5.6.1 Management of system engineering
                        activities
             a.   The system engineering function shall implement the SEP including
                  quantification of this effort as input to management.
             b.c.d.e..
             f.   The system engineering function shall ensure that all engineering
                  changes, dispositions and decisions are provided to project configuration
                  control in accordance with the Configuration Management Plan.
             g.   The system engineering function shall ensure that the experience gained
                  in past and in parallel activities is systematically considered and support
                  project management in the collection of experience gained for future use.


### 5.6.2 Planning
             a.   The system engineering function shall ensure that the SEP is consistent
                  with the project schedule.
                          NOTE       Details on the project schedule content are
                                     provided in ECSS-M-ST-60, in particular the
                                     DRD Annex B.


### 5.6.3 Engineering data
             a.   The system engineering function shall define the engineering data to be
                  stored in a data repository.
             b.   The system engineering function shall ensure that engineering data can
                  be exchanged in electronic form between the different organizations in
                  charge of the elements of the product decomposition levels via agreed
                  and validated interfaces.
             c.   The system engineering function shall ensure the availability of
                  engineering data to meet the schedule which enable the system to be


     designed, produced, tested, delivered, operated, maintained, and
     disposed of.


### 5.6.4 Interface control
a.   The system engineering function shall ensure external and internal
     interfaces are controlled in conformance with ECSS-E-ST-10-24.
             NOTE 1     The control of the external interfaces is
                        performed in cooperation with the parties
                        involved in the interface.
             NOTE 2     Interface requirements are rolled-out of the
                        technical specification as interface requirements
                        documents
b.c..


### 5.6.5 Coordinate systems and units
a.   The system engineering function shall define the coordinate systems and
     related coordinate units in the Coordinate System Document conforming
     to DRD ECSS-E-ST-10-09 Annex A.
b.   The system engineering function shall define the units system to be used
     during the product life cycle and document it in the SEP.
             NOTE       For example; the unit system being selected as
                        "metric".


### 5.6.6 Technical budgets and margin policy
a..
b.5.6.7      Technology
a.   The system engineering function shall identify candidate technologies,
     and document them in the Technology Matrix in conformance with
     Annex F.
b.   The technologies proposed shall be assessed and verified in terms of TRL
     levels, defined in ECSS-E-AS-11, and documented in the Technology Plan
     in conformance with Annex E.
             NOTE       For assessing and verifying technologies, the
                        process described in ECSS-E-HB-11 “TRL
                        Handbook” can be used.
c.   The system engineering function shall demonstrate supportability and
     feasibility within the defined supplier’s cost and schedule constraints.


d.   The Technology Readiness Status List (TRSL) shall be completed and
     provided to the customer for Phase 0 in conformance with Annex
     E.2.1<5>.
e.   The Technology Readiness Status List (TRSL) of the programme
     technologies shall be maintained and provided to the customer at Phase
     A and B project reviews
f.   The TRSL specified in Annex E.2.1<5> shall be developed by the system
     engineering team with the support of the PA manager.
g.   The items identified in the TRSL shall be assessed at Phase B for inclusion
     and tracking in the Critical Items List
             NOTE        The TRSL and the processes of transferring
                         technologies to the Critical Item List is captured
                         in ECSS-E-HB-11.


### 5.6.8 Risk management
a.   The system engineering function shall contribute to the identification of
     risks and mitigation measures.
             NOTE        Details on risk management are provided in
b..
c.   The system engineering function shall implement and control the content
     of the risk management plan which is within system engineering
     responsibility.


### 5.6.9 Changes and nonconformances control
a.   The system engineering function shall provide a technical assessment on
     any change proposal to the baseline of the product.
b.   The system engineering function shall provide a technical assessment on
     any nonconformance to the status of the product.
             NOTE        Nonconformance treatment is described by
c.   The system engineering function shall implement and control agreed
     actions assigned to it, arising from change proposals and
     nonconformances.
             NOTE 1      Change is related to a request for deviation.
             NOTE 2      Nonconformance is related to a request for
                         waiver.
             NOTE 3      The change procedure/control is defined as part
                         of the configuration management as defined inPre-tailoring matrix per space product
                                 types

    The Matrix of Table 7-2 presents the pre-tailoring of this ECSS Standard per
    space product type.
    For the terminology and definitions of the space product types see ECSS-S-ST-
    00-01.
                  NOTE      “Ground segment equipment” is not to be
                            confused with “Ground support equipment”.
    throughout the whole Space System development. This includes, along with
    Space Segment, also Ground Segment and Operations.
    Yet, specific standards detail the Engineering process both for SW and for
    Ground Segment and Operations. The following standards are considered fully
    sufficient for development of these items:
    - ECSS-E-ST-70 Space engineering - Ground systems and operations
    - ECSS-E-ST-40 Space engineering - Software
    - ECSS-Q-ST-80 Space product assurance - Software product assurance
    Thus, in the above applicability table, the columns for SW and Ground are
    stated as not applicable, i.e. “-”.


                Table 7-1: Definitions of the columns of Table 7-2
 Column title                                          Description
Applicability   There are nine product types, one per column.
status          For each product type the possible values for each requirement are:
                  X      when applicable
                  -      when not applicable
                  //     when pre-tailoring applicability not definable - to be determined during
                         tailoring
                  >>     the requirement is applicable to a lower product type. Responsibility of
                         tailoring (if needed) resides with the customer of this lower product type


                  X#     when requirement is applicable except in a specific case - the criteria for
                         being “not applicable” are defined in the Comments column
                  //#    when pre-tailoring applicability not definable -- however supplementary
                         indications regarding applicability in the tailoring are given in the
                         Comments column
                         NOTE     "#” is a number to uniquely identify every comment in the same row.
                A requirement is considered applicable for a product type if it is verified on this
                product type.
Comments        The column “Comments”
                 - provides information on the limitation of applicability -- it provides
                        clarification on the limited and specific conditions for the applicability of the
                        requirement.
                 - is not used to modify a requirement.


                                              Table 7-2: Pre-tailoring matrix per “Space product types”
                      Space                 Launch                Ground
                    segment      Space     segment     Launch     segment     Ground      Ground
  ECSS      Space
                    element     segment    element     segment    element     segment     support    Software                                  Comments
  req. #   system
                    and sub-   equipment   and sub-   equipment   and sub-   equipment   equipment
                     system                 system                 system
1 applicable at element level: for subsystem level - see 2

2 applicability should be defined/tailored at each level for next lower
5.1a         X         X1         //2         //2         -          -           -           -          -
                                                                                                                level, depending on product heritage, engineering complexity and
                                                                                                                industrialization context.
1 applicable at element level: for subsystem level - see 2

2 applicability should be defined/tailored at each level for next lower
5.1c         X         X1          -          //2         -          -           -           -          -
                                                                                                                level, depending on product heritage, engineering complexity and
                                                                                                                industrialization context.
1 applicable at element level: for subsystem level - see 2

2 applicability should be defined/tailored at each level for next lower
5.1d         X         X1         //2         //2         -          -           -           -          -
                                                                                                                level, depending on product heritage, engineering complexity and
                                                                                                                industrialization context.

5.2.1a       X         X          X           X           -          -           -           -          -
1 not applicable in case of no lower level elements in scope of
5.2.1b       X         X          X1          X           -          -           -           -          -
                                                                                                                engineering responsibility of supplier.
1 not applicable in case of no lower level elements in scope of
5.2.1c       X         X          X1          X           -          -           -           -          -
                                                                                                                responsibility of supplier.

5.2.1d       X         //1        //1         //1         -          -           -           -          -       1 depending on the applicability of ECSS-E-ST-10-06 clause 8.


1 applicability defined/tailored at each level for next lower level

5.2.1e       X         X          //1         X          //1         -           -           -          -       depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.
1 5.2.2a.1 not applicable in the case of upper level traceability

5.2.2a       X         X          X1          X           -          -           -           -          -       provided by the upper layer; 5.2.2a.2 not applicable in the case of no
                                                                                                                lower level requirements.
1 not applicable in case of no lower level components in scope of
5.2.2b       X         X          X1          X           -          -           -           -          -
                                                                                                                engineering responsibility of supplier

5.2.2c       X         X          X           X           -          -           -           -          -


                      Space                 Launch                Ground
                    segment      Space     segment     Launch     segment     Ground      Ground
  ECSS      Space
                    element     segment    element     segment    element     segment     support    Software                                  Comments
  req. #   system
                    and sub-   equipment   and sub-   equipment   and sub-   equipment   equipment
                     system                 system                 system
1 not applicable in case of no lower level elements in scope of
5.2.3.1a     X         X          X1          X           -          -           -           -          -
                                                                                                                engineering responsibility of supplier
1 applicable for new specifications developed by the equipment

                                                                                                                supplier in direct response to higher level ones in the contractual
5.2.3.1b     X         X          X1          //          -          -           -           -          -       chain where the ECSS-E-ST-10-06 and Annex A are applicable. Not
                                                                                                                applicable where existing specifications developed from a different
                                                                                                                heritage or modifications thereof are deemed adequate.
1 not applicable in case of no lower level elements in scope of
5.2.3.1c     X         X          X1          X          X1          -           -           -          -
                                                                                                                engineering responsibility of supplier.
1 applicability defined/tailored at each level for next lower level

5.2.3.2a     X         X          //1         X          //1         -           -           -          -       depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.
1 applicability defined/tailored at each level for next lower level

5.2.3.2b     X         X          //1         X          //1         -           -           -          -       depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.
1 applicability defined/tailored at each level for next lower level

5.2.3.3b     X         X          //1         X          //1         -           -           -          -       depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.
1 applicability defined/tailored at each level for next lower level

5.2.3.3c     X         X          //1         X          //1         -           -           -          -       depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.
1 applicability defined/tailored at each level for next lower level

5.2.3.4a     X         X          //1         X          //1         -           -           -          -       depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.
1 applicability defined/tailored at each level for next lower level

5.2.3.4b     X         X          //1         X          //1         -           -           -          -       depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.


                      Space                 Launch                Ground
                    segment      Space     segment     Launch     segment     Ground      Ground
  ECSS      Space
                    element     segment    element     segment    element     segment     support    Software                                  Comments
  req. #   system
                    and sub-   equipment   and sub-   equipment   and sub-   equipment   equipment
                     system                 system                 system
1 not applicable in case of no lower level elements in scope of

                                                                                                                engineering responsibility of supplier
5.2.3.5a     X         X          X1          //         //2         -           -           -          -       2 applicability defined/tailored at each level for next lower level

                                                                                                                depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.

5.2.3.7a     X         //          -          //          -                                  -          -
1 lower levels specifications implementation, not applicable in case of

5.2.3.8a     X         X          //1         X          //1         -           -           -          -       no lower level elements in scope of engineering responsibility of
                                                                                                                supplier.
1 applicability defined/tailored at each level for next lower level

                                                                                                                depending on product heritage, engineering complexity and
5.2.3.9a     X         X          //1         X          //1         -           -           -          -       industrialisation context.
1 applicable at element level, for sub-system level - and applicability

                                                                                                                defined/tailored at each level for next lower level depending on
5.3.1a       X         -           -          //1         -          -           -           -          -
                                                                                                                product heritage, engineering complexity and industrialisation
                                                                                                                context.
1 applicable at element level,: for sub-system level - see 2

2 applicability defined/tailored at each level for next lower level
5.3.1b       X         X1         //2         X1         //2         -           -           -          -
                                                                                                                depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.
1 applicable at element level, for sub-system level - see 2

2 applicability defined/tailored at each level for next lower level
5.3.1c       X         X          //2         X1         //2         -           -           -          -
                                                                                                                depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.
1 applicable at element level, for sub-system level - see 2

2 applicability defined/tailored at each level for next lower level
5.3.1d       X         X          //2         X1         //2         -           -           -          -
                                                                                                                depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.


                      Space                 Launch                Ground
                    segment      Space     segment     Launch     segment     Ground      Ground
  ECSS      Space
                    element     segment    element     segment    element     segment     support    Software                                  Comments
  req. #   system
                    and sub-   equipment   and sub-   equipment   and sub-   equipment   equipment
                     system                 system                 system
1 applicability defined/tailored at each level for next lower level

5.3.1e       X         //1        //1         //1        //1         -           -           -          -       depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.
1 applicable at element level, for sub-system level - see 2

2 applicability defined/tailored at each level for next lower level
5.3.1f       X         X          //2         X1         //2         -           -           -          -
                                                                                                                depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.
1 applicable at element level, // for sub-system level- see 2

2 applicability defined/tailored at each level for next lower level
5.3.1g       X         X          //2         X1         //2         -           -           -          -
                                                                                                                depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.
1 applicable at element level, for sub-system level - see 2

2 applicability defined/tailored at each level for next lower level
5.3.1h       X         X          //2         X1         //2         -           -           -          -
                                                                                                                depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.
1 applicable at element level, for sub-system level - and applicability

                                                                                                                defined/tailored at each level for next lower level depending on
5.3.1i       X         //1         -          //1         -          -           -           -          -
                                                                                                                product heritage, engineering complexity and industrialisation
                                                                                                                context.
1 Depending on the scope of the analysis other more detailed
5.3.1j       X1        X1         X1          X           -          -           -           -          -
                                                                                                                standards are used in place of Annex Q.
1 applicable at element level, // for sub-system level - see 2

2 defined by the upper level and made applicable directly,

5.3.2a       X         X          //2         X1          -          -           -           -          -       applicability defined/tailored at each level for next lower level
                                                                                                                depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.
1 defined by the upper level and made applicable directly,

                                                                                                                applicability defined/tailored at each level for next lower level
5.3.2b       X         X          //1         //          -          -           -           -          -
                                                                                                                depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.


                      Space                 Launch                Ground
                    segment      Space     segment     Launch     segment     Ground      Ground
  ECSS      Space
                    element     segment    element     segment    element     segment     support    Software                                  Comments
  req. #   system
                    and sub-   equipment   and sub-   equipment   and sub-   equipment   equipment
                     system                 system                 system
1 depending on the scope of the analysis other more detailed
5.3.2c       X1        X1         X1          //          -          -           -           -          -
                                                                                                                standards are used in place of Annex K.
1 applicability defined/tailored at each level for next lower level

5.3.2d       X         X          //1         //          -          -           -           -          -       depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.
1 applicable at element level, for sub-system level - see 2

2 applicability defined/tailored at each level for next lower level
5.3.2e       X         X          //2         X1          -          -           -           -          -
                                                                                                                depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.
1 applicable at element level, for sub-system level - see 2

2 applicability defined/tailored at each level for next lower level
5.3.3a       X         X          //2         X1          -          -           -           -          -
                                                                                                                depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.
1 applicable at element level, for sub-system level -- see 2

2 applicability defined/tailored at each level for next lower level
5.3.3b       X         X          //2         X1         //2         -           -           -          -
                                                                                                                depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.
1 applicable at element level, for sub-system level - and applicability

                                                                                                                defined/tailored at each level for next lower level depending on
5.3.3c       X         X           -          //1         -          -           -           -          -
                                                                                                                product heritage, engineering complexity and industrialisation
                                                                                                                context.
1 applicability should be defined/tailored at each level for next lower

5.3.4a       X         //1        //1         //1         -          -           -           -          -       level, depending on product heritage, engineering complexity and
                                                                                                                industrialization context.
1 during tailoring, consider whether other more detailed standards
5.3.4b       X         //1        //1         //1         -          -           -           -          -
                                                                                                                already cover this point for specific domains.
1 during tailoring, consider the specific need for maintenance and

5.3.4c       X         //1        //1         //1         -          -           -           -          -       whether other more detailed standards already cover this point for
                                                                                                                specific domains.


                      Space                 Launch                Ground
                    segment      Space     segment     Launch     segment     Ground      Ground
  ECSS      Space
                    element     segment    element     segment    element     segment     support    Software                                  Comments
  req. #   system
                    and sub-   equipment   and sub-   equipment   and sub-   equipment   equipment
                     system                 system                 system
1 during tailoring, consider both the specific need for exchange and

5.3.4d       X         //1        //1         //1         -          -           -           -          -       whether other more detailed standards already cover this point for
                                                                                                                specific domains.
1 during tailoring, consider both the specific need for exchange and

5.3.4e       X         //1        //1         //1         -          -           -           -          -       whether other more detailed standards already cover this point for
                                                                                                                specific domains.
1 during tailoring, consider whether other more detailed standards
5.3.4f       X         //1        //1         //1         -          -           -           -          -
                                                                                                                already cover this point for specific domains.
1 applicable at element level, for sub-system level - see 2

2 applicability defined/tailored at each level for next lower level
5.3.4g       X         X          //2         X1          -          -           -           -          -
                                                                                                                depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.
1 applicable at element level, for sub-system level - see 2

2 applicability defined/tailored at each level for next lower level
5.3.4h       X         X          //2         X1          -          -           -           -          -
                                                                                                                depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.
1 applicable at element level, for sub-system level - see 2

2 applicability defined/tailored at each level for next lower level
5.4.1.1a     X         X          //2         X1          -          -           -           -          -
                                                                                                                depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.
1 applicable at element level, for sub-system level - see 2

2 applicability defined/tailored at each level for next lower level
5.4.1.1b     X         X          //2         X1         //2         -           -           -          -
                                                                                                                depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.
1 not applicable in case of no lower level elements in scope of
5.4.1.1c     X         X          X1          X           -          -           -           -          -
                                                                                                                engineering responsibility of supplier.
1 during tailoring, consider whether other more detailed standards
5.4.1.1d     X         //1        //1         //1         -          -           -           -          -
                                                                                                                already cover this point for specific domains.


                      Space                 Launch                Ground
                    segment      Space     segment     Launch     segment     Ground      Ground
  ECSS      Space
                    element     segment    element     segment    element     segment     support    Software                                  Comments
  req. #   system
                    and sub-   equipment   and sub-   equipment   and sub-   equipment   equipment
                     system                 system                 system
1 during tailoring, consider whether other more detailed standards
5.4.1.1e     X         //1        //1         //1         -          -           -           -          -
                                                                                                                already cover this point for specific domains.
1 applicable at element level, for sub-system level - see 2

2 applicability defined/tailored at each level for next lower level
5.4.1.1f     X         X          //2         X1          -          -           -           -          -
                                                                                                                depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.

5.4.1.2a     X         X          X           X           -          -           -           -          -
1 not applicable in case of no lower level elements in scope of
5.4.1.2b     X         X          X1          //          -          -           -           -          -
                                                                                                                engineering responsibility of supplier.

5.4.1.2c     X         X          X           X           -          -           -           -          -
1 applicable at element level, for subsystem level - see 2

2 applicability should be defined/tailored at each level for next lower
5.4.1.3a     X         X1         //2         //2         -          -           -           -          -
                                                                                                                level, depending on product heritage, engineering complexity and
                                                                                                                industrialization context.
1 during tailoring, consider the specific need and whether other more
5.4.1.3b     X         //1        //1         //1         -          -           -           -          -
                                                                                                                detailed standards already cover this point for specific domains.
1 during tailoring, consider both the specific need for exchange and

5.4.1.3c     X         //1        //1         //1         -          -           -           -          -       whether other more detailed standards already cover this point for
                                                                                                                specific domains.
1 applicable at element level, for sub-system level - see 2

2 applicability defined/tailored at each level for next lower level
5.4.1.3d     X         X1         //2         //          -          -           -           -          -
                                                                                                                depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.
1 during tailoring, consider the specific need and whether other more
5.4.1.3e     X         //1        //1         //1         -          -           -           -          -
                                                                                                                detailed standards already cover this point for specific domains.
1 applicable at element level, for sub-system level - see 2

2 applicability defined/tailored at each level for next lower level
5.4.1.3f     X         X1         //2         //          -          -           -           -          -
                                                                                                                depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.


                      Space                 Launch                Ground
                    segment      Space     segment     Launch     segment     Ground      Ground
  ECSS      Space
                    element     segment    element     segment    element     segment     support    Software                                  Comments
  req. #   system
                    and sub-   equipment   and sub-   equipment   and sub-   equipment   equipment
                     system                 system                 system
1 applicability defined/tailored at each level for next lower level

5.4.1.4a     X         X          //1         //          -          -           -           -          -       depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.
1 applicability defined/tailored at each level for next lower level

5.4.1.4b     X         X          //1         //          -          -           -           -          -       depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.

5.4.1.4c     -         X          X1          //          -          -           -           -          -       1 during tailoring, Annex P contents are   also tailored to fit the need.
1 during tailoring, other configuration management standards called

5.4.2.1a     X         X          //1         X           -          -           -           -          -       by the business agreement when considered fully sufficient to
                                                                                                                suppress the applicability at this level.
1 not applicable in case of no lower level elements in scope of
5.4.2.1b     X         X          X1          X           -          -           -           -          -
                                                                                                                engineering responsibility of supplier.
1 applicability defined/tailored at each level for next lower level

5.4.2.1c     X         X          //1         X           -          -           -           -          -       depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.
1 during tailoring, other configuration management standards called

5.4.2.2a     X         X          //1         X           -          -           -           -          -       by the business agreement when considered fully sufficient to
                                                                                                                suppress the applicability at this level.
1 during tailoring, other configuration management standards called

5.4.2.3a     X         X          //1         X           -          -           -           -          -       by the business agreement when considered fully sufficient to
                                                                                                                suppress the applicability at this level.

5.5.1a       X         X          X           //          -          -           -           -          -

5.5.2b       X         X          X           //          -          -           -           -          -
1 applicable at element level, for sub-system level - see 2

2 applicability defined/tailored at each level for next lower level
5.5.2c       X         X1         //2         //2         -          -           -           -          -
                                                                                                                depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.

5.5.2d       X         X          X           X           -          -           -           -          -


                      Space                 Launch                Ground
                    segment      Space     segment     Launch     segment     Ground      Ground
  ECSS      Space
                    element     segment    element     segment    element     segment     support    Software                                    Comments
  req. #   system
                    and sub-   equipment   and sub-   equipment   and sub-   equipment   equipment
                     system                 system                 system
1 applicable at element level, for subsystem level - see 2


5.5.2f       X         X1         //2         //2         -          -           -           -          -       2 applicability can be suppressed where adequately covered by other

                                                                                                                requirements e.g. ECSS-E-ST-10-03 and the TS and the SOW.
1 applicable at element level, for sub-system level - see 2

2 applicability defined/tailored at each level for next lower level
5.6.1a       X         X1         //2         //2         -          -           -           -          -
                                                                                                                depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.
1 applicable at element level,   for sub-system level - see 2
2 applicability defined/tailored at each level for next lower level
5.6.1f       X         X          //2         X1          -          -           -           -          -
                                                                                                                depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.
1 applicable at element level,   for sub-system level - see 2
2 applicability defined/tailored at each level for next lower level
5.6.1g       X         X          //2         X1          -          -           -           -          -
                                                                                                                depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.
1 applicable at element level, for sub-system level - see 2

2 applicability defined/tailored at each level for next lower level
5.6.2a       X         X1         //2         //2         -          -           -           -          -
                                                                                                                depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.
1 applicable at element level, for sub-system level - see 2

2 applicability defined/tailored at each level for next lower level
5.6.3a       X         X1         //2         //2         -          -           -           -          -
                                                                                                                depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.
1 applicable at element level, for sub-system level - see 2

2 applicability defined/tailored at each level for next lower level
5.6.3b       X         X1         //2         //2         -          -           -           -          -
                                                                                                                depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.


                      Space                 Launch                Ground
                    segment      Space     segment     Launch     segment     Ground      Ground
  ECSS      Space
                    element     segment    element     segment    element     segment     support    Software                                  Comments
  req. #   system
                    and sub-   equipment   and sub-   equipment   and sub-   equipment   equipment
                     system                 system                 system
1 applicable at element level, for sub-system level - see 2

2 applicability defined/tailored at each level for next lower level
5.6.3c       X         X1         //2         //2         -          -           -           -          -
                                                                                                                depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.

5.6.4a       X         X          X1          X           -          -           -           -          -       1 for ECSS-E-ST-10-06 Annex A also see pre-tailoring of 5.2.3.1b


1 applicable at element level, for sub-system level - see 2

2 applicability defined/tailored at each level for next lower level
5.6.5a       X         X1         //2         //2         -          -           -           -          -
                                                                                                                depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.
                                                                                                                1applicable at element level, for sub-system level - see 2

2 applicability defined/tailored at each level for next lower level
5.6.5b       X         X1         //2         //2         -          -           -           -          -
                                                                                                                depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.

5.6.7a       X         X          X           X          X           -           -           -          -

5.6.7b       X         X          X           X          X           -           -           -          -

5.6.7c       X         X          X           X          X           -           -           -          -

5.6.7d       X         X          X           X          X           -           -           -          -

5.6.7e       X         X          X           X          X           -           -           -          -

5.6.7f       X         X          X           X          X           -           -           -          -

5.6.7g       X         X          X           X          X           -           -           -          -
1 applicability defined/tailored at each level for next lower level

5.6.8a       X         X          //1         X           -          -           -           -          -       depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.
1 applicable at element level, for sub-system level - see 2

2 applicability defined/tailored at each level for next lower level
5.6.8c       X         X1         //2         //2         -          -           -           -          -
                                                                                                                depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.


                      Space                 Launch                Ground
                    segment      Space     segment     Launch     segment     Ground      Ground
  ECSS      Space
                    element     segment    element     segment    element     segment     support    Software                                    Comments
  req. #   system
                    and sub-   equipment   and sub-   equipment   and sub-   equipment   equipment
                     system                 system                 system
1 during tailoring, consider whether this requirement is superfluous
5.6.9a       X         X          //1         X           -          -           -           -          -
                                                                                                                to existing measures e.g. PA plan, RFD/RFW templates
1 during tailoring, consider whether this requirement is superfluous
5.6.9b       X         X          //1         X           -          -           -           -          -
                                                                                                                to existing measures e.g. PA plan, RFD/RFW templates
1 during tailoring, consider whether this requirement is superfluous
5.6.9c       X         X          //1         X           -          -           -           -          -
                                                                                                                to existing measures e.g. PA plan, RFD/RFW templates

Annex B      X         -           -          -           -          -           -           -          -
1 applicable at element level, for sub-system level - and applicability

                                                                                                                defined/tailored at each level for next lower level depending on
Annex C      X        //1          -          //1         -          -           -           -          -
                                                                                                                product heritage, engineering complexity and industrialisation
                                                                                                                context.
1 applicability should be defined/tailored at each level for next lower

Annex D      X        //1         //1         //1         -          -           -           -          -       level, depending on product heritage, engineering complexity and
                                                                                                                industrialization context.
1 depending on product heritage, engineering complexity and
Annex E      X         X          //1         X          //1         -           -           -          -
                                                                                                                industrialization context.
1 depending on product heritage, engineering complexity and
Annex F      X         X          //1         X          //1         -           -           -          -
                                                                                                                industrialization context.
1 applicable at element level,   for sub-system level - see 2
2 applicability defined/tailored at each level for next lower level
Annex G      X         X          //2         X1         //1         -           -           -          -
                                                                                                                depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.
1 applicable at element level,   for sub-system level - see 2
2 applicability defined/tailored at each level for next lower level
Annex H      X         X1         //2         X1         //2         -           -           -          -
                                                                                                                depending on product heritage, engineering complexity and
                                                                                                                industrialisation context.

Annex I      X         X          X           X           -          -           -           -          -


                     Space                 Launch                Ground
                   segment      Space     segment     Launch     segment     Ground      Ground
 ECSS      Space
                   element     segment    element     segment    element     segment     support    Software                                    Comments
 req. #   system
                   and sub-   equipment   and sub-   equipment   and sub-   equipment   equipment
                    system                 system                 system
1 not applicable in case of no lower level elements in scope of
Annex J     X         X          X1          X          X1          -           -           -          -
                                                                                                               engineering responsibility of supplier.
1 applicable at element level,   for sub-system level - see 2
2 applicability defined/tailored at each level for next lower level
Annex K     X         X          //2         X1         //2         -           -           -          -
                                                                                                               depending on product heritage, engineering complexity and
                                                                                                               industrialisation context.
1 applicable at element level,   for sub-system level - see 2
2 applicability defined/tailored at each level for next lower level
Annex L     X         X          //2         X1         //2         -           -           -          -
                                                                                                               depending on product heritage, engineering complexity and
                                                                                                               industrialisation context.
1 not applicable in case of no lower level components in scope of
Annex N     X         X          X1          X           -          -           -           -          -
                                                                                                               engineering responsibility of supplier.
1 applicability defined/tailored at each level for next lower level

Annex O     X         X          //1         X           -          -           -           -          -       depending on product heritage, engineering complexity and
                                                                                                               industrialisation context.

Annex P     -         X          //          X           -          -           -           -          -


                 Annex A (informative)
System engineering documents delivery
                            per review

      Scope of the Table A-1 is to indicate the relationship of documents associated to
      engineering activities which support project review objectives as specified in
                    NOTE       This table constitutes a first indication for the
                               data package content at various reviews. The
                               full content of such data package is established
                               as part of the business agreement, which also
                               defines the delivery of the document between
                               reviews.
      The table lists the documents generated by the engineering organization
      necessary for the project reviews (identified by “X”), except for verification
      documents, which are identified in Table G-1 of ECSS-E-ST-10-02.
      The various crosses in a row indicate the expected progressive increased levels
      of maturity versus reviews. The last cross in a row indicates that at that review
      the document is expected to be completed and finalized.
      For the SEP, DDF and DJF, the line entries of these documents which are not
      identified by a “X” in the table are not expected to be delivered for the quoted
      review.
                    NOTE       All documents, even when not marked as
                               deliverables in Table A-1, are expected to be
                               available and maintained under configuration
                               management as per ECSS-M-ST-40 (e.g. to
                               allow for backtracking in case of changes).


                                                                   Table A-1: System engineering deliverable documents

    Document title         ECSS document     DRD ref.   MDR   PRR      SRR    PDR    CDR    QR     AR     ORR    FRR     LRR     CRR    ELR   MCR

Mission description
document


Specifications
Preliminary technical
requirements               ECSS-E-ST-10-06   Annex A     X     X
specification
Technical requirements
specification
Interface requirements
document


System engineering plan    ECSS-E-ST-10      Annex D     X     X        X      X      X      X      X

Technology plan            ECSS-E-ST-10      Annex E           X        X      X

Technology Readiness
Status List

Technology matrix          ECSS-E-ST-10      Annex F           X        X      X

Verification plan          ECSS-E-ST-10-02   Annex A           X        X      X      X      X      X

AIT QM/FM plan             ECSS-E-ST-10-03   Annex A                           X      X      X      X

Space debris mitigation
                           ECSS-U-AS-10                  X     X        X      X      X      X      X      X      X       X              X      X
plan
Other related plans
(as called in ECSS-E-ST-   ECSS-E-ST-10      Annex D           X        X      X      X      X      X
10 Annex D)
Coordinate system
document


    Document title           ECSS document     DRD ref.   MDR   PRR    SRR    PDR    CDR   QR   AR   ORR   FRR   LRR     CRR    ELR   MCR

Design definition file       ECSS-E-ST-10      Annex G           X      X      X      X    X

Function tree                ECSS-E-ST-10      Annex H           X      X      X

Product tree                 ECSS-M-ST-10      Annex B           X      X      X

Specification tree           ECSS-E-ST-10      Annex J                  X      X

Technical budget             ECSS-E-ST-10      Annex I           X      X      X      X    X    X

Preliminary technical
requirements
specifications for next
lower level
Technical requirements
specifications for next      ECSS-E-ST-10-06   Annex A                  X      X
lower level
Design definition file for
next lower level
Interface control
document
Product User manual /
User Manual


Design justification file    ECSS-E-ST-10      Annex K           X      X      X      X    X

Requirements
traceability matrix w.r.t.   ECSS-E-ST-10      Annex N           X      X      X
next lower level
Requirement justification
file

System concept report        ECSS-E-ST-10      Annex C     X     X

Trade off reports            ECSS-E-ST-10      Annex L     X     X      X      X      X

Verification control
document


    Document title          ECSS document          DRD ref.   MDR   PRR   SRR   PDR   CDR   QR   AR   ORR   FRR   LRR     CRR    ELR   MCR

Test specification          ECSS-E-ST-10-03       Annex B                              X    X    X     X     X     X        X     X      X

Mathematical model
description

Correlation report          ECSS-E-ST-31          Annex C                              X    X

Test procedure              ECSS-E-ST-10-03       Annex C                              X    X    X     X     X

Test report                 ECSS-E-ST-10-02       Annex C                              X    X    X     X     X     X        X     X      X

Verification report         ECSS-E-ST-10-02       Annex F                              X    X    X     X     X     X        X     X      X

Design justification file
for next lower level

Review of design report     ECSS-E-ST-10-02       Annex D                              X    X

Inspection report           ECSS-E-ST-10-02       Annex E                              X    X    X

GSE specifications                                                               X     X    X    X

GSE Data packages                                                                      X    X    X


Other documents


Note (1) : Document limited to the verification matrix


                      Annex B (normative)
Mission description document (MDD) - DRD

B.1   DRD identification

             B.1.1       Requirement identification and source document
             This DRD is called from ECSS-E-ST-10, requirement 5.3.1a.


             B.1.2       Purpose and objective
             The objective of the mission description document (MDD) is to provide input for
             the later selection of the best concept meeting the mission statement (MS) in
             iteration with the preparation of the preliminary technical requirements
             specification (TS) (as defined in ECSS-E-ST-10-06 Annex A).
             It is prepared in Phase 0 and Phase A for each possible concept, as indicated in
             requirement 5.3.1a.
             Links and chronology amongst the MS, TS, MDD, system engineering plan, project
             management plan and system concept report are provided on the Figure B-1.
             The MDD is produced by the top-level customer (as described in ECSS-S-ST-00
             clause 6.1 and figure 6-1) (typically an Agency or other institutional actors) and
             defines a concept that aims at satisfying the preliminary technical requirements
             specification, and presents how the objectives, operation profile, major system
             events and capabilities, contingencies and performance standards are expected to
             be achieved.
             For each mission concept, the MDD is a complete description of that concept.
             And to each MDD a SEP evaluating the related system engineering effort and a
             report evaluating the related programmatic aspect are associated.
             The system concept report assesses the different concepts from a technical,
             programmatic and risk point of view, includes a trade-off including weighting
             factors which bears some management aspects, followed by a system concept
             selection.


                                          Mission statement


                                            Preliminary TS


                         Mission Description              Mission Description
                             Document             ...         document
                            Concept #1                       Concept #n


        System                                                                      System
      Engineering                                                                 Engineering
        Plan #1                                                                     Plan #n

        Project                                                                    Project
      Management                                                                 Management
        Plan #1                                                                    Plan #n


                                       System concept report


                         Figure B-1: Relationship between documents


B.2    Expected response

                    B.2.1          Scope and content

                    <1>         Introduction
                    a.       The MDD shall contain a description of the purpose, objective, content and
                             the reason prompting its preparation (e.g. logic, organization, process or
                             procedure).


                    <2>         Applicable and reference documents
                    a.       The MDD shall list the applicable and reference documents in support to
                             the generation of the document, and include, as a minimum, the current
                             preliminary technical requirements specification.


                    <3>         Preliminary technical requirements specification
                                summary
                    a.       The MDD shall provide a summary of the preliminary technical
                             requirements specification objectives and list the design driving
                             requirements, derived from the current initial specification.


<4>        Concept description
a.    The MDD shall provide:
      1.     Overview of the concept
      2.     Mission analysis
      3.     System description, element by element
      4.     Description of how the system works in each mission phase
             (a)   Performance drivers
             (b)   Constraints
             (c)   Main events
             (d)   Operations scenarios
               NOTE 1    to item 3: For example: For a spacecraft, its
                         ground control segment, and a user segment, e.g.
                         Space Segment
                         - Payload
                         - Platform
                         - Launch Vehicle
                         - Orbit related aspects
                         - On-Board Data Handling
                         - Reference Operation Scenarios / Observation
                           characteristics
                         - Operability / Autonomy Requirements
                         Ground Segment
                         - Functional Requirements and Major Elements
                         - Monitoring and Control Segment
                         - Data Processing Segment
                         User segment
                         - Functional Requirements and Major Elements
                         - Monitoring requirements
               NOTE 2    to item 4: For example: For a spacecraft, the
                         following phase:
                         - Launch preparation
                         - Launch and Early Orbit Phase
                         - In Orbit Commissioning
                         - Nominal Operations
                         - Spacecraft Disposal
b.    <<deleted and moved as item 4 into requirement B.2.1<4>a>>


<5>          Assessment of the performance
a.      The MDD shall provide the
        1.     assessment against the current preliminary technical requirements
               specification requirements, and
        2.     identification of non-compliances, and their impact on the current
               preliminary technical requirements specification.


<6>          Identification of risk areas
a.      The MDD shall provide the list of identified risk related to the concept,
        including as a minimum technology, contingencies handling, and
        programmatic aspects.


<7>          Conclusion
a.      The MDD shall summarize the strengths and weaknesses of the concept.


B.2.2          Special remarks
None.


                                   Annex C (normative)
                           System concept report - DRD

C.1   DRD identification

             C.1.1         Requirement identification and source document
             This DRD is called from ECSS-E-ST-10, requirement 5.3.3c.


             C.1.2         Purpose and objective
             The system concept report describes the principal technical characteristics of
             alternative system concepts, relating to performance, architectures, driving
             technologies, interfaces, risk, their evaluation and classification, and later
             addresses the selected concept.


C.2   Expected response

             C.2.1         Scope and content
             a.      The system concept report shall be an instantiation of the trade-off report
                     at system level in Phase 0 and Phase A of a project, conforming to ECSS-E-
                     ST-10 Annex L.
                             NOTE       The system concept report can be extended to
                                        Phase B where needed (e.g. late trade-offs).
             b.      This report shall address all technical (e.g. engineering disciplines),
                     programmatic and related aspects relevant to the system.
             c.      Where relevant, specific e.g. discipline trade-off’s shall be performed,
                     contributing to the system trade-off, each one being reported in a
                     document conforming to ECSS-E-ST-10 Annex L.


             C.2.2         Special remarks
             None.


                        Annex D (normative)
         System engineering plan (SEP) - DRD

D.1   DRD identification

             D.1.1        Requirement identification and source document
             This DRD is called from ECSS-E-ST-10, requirements 5.1a and 5.3.4a.


             D.1.2        Purpose and objective
             The objective of the system engineering plan (SEP) is to define the approach,
             methods, procedures, resources and organization to co-ordinate and manage all
             technical activities necessary to specify, design, verify, operate and maintain a
             system or product in conformance with the customer’s requirements. In
             particular the SEP is established to fulfil the major technical project objectives,
             taking into account the defined project phases and milestones (as defined in
             The SEP covers the full project lifecycle according to the scope of the business
             agreement. It is established for each item of the product tree (as defined in ECSS-
             M-ST-10).
             It highlights the risks, the critical elements, the specified technologies, as well as
             potential commonalities, possibilities of reuse and standardization, and provides
             means for handling these issues.
             The SEP is an element of the project management plan (as defined in ECSS-M-ST-10).
                            NOTE       It is important to adapt the SEP content to the
                                       phase of the project, with more information on
                                       risk analysis and new technologies in early
                                       phases 0, A and B, and more information on
                                       verification and validation aspects in phases C, D.


D.2   Expected response

            D.2.1        Scope and content

            <1>        Introduction
            a.    The SEP shall contain a description of the purpose, objective, content and
                  the reason prompting its preparation (e.g. programme or project reference
                  and phase).


            <2>        Applicable and reference documents
            a.    The SEP shall list the applicable and reference documents in support to the
                  generation of the document.
            b.    The SEP shall include the references to the following applicable
                  documents:
                  1.     Business agreement
                  2.     Project management plan, as defined in ECSS-M-ST-10 Annex A
                  3.     Product assurance plan, as defined in ECSS-Q-ST-10 Annex A
                  4.     Configuration management plan, as defined in ECSS-M-ST-40
                         Annex A
                  5.     Production plan
                  6.     Mission operations plan, as defined in ECSS-E-ST-70 Annex G
                  7.     ILS plan.


            <3>        Project overview

            <3.1> Project objectives and constraints
            a.    The SEP shall contain the following description of:
                  1.     The project objective and the main elements that characterize the
                         user’s need.
                  2.     The objective of the system or product as established by the TS (as
                         defined in the ECSS-E-ST-10-06 Annex A).
                  3.     The main elements of the system architecture (i.e. first level elements
                         of the architecture adopted for the system and identification of their
                         reuse constraints).
                  4.     The principal characteristics of the project lifecycle and the
                         incremental development of the system (e.g. successive versions,
                         progressive implementation of the functions of the system).
                  5.     The main elements supporting the project lifecycle (e.g. ground
                         support equipment, and facilities).


      6.     The organizational constraints impacting system engineering
             activities (e.g. the external and internal industrial organization (e.g.
             contractors, partners, suppliers, own company) constraints).
      7.     The list of the critical issues identified at the beginning of the project
             phase(s).
      8.     The list of national and international regulations.
      9.     The capacity for verification and validation of the product, taking
             into account the means available, e.g. for tests, analysis, or
             simulation.

<3.2> Product evolution logic
a.    The SEP shall detail the incremental development of the system:
      1.     progressive implementation of system functionalities,
      2.     identification of possible successive versions,
      3.     objectives and strategy for the implementation of the successive
             versions.

<3.3> Project phase(s), reviews and planning
a.    The SEP shall provide an implementation and schedule of the system
      engineering activities and identify for the considered phase(s), as a
      minimum:
      1.     the main project milestones driving the system engineering process,
      2.     the phase(s) of the project lifecycle and the main reviews in
             accordance to project management plan.
b.    The SEP shall provide dates of milestones or the duration of phases and
      the critical path according to the project master schedule.

<3.4> Procurement approach
a.    The SEP shall describe the strategy for acquisition of the items of the
      system or products defined in the product tree (e.g. make or buy, product
      line, incremental development).

<3.5> Initial critical issues
a.    The SEP shall list the critical issues identified at the beginning of the
      project phase(s) covered in the SEP (e.g. any specific issues, problems,
      critical subjects, which require dedicated attention, investigation, action
      and planning).


<4>        System design approach

<4.1> System engineering inputs
a.    The SEP shall list the driving inputs for the system engineering activities
      described and defined by the:
      1.     business agreement,


     2.    outputs from previous phase(s) or expected under the heading of
           activities which are not controlled within the context of this SEP (e.g.
           data provided by the customer, data coming from other projects,
           upstream or predevelopment studies, product lines),
     3.    project management plan, product assurance plan, risk management
           plan, and configuration and documentation management plans.
b.   The SEP shall list the external means and facilities (e.g. equipment,
     software, and premises) made available by the customer or by any other
     entity external to the supplier that is responsible of this SEP, and, for each
     identified mean or facility, identify the applicable interface requirements
     (e.g. interface control documentation) as well as the authority in charge of
     it.
c.   The SEP shall list the internal means and facilities (e.g. equipment,
     software, and premises) made available by the organization in charge of
     the development of the system or product.
d.   The SEP shall contain the Coordinate System Document (as defined in
e.   The SEP shall define the units system to be used in the project.

<4.2> System engineering outputs
a.   The SEP shall list the specified system engineering outputs as defined in
             NOTE       An overview of document delivery is given in
                        Annex A.
b.   The SEP shall describe the following:
     1.    The strategy for the system engineering activities in line with the
           guidelines addressed by the management plan. In particular,
           identifying intermediate technical events for each phase in
           compliance with the master program schedule.
     2.    The system design activities, with their objectives and major outputs
           according to the phase.
     3.    The major engineering activities for each intermediate technical
           events, showing their mutual interactions and their relationships
           with the principal milestones (i.e. internal or contractual) of the
           project.
     4.    The model philosophy (as defined in ECSS-E-ST-10-02 clause 4.2.5)
           in terms of number and characterization of models, from system to
           the requested lower level, necessary to achieve a high confidence in
           the product verification.
     5.    The margin policy according to project phase, product category and
           maturity level.
c.   The SEP shall also describe
     1.    the method(s) and process(es) considered for the engineering
           activities (e.g. concurrent engineering, value analysis, or iteration
           cycle),


      2.     the interrelation between the different engineering disciplines and
             other project activities (e.g. production, quality assurance, and
             operations and logistics),
      3.     the interaction with other actors (e.g. customer and suppliers),
      4.     the consistency and coherency of simultaneous activities (e.g.
             performed in parallel),
      5.     which and how, control activities are implemented,
      6.     Assessment of potential COTS usage
d.    In the case of a system incremental evolution, the SEP shall describe the
      design strategy for the:
      1.     development of the initial release of the product,
      2.     development, the verification of subsequent releases and their
             deployment,
      3.     introduction of new technologies,
      4.     tools and methods used for analysis,
      5.     control of the evolutions for each release.

<4.3> System engineering team responsibilities and organization
a.    The SEP shall contain the following:
      1.     Definition of the entities participating in the system engineering
             activities and the corresponding functions according to the project
             management plan.
      2.     Identification of key engineering roles and responsibilities (e.g.
             system engineers, disciplines engineers, and technical managers).
      3.     Description of the co-operative work amongst the different teams
             participating in the system design.

<4.4> System engineering coordination
a.    The SEP shall describe the external and internal coordination in line with
      the project management plan.


<5>        Implementation and related plans

<5.1> System engineering tasks description
<5.1.1> System engineering process description
a.    The SEP shall describe the system engineering process tailored to the
      specifics of the considered project, and identify all the system engineering
      tasks to be implemented from the starting conditions (e.g. kick-off) to the
      closing event (e.g. review), their relationship, and their interfaces with
      other actors of the project, and identify and describe any existing iteration
      within the process.
b.    For each task, the input information and their origin, the document(s)
      delivered (i.e. expected output) and their destination, the system


      engineering function(s) performed and the contribution of other actors
      shall be identified.
<5.1.2> Engineering disciplines integration
a.    The SEP shall address the following activities that concern the different
      engineering disciplines, recalling the relevant applicable standards and
      ancillary dedicated plans that are considered integral part of this SEP.
b.    The SEP shall define the process and control to be put in place to meet
      requirements for the thermal, structures, mechanisms, environmental
      control and life support, propulsion, pyrotechnics, mechanical parts, and
      materials functions and interfaces.
              NOTE       These requirements refer to Mechanical
                         engineering as defined in ECSS-E-ST-3x series of
                         standards.
c.    The SEP shall define the process and control to be put in place to meet
      requirements for electrical and electronic engineering, covering all
      electrical and electronic aspects of the relevant space product, including
      functions such as power generation, storage, conversion and distribution,
      and optical, avionics and microwave domains, electromagnetic
      compatibility, and electrical interfaces.
              NOTE       These requirements refer to Electrical and
                         electronic engineering as defined in ECSS-E-ST-
                         20.
d.    The SEP shall define process and control to be put in place to meet
      requirements for software engineering, covering, amongst others, flight
      and ground software, checkout software and simulation software.
              NOTE       These requirements refer to Software engineering
                         as defined in ECSS-E-ST-40.
e.    The SEP shall define process and control to be put in place to meet
      requirements for communication engineering, covering, amongst others,
      spacecraft-to-ground, spacecraft-to-spacecraft, ground-to-ground and on-
      board communications links.
              NOTE 1     These requirements refer for Communications
                         engineering as defined in ECSS-E-ST-50.
              NOTE 2     It includes aspects such link budgets, data
                         management,     RF,    audio   and    video
                         communications and protocols.
f.    The SEP shall define process and control to be put in place to meet
      requirements for control engineering, covering, amongst others, AOCS,
      robotics, rendez-vous and docking.
g.    The SEP shall define the process and control to be put in place to meet
      requirements specifying natural environment for all space regimes (e.g.
      debris regulations, or planetary contamination protection) and general
      models and rules for determining the local induced environment
              NOTE       These requirements refer to Space environment
                         as defined in ECSS-E-ST-10-04.


h.   The SEP shall define the process and control to be put in place to meet
     requirements for the approach, methods, procedures, organization and
     resources to be implemented to ensure proper technical interfaces between
     system engineering and production.
i.   The SEP shall define the process and control to be put in place to meet
     requirements of operations of the space segment, covering, amongst
     others:
     1.    mission operation definition and preparation,
     2.    mission and trajectory analysis, and
     3.    operability analysis (e.g. autonomy, operational scenario, nominal
           and non-nominal modes, failure detection isolation and recovery).
             NOTE      These requirements refer to Operations
                       engineering as defined in ECSS-E-ST-70.
j.   The SEP shall define the process and control to be put in place to meet
     requirements for ground and in-orbit logistics and maintenance,
     addressing, amongst others, technical activities, related engineering
     standards, methods and analyses to be performed to ensure that the
     development of space systems (i.e. manned and unmanned) properly takes
     into account and integrates the supportability and support aspects for the
     whole life cycle.
k.   The SEP shall define the process and control to be put in place to meet
     requirements for human activities and environments associated with space
     systems.
             NOTE      These requirements refer to Human factors
                       engineering as defined in ECSS-E-ST-10-11.
l.   The SEP shall define process and control to be put in place to meet
     requirements for implementation of design selections relating to humans
     for any item with associated human interface, including computer based
     system and equipment.
<5.1.3> Work package
a.   The SEP shall define and describe the work package(s) for the relevant
     engineering tasks, which are maintained in the work breakdown structure.

<5.2> Related plans
a.   When the SEP includes sub-plans covering parts of system engineering
     activities, these sub-plans shall be annexed to the SEP.
b.   The SEP shall identify the other plans relevant to system engineering
     function activity belonging to the following categories:
     1.    Programmatic plans
     2.    Verification plans
     3.    Engineering discipline plans
     4.    Operations plans


             NOTE 1     Some of these plans can be integrated in the SEP
                        in the early phases of a project.
             NOTE 2     Note to item 1: Examples of programmatic plans
                        are: the SEP plans of sub-products constituting
                        the system or product, Industrial procurement
                        plan, risk management plan, off-the-shelf plan
                        (see ECSS-Q-ST-20-10).
             NOTE 3     Notes to item 2:
                        - Examples of verification plans are: verification
                          plan (VP), AIT plan, AIV plan and technology
                          plan, system calibration plan, Security
                          Aspects Verification Plan. Some of those
                          DRDs are defined in this document, in ECSS-
                          E-ST-10-02 or ECSS-E-ST-10-03.
                        - VP and AIT plans can be integral parts of the
                          SEP, or rolled out separately (without
                          overlap), or combined as the AIV Plan which
                          can also be rolled out separately. However,
                          the existence of the AIV Plan excludes
                          independent VP and AIT plans.
             NOTE 4     Note to item 3: Examples of engineering
                        discipline plans are: Fracture Control Plan (see
                        Electro-Magnetic Compatibility Plan (see ECSS-
                        E-ST-20), Audible Noise Control Plan, Radio
                        Frequency Plan, Alignment Requirements and
                        Control Plan, System Performance Simulations
                        Plan, Software Development Plan, Orbital Debris
                        Mitigation Plan and Disposal Plan (as defined in
                        ISO 24113:2011), Planetary protection Plan,
                        Cleanliness and Contamination Control Plan.
             NOTE 5 Note to item 4: Examples of operation plans are:
                    launch site operations and logistics plan, system
                    commissioning and operation support plan.
c.   The SEP shall describe the constraints and the interactions impacting the
     system engineering activities derived from the analysis of the plans
     identified as relevant in D.2.1<5.2>b.

<5.3> System engineering methods, tools and models
a.   The SEP shall list and briefly describe the methods, tools, and data models
     that the system engineering team uses in performing their tasks.
b.   In relation to requirements traceability and demonstration of verification
     (compliance with requirements, VCD), the specific methods and tools shall
     be described (including interfaces to next lower level suppliers), and reuse
     of elements (e.g. COTS) identified.


<5.4> Critical issues
a.      The SEP shall describe any specific issues, problems requiring dedicated
        attention, investigations or actions during the current phase and identify
        risks, and risk mitigation measures.


<6>        System engineering for the following phase(s)
a.      The SEP shall introduce the system engineering activities, to be conducted
        during subsequent phase(s) of the project, and as a minimum, list any
        identified critical issue and risk to be mitigated during the subsequent
        phase(s).


D.2.2         Special remarks
None.


                                  Annex E (normative)
                            Technology plan (TP) - DRD

E.1   DRD identification

             E.1.1       Requirement identification and source document
             This DRD is called from ECSS-E-ST-10, requirement 5.6.7b.


             E.1.2       Purpose and objective
             The objective of the technology plan (TP) is to define the approach, methods,
             procedures, resources and organization to evaluate the ability of a critical
             technology to meet the intended requirements. Also, the objective of this plan is
             to ensure effective preparation of the technologies necessary for a timely
             implementation of the system, in accordance to the requirements imposed by the
             specific characteristics of the relevant product.
             It is established for each item of the function tree (as defined in ECSS-E-ST-10,
             Annex H), and highlights the technical requirements, and the critical technology
             of each item.
             The TP is part of the system engineering plan (SEP) (as defined in ECSS-E-ST-10,
             Annex D).


E.2   Expected response

             E.2.1       Scope and content

             <1>      Introduction
             a.    The TP shall contain a description of the purpose, objective, content and
                   the reason prompting its preparation (e.g. programme or project reference
                   and phase).


             <2>      Applicable and reference documents
             a.    The TP shall list the applicable and reference documents in support to the
                   generation of the document and include the reference to the following
                   applicable documents:


      1.     SEP
      2.     Technology matrix (as defined in ECSS-E-ST-10, Annex F)
      3.     Function tree
      4.     Specification tree.


<3>        Project overview
a.    The TP shall contain a summary of the main aspects of:
      1.     project objectives and constraints (i.e. section <3.1> of ECSS-E-ST-10,
             Annex D "SEP DRD");
      2.     product evolution logic (i.e. section <<3.2> of ECSS-E-ST-10, Annex
             D "SEP DRD");
      3.     project phase(s), reviews and planning (i.e. section <3.3> of ECSS-E-
             ST-10, Annex D "SEP DRD"),
      4.     Procurement approach (i.e. section <3.4> of ECSS-E-ST-10, Annex D
             "SEP DRD")


<4>        Tasks description

<4.1> TP expected outputs
a.    The TP expected output shall be an answer concerning the possibility for
      using the identified or needed technology to perform a function.

<4.2> TP inputs
a.    For each system function, the TP input shall be:
      1.     technical requirements,
      2.     the selected technology or technological element and its TRL,
      3.     the list of the identified project risks and critical aspects, and
      4.     the schedule for Engineering activities.

<4.3> TP tasks
a.    The TP shall establish and describe the necessary activities to complete the
      acquisition of each technology or technological element, including
      verification strategies and methods, and the link to product assurance
      aspects.
b.    The TP shall define the model philosophy for each technology or
      technological element, based on an assessment on the maturity status and
      on the criticality of the technology with respect to functions' requirements.
c.    The TP shall describe the technology development activities, their required
      or possible interrelations and timings, as necessary for the satisfactory
      acquisition of the technologies and procurement of the technological
      elements.


d.    The TP shall identify technical milestones, showing their interactions and
      relationships with the SEP milestones.

<4.4> Responsibilities and organization
a.    The TP shall contain the following:
      1.     definition of the entities participating in the engineering activities
             and the corresponding functions according to the SEP;
      2.     identification of key engineering roles and responsibilities for each
             technology or technological element.

<4.5> TP interfaces
a.    The TP shall describe the external and internal interfaces in conformance to
      the SEP.


<5>        Technology issues
a.    The TP shall describe, for any identified technology risk and related critical
      aspects for the project, the specific actions taken for risk mitigation based
      on identified technology readiness level (TRL).
b.    The TP shall include the TRSL by using the template in Figure E-1, and
      listing:
      1.     the critical function, with reference to the Function tree,
      2.     the name of the technology or element(s) implementing such a
             function,
      3.     current declared and verified TRL, as defined in ECSS-E-AS-11,
      4.     reference to the TRA report confirming the declared TRL,
      5.     date of the report,
      6.     key points to support TRL declared in column [3],
      7.     forward plan for TRL evaluation, indicating the target TRL, the
             phase or date at which such target TRL is expected, and status of the
             planning to achieve the target TRL,
      8.     during phases A & B, indication whether                   or   not   the
             technology/element is a candidate for the CIL.
               NOTE 1     The key point in column [6] are normally few
                          lines summarizing the TRL assessment report
                          referenced in column [4].
               NOTE 2     At the end of Phase B, the TRSL is introduced as
                          part of the CIL.


           Figure E-1: TRSL template


E.2.2      Special remarks
a.   The content of the TP may be merged with the content of the SEP.
b.   The TP shall introduce the related activities, to be conducted during all
     phase(s) of the project.


                                       Annex F (normative)
                                   Technology matrix - DRD

F.1   DRD identification

             F.1.1        Requirement identification and source document
             This DRD is called from ECSS-E-ST-10, requirement 5.6.7a.


             F.1.2        Purpose and objective
             The technology matrix presents, for each technical requirement/function, the list
             of technologies or technological elements, which have the potential to meet this
             requirement. It summarizes candidate technologies per individual requirement.
             The technology matrix is part of the Design Justification File (as defined in ECSS-
             E-ST-10, Annex K). It is the basic document for presenting all identified potential
             technologies for the product.


F.2   Expected response

             F.2.1        Scope and content

             <1>        Introduction
             a.    The technology matrix shall contain a description of the purpose, objective,
                   content and the reason prompting its preparation.


             <2>        Applicable and reference documents
             a.    The technology matrix shall list the applicable and reference documents in
                   support to the generation of the document and include the reference to the
                   following applicable documents:
                   1.     Specification tree
                   2.     Preliminary technical requirements specifications
                   3.     Function tree.


<3>          List of technical requirements/functions
a.      The    technology    matrix     shall     list   the    system    technical
        requirements/functions as defined in the functional architecture and its
        corresponding function tree, and their associated preliminary TS.


<4>          List of potential technologies for each technical
             requirement/function
a.      The    technology      matrix    shall  list     the    system   technical
        requirements/functions and      for each, a      potential technology or
        technological element.
                 NOTE      Sources to identify potential technologies are
                           technology watch, corporate technology plan, or
                           research and development programme.
b.      For each technology or technological element, the following information
        shall be listed:
        1.     index of technology readiness and maturity as defined in Table 4-2
               of ECSS-E-AS-11;
        2.     proof of company's maturity concerning the knowledge and
               expertise of the technology, including a description of the necessary
               technology acquisition activities;
        3.     identification of potential risks, e.g. technology availability,
               programmatic and financial aspects.


<5>          Ranking of the potential technologies for each function
a.      The technology matrix shall propose a ranking of the potential technology
        or technological element for each system requirement/ function.


<6>          Conclusion
a.      The      technology    matrix     shall   provide,    for    each    system
        requirement/function, the selected technology or technological element, a
        list of the identified project risks and critical aspects, and an identified
        back-up technological solution.


F.2.2          Special remarks
None.


                             Annex G (normative)
                 Design definition file (DDF) - DRD

G.1   DRD identification

             G.1.1        Requirement identification and source document
             This DRD is called from ECSS-E-ST-10, requirements 5.3.1c, 5.3.1f, 5.4.1.1b and
             5.4.1.4a.


             G.1.2        Purpose and objective
             The objective of the design definition file (DDF) is to establish the technical
             definition of a system or product that complies with its technical requirements
             specification (as defined in ECSS-E-ST-10-06 Annex A).
             The design definition file is a basic structure referring to all information relative
             to the functional and physical architectures and characteristics of a system or
             product, necessary for its identification, manufacturing, utilization, support,
             configuration management and removal from service.
             The DDF is a collection of all documentation that establishes the system or
             product characteristics such as lower level technical specifications, design and
             interface description, drawings, electrical schematics, specified constraints (e.g.
             on materials, manufacturing, processes, and logistic).
             It details the as-designed configuration baseline (as defined in ECSS-M-ST-40) of
             the system or product and is built up and updated under the responsibility of the
             team in charge of system engineering. It is the technical baseline for the
             production, assembly, integration and test, operations and maintenance of the
             product.
             The DDF, the technical requirements specification, and the Design Justification
             File (as defined in ECSS-E-ST-10 Annex K) are the basic documents used for
             product development. They are interrelated such as:
             - the design (i.e. DDF) is the response to the requirements stated in the TS,
             - the justification (i.e. DJF) demonstrates the conformance of the design (i.e.
                   DDF) to the requirements stated in the TS.
                            NOTE       The DDF is a logical file covering all TS
                                       disciplines required for the considered system. In
                                       general, the elements of the DDF are “rolled out”
                                       as separate documents.


G.2   Expected response

            G.2.1        Scope and content

            <1>        Introduction
            a.    The DDF shall contain a description of the purpose, objective and the
                  reason prompting its preparation (e.g. programme or project reference and
                  phase).


            <2>        Applicable and reference documents
            a.    The DDF shall contain the list of applicable and reference documents, used
                  in support to the generation of the document.
            b.    The DDF shall include the reference to the following applicable
                  documents:
                  1.     Business agreement
                  2.     System engineering plan (as defined in ECSS-E-ST-10 Annex D)
                  3.     Coordinate system document (as defined in ECSS-E-ST-10-09
                         Annex A)
                  4.     Technical requirements specification (TS)
                  5.     Product assurance plan
                  6.     Configuration management plan (as defined in ECSS-M-ST-40)
                  7.     Configuration status report (as defined in ECSS-M-ST-40).
            c.    The DDF shall refer to DDFs of next higher and lower level products.


            <3>        Summary of the project and technical requirements
            a.    The DDF shall contain a brief description of the product and of the main
                  technical requirements throughout its life cycle phases (e.g. launch,
                  deployed, operations, end-of-life).
            b.    The DDF shall contain the description of the system or product design
                  documentation, based on the product tree (as defined in ECSS-M-ST-10)
                  and also include, or refer to, the specifications tree (as defined in ECSS-E-
                  ST-10 Annex J).
            c.    The DDF of a system shall contain at least the technical requirements
                  specifications of the elements in which the system is broken down


            <4>        Functional description

            <4.1> Functional architecture
            a.    The DDF shall contain the description of the functional architecture of the
                  system or product i.e. the arrangement of functions, their sub-functions


      and interfaces (internal and external), and the performance requirements to
      satisfy the requirements of the TS.
b.    The DDF shall present the data and their flow interchanged between the
      different functions, the conditions for control, and the execution
      sequencing for the different operational modes and states.
               NOTE      The Functional Architecture is an output of the
                         functional analysis process (as defined in ECSS-
                         E-ST-10 clause 5.3.1a)

<4.2> Function tree
a.    The DDF shall contain or refer to the system or product function tree, the
      latter conforming to ECSS-E-ST-10 Annex H.

<4.3> Description of functional chains
a.    The DDF shall describe the functional chains that contribute to the
      realization of the functional requirements of the TS and their contributing
      functions, consider the different operational modes and states, and indicate
      the selected physical implementation for each of the functions.


<5>        Physical description

<5.1> Physical architecture
a.    The DDF shall contain the description of physical architecture of the
      system or product i.e. the arrangement of elements, their decomposition,
      interfaces (internal and external), and physical constraints, which form the
      basis of a system or product design to satisfy the functional architecture
      and the technical requirements.
               NOTE      The Physical Architecture is an output of the
                         preliminary design definition activities (as
                         defined in clause 5.3.1f).

<5.2> Product tree
a.    The DDF shall contain or refer to the product tree of the system or product,
      as defined in ECSS-M-ST-10 Annex B.
               NOTE      The Product Tree is a breakdown of the Physical
                         Architecture.

<5.3> Specification tree
a.    The DDF shall contain or refer to the specification tree of the system or
      product, the latter conforming to Annex J.

<5.4> Description of elements of the physical architecture
a.    The DDF shall provide
      1.     the nomenclature of the system or product,
      2.     the overall system or product drawings,


      3.     for each element of the system, the description of the different
             constituents of the physical architecture,
      4.     the characteristics of the respective elements,
      5.     their configuration management identifier (e.g. hardware part
             number, software version number, drawings number, electrical
             schematics numbers).
b.    The DDF shall reference any documentation containing detailed technical
      descriptions and associated matrices to ensure overall consistency and
      completeness.

<5.5> Description of interfaces
a.    The DDF shall describe the physical and functional characteristics of the
      internal and external interfaces of the system and refer to the relevant IRD
      and ICD, conforming to Annex A of ECSS-E-ST-10-24.


<6>        System technical budget, margins and deviations
a.    The DDF shall present the budget allocation of the technical parameters of
      the system and provide the actual status of the system margins, and
      deviations.
b.    The DDF shall contain or refer to the system or product technical budget,
      the latter conforming to Annex I.


<7>        System design constraints

<7.1> Constraints for production
a.    The DDF shall present the constraints induced by the system or product
      design definition on the production activities e.g. operational allowable
      envelopes, restrictions on assembling sequences, procedures and testing
      modes, exclusion zones, manufacturing environmental conditions, and
      conditions for procurement.

<7.2> Constraints for operation
a.    The DDF shall present the constraints induced by the system or product
      design definition on the implementation of the operations e.g. operational
      allowable envelopes, restrictions on operating modes, and exclusion zones.

<7.3> Constraints for transportation and storage
a.    The DDF shall present the constraints induced by the system or product
      design definition on the transportation activities and during the periods of
      storage of the product e.g. allowable envelopes, restrictions on
      transportation and storage, exclusion zones, packaging, shock levels,
      temperature environments, humidity, cleanliness, regulations, and
      dangerous materials.


<7.4> Constraints for maintainability
a.      The DDF shall present the constraints induced by the system or product
        design definition on the maintenance activities and procedures e.g.
        operational allowable envelopes, accessibility, tooling, support materials,
        parts availability, and deliveries.


<8>        Engineering data repository
a.      The DDF shall contain the information on the system or product
        engineering data repository that contains the complete set of design
        parameters, or a reference to it.
                NOTE       Information about the set of design parameters is
                           provided in ECSS-E-TM-10-10.


<9>        Conclusion
a.      The DDF shall list and summarize all deviations of the design with respect
        to the technical specifications and constraints induced by the system or
        product design definition.


G.2.2         Special remarks
None.


                                               Annex H (normative)
                                                Function tree - DRD

H.1   DRD identification

             H.1.1        Requirement identification and source document
             This DRD is called from ECSS-E-ST-10, requirement 5.3.1b.


             H.1.2        Purpose and objective
             The objective of the function tree document is to describe the hierarchical
             decomposition of a system or product capabilities into successive level of
             functions and sub-functions.
             The function tree is part of the Design Definition File. It is the starting point for
             the establishment of the Product Tree (as defined in ECSS-M-ST-10) and is a basic
             structure to establish preliminary technical requirements specification(s) (as
             defined in ECSS-E-ST-10-06 Annex A).


H.2   Expected response

             H.2.1        Scope and content

             <1>      Introduction
             a.    The function tree document shall contain a description of the purpose,
                   objective and the reason prompting its preparation.


             <2>      Applicable and reference documents
             a.    The function tree document shall contain the list of applicable and
                   reference documents, used in support to the generation of the document.


             <3>      Project summary and user’s need presentation
             a.    The function tree document shall contain a brief description of the project
                   and of the key user’s needs.


<4>      Tree structure
a.    The function tree document shall provide the complete list of functions
      that the system or product shall perform, and contain a graphical
      representation where the main specified function(s) (i.e. at the top level of
      the tree) is/are decomposed into lower level functions.
b.    When recurrent products from previous space projects are used, the
      product’s functions shall be identified in the tree structure, and addition,
      every necessary function by the system or product that is not under the
      supplier’s responsibility identified in the tree structure.


H.2.2       Special remarks
a.    The function tree shall be coherent with other functional descriptions of the
      system or product (e.g. functional architecture, functional block diagram).


                                            Annex I (normative)
                                         Technical budget - DRD

I.1   DRD identification

             I.1.1          Requirement identification and source document
             This DRD is called from ECSS-E-ST-10, requirement 5.4.1.2a.


             I.1.2          Purpose and objective
             The technical budget defines for each key engineering parameter of a system or
             product, the nature of this parameter, its measure, specified value, metrics
             requirements and current actual or computed value and assessed value.
             The technical budget is part of the Design Definition File (as defined in ECSS-E-
             ST-10 Annex G). It is the basic document for providing adequate control of the
             key engineering parameter properties to meet the system or product technical
             requirements.


I.2   Expected response

             I.2.1          Scope and content

             <1>          Introduction
             a.      The technical budget shall contain a description of the purpose, objective,
                     content and the reason prompting its preparation.


             <2>          Applicable and reference documents
             a.      The technical budget shall list the applicable and reference documents in
                     support to the generation of the document.


             <3>          List of selected key engineering parameters
             a.      The technical budget shall:
                     1.     list the selected key engineering parameters (those specified by the
                            customer and those selected by the supplier),


        2.     present the reason for their selection,
        3.     identify for each key engineering parameters the stages of maturity
               of the design.
        4.     present the related margin policy for these parameters.
                 NOTE       to item 1: Examples of key engineering
                            parameters are mass, communication links,
                            power, and on-board computer memory
                            capacity.


<4>          Assessment of key engineering parameters
a.      For each key engineering parameter, the technical budget shall:
        1.     provide the specified value of the parameter,
        2.     provide the supplier’s margin resulting of the allocation of the
               parameter to the lower level products,
        3.     provide the specified values with the reference to the relevant
               technical requirement of the lower level products,
        4.     propose a specific program to conform to the specified value in case
               of nonconformance,
        5.     contain a chart of parameter history that presents the evolution of
               the parameter’s value at the different design maturity steps for
               which the evaluation of the parameter is performed,
        6.     list the documentation sources (e.g. analysis report and verification
               report).


<5>          Conclusion
a.      The technical budget shall contain a conclusion that identifies the key
        engineering parameters having a negative margin, and identify for each of
        those:
        1.     the impact on the technical requirements and the associated risk for
               the project, and
        2.     the specific program to conform to the specified value and for
               project risk mitigation.


I.2.2          Special remarks
None.


                                         Annex J (normative)
                                      Specification tree - DRD

J.1   DRD identification

             J.1.1        Requirement identification and source document
             This DRD is called from ECSS-E-ST-10, requirement 5.2.3.1c.


             J.1.2        Purpose and objective
             The objective of the specification tree document is to define the hierarchical
             relationship of all technical requirements specifications for the different elements
             of a system or product.
             The specification tree is part of the Design Definition File (as defined in ECSS-E-
             ST-10 Annex G). It is the basic structure to perform the system or product
             requirements traceability and to manage their internal interfaces.


J.2   Expected response

             J.2.1        Scope and content

             <1>      Introduction
             a.    The specification tree document shall contain a description of the purpose,
                   objective and the reason prompting its preparation.


             <2>      Applicable and reference documents
             a.    The specification tree document shall contain the list of applicable and
                   reference documents, used in support to the generation of the document.


             <3>      Project summary and user’s need presentation
             a.    The specification tree document shall contain a brief description of the
                   project and the key user’s needs.


<4>      Tree structure
a.    The specification tree document shall provide the complete list of
      specifications defining the system or product, and contain a graphical
      representation where the system or product specification (i.e. at the top
      level of the tree) is decomposed into lower level product specifications.
b.    When recurrent products from previous space projects are used, their
      specification shall be identified in the tree structure, and in addition, for
      every necessary product that is not under the supplier’s responsibility,
      their specification shall be identified in the tree structure.


J.2.2       Special remarks
a.    The specification tree shall be coherent with the product tree (see ECSS-M-
      ST-10) and the business agreement structure (see ECSS-M-ST-60).


                           Annex K (normative)
            Design justification file (DJF) - DRD

K.1   DRD identification

             K.1.1        Requirement identification and source document
             This DRD is called from ECSS-E-ST-10, requirements 5.3.1d, 5.3.1g, 5.3.1h and
             5.4.1.4b.


             K.1.2        Purpose and objective
             The objective of the design justification file (DJF) is to present the rationale for the
             selection of the design solution, and to demonstrate that the design meets the
             baseline requirements.
             The DJF is progressively prepared during the detailed design process and
             according to the system engineering plan (SEP) (as defined in ECSS-E-ST-10
             Annex D), and serves the following purposes:
             - it provides access to the necessary justification information,
             - it presents a review of all acquired justifications,
             - it constitutes a basic element for decision taking concerning the product
                   definition qualification.
             The DJF together with the Design Definition File (DDF) (as defined in Annex G)
             and the technical requirements specification (TS) (as defined in ECSS-E-ST-10-06
             Annex A) are the basic documents used for the development of the product. These
             documents are used to monitor the evolution of the design.
             The DJF is a collection of all documentation that traces the evolution of the design
             during the development and maintenance of the product. The DJF is updated
             according to the evolution of the DDF, in accordance with the above-mentioned
             objectives.
             The DJF provides also access to coherent and substantiated information which
             can be used to support decision-making in the analysis of change requests for the
             management of non conformances.
             The DJF contains results obtained during the evolution of the design as a
             consequence of the activities performed along the design process:
             - Analysis and trade-off reports concerning the evaluation of alternative
                   design solutions and the justification of the choice.


            - All results obtained during the verification of the design as a consequence
                  of the activities performed along the verification process.
            - Test Reports on engineering model, structural and thermal model and
                  qualification model (e.g. Protoflight Models).
                           NOTE       The DJF is a logical file covering all technical
                                      disciplines required for the considered system. In
                                      general, the elements of the DJF are “rolled out”
                                      as separate documents.


K.2   Expected response

            K.2.1        Scope and content

            <1>        Introduction
            a.    The DJF shall contain a description of the purpose, objective, content and
                  the reason prompting its preparation.


            <2>        Applicable and reference documents
            a.    The DJF shall list the applicable and reference documents in support to its
                  generation.
            b.    The applicable document list shall contain the reference to the relevant
                  product specifications, and the relevant DDF and system engineering plan.
            c.    The reference document list shall contain the reference to:
                  1.     Trade-Off-Reports, as defined Annex L.
                  2.     Analysis Reports (e.g. requirements allocation analysis, functional
                         analysis).
                  3.     Requirements Traceability Matrix, as defined in Annex N (with link
                         to analysis).
                  4.     Verification Control Document
                  5.     All verification documentation, such as:
                         (a)   Analysis Reports (e.g. reports w.r.t. qualification aspects)
                         (b)   Test Reports
                         (c)   ROD Reports
                         (d)   Inspection Reports
                         (e)   Verification Reports


            <3>        Design description
            a.    The DJF shall contain a description of the expected product, its intended
                  mission, architecture and design, and the functioning principles on which
                  it is based.


b.    The DJF shall define the requirement criteria levels for qualification and
      acceptance verification of the product.


<4>        Design Justification File Synthesis
a.    The DJF shall present status of the design justification in response to
      requirements, with emphasis on the driving requirements that have a big
      impact on the system design, production and maintainability (see also
      K.2.1<8.2.4>a.)
b.    The DJF shall present an overall system qualification status synthesis,
      including:
      1.     the list of requirements which have not              been   met   (e.g.
             nonconformances), including proposed actions,
      2.     the list of all critical points, and how criticalities have been or are
             intended to be resolved,
      3.     the identification of requirements which have not been justified yet,
             and associated risks analysis, with emphasis on those that can have
             an impact at system level.


<5>        Justification of the Functional Architecture
a.    The DJF shall contain the demonstration that all requirements of the
      preliminary technical requirements specification are allocated to functional
      blocks of the system functional architecture.
b.    Where requirements assigned to functional blocks do not have their origin
      within any of the customer preliminary technical specifications, these
      requirements shall be justified.


<6>        Justification of the Physical Architecture
a.    The DJF shall contain the demonstration that the system design conforms
      to the requirements of the technical specification, and identify products
      which are reused (e.g. COTS).
b.    The DJF shall also provide the justification for the choice of architectural
      elements at the next lower level, or lower levels in case of system critical
      elements.
c.    Where requirements do not have their origin within any of the upper level
      technical specifications, these shall be justified.


<7>        Development activities and synthesis of development
           results
a.    The DJF shall present the development activities (e.g. assessments,
      analyses, tests, and trade-offs) and the design drivers, which lead to and
      justify the design as defined in the DDF, in line with the development
      approach identified in the SEP.


      1.     The justification shall concern all the engineering disciplines
             contributing to design and development of the product (including
             its operational modes and scenarios).
      2.     The DJF shall include the status of DJF of lower level products.
               NOTE       Activities related to verification are dealt with in
                          section K.2.1<8>.
b.    For the system and each discipline, following information shall be
      produced:
      1.     Activity inputs, such as requirements, operational modes,
             assumptions, analysis cases, boundary conditions, model
             descriptions and limitations.
      2.     Activity results, such as
             (a)   raw results,
             (b)   evaluation of results,
             (c)   evaluation of margins with respect             to   the   technical
                   requirements contained in the TS,
             (d)   identification of any marginal areas.
      3.     Activity synthesis, such as
             (a)   evidence of compliance to the technical requirements
                   contained in the TS,
             (b)   list of technical requirements which have not been met,
                   including proposed actions,
             (c)   list of all critical points, and how criticalities have been or are
                   intended to be resolved,
             (d)   identification of aspects of the design, which are not yet
                   justified, and assessment of inherent risks.
c.    The DJF shall reference the requirements traceability matrix, e.g. w.r.t.
      building up the justification of a considered system top level requirements
      in terms of the various elements contributing to it, including where
      relevant contribution from other disciplines (e.g. pointing as a function of
      thermal, structures, and AOCS).


<8>        Verification activities and synthesis of results

<8.1> Verification plan
a.    The DJF shall integrate or refer to the document that conforms to the
      verification plan DRD defined in ECSS-E-ST-10-02 Annex A.
               NOTE       The verification activities are detailed in the
                          Verification Plan (VP), which also contains the
                          justification of the verification strategy (as
                          defined in ECSS-E-ST-10-02).


<8.2> Qualification verification and synthesis of results
<8.2.1> Qualification evidence
a.    The DJF shall present the evidence of the qualification of the design in
      conformance to the applicable technical requirements and proper
      qualification margins.
               NOTE        This is done in line with the qualification
                           approach identified in the VP.
b.    The DJF shall cover the system and all disciplines relevant to the product
      in all its operational modes and scenarios, addressing all applicable
      technical requirements and proper qualification margins.
               NOTE 1      This is done in line with the system verification
                           matrix.
               NOTE 2      The formal compliance with the qualification
                           requirements is recorded in the VCD, together
                           with references to the close-out documents.
<8.2.2>    Implementation of the qualification plan
a.    The DJF shall present the implementation of the qualification plan and the
      status thereof, addressing the detailed definition of qualification activities
      (e.g. analysis, test, ROD, and inspection), including the detailed definition
      of the tests, the prediction of expected test results, test success criteria, test
      specifications, and model validations.
               NOTE        Details on test specifications are provided in
<8.2.3>    Validation of models
a.    The DJF shall contain all evidence (e.g. analyses, test results, and model
      descriptions and correlations) regarding the suitability and validation of all
      models used for the analysis of the system.
<8.2.4>    Requirements status log
a.    The DJF shall include a requirement status log addressing each
      requirement in turn, and including the
      1.     reference to relevant elements of the verification plan,
      2.     synthesis of the justifications acquired, calling up references to the
             supporting activities and evidence (e.g. Technical Notes listed in
             section K.2.1<4>),
      3.     list of justifications to be acquired and related activities,
      4.     conclusion / action flag.
<8.2.5>    Manufacturing process status log
a.    The DJF shall include a requirement status log, addressing design relevant
      aspects of manufacturing processes, and recording their characteristics in
      regard to qualification.


<8.3> Acceptance verification
a.     The DJF shall present the implementation of the acceptance verification
       and the status thereof, addressing the detailed definition of acceptance
       activities (e.g. inspection, test, analysis), including the detailed definition of
       the tests, the prediction of expected test results, test success criteria, and
       test specifications.
                NOTE       Details on test specifications are provided in
b.     The DJF shall cover the system and all disciplines relevant to the product,
       addressing all acceptance verification activities in line with the system
       verification Plan (VP).


<9>       Justification of System Technical Budgets and Margins
a.     The DJF shall present a synthesis of all technical budgets and margins for
       specific parameters according to the functional and physical architectures.
                NOTE       For technical budgets and margins, see ECSS-E-
                           ST-10 Annex I.


<10>      Justification of Constraints imposed by the System
          Design

<10.1>    Design constraints on the production
a.     The DJF shall present the justification of constraints induced by the system
       or product design definition on the production activities e.g. operational
       allowable envelopes, restrictions on assembling sequences, procedures and
       testing modes, exclusion zones, manufacturing environmental conditions,
       and conditions for procurement.

<10.2>    System design constraints for operation
a.     The DJF shall present the justification of constraints induced by the system
       or product design definition on the implementation of the operations e.g.
       operational allowable envelopes, restrictions on operating modes, and
       exclusion zones.

<10.3>    System design constraints for transportation and storage
a.     The DJF shall present the justification of constraints induced by the system
       or product design definition on the transportation activities and during the
       periods of storage of the product e.g. allowable envelopes, restrictions on
       transportation and storage, exclusion zones, packaging, shock levels,
       temperature environments, humidity, cleanliness, regulations, and
       dangerous materials.

<10.4>    System design constraints for maintainability
a.     The DJF shall present the justification of constraints induced by the system
       or product design definition on the maintenance activities and procedures


        e.g. operational allowable envelopes, accessibility, tooling, support
        materials, parts availability, and deliveries.


<11>         Constituent documents
a.      The DJF shall integrate or refer to the documents that conform to the:
        1.     ECSS-E-ST-10 Annex L, Trade-Off-Report - DRD
        2.     ECSS-E-ST-10 Annex Q, Analysis Report - DRD
        3.     ECSS-E-ST-10 Annex O, Requirement Justification File - DRD
        4.     ECSS-E-ST-10 Annex N, Requirements Traceability Matrix - DRD
        5.     ECSS-E-ST-10-02 Annex B, Verification Control Document - DRD
        6.     ECSS-E-ST-10-02 Annex C, Test Report - DRD
        7.     ECSS-E-ST-10-02 Annex D, Review Of Design Report - DRD
        8.     ECSS-E-ST-10-02 Annex E, Inspection Report - DRD
        9.     ECSS-E-ST-10-02 Annex F, Verification Report - DRD
b.      The DJF shall include or refer to the DJF of lower level elements of the
        product.


K.2.2          Special remarks
None.


                                            Annex L (normative)
                                          Trade-off report - DRD

L.1   DRD identification

             L.1.1        Requirement identification and source document
             This DRD is called from ECSS-E-ST-10, requirement 5.3.3b.


             L.1.2        Purpose and objective
             The Trade-off report provides the system-engineering point of view on
             alternative design solutions, an evaluation and a classification of the alternative
             design solutions, and the justification of their ranking.


L.2   Expected response

             L.2.1        Scope and content

             <1>        Introduction
             a.    The trade-off report shall contain a description of the purpose, objective,
                   content and the reason prompting its preparation.


             <2>        Applicable and reference documents
             a.    The trade-off report shall list the applicable and reference documents in
                   support to the generation of the document and include the reference to the
                   following applicable documents:
                   1.     Mission description document, if relevant
                   2.     Technical requirements specification
                   3.     System engineering plan
                   4.     Project phasing and planning requirement document.


<3>      Objective and context of the trade-off study
a.    The trade-off report shall contain a brief description of the purpose of the
      trade-off study and its context (e.g. logic, organization, process or
      procedure).


<4>      Key technical requirements
a.    The trade-off report shall list the key technical requirements from the TS
      (as defined in ECSS-E-ST-10-06) to be satisfied by the possible alternative
      design solutions to conform to the needs or requirements of the user.
b.    The research of possible alternative design solutions should not preclude
      the identification of design solutions which are not currently mature
      enough, but which can be potential design solution for future similar
      applications.
              NOTE       A possible design solution is a technical answer
                         that has the capability to meet a set of technical
                         requirements.
c.    The system trade-off report shall identify and present the sources of
      information used to identify the possible design solution, e.g. R&D results,
      lessons learned, or similar applications.


<5>      Evaluation criteria
a.    The trade-off report shall list the selected evaluation criteria and precise
      the justification for selecting those criteria, and provide the weighting of
      criteria and their justifications.
              NOTE       The criteria are selected theme by theme from the
                         Technical Specification (as defined in ECSS-E-ST-
                         10-06 Annex A), the programmatic aspects
                         (including e.g. budget, schedule, etc… for
                         development, manufacturing, as well as target
                         cost for operations and recurrent items), and the
                         technical risks.
b.    The trade-off report shall identify the entity responsible for the evaluation
      of the design solutions for any criteria, as well as the source and agreement
      regarding weighting factors (e.g. with management).


<6>      Presentation of the alternative design solutions
a.    The trade-off report shall present every different alternative design
      solutions proposed by the organization in charge of the development of the
      system or product, the proposals from the customer and supplier if any,
      and emphasize the technical description that is correlated to the criteria of
      evaluation.
b.    The trade-off report shall characterize each alternative design solution in
      terms of technology status or maturity, performances capability, and risks.


<7>          Evaluation of the alternative design solutions
a.      The system trade-off report shall present the result of the evaluation of
        every identified alternative design solution with regard to the key
        technical requirements.
b.      For each alternative design solution the following shall be performed:
        1.     assessment of all the key technical requirements / evaluation criteria,
        2.     presentation of the pros and cons of the design solution, and
        3.     identification of the technical and programmatic risks.
c.      The trade-off report shall present, in a table, the result of the evaluation per
        criteria.


<8>          Classification of the alternative design solutions
a.      Based on the proposed scheme for weighting the evaluation criteria, the
        trade-off report shall provide a classification of the different alternative
        design solutions.


<9>          Analysis of the robustness of the classification
a.      The trade-off report shall provide the result of a sensitivity analysis of the
        criteria that provide advantage to the solution ranked first, e.g. when
        changing the weighting of the evaluation criteria.


<10>         Conclusion
a.      The trade-off report shall recommend one solution and explain the reason
        for this choice (e.g. evaluation criteria where the selected solution take
        advantage), and precise the condition for the application of the
        recommended solution.
b.      The trade-off report shall present the identified technical and
        programmatic risks induced by the choice of the recommended solution,
        and any additional activity necessary to be performed for risk mitigation.


L.2.2          Special remarks
None.


Annex M (normative)

                        Annex N (normative)
      Requirements traceability matrix (RTM) -
                                         DRD

N.1   DRD identification

             N.1.1       Requirement identification and source document
             This DRD is called from ECSS-E-ST-10, requirement 5.2.2b.


             N.1.2       Purpose and objective
             The requirement traceability matrix (RTM) defines the relationships between the
             requirements of a deliverable product defined by a technical requirements
             specification and the apportioned requirements of the product's lower level
             elements.
             The purpose of the RTM is to help verify that all stated and derived requirements
             are allocated to system components and other deliverables (forward trace).
             The matrix is also used to determine the source of requirements (backward trace).
             Requirements traceability includes tracing any information that satisfy the
             requirements such as capabilities, design elements, and tests.
             The RTM is also used to ensure that all requirements are met and to locate
             affected system components when there is a requirements change. The ability to
             locate affected components allows the impact of requirements changes on the
             system to be determined, facilitating cost, benefit, and schedule determinations.


N.2   Expected response

             N.2.1       Scope and content

             <1>      Introduction
             a.    The RTM shall contain a description of the purpose, objective, content and
                   the reason prompting its preparation.


             <2>      Applicable and reference documents
             a.    The RTM shall list the applicable and reference documents in support to
                   the generation of the document.


b.      The RTM shall include the following:
        1.     Technical requirements specification (as defined in ECSS-E-ST-10-06
               Annex A) of the product and its lower level elements
        2.     Product tree (as defined in ECSS-M-ST-10 Annex B)
        3.     Specification tree (as defined in ECSS-E-ST-10 Annex J).


<3>          Requirement traceability
a.      The RTM shall list all the technical requirement of the product TS.
b.      The RTM shall list all the lower level elements constituting the product and
        their technical requirements (contained in the lower-level element TS).
c.      The requirement identification shall be identical in the RTM and the
        different TS.
d.      Each technical requirement of the product shall be linked to at least one
        requirement of a lower level element.
                NOTE       The required visibility of the traceability down
                           the elements of the product tree is depending on
                           the criticality of some lower level elements w.r.t.
                           the product requirements.
e.      Each technical requirement of a lower level element should be linked to a
        technical requirement of the product.
f.      When a technical requirement of a lower level element is not linked to a
        technical requirement of the product, this requirement shall be justified
        and an evaluation of its existence or removal on the product shall be
        agreed between the customer and the supplier.


N.2.2          Special remarks
None.


                      Annex O (normative)
 Requirements justification file (RJF) - DRD

O.1   DRD identification

             O.1.1       Requirement identification and source document
             This DRD is called from ECSS-E-ST-10, requirement 5.2.1e.


             O.1.2       Purpose and objective
             The requirement justification file (RJF) is a generic title referring to all
             documentation which:
             - Records and describes the needs and the associated constrains resulting
                   from the different trade-offs.
             - Demonstrates how the requirements of the technical requirements
                   specification (TS) (as defined in ECSS-E-ST-10-06 Annex A) at each level
                   can satisfy the needs and the constraints of the TS of the level above.
                           NOTE      A top level RJF document is established at the
                                     upper level of the project structure that is,
                                     according to ECSS-M-ST-10, the first-level
                                     customer situated at level 0 of the customer
                                     supplier network. For other levels, the RJF is part
                                     of the design justification file (DJF) (as defined in,
                                     Annex K).


O.2   Expected response

             O.2.1       Scope and content

             <1>      Introduction
             a.    The RJF shall contain a description of the purpose, objective, content and
                   the reason prompting its preparation.


<2>        Applicable and reference documents
a.    The RJF shall list the applicable and reference documents in support to the
      generation of the document.
b.    The RJF shall include the reference to the technical requirements
      specification.


<3>        Selected concept/solution justification
a.    The RJF shall present the rationale for the selection of a concept for the
      technical requirements specification.
               NOTE       For justification, reference can be made to the
                          system concept report of the considered project.


<4>        Life profile justification for the selected concept/solution
a.    The RJF shall present and justify the life profile situations for the concept
      presented in the technical requirements specification.
               NOTE       For justification, reference can be made to the
                          system concept report of the considered project
                          where relevant.


<5>        Environments and constraints justification
a.    The RJF shall present and justify the different environments and
      constraints for each life profile situations for the concept presented in the
      technical requirements specification.
               NOTE       For justification, reference can be made to the
                          system concept report of the considered project
                          where relevant.


<6>        Technical requirements justification
a.    The RJF shall list all the technical requirements, and their identifier,
      expressed by the corresponding TS as they are organized in these
      documents.
b.    For each technical requirement the following information shall be
      provided:
      1.     the justification of the requirement (i.e. justified source),
      2.     the Entity or owner responsible for the requirement,
      3.     if one technical requirement is induced by several sources, the
             reason of the specified performance,
      4.     the justification of the quantified performance (such as the range, the
             approach used to determine the level, e.g. measure, estimation),
      5.     the justification of the selected verification method.


<7>      Requirement traceability
a.    The RJF shall present the requirement traceability between the technical
      requirements of the TS, and their justified source.


<8>      Compliance matrix for COTS
a.    For COTS, the RJF shall contain a compliance matrix between the technical
      specification/characteristics of the COTS and the technical requirement
      expressed by the TS.


O.2.2       Special remarks
a.    The RJF may be part of the design justification file (DJF) (as defined in


                        Annex P (normative)
      Product user manual (PUM or UM) - DRD

P.1   DRD identification

             P.1.1       Requirement identification and source document
             This DRD is called from ECSS-E-ST-10 requirement 5.4.1.4c.


             P.1.2       Purpose and objective
             The objective of the product user manual (PUM) is to provide information on
             design, operations and data of the product that is required by the user to handle,
             install, operate, maintain and dispose the product during its life time.


P.2   Expected response

             P.2.1       Scope and content

             <1>      Introduction
             a.    The introduction shall describe the purpose and objective of the PUM.


             <2>      Applicable and reference documents
             a.    The PUM shall list the applicable and reference documents in support of
                   the generation of the document.


             <3>      Product function definition

             <3.1> Product expected functions
             a.    The PUM shall provide a general description of the expected functions of
                   the product during its lifetime in expected operational context and
                   environment.

             <3.2> Product functional constraints
             a.    The PUM shall describe all product functional constraints.


<3.3> Life time phases and purposes
a.    The PUM shall address the whole product life cycle and all its modes:
      1.     Handling
      2.     Storage
      3.     Installation
      4.     Operations (nominal and contingency)
      5.     Maintenance
      6.     Disposal.
b.    The PUM shall consider potential consequences of the environment on
      those sequences (e.g. sensor blinding, eclipses);


<4>        Product description

<4.1> Design summary
a.    The PUM shall include the following:
      1.     summary of the product design, showing the definition of the
             product, its constituents, the distribution of functions and the major
             interfaces;
      2.     block diagram of the product;
      3.     top-level description of the product software architecture;
      4.     description of nominal product operations scenarios and constraints
             e.g. mutually exclusive modes of operation, power or resource
             sharing.

<4.2> Product level autonomy
a.    The PUM shall include the following:
      1.     description of product-level autonomy provisions in the areas of
             fault management (FDIR);
      2.     definition, for each autonomous function, of the logic or rules used
             and of its internal (product constituents) and external interfaces.

<4.3> Product configurations
a.    The PUM shall include the following:
      1.     drawings of the overall product configuration in all product modes;
      2.     definition of the product reference axes system(s);
      3.     drawings of the product layouts.

<4.4> Product budgets
a.    The PUM shall provide the distribution (or allocation) of the following
      budgets, per product constituent, or per operating mode, as appropriate:
      1.     mass properties;


      2.    alignment;
      3.    power consumption for all operational modes;
      4.    thermal budget and constraints and predictions;
      5.    Description of interfaces and related budgets. (e.g. RF links);
      6.    telemetry and telecommand date rates;
      7.    memory;
      8.    timing.

<4.5> Interface specifications
a.    The PUM shall provide a cross-reference to the applicable version of the
      ICD.

<4.6> Handling
a.    The PUM shall describe the conditions and procedures for the handling of
      the product, be it integrated or stand-alone.
b.    The PUM shall describe the specific design features, transport and
      environmental conditions, required GSE, and limitations for the handling
      of the product.

<4.7> Storage
a.    The PUM shall describe the conditions and procedures for the storage of
      the product, be it integrated or stand-alone.
b.    The PUM shall describe the specific design features, environmental
      conditions, required GSE, monitoring requirements, life-limited items,
      health maintenance procedures (activation, monitoring) and limitations for
      the storage of the product.

<4.8> Installation
a.    The PUM shall describe the conditions and procedures for the installation
      of the product, be it integrated or stand-alone.
b.    The PUM shall describe the specific design features, required GSE, modes,
      environmental conditions, and limitations for the installation of the
      product.

<4.9> Product operations
<4.9.1> General
a.    The PUM shall include timelines, modes and procedures, constraints to
      operate the product during its life cycle in nominal and contingency
      conditions, and highlight critical operations.
              NOTE 1     When the product is a space segment, the
                         product operations aspects are included in a
                         specific part of the UM called Flight Operations
                         Manual (FOM).


               NOTE 2     The implementation of the FOM by the ground
                          segment responsible organisation is contained in
                          the Mission Operations Plan (MOP, as defined in
<4.9.2> Timelines
a.    The PUM shall include:
      1.     Baseline event timelines for all nominal and contingency modes and
             phases.
      2.     Related constraints.
b.    Each timeline shall contain a detailed description (i.e. down to the level of
      each single operational action) of the complete sequence of operations to be
      carried out, including a description of the rationale behind the chosen
      sequence of events, a definition of any constraints (e.g. absolute timing,
      relative timing) and the interrelationships between operations in the
      sequence.
<4.9.3> Product modes
a.    The PUM shall describe all nominal and contingency modes, including:
      1.     their purpose (i.e. circumstances under which they are used),
      2.     the related procedures,
      3.     operational constraints,
      4.     resource utilization,
      5.     the definition of the associated modes, and
      6.     monitoring requirements.
b.    The PUM shall describe the allowable mode transitions and the operations
      procedure corresponding to each such transition.
c.    Appropriate cross-reference shall be made to product constituent modes
      and procedures.
<4.9.4> Product failure analysis
a.    The PUM shall provide the results of the product failure modes, effects and
      criticality analysis (FMECA) and the resulting list of single point failures.
b.    Potential product failures shall be identified by means of a fault-tree
      analysis (FTA).

<4.10>     Maintenance
a.    The PUM shall describe the conditions, procedures and logistics for the
      maintenance of the product, be it integrated or stand-alone.
               NOTE       The description can refer to the document that
                          conforms to the Integrated Logistic Support Plan
                          in conformance with ECSS-M-ST-70.


<4.11>     Disposal
a.    The PUM shall describe the conditions and procedures for the disposal of
      the product, be it integrated or stand-alone.
b.    The procedures shall include passivation, as relevant.
c.    The PUM shall identify the risks during and after disposal.


<5>        Products constituents description

<5.1> General
a.    The information specified in P.2.1<5.2> to P.2.1<5.9> shall be provided for
      each product constituent.

<5.2> Product constituent design summary
a.    The PUM shall describe the product constituent including:
      1.     the overall functions of the product constituent and the definition of
             its operational modes during the different mission phases;
      2.     description of any product constituent management functions, fault
             management concept and redundancy provisions;
      3.     a summary description of the component units/equipment and
             software including the functions which each supports;
      4.     product constituent functional block diagrams and a diagram
             showing the source of telemetry outputs and the sink of
             telecommand inputs;
      5.     interfaces;
      6.     budgets.

<5.3> Product constituent design definition
a.    The following shall be provided for each product constituent:
      1.     a detailed design description, including block diagrams, functional
             diagrams, logic and circuit diagrams;
      2.     physical characteristics including location and connections to the
             support structure, axes definition and alignment where relevant,
             dimensions and mass properties;
      3.     principle of operation and operational constraints of the product
             constituent;
      4.     lower level of breakdown for products composed of many complex
             elements.

<5.4> Software
a.    The PUM shall include:
      1.     description of software design,
      2.     product constituent software,


     3.    application process service software, and
     4.    memory map.
b.   The PUM shall describe the organization of the software and its physical
     mapping onto hardware.
c.   The PUM shall describe the details of each software component i.e.
     scheduler, interrupt handler, I/O system, telecommand packet handling
     system, telemetry packet handling system, including for each component
     its functions, component routines, input/output interfaces, timing and
     performance characteristics, flowcharts and details of any operational
     constraints.
d.   For the application process service software, the PUM shall:
     1.    describe the services implemented making cross-reference to ECSS-
           E-ST-70-41 “Telemetry and telecommand packet utilization”, as
           tailored for the mission;
     2.    summarize all telemetry and telecommand structures (e.g. packets)
           including the conditions under which they are generated, the
           generation frequency, content and interpretation.
e.   For each memory block, a map shall be provided showing RAM and ROM
     address areas, areas allocated for program code, buffer space and working
     parameters (e.g. content of protected memory).

<5.5> Product component performance
a.   The PUM shall describe all relevant product constituent performance
     characteristics, define the expected performance degradation as a function
     of time during the mission, and identify the resulting impact in terms of
     modifications to operational requirements or constraints.

<5.6> Product component telemetry and telecommand lists
a.   For each product constituent, the following lists shall be provided:
     1.    a list of the housekeeping telemetry parameters;
     2.    a list of the telecommands.
b.   Each housekeeping telemetry shall have a functional description with
     validity conditions, telecommand relationship, and all technical
     information necessary for using it.
c.   Each telecommand shall have a functional description with utilization
     conditions (e.g. pre-transmission validity, criticality level), command
     parameters (syntax and semantics) and execution verification in telemetry.

<5.7> Product component failure analysis
a.   The PUM shall describe:
     1.    Identification of potential product constituent failures by means of a
           systematic failure analysis (including a subsystem FMECA and
           FTA).


     2.    Identification of the methods by which the higher levels can identify
           a failure condition from analysis of the telemetry data and isolate the
           source of the failure.

<5.8> Product components operations
a.   The PUM shall describe:
     1.    product constituent modes;
     2.    nominal operational procedures;
     3.    contingency procedures.
b.   product constituent modes shall be defined for all distinct nominal and
     back-up modes of the subsystem including:
     1.    purpose (i.e. conditions under which each is used);
     2.    operational constraints;
     3.    resource utilization;
     4.    the definition of the associated modes for each product constituent
           and its software functions;
     5.    higher level monitoring requirements;
     6.    identification of the allowable mode transitions and any product
           constituent operational constraints.
c.   Nominal operational procedures shall be defined for each nominal mode
     transition identified under P.2.1<5.8>b.6.
d.   For each procedure described in P.2.1<5.8>c., the following shall be
     provided:
     1.    an introduction describing the purpose of the procedure and the
           phase(s) or conditions when applicable;
     2.    the body of the procedure, structured according to operational steps,
           including:
           (a)   pre-conditions for the start of the step defining, where
                 applicable:
                 - product or product constituent level pre-requisites (e.g.
                   configuration and resource requirements, such as power,
                   fuel);
                 - external interfacing products pre-requisites.
           (b)   telecommands to be sent;
           (c)   telemetry data to be monitored to verify correct execution of
                 the step;
           (d)   interrelationships between steps (e.g. conditional branching
                 within the procedure, timing requirements or constraints,
                 hold and check points);
           (e)   conditions for completion of the step.


e.   Contingency procedures shall be defined for each failure case identified in
     the product constituent failure analysis (FMECA/FTA).
             NOTE       This can utilize a nominal operational procedure
                        already identified in P.2.1<5.8>c. above.
f.   For contingency procedures, the same details shall be provided as for
     nominal operational procedures in P.2.1<5.8>d. above.
g.   Where the recovery method for a failure or group of failures is mode,
     mission, or phase dependent, separate procedures shall be described for
     each mode/mission phase.

<5.9> Product component data definition
a.   For each operational mode of the product constituent, sensor output data,
     conditions under which they are generated, their contents, and data rate
     shall be described.
b.   Required on-board processing performed on sensor data and algorithms
     used for this shall be described.


P.2.2      Special remarks
a.   Where the objective is to allow for the accommodation of equipment
     designed a posteriori w.r.t an existing platform or vehicle, the following
     documents shall be part of the UM:
     1.    The accommodation handbook describing the location, mounting,
           all interfaces and clearances of equipment in a platform or vehicle.
     2.    The installation plan describing the approach, methods, procedures,
           resources and organization to install, commission, and check the
           operation of the equipment in its fixed operational environment.


Annex QAnnex R (informative)
                            Mapping of typical DDP to ECSS
                                                documents


      Design Development Plan (DDP) content                                     ECSS coverage
Introduction                                                          ECSS-M-ST-10-PMP <3>
   - General summary of the scope, objective and constraints        ECSS-E-ST-10-SEP <3.1>
   - Definition of responsibilities and pre-requisites              ECSS-M-ST-10-PMP <4>
System definition including high level product tree                   ECSS-M-ST-10-PT
   - Identification of customer furnished products                  ECSS-M-ST-60-9.6.2 req.
   - Availability of and need to reuse existing products            ECSS-E-ST-10-SEP <4.2>.6 and <5.2.13>
   - Specification tree                                             ECSS-M-ST-10-PT <3>.e
Technology assessment                                                 ECSS-E-ST-10-SEP <5.2.5>
Availability of and need to develop new technologies                  ECSS-E-ST-10-TP <4.3>
System design flow and philosophy of models                           ECSS-E-ST-10-SEP <4.2>.4
   - Model philosophy                                               ECSS-E-ST-10-SEP <4.2>.5
   - Design margin philosophy for budgets
           -   Margin philosophy for requirements as flown
               down from system to subsystem- assembly -- and
               equipment level
           -   Management of system resource allocation over the
               entire project phases and resource reporting to the
               next higher level
           -   Rationale


System control and verification                                       ECSS-E-ST-10-SEP <5.2.2>
   - Qualification and acceptance philosophy                        -> ECSS-E-ST-10-02-VP
   - Budget allocation philosophy                                   -> ECSS-E-ST-10-02-VCD (inc. VM)
   - Compliance to requirements demonstration philosophy
   - High-level Assembly, Integration & Verification Plan, incl.:
           -   end to end test
           -   mission simulation and Dress Rehearsals


Planning and definition of milestones and reviews                        ECSS-M-ST-10-PMP <7>
including the analysis of the critical path(s)                           -> ECSS-M-ST-60-S
   - definition and scope of reviews in terms of
           -      baselining of requirements and requirements            ECSS-M-ST-10-01
                  control
           -      design releases and control of released design
                  including external and internal interfaces
Definition of required Ground Support Equipment
and schedule of development and delivery
Risk assessment linked to development choices                            ECSS-E-ST-10-SEP <5.4> <3.5>
                                 (Note: Verification matrix = 1st issue of VCD)


                        Annex S (informative)
          Guideline content of Analysis Report

S.1   DRD identification

             S.1.1       Requirement identification and source document
             This report structure is called from the Note of ECSS-E-ST-10, requirement 5.3.1j
             and is provided as a guideline.


             S.1.2       Purpose and objective
             The analysis report describes, for each analysis, the relevant assumptions,
             utilized methods, techniques and results.


S.2   Expected response

             S.2.1       Scope and content

             <1>      Introduction
             a.    The analysis report contains a description of the purpose, objective, content
                   and the reason prompting its preparation.
             b.    Any open issue, assumption and constraint relevant to this document are
                   stated and described.


             <2>      Applicable and reference documents
             a.    The analysis report lists the applicable and reference documents in support
                   to the generation of the document, and make a clear reference to the
                   configuration baseline of the product considered for the analysis.


             <3>      Definitions and abbreviations
             a.    The analysis report lists the applicable dictionary or glossary and the
                   meaning of specific terms or abbreviations utilized in the document with
                   the relevant meaning.


<4>          Analysis approach
a.      The analysis report summarizes the analysis content and the method
        utilized.


<5>          Assumptions and limitations
a.      The analysis report describes the basic assumptions, the boundary
        conditions, validity of the analysis, life profile aspects, and all other related
        limitations.


<6>          Analysis description
a.      The analysis report describes and justify the analysis methods used
        including software, tools and associated models.


<7>          Analysis results
a.      The analysis report presents the main calculations, associated results,
        accuracies, sensitivities, margins where relevant.


<8>          Conclusions
a.      The analysis report:
        1.     summarizes the analysis results,
        2.     summarizes the conditions of validity of this analysis,
        3.     clearly states and describes any open issue.
b.      Where the analysis report is used for the verification of requirements it
        lists the requirements to be verified (in correlation with the VCD),
        summarizes the analysis results, presents comparison with the
        requirements, and indicates the verification closeout judgements (e.g.
        requirement met / not met).


S.2.2          Special remarks
None.


# Bibliography


                      general requirements
                      operations
                      packet utilization
ECSS-E-TM-10-10       Space engineering -- Logistic engineering
ECSS-E-TM-10-20       Space engineering -- Product data exchange
ECSS-E-TM-10-21       Space engineering -- System modelling and
                      simulation
                      management
                      support
                      management
IEEE P1220            Standard for application and management of the
                      systems engineering process
ISO 24113:2011        Space systems -- Space debris mitigation


