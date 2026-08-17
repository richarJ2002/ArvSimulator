


Space engineering
Technical requirements
specification


# Foreword
This Standard is one of the series of ECSS Standards intended to be applied together for the
management, engineering and product assurance in space projects and applications. ECSS is a
cooperative effort of the European Space Agency, national space agencies and European industry
associations for the purpose of developing and maintaining common standards. Requirements in this
Standard are defined in terms of what shall be accomplished, rather than in terms of how to organize
and perform the necessary work. This allows existing organizational structures and methods to be
applied where they are effective, and for the structures and methods to evolve as necessary without
rewriting the standards.
This Standard has been prepared by the ECSS-E-ST-10-06 Working Group, reviewed by the ECSS
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
Copyright:      2009 © by the European Space Agency for the members of ECSS


# Change log


ECSS-E-10 Part 6A       First issue
ECSS-E-10 Part 6A Rev 1 Second issue
6 March 2009            The main changes between ECSS-E-10 Part 6A Rev 1 and the current
                        version are the following:
                            - TS renamed to “Technical requirements specification”
                            - Removal of notion of Functional specification, update and
                                alignment of descriptive and normative text.
                                 o     Update of types of requirements;
                                 o     Update of requirements (removal, rewording);
                                 o     Deletion of Functional specification (FS) - DRD and update of
                                       Technical specification (TS) - DRD now titled “Technical
                                       requirements specification (TS) -- DRD”.


                                                                                      Table of contents

Change log .................................................................................................................3

Introduction................................................................................................................7

1 Scope.......................................................................................................................8

# 2 Normative references .............................................................................................9

# 3 Terms, definitions and abbreviated terms..........................................................10
   3.1     Terms from other standards ..................................................................................... 10
## 3.2 Terms specific to the present standard .................................................................... 10
   3.3     Abbreviated terms .................................................................................................... 12

# 4 Technical requirements specification purpose and description......................13
## 4.1 Technical requirements specification purpose and description ................................ 13
   4.2     TS content ................................................................................................................ 13

# 5 Process for establishing a technical requirements specification ....................15
   5.1     General..................................................................................................................... 15
## 5.2 Process for establishing a technical requirements specification .............................. 15

# 6 Technical requirements types .............................................................................18
   6.1     General..................................................................................................................... 18
## 6.2 Identification of types of technical requirements....................................................... 18
           6.2.1        Introduction................................................................................................. 18
### 6.2.2 Functional requirements ............................................................................. 18
### 6.2.3 Mission requirements ................................................................................. 19
### 6.2.4 Interface requirements................................................................................ 19
### 6.2.5 Environmental requirements....................................................................... 19
### 6.2.6 Operational requirements ........................................................................... 19
### 6.2.7 Human factor requirements ........................................................................ 19
### 6.2.8 (Integrated) logistics support requirements ................................................ 20
### 6.2.9 Physical requirements ................................................................................ 20
### 6.2.10 Product assurance (PA) induced requirements.......................................... 21
### 6.2.11 Configuration requirements ........................................................................ 21


### 6.2.12 Design requirements .................................................................................. 21
### 6.2.13 Verification requirements............................................................................ 21

# 7 Overall Requirements for technical requirements specifications....................22
   7.1     Overview .................................................................................................................. 22
## 7.2 Requirements for technical requirements specifications .......................................... 22
           7.2.1        General....................................................................................................... 22
           7.2.2        Responsibility ............................................................................................. 22
### 7.2.3 Technical requirements organisation.......................................................... 22
### 7.2.4 Technical reference .................................................................................... 23
### 7.2.5 Configuration management ........................................................................ 23
           7.2.6        Format ........................................................................................................ 23
### 7.2.7 Supplementary information......................................................................... 23
           7.2.8        Restrictions................................................................................................. 23

# 8 Requirements for formulating technical requirements .....................................24
   8.1     General..................................................................................................................... 24
## 8.2 Requirements for the characteristics of a technical requirement of a TS ................. 24
           8.2.1        Performance ............................................................................................... 24
           8.2.2        Justification................................................................................................. 24
### 8.2.3 Configuration management and traceability ............................................... 25
           8.2.4        Ambiguity.................................................................................................... 25
           8.2.5        Uniqueness................................................................................................. 25
           8.2.6        Identifiability................................................................................................ 25
           8.2.7        Singularity................................................................................................... 25
           8.2.8        Completeness............................................................................................. 26
           8.2.9        Verification.................................................................................................. 26
           8.2.10       Tolerance.................................................................................................... 26
## 8.3 Recommendations for the wording of requirements................................................. 26
           8.3.1        General format............................................................................................ 26
### 8.3.2 Required verbal form .................................................................................. 26
           8.3.3        Format restrictions...................................................................................... 27

Annex A (normative) Technical requirements specification (TS) - DRD............28

Bibliography.............................................................................................................31


Figures
Figure 5-1: Process to establish the preliminary TS in Phase 0............................................. 16
Figure 5-2: Process to establish the TS in phase A ............................................................... 17


# Introduction

This Standard addresses the process for and the content of the Technical
requirements specification (TS).
This document is an adaptation of ISO 21351 “Space systems --- Functional and
technical specifications” to the ECSS context.


# Scope

This Standard provides an overview of the purposes and positions of the
technical requirements specification, defines the different types of
requirements, and defines requirements on the TS and on its requirements.
This Standard is applicable to all types of space systems, all product elements,
and projects.
This standard may be tailored for the specific characteristic and constraints of a
space project in conformance with ECSS-S-ST-00.


# Normative references

The following normative documents contain provisions which, through
reference in this text, constitute provisions of this ECSS Standard. For dated
references, subsequent amendments to, or revision of any of these publications,
do not apply. However, parties to agreements based on this ECSS Standard are
encouraged to investigate the possibility of applying the more recent editions of
the normative documents indicated below. For undated references, the latest
edition of the publication referred to applies.


# Terms, definitions and abbreviated terms

## 3.1 Terms from other standards
              For the purposes of this Standard, the terms and definitions from ECSS-S-ST-00-01
              apply.


## 3.2 Terms specific to the present standard
### 3.2.1 constraint
              characteristic, result or design feature which is made compulsory or has been
              prohibited for any reason
                             NOTE 1     Constraints are generally restrictions on the
                                        choice of solutions in a system.
                             NOTE 2     Two kinds of constraints are considered, those
                                        which concern solutions, and those which
                                        concern the use of the system.
                             NOTE 3     For example constraints can come from
                                        environmental and operational conditions, law,
                                        standards, market demand, investments and
                                        means availability, or the organization’s policy.
                             NOTE 4     Adapted from EN 1325-1.

### 3.2.2 environment
              <product> natural conditions and induced conditions that constrain the design
              definitions for end products and their enabling products
                             NOTE       Examples of natural conditions are weather,
                                        climate, ocean conditions, terrain, vegetation,
                                        dust, light and radiation. Example of induced
                                        conditions are electromagnetic interference,
                                        heat, vibration, pollution and contamination.

### 3.2.3 environment
              <project> external factors affecting an enterprise or project

### 3.2.4 environment
              <development> external factors affecting development tools, methods, or
              processes


### 3.2.5 function
intended effect of a system, subsystem, product or part
               NOTE 1     Adapted from EN 1325-1.
               NOTE 2     Functions should have a single definite
                          purpose. Function names should have a
                          declarative    structure   (e.g.   “Validate
                          Telecommands”), and say “what” is to be done
                          rather than “how”. Good naming allows design
                          components with strong cohesion to be easily
                          derived.

### 3.2.6 functional analysis
technique of identifying and describing all functions of a system
               NOTE       Adapted from EN 1325-1.

### 3.2.7 life cycle
time interval between the conceptual exploration of the product introduction to
its withdrawal from service

### 3.2.8 mission
a possible instantiation of the mission statement in a mission concept
               NOTE 1     Each mission is described in an MDD.
               NOTE 2     The implementation in time is called mission
                          scenario.

### 3.2.9 need
what is necessary for, or desired by, the user
               NOTE 1     A need can be declared or undeclared; it can be
                          an existing or a potential one.
               NOTE 2     The user is a person or an organization for
                          which the product is designed and which
                          exploits at least one of its functions at any time
                          during its life cycle.
               NOTE 3     For the space community, the needs are often
                          called mission statement.
               NOTE 4     Adapted from EN 1325-1.

### 3.2.10 specification
document stating requirements
               NOTE 1     A specification can be related to activities (e.g.
                          procedure document, process specification and
                          test specification), or products (e.g. technical
                          requirements specification)
               NOTE 2     Adapted from ISO 9000:2000.


### 3.2.11 technical requirements specification
            document by which the customer establishes the intended purpose of a
            product, its associated constraints and environment, the operational and
            performances features
                          NOTE      The TS is the baseline of the business agreement
                                    to develop or purchase the selected solution.
                                    This specification is called in some projects
                                    System Requirements Document (SRD).


## 3.3 Abbreviated terms
            For the purpose of this Standard, the abbreviated terms from ECSS-S-ST-00-01
            and the following apply:


             Abbreviation      Meaning
             IEC               International Electrotechnical Commission
             TS                technical requirements specification
             MDD               mission definition document


         Technical requirements specification
                     purpose and description

## 4.1 Technical requirements specification purpose and
      description
             The technical requirements specification is a document through which a
             customer expresses his needs (or those that he is responsible for expressing)
             and the related environment and constraints in terms of technical requirements.
             The technical requirements contained in the TS allow for potential suppliers to
             propose the best technical and programmatic solutions.
                           NOTE       The intention of the technical requirements
                                      specification is not to assume or refer to specific
                                      solutions.
             The TS is the technical reference for the qualification of the design and for the
             acceptance of the end product.
             In that scope, the technical requirements contained in the TS are subject to the
             agreed change process defined in the business agreement. They are attainable
             and verifiable.
                           NOTE       The change process itself can change in
                                      between project phases (Phase 0, A, B, C/D).


## 4.2 TS content
             A technical requirements specification is typically composed of three major sets
             of information:
             - General information related to the context of the document (e.g.
                   administrative information, normative documents and informative
                   documents);
             - General information related to the context of the project, the product or
                   system;
             - Technical requirements (described in clauses 6 and 8).


The specification provides the general information related to its context:
- Administrative information: to provide all the information regarding, for
      example, the owner, status, identification, distribution list, and
      management rule;
- Scope: to define without ambiguity the subject of the TS and aspects
      covered, thereby indicating limits of applicability;
- References: to list all the normative (applicable) documents and standards,
      with titles, issue revision, and dates that are referred to in the TS;
- Terms, definitions and abbreviated terms: to list the specific terms and
      abbreviated terms used in the TS.
It also provides general information related to the context of the project,
product or system:
- to provide a clear and rapid understanding of the project and the main
      needs or mission statements;
- to give indications of the market as additional information, as well as
      information about the context of the project and the objectives (situation
      of the project in a larger programme, further developments);
- to provide information on the environment and its constraints;
- to detail the different situations of the product or system life cycle.


          Process for establishing a technical
                  requirements specification

## 5.1 General
             The management of a programme necessitates the establishment of a set of
             successive states of a product and a network of customer and supplier
             relationships.
             The successive states of a product are characterised by initially a “high level”
             (e.g. rather of functional type) definition of needs / requirements (e.g. at
             Phase 0), evolving progressively to a more precise (e.g. at phase B) or frozen
             (e.g. Phase C, or procurement of an equipment) definition of all requirements.
             The procurement of products is governed by business agreements between two
             parties - the customer and the supplier. At any intermediate level, the supplier
             of an item acts as customer in specifying components towards its suppliers.
             A business agreement results from a process between a customer with a
             problem to solve, and a supplier with potential solutions. This results in a set of
             requirements that engages both parties. The list of technical requirements
             constitutes an important part of the business agreement and is adapted to the
             nature of the expected outcome. This list is contained in the technical
             requirements specification.


## 5.2 Process for establishing a technical requirements
      specification
             The process to establish the technical requirements specification during Phase 0
             of a project starts with the identification and evaluation of the different possible
             concepts to establish the TS . This step is needed in phase 0 for space projects
             with low heritage. It can also be required in Phase A.
                            NOTE       A functional analysis can be performed to
                                       capture     the   technical   requirements
                                       (see EN 12973).
             It consists of an initial assessment of the project and results in the preliminary
             TS, as illustrated in Figure 5-1. The purpose of this preliminary TS is to express
             the customer’s need, mission statement, associated environmental constraint
             and programmatic element in terms of technical requirements (i.e. the problem
             to solve). This document serves as a basis to initiate the next step.


Figure 5-1: Process to establish the preliminary TS in Phase 0

       Where:
       - The F1.1 task: The customer identifies and captures the user’s needs or
             mission statements, associated environments and constraints. He
             expresses these in terms of technical requirements;
       - The F1.2 task: The customer structures, classifies and justifies (see 8.1.1)
             individual technical requirements;
       - The F1.3 task: The customer assesses the entire set of technical
             requirements for correctness, consistency and suitability for the intended
             use;
       - The F1.4 task: The customer establishes the preliminary TS and releases it.
       The second step consists of the exploration among the different possible
       concepts ensuring the conformity to the defined needs, then the selection of one
       concept, and results in the TS. This version is progressively drafted from the
       preliminary TS and takes into account the induced constraints from the possible
       concepts. Figure 5-2 illustrates this process.


Figure 5-2: Process to establish the TS in phase A
 Where:
 - The F1.5 task: The customer reviews the preliminary TS, identifies and
       proposes possible concepts;
 - The F1.6 task: The customer evaluates and selects preferred concepts;
 - The F1.7 task: The customer identifies the need for changes to the
       preliminary TS taking into account the limitations and possibilities
       induced by the selected preferred concepts. Then, he expresses the
       adjusted or new individual technical requirements;
 - The F1.8 task: The customer structures, classifies and justifies (see 8.2.1)
       the individual technical requirements;
 - The F1.9 task: The customer assesses the entire set of technical requirements
       for correctness, consistency and suitability for the intended use;
 - The F1.10 task: The customer establishes the TS and releases it.
 The process described is applicable at each decomposition level where the
 solution to be developed is chosen (e.g. for establishing a system level
 specification, or a lower level specification).
 The outcome of this process, the technical requirements specification (TS), is a
 set of technical requirements to be issued by the customer and to be included in
 the business agreement for the development.
      NOTE       The customer, as a result of the negotiation of the
                 business agreement with the supplier, can decide to
                 update a few elements of his TS (as of other requirements
                 specifications attached to the business agreement). This
                 updated TS is then included in the business agreement
                 for the next phase. In conformance with ECSS-M-ST-10,
                 this update is typically done as a result of the SRR.


                       Technical requirements types

## 6.1 General
             The management of the technical requirements is based upon recognition of the
             attributes of these technical requirements.


## 6.2 Identification of types of technical requirements

### 6.2.1 Introduction
             The differing types of technical requirements contained in the TS are as follows
             - functional requirements,
             - mission requirements,
             - interface requirements,
             - environmental requirements,
             - operational requirements,
             - human factor requirements,
             - (integrated) logistics support requirements,
             - physical requirements,
             - product assurance (PA) induced requirements,
             - configuration requirements,
             - design requirements,
             - verification requirements.
                           NOTE       These different technical requirements are
                                      called “user related functions” and constraints
                                      in EN 1325-1.


### 6.2.2 Functional requirements
             Requirements that define what the product shall perform, in order to conform
             to the needs / mission statement or requirements of the user.
                           NOTE       For example: “The product shall analyse the
                                      surface of Mars and transmit the data so that it
                                      is at the disposal of the scientific community”.


### 6.2.3 Mission requirements
Requirements related to a task, a function, a constraint, or an action induced by
the mission scenario.
               NOTE       For example: “The product shall be designed to
                          be put in its final position after a transfer
                          duration shorter than 90 days”.


### 6.2.4 Interface requirements
Requirements related to the interconnection or relationship characteristics
between the product and other items.
               NOTE 1     This includes different types of interfaces (e.g.
                          physical, thermal, electrical, and protocol).
               NOTE 2     For example: “The product shall dialogue with
                          the ground segment using telemetry”.


### 6.2.5 Environmental requirements
Requirements related to a product or the system environment during its life
cycle; this includes the natural environments (e.g. planet interactions, free space
and dust) and induced environments (e.g. radiation, electromagnetic, heat,
vibration and contamination).
               NOTE       For example: “The product shall operate within
                          the temperature range from 30 ºC to 50 ºC”.


### 6.2.6 Operational requirements
Requirements related to the system operability.
               NOTE 1     This includes operational profiles and the
                          utilization environment and events to which
                          the product shall respond (e.g. autonomy,
                          control and contingency) for each operational
                          profile.
               NOTE 2     For example: “The product shall be designed to
                          accept control of the viewing function from the
                          ground segment”.


### 6.2.7 Human factor requirements
Requirements related to a product or a process adapted to human capabilities
considering basic human characteristics.
               NOTE 1     This includes the following basic human
                          capability characteristics:
                          - decision making,
                          - muscular strength,         coordination     and
                            craftsmanship,


                         - body dimensions,
                         - perception and judgement,
                         - workload, and
                         - comfort and freedom from environmental
                           stress.
              NOTE 2     For example: “The product shall display the
                         information with no more than two windows
                         on the screen at the same time”.


### 6.2.8 (Integrated) logistics support requirements
Requirements related to the (integrated) logistics support considerations to
ensure the effective and economical support of a system for its life cycle.
              NOTE 1     This includes the following subjects:
                         - the constraints concerning the maintenance
                           (e.g. minimum periodicity, intervention
                           duration,       infrastructure,    tooling,
                           intervention modes),
                         - packaging, transportation, handling and
                           storage,
                         - training of product users,
                         - user documentation,
                         - implementation of the product at the user’s
                           site, and
                         - reuse of the product or its elements.
              NOTE 2     For example: “The product shall be designed to
                         be installed at the customer’s site within two
                         days”.


### 6.2.9 Physical requirements
Requirements that establish the boundary conditions to ensure physical
compatibility and that are not defined by the interface requirements, design and
construction requirements, or referenced drawings.
              NOTE 1     This includes requirements related to
                         mechanical characteristics, electrical isolation
                         and chemical composition (e.g. weight and
                         dimensional limits).
              NOTE 2     For example: “The product shall have a mass of
                         (30 ± 0,1) kg”.


### 6.2.10 Product assurance (PA) induced
            requirements
Requirements related to the relevant activities covered by the product
assurance.
              NOTE       This can include the following subjects:
                         - Reliability, availability, maintainability,
                         - Safety, and
                         - Quality assurance.


### 6.2.11 Configuration requirements
Requirements related to the composition of the product or its organization.
              NOTE       For example: “The product shall have 7 power
                         modules with 2 power outlets per engine”.


### 6.2.12 Design requirements
Requirements related to the imposed design and construction standards such as
design standards, selection list of components or materials, interchangeability,
safety or margins.
              NOTE       For example “The receiver          shall   use   a
                         phase-lock loop (PLL)”.


### 6.2.13 Verification requirements
Requirements related to the imposed verification methods, such as compliance
to verification standards, usage of test methods or facilities.
              NOTE       For example: “The thermal balance test shall be
                         performed using solar illumination”.


           Overall Requirements for technical
                  requirements specifications

## 7.1 Overview
             In the perspective of the customer -- supplier relationship, these requirements
             are imposed by the customer on the supplier of the product for the production
             of lower level specifications.
             However, it is recommended that the customer also applies them in its internal
             process of producing technical requirements specifications.


## 7.2 Requirements for technical requirements
      specifications

### 7.2.1 General
             a.    Technical requirements shall be formulated as defined in clause 8.
                           NOTE        The DRD for the TS is shown in Annex A.
             b.    The specification shall be identifiable, referable and related to a product
                   or a system.


### 7.2.2 Responsibility
             a.    An entity shall be identified to be responsible for the specification.
             b.    The responsible entity of the specification shall define the content and
                   format of the attributes listed in clause 8.


### 7.2.3 Technical requirements organisation
             a.    The technical requirements shall be grouped.
                           NOTE        Grouping can be either by type or in
                                       accordance with the different situations of the
                                       product life cycle.
             b.    Each technical requirement shall be separately stated.


c.   Abbreviated terms used in requirements shall be defined in a dedicated
     section of the specification.
d.   The technical requirements shall be consistent (e.g. not in conflict with
     the other requirements within the specification).
e.   The technical requirements shall not be in conflict with the other
     requirements contained in business agreement documents.


### 7.2.4 Technical reference
a.   The specification shall be complete in terms of applicable requirements
     and reference to applicable documents.
b.   A technical requirement shall not call for more than one technical
     requirement in an applicable referred document.
c.   The link to an applicable document shall be stated in the technical
     requirements.
d.   The reference number of the applicable documents cited in the
     specification shall contain the revision identifier.


### 7.2.5 Configuration management
a.   The specification shall be under configuration management.


### 7.2.6 Format
a.   The specification shall be established to be readily exchanged according
     to the established access policy and rights.


### 7.2.7 Supplementary information
a.   If a clause is stated to be informative or descriptive, then this clause shall
     not contain any requirement or recommendation.


### 7.2.8 Restrictions
a.   Technical requirements specifications shall only include technical
     requirements and exclude requirements such as cost, methods of
     payment, quantity required, time or place of delivery.


      Requirements for formulating technical
                              requirements

## 8.1 General
             In the perspective of the customer-supplier relationship, these requirements are
             imposed by the customer on the supplier of the product for the production of
             lower level specifications.
             However, it is recommended that the customer also applies them in its internal
             process of producing technical requirements specifications.


## 8.2 Requirements for the characteristics of a technical
      requirement of a TS

### 8.2.1 Performance
             a.    Each technical requirement shall be described in quantifiable terms.
             b.    If necessary to remove possible ambiguities of a given performance
                   requirement the method used to determine the required performance
                   shall be indicated in the requirement itself.


### 8.2.2 Justification
             a.    Each technical requirement should be justified.
             b.    The entity responsible of the technical requirement shall be identified.
             c.    The entity responsible of the specification shall define what part of the
                   justification shall be included in the specification as informative material.
                           NOTE        The justification of every technical requirement,
                                       as well as the entity responsible of the technical
                                       requirement, can be collected and recorded in a
                                       requirement justification file (see ECSS-E-ST-10
                                       Annex O).


### 8.2.3 Configuration management and traceability
a.   Each technical requirement shall be under configuration management.
b.   All technical requirements shall be backwards-traceable.
c.   All technical requirements shall be forward-traceable.
             NOTE 1      A technical requirement is traceable when it is
                         possible to trace the history, application, or
                         location of a requirement by means of recorded
                         identification.
             NOTE 2      The backward traceability is the process to trace
                         back the source of each requirement to the
                         requirement from which it derives.
             NOTE 3      The forward traceability is the process to
                         establish that each level requirement is
                         implemented at the appropriate phase of the
                         design and that all requirements are
                         implemented.


### 8.2.4 Ambiguity
a.   The technical requirements shall be unambiguous.


### 8.2.5 Uniqueness
a.   Each technical requirement shall be unique.


### 8.2.6 Identifiability
a.   A technical requirement shall be identified in relation to the relevant
     function, product or system.
b.   A unique identifier shall be assigned to each technical requirement.
c.   The unique identifier should reflect the type of the technical requirement.
d.   The unique identifier should reflect the life profile situation.
             NOTE        In general a technical requirement is identified
                         by, for example, a character or a string of
                         characters, a number, or a name tag or
                         hypertext.


### 8.2.7 Singularity
a.   Each technical requirement shall be separately stated.
             NOTE        Technical requirements are single or separately
                         stated when they are not the combination of
                         two or more technical requirements.


### 8.2.8 Completeness
            a.   A technical requirement shall be self-contained.
                         NOTE       A technical requirement is self-contained when
                                    it is complete and does not require additional
                                    data or explanation to express the need.


### 8.2.9 Verification
            a.   A technical requirement shall be verifiable using one or more approved
                 verification methods.
                         NOTE       A technical requirement is verifiable when the
                                    means to evaluate if the proposed solution
                                    meets the requirement are known.
            b.   Verification of technical requirements shall be performed in conformance
                 with ECSS-E-ST-10-02.


### 8.2.10 Tolerance
            a.   The tolerance shall be specified for each parameter/variable.
                         NOTE       The technical requirement tolerance is a range
                                    of values within which the conformity to the
                                    requirement is accepted.


## 8.3 Recommendations for the wording of requirements

### 8.3.1 General format
            a.   Technical requirements should be stated in performance or
                 “what-is-necessary” terms, as opposed to telling a supplier “how to”
                 perform a task, unless the exact steps in performance of the task are
                 essential to ensure the proper functioning of the product.
            b.   Technical requirements should be expressed in a positive way, as a
                 complete sentence (with a verb and a noun).


### 8.3.2 Required verbal form
            a.   The verbal form “shall” shall be used whenever a provision is a
                 requirement.
            b.   The verbal form “should” shall be used whenever a provision is a
                 recommendation.
            c.   The verbal form “may” shall be used whenever a provision is a
                 permission.
            d.   The verbal form “can” shall be used to indicate possibility or capability.


### 8.3.3 Format restrictions
a.   List of terms that shall not be used in a TS requirement
     1.    “and/or”,
     2.    “etc.”,
     3.    “goal”,
     4.    “shall be included but not limited to”,
     5.    “relevant”,
     6.    “necessary”,
     7.    “appropriate”,
     8.    “as far as possible”,
     9.    “optimize”,
     10.   “minimize”,
     11.   “maximize”,
     12.   “typical”,
     13.   “rapid”,
     14.   “user-friendly”,
     15.   “easy”,
     16.   “sufficient”,
     17.   “enough”,
     18.   “suitable”,
     19.   “satisfactory”,
     20.   “adequate”,
     21.   “quick”,
     22.   “first rate”,
     23.   “best possible”,
     24.   “great”,
     25.   “small”,
     26.   “large”, and
     27.   “state of the art”.


                     Annex A (normative)
Technical requirements specification (TS) -
                                      DRD

A.1   DRD identification

             A.1.1       Requirement identification and source
                         document
             This DRD is called from ECSS-E-ST-10, requirement 5.2.3.1.b and 5.6.4.a for all
             technical requirements specifications.


             A.1.2       Purpose and objective
             The technical requirements specification (TS) establishes the intended purpose
             of a product, its associated constraints and environment, the operational and
             performance features for each relevant situation of its life profile, and the
             permissible boundaries in terms of technical requirements.
             The TS expresses frozen technical requirements for designing and developing
             the proposed solution to be implemented. These technical requirements, to be
             met by the future solution, are compatible with the intended purpose of a
             product, its associated constraints and environment, and the operational and
             performance features for each relevant situation of its life profile.


A.2   Expected response

             A.2.1       Scope and content

             <1>      Introductions
             a.    The TS shall contain a description of the purpose, objective, content and
                   the reason prompting its preparation.


             <2>      Applicable and reference documents
             a.    The TS shall list the applicable and reference documents in support of the
                   generation of the document.


<3>      User’s need presentation
a.    The TS shall present the main elements that characterize the user’s need
      for developing the product as a background for those requirements that
      are defined in detail in the dedicated section.
b.    The TS shall put the product into perspective with other related products.
c.    If the product is independent and totally self-contained, i.e. able to match
      the final user’s need, it should be so stated here.
d.    If the TS defines a product that is a component of a higher tier system,
      the TS shall recall the related needs of that larger system and shall
      describe the identified interfaces between that system and the product.
              NOTE       A non-exhaustive checklist of general questions
                         that should be answered at the early stages of
                         the TS is:
                         - What is the product supposed to do? It is
                           fundamental but critically important to
                           make sure that every actor has a complete
                           understanding of what the product has to
                           do.
                         - Who is going to use this product? It is
                           important to indicate who is going to use the
                           product, why they are going to use it and for
                           what it is going to be used.


<4>      Selected concept / product presentation
a.    The technical specification shall describe the concept, the expected
      product architecture and the functioning principles on which it is based.


<5>      Life profile description
a.    The TS shall list and describe the different chronological situations of the
      product’s life profile.
              NOTE 1     For a spacecraft, the life profile includes:
                         - AIT related life events
                         - transportation to launching area;
                         - conditioning and tests;
                         - installation on launcher;
                         - pre-launch phase;
                         - launching phase;
                         - self transfer to its operating position;
                         - in-orbit functioning;
                         - end-of-life (e.g. de-orbitation).
              NOTE 2     An identifier can be associated with each
                         situation in order to be able to link each
                         requirement to at least one situation in which it
                         applies. Such an approach enables sorting and
                         filtering of the requirements per situation.


<6>        Environment and constraints description
a.      The TS shall describe the different environments and constraints for each
        situation in the life profile that the product is expected to encounter.
                NOTE       An identifier can be associated with each
                           product environment in order to be able to link
                           each requirement to at least the worst
                           environment to which it applies. Such an
                           approach enables sorting and filtering the
                           requirements per environment.


<7>        Requirements
a.      The TS shall list all the technical requirements necessary for the product
        to satisfy the user’s needs.
                NOTE       Interfaces requirements can be rolled-out of the
                           TS in form an interface requirement document
                           (IRD), see ECSS-E-ST-10 Annex M.
b.      The technical requirements shall be expressed according to ECSS-E-ST-
        10-06 clauses 7 and 8.
                NOTE       For instance, for all TS and for each
                           requirement, the following characteristics have
                           been selected:
                           - identifiability;
                           - performance        and   methods    used    to
                             determine it;
                           - configuration management;
                           - traceability;
                           - tolerance
                           - verification


A.2.2         Special remarks
None.


# Bibliography


                 general requirements
                 requirements
                 implementation
EN 1325-1:1996   Value management, value analysis, functional
                 analysis vocabulary --- Part 1: Value analysis and
                 functional analysis
EN 12973:2000    Value management
ISO 9000:2000    Quality management systems --- Fundamentals and
                 vocabulary


