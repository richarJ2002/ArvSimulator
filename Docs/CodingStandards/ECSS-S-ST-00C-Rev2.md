


ECSS System
Description, implementation and
general requirements


                           Standards Section
# Foreword
ECSS is a cooperative effort of the European Space Agency, national space agencies and European
industry associations for the purpose of developing and maintaining common standards. Requirements
in this Standard are defined in terms of what shall be accomplished, rather than in terms of how to
organize and perform the necessary work. This allows existing organizational structures and methods
to be applied where they are effective, and for the structures and methods to evolve as necessary
without rewriting the standards.
This Standard has been prepared by the ECSS-S-ST-00 Working Group, reviewed by the ECSS Executive
Secretariat and approved by the ECSS Technical Authority.


# Disclaimer
ECSS does not provide any warranty whatsoever, whether expressed, implied, or statutory, including,
but not limited to, any warranty of merchantability or fitness for a particular purpose or any warranty
that the contents of the item are error-free. In no respect shall ECSS incur any liability for any damages,
including, but not limited to, direct, indirect, special, or consequential damages arising out of, resulting
from, or in any way connected to the use of this Standard, whether or not based upon warranty, business
agreement, tort, or otherwise; whether or not injury was sustained by persons or property or otherwise;
and whether or not loss was sustained from, or arose out of, the results of, the item, or any services that
may be provided by ECSS.


Published by:   ESA Standards Section
                ESTEC, P.O. Box 299,
2200 AG Noordwijk
                The Netherlands
Copyright:      2025© by the European Space Agency for the members of ECSS


# Change log


ECSS-S-00A            First issue
ECSS-S-00B            Never issued
31 July 2008          This issue of ECSS-S-ST-00C supersedes ECSS-S-00A and replaces
                      ECSS-M-00B, ECSS-E-00A and ECSS-Q-00A.
                      The main changes to the previous versions are summarized hereafter:
                          - The descriptive text of the previous of ECSS-S-00 was reorganized
                              and complemented with text from ECSS-M-00B, ECSS-E-00A and
                              ECSS-Q-00A to introduce the content of the disciplines of the three
                              ECSS branches.
                          - Requirements were added as follows:
                          - Top-level requirements from ECSS-M-00B were moved to
                              ECSS-ST-M-10C.
                          - Top-level requirements from ECSS-Q-00A were moved to
                          - New top-level requirements missing in the ECSS Standards.
                          - Example of template for an “ECSS applicable requirements matrix
                              (EARM)” for the requirements of ECSS-S-ST-00 was added in
                              Annex A.
                          - A form for ECSS Change Request/Document Improvement
                              Proposal for user feedback was added as Annex B.
15 June 2020          Main changes are:
                          - Update of document to account for new ECSS branch “Space
                              sustainability”
                          - Addition of reference to new ECSS-S-ST-00-02 “ECSS system --
                              Tailoring”
                          - Clause 7 “Application of ECSS Standards”: Text re-written and
                              shortened
                          - Clause 8 “User feedback”: Update of third bullet about ECSS
                              Change Request. Reference made to the ECSS.NL website and the
                              former reference to the Annex deleted
                          - Deletion of former Annex A “Example of template for an EARM
                              for the requirements of ECSS-S-ST-00C”
                          - Deletion of former Annex B “ECSS Change Request / Document
                          - Improvement Proposal” and update of This causes a renumbering
                              of all subsequent Annexes


                         - Bibliography deleted
21 November 2025      Main changes are:
                         - Update of document to account for new ECSS I-branch “
                             Industrialization, production and maintenance”
                         - Update of ECSS Disciplines:
                                 o   Removed: M-70 “ILS”
                                 o   Added: E-80 “Security”


                                                                                     Table of contents

Change log ........................................................................................................ 3

# 1 Scope .............................................................................................................. 7

# 2 Normative references .................................................................................... 8

# 3 Terms, definitions and abbreviated terms................................................... 9
## 3.1 Terms from other standards.............................................................................9
## 3.2 Abbreviated terms............................................................................................9

# 4 ECSS system objectives and policy .......................................................... 10

# 5 ECSS System description ........................................................................... 11
   5.1      Overview .......................................................................................................11
## 5.2 Types of ECSS documents ............................................................................11
### 5.2.1 Standards ........................................................................................11
### 5.2.2 Handbooks .......................................................................................12
### 5.2.3 Technical memoranda......................................................................12
## 5.3 Structure and architecture of ECSS Standards System ...................................12
### 5.3.1 Overview ..........................................................................................12
### 5.3.2 Management (M-branch) ..................................................................15
### 5.3.3 Engineering (E-branch) ....................................................................17
### 5.3.4 Product Assurance (Q-branch) .........................................................20
### 5.3.5 Space Sustainability (U-branch) .......................................................23
### 5.3.1 Industrialization, Production and Maintenance (I-branch) .................23

# 6 Introduction into space programmes ........................................................ 24
## 6.1 The customer-supplier model ........................................................................24
## 6.2 Business agreements ....................................................................................24
## 6.3 Applicability of ECSS documents ...................................................................25

# 7 Application of ECSS Standards ................................................................. 27

# 8 User feedback .............................................................................................. 28

# 9 Requirements............................................................................................... 29
   9.1      Applicability....................................................................................................29
## 9.2 Requirements on customers’ side ..................................................................29
## 9.3 Requirements on suppliers’ side ....................................................................30


Figures
Figure 5-1: ECSS User Standards structured as Branches .........................................13
Figure 5-2: Disciplines of the ECSS Standards system ...............................................14
Figure 6-1: Customer--supplier network concept..........................................................26


Tables
Table 5-1: Disciplines in the management branch .......................................................15
Table 5-2: Disciplines in the engineering branch .........................................................17
Table 5-3: Disciplines in the product assurance branch ...............................................20
Table 5-4: Disciplines in the space sustainability branch .............................................23
Table 5-5: Disciplines in the space sustainability branch .............................................23


# Scope

This document is the ECSS top--level document for ECSS users. It gives a general
introduction into ECSS and the use of ECSS Documents in space programmes
and projects.
Its purpose is to provide users with an overview of the ECSS System, together
with an introduction to the four branches of applicability and to the disciplines
covered by the set of ECSS Standards and the processes involved in generating
and using these standards.
As an introduction into space programmes, space projects actors and their
customer-supplier relationships are described.
The five branches (Management, Product Assurance, Engineering, Space
Sustainability and Industrialization, Production and Maintenance) of ECSS
system and their disciplines are then presented as well as link amongst the
branches.
Application of the ECSS System for space projects in the customer-supplier chain
is explained and a practical tailoring method is described together with methods
for collecting and processing user feedback.
           NOTE       The tailoring process has been extracted from this
                      document and is provided in a separate document,
Finally top-level requirements are defined for implementation of the ECSS
system in space projects/programmes.
This standard is applicable to all the procurements of space products.
With effect from the date of approval, this Standard announces the adoption of
the external document on a restricted basis for use in the European Cooperation
for Space Standardization (ECSS) system.


# Normative references

The following normative documents contain provisions which, through
reference in this text, constitute provisions of this ECSS Standard. For dated
references, subsequent amendments to, or revisions of any of these publications
do not apply. However, parties to agreements based on this ECSS Standard are
encouraged to investigate the possibility of applying the most recent editions of
the normative documents indicated below. For undated references the latest
edition of the publication referred to applies.


NOTE: As decided by the ECSS Technical Authority at TA#70 (15 June 2020) is
this document made available as ECSS-S-ST-00-02C Draft 1 (15 June 2020),
pending the Pilot Case of Tailoring.


# Terms, definitions and abbreviated terms

## 3.1 Terms from other standards
             For the purpose of this Standard, the terms and definitions from ECSS-S-ST-00-01
             apply.


## 3.2 Abbreviated terms
             For the purpose of this Standard, the abbreviated terms from ECSS-S-ST-00-01
             and the following apply:
               Abbreviation        Meaning
               DRD                 document requirements definition
               EARM                ECSS applicable requirements matrix
               ECM                 ECSS compliance matrix
               HB                  handbook
               ID                  implementation document
               PA                  product assurance
               PRD                 project requirements document
               SDO                 standard development organization
               TM                  technical memorandum


ECSS system objectives and policy

 The overall objectives of using the ECSS system of standards include:
 - achieving more cost-effective space programmes and projects in Europe,
 - improving the competitiveness of European space industry,
 - improving the quality and safety of space projects and products,
 - facilitating clear and unambiguous communication between all parties
       involved, in a form suitable for reference or quotation in legally binding
       documents,
 - reducing risk and guaranteeing interoperability and interface
       compatibility by applying proved and recognized requirements and
       methods.
 In order to meet the above stated objectives, the ECSS policy has been developed:
 see ECSS-P-00.
 ECSS documents are produced to support the formal customer-supplier relation
 in developing space programs and projects.
 In order to ensure European space programmes and projects’ efficiency in terms
 of technical performance, life cycle cost-effectiveness and on-time deliveries, the
 ECSS System can be adapted to specific domains of application by use of tailoring
 activities.
            NOTE        See attachment “Example of ECSS Applicable
                        Requirements Matrix (EARM)” in ECSS-S-ST-00-02
                        “Tailoring”.
 Systematic feedback of experience from programmes, projects and other
 appropriate sources into the ECSS System allows improvement of ECSS
 Standards.


                                 ECSS System description

## 5.1 Overview
            The ECSS System has been developed as a cooperative effort between the
            European space agencies and space industries. It comprises a comprehensive set
            of documents addressing all essential aspects of the five major branches for the
            successful implementation of space programmes and projects, namely
            - Project management,
            - Engineering,
            - Product assurance,
            - Space sustainability, and
            - Industrialization, Production and Maintenance
            ECSS user-oriented documents other than the present one and ECSS-ST-00-01 fall
            in one of those branches.
            ECSS includes three types of documents: standards, handbooks and technical
            memoranda.


## 5.2 Types of ECSS documents

### 5.2.1 Standards
            Standards are documents for direct use in invitation to tender and business
            agreements for implementing space related activities.
            They state verifiable requirements, supported by the minimum descriptive text
            necessary to understand their context.
            Each requirement contained within a Standard has a unique identification,
            allowing full traceability and easy verification of compliance.
            Standards are named as ECSS-<X>-ST-<Number> <Version>, where:
            <X> represents the branch and can take the following values: P or S (ECSS
            system), M (management), E (engineering), Q (product assurance), U (Space
            sustainability), or I (industrialization, production and maintenance).
            <Number> is one or two groups of two digits.
            <Version> is a letter from “A” onwards.
            When a requirement asks for the delivery of a document, the scope and content
            is specified in a dedicated DRD (Document Requirements Definition), which
            forms an integral part of a standard.
                       NOTE       The DRD defines only the scope and content of the
                                  document in a mandatory way, not the form.


                                   I.e. the content may also be presented in a different
                                   from, in particular also by combining the content of
                                   two or more DRDs into one deliverable document.


             The ECSS Standards focus primarily on what is required to comply with each
             standard, rather than how to achieve this. This approach provides the flexibility
             for different customers and suppliers to use established “in--house” procedures,
             or processes, to comply with these standards.


### 5.2.2 Handbooks
             Handbooks are non-normative documents providing background information,
             orientation, advice or recommendations related to one specific discipline or to a
             specific technique, technology, process or activity.
             ECSS handbooks provide guidelines and good practices, and collection of data.
             They are named as ECSS-<X>-HB-<Number> <Version>, where <X>, <Number>
             and <Version> have the same meaning as for standards.
             Handbooks do not contain requirements but provide additional information on
             selected topics addressed by the ECSS standards. Handbooks can be used as
             reference document or transformed into normative documents by the customer.


### 5.2.3 Technical memoranda
             Technical memoranda are non-normative documents providing useful
             information to the space community on a specific subject.
             They are prepared to record and present data which are not the subjects for a
             standard or for a handbook or not yet mature to be published as standard or
             handbook.
             They are named as ECSS-<X>-TM-<Number> <Version>, where <X>, <Number>
             and <Version> have the same meaning as for standards.
             Technical memoranda do not contain requirements but provide additional
             information on selected topics addressed by the ECSS standards. Technical
             memoranda can be used as reference document and are not intended to be
             transformed into normative documents.


## 5.3 Structure and architecture of ECSS Standards System

### 5.3.1 Overview
             The present document is the top level user document of ECSS. Beneath this
             document there are three parallel branches, one each for project management,
             engineering, and product assurance (see Figure 5-1). Project management branch
             documents have an “M” prefix, engineering standards have an “E” prefix,
             product assurance standards have a “Q”, sustainability standards have a “U”
             prefix and industrialization standards have an “I” prefix.


    Some documents adopted by ECSS are originated from other Standard
    Development Organizations (SDO) (see ECSS-P-00 and Figure 5-1).
    Within each branch, disciplines and corresponding requirements are covered by
    dedicated standards. ECSS Disciplines can also be supported by Handbooks (HB)
    and Technical Memoranda (TM) as necessary.
    The disciplines addressed by the ECSS Standards system are given in Figure 5-2.


                      ECSS System -- Description,
                   implementation and requirements
                            ECSS-M Standards


                            ECSS-E Standards

                            ECSS-Q Standards

                            ECSS-U Standards

                                ECSS-I Standards


           External Standards
            adopted by ECSS

Figure 5-1: ECSS User Standards structured as Branches


ECSS System -- Description, implementation and general requirements


       Space project management disciplines
       M-10 - Project planning and implementation
       M-40 - Configuration and information management
       M-60 - Cost and schedule management
       M-80 - Risk management


      Space engineering disciplines
      E-10 - System engineering
      E-20 - Electrical and optical engineering
      E-30 - Mechanical engineering
               E-31 -- Thermal
               E-32 -- Structural
               E-33 -- Mechanisms
               E-34 -- ECLS
               E-35 -- Propulsion
      E-40 - Software engineering
      E-50 - Communications
      E-60 - Control engineering
      E-70 - Ground systems and operation
      E-80 - Security

      Space product assurance discipline
      Q-10 - Product assurance management
      Q-20 - Quality assurance
      Q-30 - Dependability
      Q-40 - Safety
      Q-60 - Electrical, electronic, electromechanical (EEE) components
      Q-70 - Materials, mechanical parts and processes
      Q-80 - Software product assurance

      Space sustainability discipline
      U-10 - Space debris
      U-20 - Planetary protection

      Industrialization, production and maintenance discipline
      I-10 - Industrialization
      I-20 - Production
      I-30 - Maintenance, repair and overhaul (MRO)


Figure 5-2: Disciplines of the ECSS Standards system


### 5.3.2 Management (M-branch)
                     The overall objective of project management is to implement a process to achieve
                     successful completion of the project in terms of cost, schedule and technical
                     performance. Project management is performed following a structured approach
                     throughout all stages of its life cycle and at all levels of the customer-supplier
                     chain.
                     It integrates all management, engineering and product assurance functions
                     required to execute the project.
                     Table 5-1 presents an overview of the disciplines covered by ECSS management
                     branch. It is not intended to be exhaustive.


                              Table 5-1: Disciplines in the management branch
Discipline           Title                                     Scope / Objective
M-10         Project Planning and     Project planning and implementation discipline provides a coherent
             Implementation           set of processes for minimizing the technical, scheduling and
                                      economic risks of the project. In particular this is done by:
                                          - introducing phases and formal milestones enabling the
                                               progress of the project to be controlled with respect to cost,
                                               schedule and technical objectives.
                                          - defining project breakdown structures, which constitutes the
                                               common and unique reference system for the project
                                               management to:
                                          - identify the tasks and responsibilities of each actor;
                                          - ensure the coherence between technical, documentary,
                                               administrative and financial activities of the whole project;
                                          - perform scheduling and costing activities.
                                          - setting up a project organization to implement a structured
                                               and complete approach to perform all necessary activities on
                                               the project.
                                      More details, descriptions and requirements are given in ECSS-M-
                                      ST-10.
M-40         Configuration and        Configuration management and information discipline:
             Information                  •    identifies, describes and controls the technical description of
             Management                        a system in a logical and consistent manner throughout the
                                               system’s life cycle, and
                                          - ensures that the information necessary for effective
                                               execution of all management processes are recorded,
                                               retrieved, distributed and modified in a traceable manner.
                                      More details, descriptions and requirements are given in ECSS-M-
                                      ST-40.


Discipline           Title                                Scope / Objective
M-60         Cost and Schedule   Cost and schedule management discipline provides a coherent set of
             Management          processes for verifying the compliance of project planning and
                                 organization to ensure the consistent use of human resources,
                                 facilities, materials and funds to achieve the successful completion of
                                 the space project within its established goals: costs, schedule and
                                 performance.
                                 It provides alerts to trigger necessary adaptations (e.g. re-planning,
                                 resource reallocation).
                                 More details, descriptions and requirements are given in ECSS-M-
                                 ST-60.
M-80         Risk Management     Risk management discipline identifies all risks (incl. new
                                 opportunities) and keeps these risks within defined and accepted
                                 boundaries that are defined in the risk policy of the project.
                                 Risk management aims at all aspects of the programme, including
                                 technical and quality performance, programmatic (e.g. funding,
                                 political environment), cost (e.g. contract type, project cost), schedule
                                 and operation (e.g. logistic support, security). In particular it
                                 includes:
                                     - The systematic identification, assessment and classification
                                         of all risk causes and consequences prior to definition and
                                         implementation of a decision to accept, to monitor or to take
                                         action. The risk assessment supports the decision making
                                         process, including consideration of uncertainties about the
                                         risk involved. Independent verification of the risk
                                         assessment ensures its objectiveness.
                                     - The systematic definition, implementation, control and
                                         verification of actions appropriate for elimination or
                                         reduction of risk to an acceptable level.
                                 More details, descriptions and requirements are given in ECSS-M-
                                 ST-80.


### 5.3.3 Engineering (E-branch)
                   ECSS-E disciplines cover the engineering aspects of space systems and products,
                   including:
                   - the engineering process as applied to space systems and their elements or
                           functions, and
                   - technical aspects of products used to accomplish, or associated with, space
                           missions.
                   Table 5-2 presents an overview of the disciplines covered by ECSS engineering
                   branch. It is not intended to be exhaustive.


                               Table 5-2: Disciplines in the engineering branch
 Discipline            Title                                   Scope / Objective
E-10          System Engineering      The system engineering discipline is a multidisciplinary activity to
                                      technically coordinate the different engineering activities to ensure
                                      the overall technical consistency and integrity within the project. In
                                      particular it includes:
                                          - System technical requirements definition analysis,
                                              integration and interfaces control, verification, and
                                          - System activities providing constraints to others disciplines
                                              such as space environment, human factors and celestial
                                              mechanics, reference coordinates.
                                      Note:   Equipment electromagnetic compatibility design aspects are
                                              included in the discipline E-20 “Electrical and Optical”.
                                      More details, descriptions and requirements are given in ECSS-E-ST-
                                      -10.
E-20          Electrical and          The electrical and optical engineering discipline addresses all aspects
              Optical Engineering     of the electrical, electronic, electromagnetic, microwave and optical
                                      engineering processes design of space products. In particular it
                                      includes:
                                          - functions such as power generation, storage, conversion and
                                               distribution,
                                          - analysis and design requirements such as multipaction,
                                              spacecraft charging, electromagnetic compatibility, electrical
                                              interfaces and interconnections, and
                                          - technological aspects of communication interfaces.
                                      Note:   Communication protocols are included in the discipline E50
                                              “Communications”.
                                      More details, descriptions and requirements are given in


 Discipline          Title                                  Scope / Objective
E-30          Mechanical            The mechanical engineering discipline addresses all aspects of the
              Engineering           mechanical design of space products. In particular it includes:
                                       - thermal control,
                                        - structures including structural materials,
                                        - mechanisms and pyrotechnics,
                                        - environmental control and life support (ECLS), and
                                        - propulsion (launchers and spacecrafts).
                                    More details, descriptions and requirements are given in
E-40          Software              The software engineering discipline addresses the life cycle
              Engineering           processes for software products (e.g. requirements definition,
                                    architectural design, development, operations and maintenance). In
                                    particular it addresses the different types of software: on-board
                                    (embedded), on-ground, and software for qualification, testing and
                                    verification.
                                    Note:   Discipline Q-80 “Software product assurance” covers
                                            product assurance for software.
                                    More details, descriptions and requirements are given in
E-50          Communications        The communications discipline addresses all communication aspects
                                    related to:
                                        - External interfaces for telemetry, telecommands, ranging
                                             and data: spacecraft-to-ground, spacecraft-to-spacecraft,
                                             ground-to-ground, and
                                        - Internal interfaces between items of on-board equipment.
                                    In particular this discipline covers all aspects such as link budgets
                                    and protocols on various communication layers.
                                    Note:   Discipline E-70 “Ground systems and operations” covers
                                            services definition.
                                    More details, descriptions and requirements are given in ECSS-E-ST-
                                    50.
E-60          Control Engineering   The control engineering discipline addresses aspects of automatic
                                    control in space systems. In particular it includes:
                                        - Requirements for dynamics and control, (e.g. attitude and
                                            orbit control, robotics, rendez-vous and docking), and
                                        - Requirements for sensors and actuators (e.g. gyroscopes, sun
                                            and star sensors),
                                    More details, descriptions and requirements are given in the
                                    Note:   There is no level 1 E-60 standard.


 Discipline          Title                             Scope / Objective
E-70          Ground Systems   The ground systems and operations discipline addresses the
              and Operations   engineering of the ground segment and mission operations, which
                               form an integral part of the overall system implementing a space
                               project. In particular it includes:
                                   - Procedures and languages for operations,
                                   - Requirements for space segment operability,
                                   - Telemetry and telecommand services definition, and
                                   - Requirements on interface between space vehicle and
                                       ground support equipment.
                               More details, descriptions and requirements are given             in
E-80          Security         The security discipline addresses the implementation of security in
                               space systems, and the processes implemented during a space
                               system’s lifecycle. It includes:
                                   - Application of security within all parts of an organisation
                                       and its activities,
                                   - Application of security to the system(s) to be operated, the
                                       systems used to enable security, the facilities to host and
                                       provide the global security context, and the processes and
                                       methods used,
                                   - Evolving and varying security depending upon the threats
                                       and security risks, phase of the activity, regulations, the
                                       resources, and mechanisms selected to host and share the
                                       assets,
                                   - Addressing security when choosing             the    design,
                                       implementation, and disposal of the system.
                               More details, descriptions and requirements are given             in


### 5.3.4 Product Assurance (Q-branch)
                    The prime objective of Product Assurance is to assure that the Space Products
                    accomplish their defined mission objectives and more specifically that they are
                    safe, available and reliable. In support of project Risk Management, PA assures
                    an adequate identification, appraisal, prevention and control of technical risks
                    within project constraints.
                    Table 5-3 presents an overview of the disciplines covered by ECSS product
                    assurance branch. It is not intended to be exhaustive.


                            Table 5-3: Disciplines in the product assurance branch
Discipline          Title                                    Scope / Objective
Q-10         Product Assurance       Product Assurance management is a multidisciplinary activity to
             Management              ensure that a Product Assurance programme is implemented and
                                     managed throughout all project phases and coordinated with all
                                     actors. It addresses the Product Assurance Plan defining all PA
                                     activities consistent with the Project objectives, requirements,
                                     criticalities and constraints. In particular it includes:
                                         - Allocation and availability of adequate resources, personnel
                                             and facilities to carry out the necessary Product Assurance
                                             tasks,
                                         - Requirements for tier suppliers to perform proper Product
                                             Assurance monitoring and control,
                                         - Progress monitoring, reporting and visibility of all Product
                                             Assurance matters, in particular those related to alerts,
                                             critical items, non-conformances, changes, deviations,
                                             waivers, actions or recommendations resulting from
                                             reviews, inspection and audits, qualification, verification
                                             and acceptance.
                                     More details, descriptions and requirements are given in
Q-20         Quality Assurance       The quality assurance discipline addresses all aspects to ensure that
                                     product quality is specified according to customer needs, designed-
                                     in, built, verified and maintained in the products with associated
                                     documentation throughout project life cycle. In particular it
                                     addresses:
                                         - Quality Assurance for test centres, and
                                         - Off the shelf equipment and components.
                                     Note:   Discipline Q-80 “Software product assurance” covers
                                             product assurance for software.
                                     More details, descriptions and requirements are given in


Discipline            Title                                     Scope / Objective
Q-30         Dependability             The dependability discipline addresses all aspects to ensure that the
                                       dependability performance (availability performance and its
                                       influencing factors reliability performance, maintainability
                                       performance and maintenance support performance) is met for the
                                       space product including system functions implemented in software
                                       and the interaction between hardware and software. In particular it
                                       includes:
                                           - Design rules (e.g. derating, end of life parameter drifts), and
                                           - Dependability analyses (e.g. worst case circuit performance,
                                               failure mode and effects, criticality).
                                       Note:   Discipline Q-80 covers software dependability. However the
                                               dependability. However, the dependability requirements
                                               for functions implemented in software, and the interaction
                                               between hardware and software, are defined in Q-30
                                               discipline.
                                       More details, descriptions and requirements are given in
Q-40         Safety                    The safety discipline addresses all aspects to ensure that all safety
                                       risks associated with the design, development, production and
                                       operations of Space Product are identified, assessed, minimised,
                                       controlled and finally accepted through the implementation of a
                                       safety assurance programme. In particular it addresses the
                                       assessment of the risks based on qualitative and quantitative
                                       analyses (e.g. hazard, fault-tree, sneak).
                                       More details, descriptions and requirements are given in
Q-60         Electrical, Electronic,   The EEE components discipline defines requirements for selection,
             Electromechanical         control and procurement of EEE components for space projects to
             (EEE) Components          ensure that they satisfy the mission performance requirements
                                       during the full life cycle of the products. In particular it addresses:
                                           - Component programme management,
                                           - Component selection, evaluation and approval,
                                           - Component procurement,
                                           - Component handling, storage, relifing, and
                                           - Component quality assurance.
                                       Note:   Discipline Q-30 “Dependability” covers the dependability
                                               design rules related to EEE components (e.g. derating and
                                               end of life parameter drift).
                                       More details, descriptions and requirements are given in


Discipline           Title                                   Scope / Objective
Q-70         Materials, Mechanical   The Materials, Mechanical Parts and Processes discipline defines
             Parts and Processes     requirements for selection, control and procurement of materials,
                                     mechanical parts and processes for space projects to ensure that they
                                     satisfy the mission performance requirements during the full life
                                     cycle of the products. In particular it addresses:
                                         - Requirements and processes for selection (e.g.
                                             characterisation, evaluation, qualification for their intended
                                             use) and procurement of the materials and mechanical parts,
                                             (e.g. outgassing, thermal-cycling, radiation, soldering,
                                             cracking), and
                                         - Requirements and processes for avoiding planetary
                                             contamination (e.g. cleanliness, sterilisation).
                                     Note:   Discipline Q-30 “Dependability” covers the dependability
                                             design rules related to Materials, Mechanical Parts and
                                             Processes.
                                     More details, descriptions and requirements are given in
Q-80         Software Product        The Software Product Assurance discipline defines requirements to
             Assurance               ensure that developed or reused software and software services
                                     perform properly and safely in their operational environments. It
                                     also includes requirements for the development of non-deliverable
                                     software which affects the quality of the deliverable product or
                                     service provided by a space system (e.g. test and verification
                                     software).
                                     Note:   Discipline E-40 “Software engineering” covers engineering
                                             aspects of software.
                                     More details, descriptions and requirements are given in


### 5.3.5 Space Sustainability (U-branch)
                    The prime objective of Space Sustainability is to ensure the long term
                    sustainability of space activities, including space debris mitigation, space
                    situation awareness, and planetary protection.
                    Space sustainability refers to the ability for all countries to continue to use space
                    for peaceful purpose and socio-economic or scientific benefit over the long term.


                            Table 5-4: Disciplines in the space sustainability branch
Discipline           Title                                     Scope / Objective
U-10         Space Debris             The space debris discipline covers all activities to avoid space debris
                                      proliferation, to mitigate the risk of space debris generation by
                                      objects already in orbit or intended to be brought into orbit and to
                                      reduce space debris by active disposal activities.
                                      It includes the protection of people and assets on ground against
                                      threats from man-made space objects when returning to earth.
                                      More details, descriptions and requirements are given in
                                      ECSS-U-ST-10.
U-20         Planetary Protection     Planetary protection deals with all measures in interplanetary
                                      mission to prevent biological contamination of both the target
                                      celestial body and the Earth in the case of sample-return missions.
                                      More details, descriptions and requirements are given in
                                      ECSS-U-ST-20.


### 5.3.1 Industrialization, Production and
                                    Maintenance (I-branch)
                    The prime objective of Industrialization is to support the serial production and
                    maintenance of space products.


                            Table 5-5: Disciplines in the space sustainability branch
Discipline           Title                                     Scope / Objective
I-10         Industrialization        The industrialization discipline covers activities related to ensuring
                                      a product’s design is suitable for series production, process
                                      capabilities for production, manufacturing readiness levels, and first
                                      article inspection.
I-20         Production               The production discipline covers supply chain management and
                                      human error prevention, including foreign object damage.
I-30         Maintenance, Repair      The maintenance, repair and overhaul discipline covers integrated
             and Overhaul (MRO)       product support, maintenance and obsolescence management.


         Introduction into space programmes

## 6.1 The customer-supplier model
            The production of space systems calls for the cooperation of several
            organizations that share the common objective of providing a product that
            satisfies the customer’s needs (performance within cost and schedule
            constraints).
            All space project actors are either a customer or a supplier, or both.
            In its simplest form, a project can comprise one customer with just one supplier;
            however, most space projects comprise a number of hierarchical levels, where:
            - the actor at the top level of the hierarchy is the top level customer,
            - the actors at intermediate levels of the hierarchy are both supplier and
                  customer,
            - the actors at the lowest level of the hierarchy are suppliers only.


## 6.2 Business agreements
            Within the project, exchanges of products and services are governed by business
            agreements, used as a generic term throughout the ECSS Standards when
            referring to a legally binding agreement between two or more actors in the
            customer--supplier chain. These agreements include the terms and conditions
            agreed between the parties, the rules by which business is conducted, the actors’
            commitments and obligations for the provision of goods and services, the
            methods of acceptance and compensation, monetary, or otherwise. Business
            agreements serve as a framework prescribing the activities throughout the
            execution of work, and as a reference to verify compliance.
            Business agreements are recorded in a variety of forms, such as
            - Contracts,
            - Memoranda of understanding,
            - Inter--governmental agreements,
            - Inter--agency agreements,
            - Partnerships,
            - Bartering agreements, and
            - Purchase orders.


## 6.3 Applicability of ECSS documents
            The ECSS documents themselves do not have legal standing and they do not
            constitute business agreements: they are made applicable by invoking them in
            business agreements, most commonly in contracts. The applicability of standards
            and requirements is specified in the project requirements documents (PRDs),
            which are included in business agreements, which are agreed by the parties and
            binding them.
                       NOTE       Description of PRD is provided in ECSS-M-ST-10,
                                  Clause 4.1.10.
            The top--level customer’s PRD forms the basis for the generation of all lower level
            customer PRDs. An integral part of a PRD, at any level, is the set of ECSS
            Standards tailored as necessary and documented in an “ECSS Applicability
            Requirements Matrix" (EARM), as described in ECSS-S-ST-00-02..
            A supplier, at any level, is responsible for demonstrating compliance with the
            project requirements contained in his customer’s PRD, through, for example, the
            elaboration of a compliance matrix, and ultimately for supplying a conforming
            product. The compliance to the PRD is presented in an Implementation
            Documents (IDs), for example project plans (e.g. management, engineering and
            product assurance) and compliance matrix.
                       NOTE       Description of Implementation         Document     is
                                  provided in ECSS-M-ST-10.
            The hierarchical structure in Figure 6-1 constitutes the customer--supplier chain
            within a project with its contractual chain of documents.


                                                                      Top-level cu st om er


                                 Ot h er con t r a ct (s) a t
                                      pr im e level                     P RD 0        ID 0

                                                                              Su pplier
                                                                                                        P r im e con t r a ct or
                                                                             Cu st om er                   or equ iva len t

                               E lem en t a l
                          cu st om er -su pplier         P RD 1     ID 1                      P RD n        ID n
                                  ch a in                                  P RD i    ID i

                                                                              Su pplier
                                                                                                       Or ga n iza t ion
                                                                              Cu st om er
      Com plet e
cu st om er -su pplier                                                                      P RD i.n        ID i.n
                                                      P RD i.1      ID i.1
        ch a in

                                                                       P RD i.i      ID i.i


                                                                              Su pplier
                                                                                                        Or ga n iza t ion
                                                                              Cu st om er

                           Lowest E lem en t a l
                                                        P RD m .1   ID m .1             P RD m .n          ID m .n
                           cu st om er -su pplier
                                   ch a in                            P RD m .i       ID m .i

                                                                              Su pplier                Lowest level
                                                                                                         su pplier

                         Figure 6-1: Customer--supplier network concept


         Application of ECSS Standards

The project’s requirements within the PRD are composed by two sets:
- requirements covered by ECSS disciplines, subject to tailoring, and
- other requirements specific to the project (not considered in this Clause,
         e.g. mission specific requirements)
The ECSS Standards and requirements to be made applicable at each level of the
customer--supplier chain are influenced by the type and phase of the project
involved, and by the type of business agreement to be used for managing the
project.
The ECSS System provides a comprehensive set of coherent standards covering
the requirements for the procurement of a generic space product. This system can
be adapted to a wide range of project types. The process of adapting the
requirements to the project specificities is called tailoring.
The tailoring process of ECSS requirements for a given project/mission consists
of the preparatory and the actual tailoring activities in the following 7 steps:
    1.    Preparatory activities
            Step 1: Identification of project characteristics
            Step 2: Analysis of project characteristics and identification of risks
    2.    Tailoring activities
            Step 3: Selection of applicable ECSS Standards
            Step 4: Selection of requirements from applicable standards
            Step 5: Completion of requirements
            Step 6: Harmonization of requirements
            Step 7: Documenting of requirements applicability
Having completed these 7 steps will result in a consolidated document recording
the applicability of ECSS Standards and requirements for a project in an efficient
and structured manner. This document is the “ECSS Applicability Requirements
Matrix” (EARM).
This tailoring process is described in detail in ECSS-S-ST-00-02.


                                              User feedback

The ECSS users apply ECSS documents to projects, including any adaptation
through tailoring necessary to meet specific projects’ needs. They are also
expected to provide feedback to the ECSS developers. This feedback is the
primary source for maintaining and enhancing the ECSS System.
In addition to user feedback provided during the development of ECSS
documents, following feedback is expected:
- The set of requirements tailored from ECSS documents to the project
      specificities and made applicable as part of the business agreement(s). For
      example, this can be documented into an ECSS Applicable Requirements
      Matrix (EARM).
- Status of compliance with respect to the above set of ECSS requirements.
      This can be documented into an ECSS Compliance Matrix (ECM). This
      matrix provides, during the development phase, the actual indication of
      compliance.
- Change proposals to ECSS documents or to the ECSS System as a whole,
      provided in the form of an ECSS Change Request at any time. ECSS
      Change Requests can be submitted via the ECSS.NL website.
This information represents important customer feedback because they provide
information on how ECSS documents were applied and on how requirements
evolved during project life cycle.
Any user feedback should in the end be made available to the ECSS Secretariat,
via his/her representative in ECSS organisation (e.g. uploading information in
the ECSS website (www.ecss.nl)), for recording and passing it to the appropriate
ECSS bodies for assessment and further processing.


                                                           Requirements

## 9.1 Applicability
             This clause addresses the requirements to make the ECSS standards applicable
             for the development of space products. The following requirements apply to any
             element of customer-supplier chain, from top to lowest level, as illustrated in
             Figure 6-1.


## 9.2 Requirements on customers’ side
             a.    The customer shall select which ECSS Standards to make applicable and
                   to use to establish the project/product requirements, including use of
             b.    The customer shall define, as part of the project requirements
                   documentation (PRD), the set of requirements tailored from ECSS
                   documents to the project specificities which are made applicable.
             c.    The customer shall produce, as part of the PRD, a documentation
                   identifying the ECSS requirements applicable to the project.
                        NOTE       An “ECSS applicable requirements matrix”
                                   (EARM) is a recommended method for this
                                   component of the PRD.
             d.    The documentation identifying the requirements applicable to the project
                   shall include following data (e.g. EARM):
                   1.    The complete list of ECSS standards either fully or partially
                         applicable to the project/product, including any standard (ECSS or
                         not) made applicable via the chain of normative references;
                   2.    For each partially applicable standard, the status of each
                         requirement:
                         o     applicable without modification
                         o     applicable with modification
                         o     not applicable
                   3.    The complete list of additional requirements
                   4.    For modified and additional requirements, their complete
                         formulation


## 9.3 Requirements on suppliers’ side
             a.   The supplier shall demonstrate compliance with the PRD requirements.
                       NOTE      An “ECSS compliance matrix” (ECM) is a
                                 recommended      method     to    document    the
                                 demonstration of this compliance. The ECM is part
                                 of the project compliance matrix, addressing
                                 compliance to the applicable ECSS requirements
                                 (e.g. EARM).
             b.   The documentation identifying the compliance to ECSS requirements
                  applicable to the project (e.g. the ECM) shall include following data:
                  1.    The complete list of ECSS requirements applicable to the project
                        (e.g. in the EARM).
                  2.    For each requirement, the actual indication of compliance. When
                        deviation is identified the justification is provided.


