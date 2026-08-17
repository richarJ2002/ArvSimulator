


Space project
management
Project planning and
implementation


# Foreword
This Standard is one of the series of ECSS Standards intended to be applied together for the
management, engineering and product assurance in space projects and applications. ECSS is a
cooperative effort of the European Space Agency, national space agencies and European industry
associations for the purpose of developing and maintaining common standards. Requirements in this
Standard are defined in terms of what shall be accomplished, rather than in terms of how to organize
and perform the necessary work. This allows existing organizational structures and methods to be
applied where they are effective, and for the structures and methods to evolve as necessary without
rewriting the standards.
This Standard has been prepared by the ECSS-M-ST-10 Working Group, reviewed by the ECSS
Executive Secretariat and approved by the ECSS Technical Authority.


# Disclaimer
ECSS does not provide any warranty whatsoever, whether expressed, implied, or statutory, including,
but not limited to, any warranty of merchantability or fitness for a particular purpose or any warranty
that the contents of the item are error-free. In no respect shall ECSS incur any liability for any
damages, including, but not limited to, direct, indirect, special, or consequential damages arising out
of, resulting from, or in any way connected to the use of this Standard, whether or not based upon
warranty, contract, tort, or otherwise; whether or not injury was sustained by persons or property or
otherwise; and whether or not loss was sustained from, or arose out of, the results of, the item, or any
services that may be provided by ECSS.


Published by:   ESA Requirements and Standards Division
                ESTEC, P.O. Box 299,
2200 AG Noordwijk
                The Netherlands
Copyright:      2009 © by the European Space Agency for the members of ECSS


# Change log


ECSS-M-10A             First issue
ECSS-M-10B             Second issue
31 July 2008           This issue combines the contents of ECSS-M-10B, ECSS-M-20B and
                       ECSS-M-30A. It supersedes these three standards.
                       The descriptive text of the previous standards has been combined and
                       rewritten to delete duplications and correct inconsistencies.
                       The requirements of ECSS-M-10B have been maintained with following
                       exceptions:
                       - Requirements on function tree have been deleted and moved to
                           ECSS-E-10.
                       - Requirements on model matrix have been deleted.
                       - Some requirements have been moved to newly established DRDs (e.g.
                           WBS and WP DRD).
                       - Some requirements have been edited to eliminate inconsistencies.
                       The requirements of ECSS-M-20B have been maintained with following
                       exceptions:
                       - Some requirements have been deleted because they are obvious.
                       - Requirements of clause 5.4 are covered by ECSS-M-ST-40.
                       - Some requirements have been edited to eliminate inconsistencies.
                       The content of ECSS-M-30A has been completely updated and rewritten.
6 March 2009           Changes with respect to version C (31 July 2008) are identified with revision
                       tracking. The main changes are:
                       - Changed term “technical specification” to “technical requirements
                           specification”.
                       - Table F-1 updated to align it with ECSS-E-ST-10, and Table G-1 updated to
                           identify DRD references.
                       - Insertion of missing Header “4.4.3.2.1 Overview” (resp. “4.4.3.3.1
                           Overview”) after clause number 4.4.3.2 (resp. 4.4.3.3) causing renumbering
                           of subsequent clauses.


                                                                                      Table of contents

Change log .................................................................................................................3

Introduction................................................................................................................7

1 Scope.......................................................................................................................8

# 2 Normative references .............................................................................................9

# 3 Terms and definitions ..........................................................................................10
## 3.1 Terms defined in other standards............................................................................. 10
## 3.2 Terms specific to the present standard ....................................................................10
   3.3     Abbreviated terms .................................................................................................... 11

4 Principles ..............................................................................................................12
   4.1     Project planning........................................................................................................12
           4.1.1       Introduction.................................................................................................12
### 4.1.2 Purpose and objectives of the project ........................................................ 12
### 4.1.3 Availability of and need to develop new technologies ................................ 13
### 4.1.4 Availability of and need to reuse existing equipments/products ................. 13
### 4.1.5 Availability of and need for human resources, skills and technical
                       facilities.......................................................................................................13
### 4.1.6 Risk assessment ........................................................................................13
### 4.1.7 Development approach ..............................................................................13
### 4.1.8 Project deliverables .................................................................................... 13
### 4.1.9 Customer requirements and constraints..................................................... 14
### 4.1.10 Project requirements documents (PRD)..................................................... 14
### 4.1.11 Project management plan...........................................................................14
   4.2     Project organization..................................................................................................15
           4.2.1       Introduction.................................................................................................15
### 4.2.2 Organizational structure .............................................................................15
### 4.2.3 Communication and reporting ....................................................................15
           4.2.4       Audits..........................................................................................................15
   4.3     Project breakdown structures ...................................................................................16
           4.3.1       Introduction.................................................................................................16


           4.3.2       Function tree...............................................................................................16
           4.3.3       Specification tree ........................................................................................16
           4.3.4       Product tree ................................................................................................16
### 4.3.5 Work breakdown structure (WBS) .............................................................. 17
### 4.3.6 Work package (WP) ...................................................................................18
### 4.3.7 Organization breakdown structure (OBS)................................................... 18
   4.4     Project phasing.........................................................................................................19
           4.4.1       Introduction.................................................................................................19
### 4.4.2 Relationship between business agreements and project phases............... 21
### 4.4.3 Project phases............................................................................................21
### 4.4.4 Project specific reviews .............................................................................. 28

# 5 Requirements........................................................................................................29
   5.1     Project planning........................................................................................................29
           5.1.1       Overview.....................................................................................................29
### 5.1.2 Requirements on customers.......................................................................29
### 5.1.3 Requirements on suppliers......................................................................... 30
   5.2     Project organization..................................................................................................30
### 5.2.1 Organizational structure .............................................................................30
### 5.2.2 Communication and reporting ....................................................................31
           5.2.3       Audits..........................................................................................................32
   5.3     Project breakdown structures ...................................................................................33
   5.4     Project phasing.........................................................................................................34

Annex A (normative) Project management plan (PMP) -- DRD ............................35

Annex B (normative) Product tree -- DRD..............................................................38

Annex C (normative) Work breakdown structure (WBS) -- DRD..........................40

Annex D (normative) Work package (WP) description -- DRD .............................42

Annex E (normative) Progress report -- DRD ........................................................44

Annex F (informative) ECSS management branch documents delivery per
  review ...................................................................................................................45

Annex G (informative) Management documents delivery (periodic or
  incident triggered)...............................................................................................47

Annex H (informative) Determination of the appropriate WBS level of
  detail.....................................................................................................................48

Bibliography.............................................................................................................50


Figures
Figure 4-1: Product tree example...........................................................................................17
Figure 4-2: WBS example ......................................................................................................18
Figure 4-3: Typical project life cycle ....................................................................................... 19
Figure 4-4: Review life cycle ..................................................................................................21


Tables
Table F-1 :Management Documents Delivery per Review..................................................... 46
Table G-1 : Management documents delivery (periodic or incident triggered)....................... 47


# Introduction

Project planning and implementation is the project function, encompassing a
coherent set of processes for all aspects of project management and control.
This is done by:
- establishing the project requirements and constraints derived from the
      mission statement.
- defining phases and formal milestones enabling the progress of the
      project to be controlled with respect to cost, schedule and technical
      objectives (i.e. project control function).
- defining project breakdown structures, which constitute the common and
      unique reference system for the project management to:
      - identify the tasks and responsibilities of each actor;
      - facilitate the coherence between all activities of the whole project;
      - perform scheduling and costing activities.
- setting up a project organization to perform all necessary activities on the
      project.


# Scope

The scope of this ECSS Standard is limited to describing the key elements of
project planning and implementation and identifying the top level
requirements and products that together provide a coherent and integrated
project planning across the 3 ECSS branches.
Where other ECSS management, engineering, or product assurance standards
contain more specific and detailed requirements related to project planning,
references are provided to identify where these can be found within the ECSS
system.
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


                     information management


# Terms and definitions

## 3.1 Terms defined in other standards
             For the purpose of this Standard, the terms and definitions from


## 3.2 Terms specific to the present standard
### 3.2.1 discipline
             specific area of expertise within a general subject
                         NOTE       The name of the discipline normally indicates the
                                    type of expertise (e.g. in the ECSS System, system
                                    engineering, mechanical engineering, software and
                                    communications are disciplines within the
                                    Engineering domain)

### 3.2.2 domain
             general area of interest or influence covering a number of inter-related topics or
             sub-areas
                         NOTE       The name of a domain normally indicates the area
                                    of interest (e.g. in the ECSS System, the
                                    Management, Engineering, and Product Assurance
                                    branches represent three different domains).

### 3.2.3 function
             combination and interaction of a number of operations or processes, which
             together achieve a defined objective


## 3.3 Abbreviated terms
            For the purposes of this Standard, the abbreviated terms from ECSS-S-ST-00-01
            and the following apply.
             Abbreviation          Meaning
             AR                    acceptance review
             B/L                   baseline
             CBCP                  current baseline cost plan
             CDR                   critical design review
             CRR                   commissioning result review
             DRL                   document requirements list
             EAC                   estimate at completion
             EGSE                  electrical ground support equipment
             ELR                   end-of-life review
             ETC                   estimate to completion
             FRR                   flight readiness review
             GSE                   ground support equipment
             ILS                   integrated logistic support
             ITT                   invitation to tender
             LRR                   launch readiness review
             MCR                   mission close-out review
             MDR                   mission definition review
             MGSE                  mechanical ground support equipment
             N/A                   not applicable
             OBCP                  original baseline cost plan
             OBS                   organizational breakdown structure
             ORR                   operational readiness review
             PDR                   preliminary design review
             PMP                   project management plan
             PRD                   project requirements documents
             PRR                   preliminary requirements review
             QR                    qualification review
             RFP                   request for proposal
             RFQ                   request for quote
             SRR                   system requirements review
             WBS                   work breakdown structure
             WP                    work package


                                                                        Principles

## 4.1 Project planning

### 4.1.1 Introduction
             Project planning and implementation encompasses all of the processes carried
             out in order to plan and execute a space project from initiation to completion at
             all levels in the customer-supplier chain in a coordinated, efficient and
             structured manner. It is a project wide activity receiving inputs from all project
             disciplines and involving close co-operation across the project domains.
             A space project typically comprises a space segment and a ground segment
             which are implemented in parallel (see ECSS-E-ST-70). They rely on, and have
             interfaces with the launch service segment. These three segments comprise a
             space system.
             In principle, a proposal to initiate a space project can be raised by any party.
             However, the most common initiators are:
             - individual governments, or co-operation between a number of
                   governments;
             - national, or international space agencies, either singly or collectively;
             - national or international scientific communities;
             - operators of commercial space systems.
             In this ECSS standard, the top level customer is defined as the organization
             responsible for generating the top level space segment and ground segment
             business agreements and for interface arrangements with other external space
             system elements.
             The following clauses 4.1.2 to 4.1.11 describe the key elements to be addressed,
             assessed, and balanced when planning a project.


### 4.1.2 Purpose and objectives of the project
             The purpose and objectives of the project are defined by the project initiator in
             the mission statement which includes key performance parameters and
             technical and programmatic constraints to be applied to the project. They are
             normally coordinated with the top level customer, if one has been assigned.


### 4.1.3 Availability of and need to develop new
             technologies
This is an assessment carried out jointly by the customer and supplier to
identify the availability of scientific and technological know-how and the
technology needed to implement the project. The result of this assessment,
which can be a significant cost and schedule driver, is a major input to the
assessment of required resources and facilities and to the subsequent technical
and programmatic risk assessment.


### 4.1.4 Availability of and need to reuse existing
             equipments/products
This is an assessment of the feasibility of reusing existing products and is
typically carried out as a direct response to a customer requirement. The result
of this assessment, which also can have a significant influence on cost and
schedule is a major input to the assessment of required resources and facilities
and to the subsequent technical and programmatic risk assessment.


### 4.1.5 Availability of and need for human
             resources, skills and technical facilities
This is an assessment carried out jointly by the customer and supplier of the
resources, skills and facilities required to implement the project. The result of
this assessment shows if required resources, skills and facilities are adequate, or
if additional skills, resources, or facilities are needed to complete the project.


### 4.1.6 Risk assessment
The initial assessments of the technical and programmatic risks of a project are
carried out by the customer, based on the project initiator’s inputs with respect
to the purpose and objectives of the project, together with the identified
technical and programmatic constraints to be applied to the project. The initial
assessment is subsequently regularly expanded to include other relevant
parameters as they become available, and as the project matures.
Comprehensive risk assessments are conducted at each major project review.


### 4.1.7 Development approach
The development approach for a project is jointly defined by the customer and
supplier to comply with the project initiator’s mission statement, requirements
and constraints, and balancing these with the outcome of paragraphs 4.1.3 to
### 4.1.6 above.


### 4.1.8 Project deliverables
The customer has the responsibility for defining the deliverable products,
needed to meet the project initiator’s mission statement, taking into account the
assessments noted in clauses 4.1.4 to 4.1.7 above.


### 4.1.9 Customer requirements and constraints
Customer requirements and constraints are prepared by the customer based on
the outputs from 4.1.2 to 4.1.8 above and put into a format suitable for direct
application in an invitation to tender (ITT). They address technical and
programmatic requirements, as well as political, commercial, and industrial
constraints to be applied to the project and collectively represent the project
requirements documents (PRD).


### 4.1.10 Project requirements documents (PRD)
The project requirements documents are an integral part of an ITT, request for
proposal (RFP), or request for quote (RFQ) prepared and released by a
customer to potential suppliers.
The PRD typically comprise
- Statement of work
- Technical requirements documented in           Technical    Requirements
      Specification, as defined in ECSS-E-ST-10-06
- Management requirements
- Engineering requirements
- Product assurance requirements
- Programmatic requirements
- Other, project specific requirements (e.g. geographical distribution,
      model philosophy to be applied)
- Documents requirements list (DRL)
- Tender requirements
Under the ECSS system, management, engineering and product assurance
requirements are contained in the M, E, and Q standards, progressively tailored
by each customer in the customer-supplier chain to reflect the type and phase of
the project covered by the business agreement, as well as the scope of the
suppliers’ tasks required by the PRD.


### 4.1.11 Project management plan
The top level project plan is the project management plan which defines the
project management approach and methodology to be used throughout the life
cycle of the project, together with an overview of all elements of project
management disciplines. It includes the definition of the system engineering
and product assurance management approach or provides references to
separate system engineering and product assurance plans which together make
up the total planning documentation used to implement a project.


## 4.2 Project organization

### 4.2.1 Introduction
             The establishment of a well structured and coherent organizational structure for
             implementing a project at all levels in the customer-supplier chain is a key
             factor for ensuring an effective and efficient management approach. At each
             level in the customer-supplier chain a project organization can be built as a self-
             standing project team containing all necessary disciplines within the team
             structure or, more often, can be built around a core project team containing key
             project functions with other necessary functions being provided from outside
             the project team as external support.
             Irrespective of the organizational approach followed for a project, the elements
             summarized below are relevant at all levels in the customer-supplier chain.


### 4.2.2 Organizational structure
             It is essential that the project organizational structure is arranged to include all
             disciplines essential to implement the project with well defined functions as
             well as clear reporting lines, inter-relationships and interfaces. All project actors
             below the top level customer and above the lowest level supplier(s) have the
             roles of suppliers and customers, and their organizational structures are
             constructed to accommodate both roles.
             The organizational structure provides a clear and unambiguous definition and
             allocation of individual roles and responsibilities together with the necessary
             authority to implement these within the internal project set--up as well as
             towards project external interfaces.


### 4.2.3 Communication and reporting
             Effective means of communication are essential tools for ensuring clear and
             efficient inter-action between all project actors, as well as between the project
             team and its external interfaces. Information technology is the primary means
             for the exchange of information. Communication serves initially to provide
             clarity about the project’s goals and objectives and subsequently, to support the
             day to day work of the project team. Regular reporting is an important tool for
             exchanging information concerning the progress of the project.


### 4.2.4 Audits
             Audits are independent examinations to determine whether processes and
             procedures achieve the specified objective. They are an essential tool to identify
             problem areas.


## 4.3 Project breakdown structures

### 4.3.1 Introduction
             Project breakdown structures provide the basis for creating a common
             understanding between all actors. They break the project down into
             manageable elements as described in the following clauses 4.3.2 to 4.3.7.


### 4.3.2 Function tree
             The function tree is the breakdown of the system performances into functions.
             Each function is decomposed into sub--functions independent of the type of
             products involved. The “function” approach is applied during project start--up
             or during the system definition phase. More details about the function tree are
             given in ECSS-E-ST-10, function tree DRD.


### 4.3.3 Specification tree
             The specification tree defines the hierarchical relationship of all technical
             requirements specifications for the different elements of a system or product.
             More details about the specification tree are given in ECSS-E-ST-10,
             specification tree DRD.


### 4.3.4 Product tree
             The product tree is the breakdown of the project into successive levels of
             hardware and software products or elements, articulated to perform the
             functions identified in the function tree. However, the function and the product
             tree do not necessarily mirror each other. The product tree includes the
             development models, the GSE, the integration tools and test equipment, and
             external items necessary to validate the end product and ILS items. It includes
             items submitted to customer configuration control and items that are the subject
             of a technical requirements specification. The product tree forms the basis for
             the elaboration of the project work breakdown structure.
             An example of a product tree is shown in Figure 4-1.


                                                   Space
                                                   System


                      Space Segment                                           Ground Segment


                                                            Mission Control   Payload Control   Communications
 Platform                Payload           GSE
                                                                Center            Center           System


   Structure             Instrument 1       MGSE


Thermal control          Instrument 2       EGSE


On-board power
                         Instrument 3
    supply


Attitude control


 Data handling


                              Figure 4-1: Product tree example


### 4.3.5 Work breakdown structure (WBS)
                   The WBS is the principal structure used in managing a project and provides a
                   framework for managing cost, schedule and technical content. It divides the
                   project into manageable work packages, organized according to the nature of
                   the work by breaking down the total work to be performed into increasing
                   levels of detail.
                   The WBS is derived from the product tree, selected elements of which are
                   extended to include support functions (i.e. management, engineering, product
                   assurance) and associated services (e.g. test facilities).
                   An example of a WBS is shown in Figure 4-2.


             Figure 4-2: WBS example


### 4.3.6 Work package (WP)
A WP can be any element of the WBS down to the lowest level that can be
measured and managed for planning, monitoring, and control.
Control work packages are identified by the supplier at the level in the WBS
where visibility and control is required, and for which reporting is to be
performed. The control work packages represent the total work-scope and are
agreed by the customer.
The work of each supplier is explicitly identified in the work breakdown
structure by at least one control work package.


### 4.3.7 Organization breakdown structure (OBS)
The OBS depicts the proposed project organization, including the interface and
contractual responsibilities, as opposed to company organization breakdown
structure, which depicts the functional aspects of the company. The project OBS
shows the key personnel and the assigned responsible parties for each work
package in the WBS.


## 4.4 Project phasing

### 4.4.1 Introduction
             The life cycle of space projects is typically divided into 7 phases, as follows:
             - Phase 0 - Mission analysis/needs identification
             - Phase A - Feasibility
             - Phase B - Preliminary Definition
             - Phase C - Detailed Definition
             - Phase D - Qualification and Production
             - Phase E --Utilization
             - Phase F -- Disposal
             A typical project life cycle is illustrated in Figure 4-3.
             Project phases are closely linked to activities on system and product level.
             Depending on the specific circumstances of a project and the acceptance of
             involved risk, activities can overlap project phases.
             At the conclusion of the major activities and the related project reviews
             configuration baselines are established (see ECSS-M-ST-40).


                    Figure 4-3: Typical project life cycle


Phases 0, A, and B are focused mainly on
- the elaboration of system functional and technical requirements and
      identification of system concepts to comply with the mission statement,
      taking into account the technical and programmatic constraints identified
      by the project initiator and top level customer.
- the identification of all activities and resources to be used to develop the
      space and ground segments of the project,
- the initial assessments of technical and programmatic risk,
- initiation of pre-development activities.
Phases C and D comprise all activities to be performed in order to develop and
qualify the space and ground segments and their products.
Phase E comprises all activities to be performed in order to launch, commission,
utilize, and maintain the orbital elements of the space segment and utilize and
maintain the associated ground segment.
Phase F comprises all activities to be performed in order to safely dispose all
products launched into space as well as ground segment.
Each of the above project phases includes end milestones in the form of project
review(s), the outcome of which determines readiness of the project to move
forward to the next phase.
Requirements on organization and conduct of reviews are provided in
With the exception of the MDR which normally involves only the project
initiator, and the top level customer, all other project reviews up to and
including the AR are typically carried out by all project actors down to the
lowest level supplier in the customer-supplier chain involved in the project
phases containing these reviews.
From the PRR to the PDR, the sequence of the reviews is “top down”, starting
with the top level customer and his top level supplier, and continuing down the
customer-supplier chain to the lowest level supplier. From the CDR to the AR,
the sequence of reviews is reversed to “bottom up”, starting with the lowest
level supplier and its customer and continuing up through the customer-
supplier chain to the 1st level supplier and the top level customer. This so called
“V model” is illustrated in Figure 4-4.


            Figure 4-4: Review life cycle


### 4.4.2 Relationship between business agreements
             and project phases
A business agreement can cover a single project phase, a sequential grouping of
project phases or sub-phases (e.g. phase B1/phase B2; phase B2/phase C1/phase
C2), depending on such factors as funding availability, competitive tendering,
schedule, perceived risk. Irrespective of the approach used for defining the
scope of individual business agreements, all space projects essentially follow
the classical project phases in sequence and include all of the major objectives
and key milestones of each of these phases.


### 4.4.3 Project phases

#### 4.4.3.1 General
The clause 4.4.3 provides an introduction and overview of the typical major
tasks, associated review milestones, and review objectives for each of the phases
in a project life cycle.


#### 4.4.3.2 Phase 0 (Mission analysis/needs identification)

##### 4.4.3.2.1 Overview
This is mainly an activity conducted by the project initiator, the top level
customer and representatives of the end users.


##### 4.4.3.2.2 Major tasks:
- Elaborate the mission statement in terms of identification and
      characterization of the mission needs, expected performance,
      dependability and safety goals and mission operating constraints with
      respect to the physical and operational environment.
- Develop the preliminary technical requirements specification.
- Identify possible mission concepts.
- Perform preliminary assessment of programmatic aspects supported by
      market and economic studies as appropriate.
- Perform preliminary risk assessment.

##### 4.4.3.2.3 Associated review
The mission definition review (MDR) is held at the end of phase 0.
The outcome of this review is used to judge the readiness of the project to move
into phase A.

##### 4.4.3.2.4 Main review objective(s)
The primary objective of this review is to release the mission statement and
assess the preliminary technical requirements specification and programmatic
aspects.


#### 4.4.3.3 Phase A (Feasibility)

##### 4.4.3.3.1 Overview
This is mainly an activity conducted by the top level customer and one or
several first level suppliers with the outcome being reported to the project
initiator, and representatives of the end users for consideration.

##### 4.4.3.3.2 Major tasks
- Establish the preliminary management plan, system engineering plan
      and product assurance plan for the project.
- Elaborate possible system and operations concepts and system
      architectures and compare these against the identified needs, to
      determine levels of uncertainty and risks.
- Establish the function tree.
- Assess the technical and programmatic feasibility of the possible
      concepts by identifying constraints relating to implementation, costs,
      schedules, organization, operations, maintenance, production and
      disposal.
- Identify critical technologies and propose pre-development activities.
- Quantify and characterize critical elements for technical and economic
      feasibility.
- Propose the system and operations concept(s) and technical solutions,
      including model philosophy and verification approach, to be further
      elaborated during Phase B.
- Elaborate the risk assessment.


##### 4.4.3.3.3 Associated review
The preliminary requirements review (PRR) is held at the end of Phase A. The
outcome of this review is used to judge the readiness of the project to move into
Phase B.

##### 4.4.3.3.4 Main review objective(s)
The primary objectives of this review are:
- Release of preliminary management, engineering and product assurance
      plans.
- Release of the technical requirements specification.
- Confirmation of the technical and programmatic feasibility of the system
      concept(s).
- Selection of system and operations concept(s) and technical solutions,
      including model philosophy and verification approach, to be carried
      forward into Phase B.


#### 4.4.3.4 Phase B (Preliminary definition)

##### 4.4.3.4.1 Major tasks
- Finalize the project management, engineering and product assurance
      plans.
- Establish the baseline master schedule.
- Elaborate the baseline cost at completion.
- Elaborate the preliminary organizational breakdown structure (OBS).
- Confirm technical solution(s) for the system and operations concept(s)
      and their feasibility with respect to programmatic constraints.
- Conduct “trade-off” studies and select the preferred system concept,
      together with the preferred technical solution(s) for this concept.
- Establish a preliminary design definition for the selected system concept
      and retained technical solution(s).
- Determine the verification program including model philosophy.
- Identify and define external interfaces.
- Prepare the next level specification and related business agreement
      documents.
- Initiate pre-development work on critical technologies or system design
      areas when it is necessary to reduce the development risks.
- Initiate any long-lead item procurement required to meet project
      schedule needs.
- Prepare the space debris mitigation plan and the disposal plan.
- Conduct reliability and safety assessment.
- Finalize the product tree, the work breakdown structure and the
      specification tree.
- Update the risk assessment.


##### 4.4.3.4.2 Associated reviews
There are 2 project reviews associated with Phase B.
- The system requirements review (SRR) held during the course of Phase B.
- The preliminary design review (PDR) held at the end of Phase B. The
      outcome of this review is used to judge the readiness of the project to
      move into Phase C.

##### 4.4.3.4.3 Main review objectives - System requirements review
The primary objectives of this review are:
- Release of updated technical requirements specifications.
- Assessment of the preliminary design definition.
- Assessment of the preliminary verification program.

##### 4.4.3.4.4 Main review objectives -- Preliminary design review
The primary objectives of this review are:
- Verification of the preliminary design of the selected concept and
      technical solutions against project and system requirements.
- Release of final management, engineering and product assurance plans.
- Release of product tree, work breakdown structure and specification tree.
- Release of the verification plan (including model philosophy).


#### 4.4.3.5 Phase C (Detailed definition)

##### 4.4.3.5.1 Major tasks
The scope and type of tasks undertaken during this phase are driven by the
model philosophy selected for the project, as well as the verification approach
adopted.
- Completion of the detailed design definition of the system at all levels in
      the customer-supplier chain.
- Production, development testing and pre-qualification of selected critical
      elements and components.
- Production and development testing of engineering models, as required
      by the selected model philosophy and verification approach.
- Completion of assembly, integration and test planning for the system and
      its constituent parts.
- Detailed definition of internal and external interfaces.
- Issue of preliminary user manual.
- Update of the risk assessment.

##### 4.4.3.5.2 Associated review
The critical design review (CDR) is held at the end of phase C. The outcome of
this review is used to judge the readiness of the project to move into phase D.


##### 4.4.3.5.3 Main review objectives
- Assess the qualification and validation status of the critical processes and
      their readiness for deployment for phase D.
- Confirm compatibility with external interfaces.
- Release the final design.
- Release assembly, integration and test planning.
- Release flight hardware/software manufacturing, assembly and testing.
- Release of user manual.


#### 4.4.3.6 Phase D (Qualification and production)

##### 4.4.3.6.1 Major tasks
- Complete qualification testing and associated verification activities.
- Complete    manufacturing,    assembly    and    testing  of   flight
      hardware/software and associated ground support hardware/software.
- Complete the interoperability testing between the space and ground
      segment.
- Prepare acceptance data package.

##### 4.4.3.6.2 Associated reviews
There are 3 project reviews associated with phase D
- The qualification review (QR) held during the course of the phase.
- The acceptance review (AR) held at the end of the phase. The outcome of
      this review is used to judge the readiness of the product for delivery.
- The operational readiness review (ORR), held at the end of the phase.

##### 4.4.3.6.3 Main review objectives -- Qualification review
The primary objectives of this review are:
- To confirm that the verification process has demonstrated that the
      design, including margins, meets the applicable requirements.
- To verify that the verification record is complete at this and all lower
      levels in the customer-supplier chain.
- To verify the acceptability of all waivers and deviations.
Where development encompasses the production of one or several recurring
products, the QR is completed by a functional configuration verification during
which:
- The first article configuration is analyzed from the viewpoint of
      reproducibility.
- The production master files for the series productions are released.
- The series production go--ahead file is accepted by the customer.


##### 4.4.3.6.4 Main review objectives -- Acceptance review
The primary objectives of this review are:
- To confirm that the verification process has demonstrated that the
      product is free of workmanship errors and is ready for subsequent
      operational use.
- To verify that the acceptance verification record is complete at this and
      all lower levels in the customer-supplier chain.
- To verify that all deliverable products are available per the approved
      deliverable items list.
- To verify the “as-built” product and its constituent components against
      the required “as designed” product and its constituent components.
- To verify the acceptability of all waivers and deviations.
- To verify that the Acceptance Data Package is complete.
- To authorize delivery of the product.
- To release the certificate of acceptance.

##### 4.4.3.6.5 Main review objectives - Operational readiness review
             (ORR)
The primary objectives of this review are:
- To verify readiness of the operational procedures and their compatibility
      with the flight system.
- To verify readiness of the operations teams.
- To accept and release the ground segment for operations.


#### 4.4.3.7 Phase E (Operations/utilization)

##### 4.4.3.7.1 Major tasks
The major tasks for this phase vary widely as a function of the type of project
concerned. Therefore, only a general overview of activities during this phase is
provided here.
- Perform all activities at space and ground segment level in order to
      prepare the launch.
- Conduct all launch and early orbital operations.
- Perform on-orbit verification (including commissioning) activities.
- Perform all on-orbit operations in order to achieve the mission objectives.
- Perform all ground segment activities in order to support the mission.
- Perform all other ground support activities in order to support the
      mission.
- Finalize the disposal plan.


##### 4.4.3.7.2 Associated reviews
There are 4 project reviews associated with phase E.
- The flight readiness review (FRR) is held prior to launch.
- The launch readiness review (LRR), held immediately prior to launch.
- The commissioning result review (CRR), held after completion of the on-
      orbit commissioning activities.
- The end-of-life review (ELR) held at the completion of the mission.

##### 4.4.3.7.3 Main review objectives - Flight readiness review (FRR)
The flight readiness review is conducted prior to launch. The objective of this
review is to verify that the flight and ground segments including all supporting
systems such as tracking systems, communication systems and safety systems
are ready for launch.

##### 4.4.3.7.4 Main review objectives - Launch readiness review (LRR)
The launch readiness review is conducted just prior to launch. The objective of
this review is to declare readiness for launch of the launch vehicle, the space
and ground segments including all supporting systems such as tracking
systems, communication systems and safety systems and to provide the
authorization to proceed for launch.

##### 4.4.3.7.5 Main review objectives - Commissioning result review (CRR)
The commissioning result review is held at the end of the commissioning as
part of the in-orbit stage verification. It allows declaring readiness for routine
operations/utilization.
This Review is conducted following completion of a series of on-orbit tests
designed to verify that all elements of the system are performing within the
specified performance parameters. Successful completion of this review is
typically used to mark the formal handover of the system to the project initiator
or to the system operator.

##### 4.4.3.7.6 Main review objectives -- End of life review (ELR)
- To verify that the mission has completed its useful operation or service.
- To ensure that all on-orbit elements are configured to allow safe disposal.


#### 4.4.3.8 Phase F (Disposal)

##### 4.4.3.8.1 Major tasks
Implement the disposal plan.

##### 4.4.3.8.2 Associated review
The mission close-out review (MCR) is held at the end of this phase.

##### 4.4.3.8.3 Main review objectives
To ensure that all mission disposal activities are adequately completed.


### 4.4.4 Project specific reviews
In addition to the project reviews identified above, and depending on the type
of project, the applicable business agreement and the overall implementation
approach adopted, additional reviews can be inserted into the project planning
against agreed sub-milestones/additional milestones to meet particular project
needs.
Typical examples of such reviews are :
- Detailed design review (software specific review, addressed in ECSS-E-
      ST-40)
- In orbit operations review (addressed in ECSS-E-ST-70)
- First article configuration review (serial production specific review)
- System design review
- System qualification review at ground level (launcher specific review)
- System qualification review at flight level (launcher specific review)
These reviews are not further addressed in this standard.


                                                            Requirements

## 5.1 Project planning

### 5.1.1 Overview
             Project planning requirements are applicable to all actors of a project from the
             top level customer down to the lowest level supplier. Project actors who have
             the role of a customer and a supplier carry the responsibilities associated with
             both roles. The scope and detail of requirements made applicable is a function
             of the level of each actor in the customer-supplier chain, with the full scope of
             all requirements applicable to the top level supplier. The overall scope made
             applicable reduces, down through the customer-supplier chain but becomes
             more specific as a function of the role played by each of these actors and the
             type of product(s) to be developed and delivered by them.


### 5.1.2 Requirements on customers
             a.    Each customer shall prepare business agreements (ITT’s, RFP’s, or
                   RFQ’s), including the project requirements documents (PRD) to be made
                   applicable between him and his supplier(s).
             b.    Each customer shall use the ECSS standards to establish the project
                   management, engineering and product assurance requirements
                   applicable for the project.
             c.    Each customer shall make applicable to his supplier(s) only those ECSS
                   standards relevant to the type and phase(s) of the project addressed by
                   the business agreement.
             d.    Each customer shall specify by tailoring the minimum requirements
                   within the applicable standards necessary for his supplier(s) to achieve
                   the project objectives.
             e.    Each customer shall approve the project management plans and key
                   personnel of his supplier(s).
             f.    Each customer shall verify compliance of his supplier(s) with all project
                   requirements and constraints.
             g.    Each customer below the top level customer in the customer-supplier
                   chain shall in addition ensure that planning for his suppliers is consistent
                   with the planning requirements imposed on him by his customer.


### 5.1.3 Requirements on suppliers
             a.   Each supplier in the customer-supplier chain shall prepare a project
                  management plan (PMP) in conformance with Annex A.
             b.   Each supplier in the customer-supplier chain shall submit the PMP to his
                  customer for approval.


## 5.2 Project organization

### 5.2.1 Organizational structure

#### 5.2.1.1 Requirements on customers and suppliers
             a.   Each customer and supplier shall define the authority for project
                  management and business agreement signing.
             b.   If the project has links with other projects, each customer and supplier
                  shall define the responsibilities relating to the definition and the
                  management of interfaces.
             c.   Where a customer, or supplier, employs consultants or other specialists
                  to assist him in performing his duties, then the roles, responsibilities and
                  authority of these consultants and specialists shall be defined.
             d.   When a customer supplies a product to a supplier he shall have the
                  responsibility of a supplier in respect of that product.


#### 5.2.1.2 Requirements on suppliers
             a.   The supplier shall set up the project management organization in such a
                  way that adequate resources are allocated to the project to ensure timely
                  completion of the business agreement.
             b.   The supplier shall nominate a project manager with a project team under
                  his authority and reporting directly to him.
             c.   The supplier shall ensure that the project manager has the authority to
                  execute all tasks needed under the business agreement with direct access
                  to his company management hierarchy to resolve conflicts at the
                  appropriate level.
             d.   The supplier shall identify the key personnel to be deployed on the work,
                  and include them in the project organization.
             e.   The supplier shall demonstrate that the key personnel have the necessary
                  qualification, skills and experience to perform the task for which they are
                  allocated.
             f.   The supplier’s project management organization shall exercise an active
                  monitoring and control over its own and lower tier supplier’s activities
                  and lead its lower tier supplier’s in the execution of subcontracted
                  activities to ensure that their services conform to the customer’s
                  requirements.


g.   If a supplier is responsible for more than one business agreement within
     a project, and the business agreements have different customers, then
     each business agreement shall be clearly identified and accomplished
     according to the appropriate relationships.
h.   The first level supplier shall establish, maintain and distribute a project
     directory including key personnel, as a minimum.


### 5.2.2 Communication and reporting

#### 5.2.2.1 Requirements on customers and suppliers
a.   The top level customer shall:
     1.    specify a reporting system for the project;
     2.    specify an action monitoring system for the project.
b.   Each customer and supplier in the customer-supplier chain shall
     implement and maintain the project reporting an action monitoring
     systems.
c.   Formal meetings between the customer and his supplier(s) shall be held
     to review progress against approved project planning and address major
     deviations or changes proposed to the project requirements documents.
d.   The frequency, location and schedule of customer-supplier project
     meetings shall be agreed by all participating parties.
e.   Customer-supplier meetings shall be based on an agreed written agenda.
f.   A chairperson and secretary shall be designated at the beginning of the
     meeting.
g.   The results of the meeting shall be documented in the agreed minutes
     signed by all parties involved in the meeting.
h.   Agreed actions shall be documented in an action item list.
i.   Each action shall be allocated
     1.    a unique identification,
     2.    the identification of the origin (e.g. meeting),
     3.    the initiator,
     4.    the description of the action (clear and concise),
     5.    the person responsible for the action,
     6.    the close-out date,
     7.    the current status, and
     8.    the close-out reference (e.g. document, letter).
j.   Action items shall be reviewed at each meeting.
k.   Any matters documented in the minutes of meeting having impact on the
     business agreement shall be subject to the contract change procedure for
     implementation.


#### 5.2.2.2 Requirements on suppliers
a.   The supplier shall prepare and submit progress reports to his customer in
     conformance with Annex E.
b.   The supplier shall prepare minutes of progress meetings for approval of
     the customer.
c.   The supplier shall notify the customer within an agreed period of time of
     any event that could significantly affect the achievement of the business
     agreement objectives in terms of cost, technical performance and
     schedule, and any situation resulting in a substantial schedule or
     planning change demanding immediate customer involvement.


### 5.2.3 Audits

#### 5.2.3.1 General requirements
a.   Every audit performed shall be followed by a report prepared by the
     auditor and containing the views of both parties.
b.   The conclusions of the audit and the draft report shall be discussed with
     the supplier, before finalization and release.
c.   In the event of disagreement with any of the audit conclusions, the
     supplier may add his observations and comments.
d.   The final audit report shall not be divulged without the agreement of the
     audited supplier.


#### 5.2.3.2 Requirements on customers
a.   The customer shall notify the supplier in due time of
     1.    his intention to perform an audit;
     2.    the objectives and the scope of the audit;
     3.    the designated auditor and his terms of reference;
     4.    the audit schedule.


#### 5.2.3.3 Requirements on suppliers
a.   The supplier shall accept to be audited by the customer or by a third
     party agreed between the customer and the supplier in the framework of
     the business agreement.
b.   The supplier shall have the right to demand that the audit be performed
     by a third party, and that the third party obtain authorization each time
     the audit necessitates access to information concerning patent rights or
     confidentiality associated with defence secrecy.
c.   The supplier shall perform audits of his own project activities and of the
     project activities of his lower tier supplier(s) to verify conformance with
     project requirements.


             d.   The supplier shall provide right of access for participation by the
                  customer in his own audits and in audits of his lower tier suppliers.
             e.   The supplier shall provide his customer access to his facilities and data
                  which are relevant in the frame of the business agreement.


## 5.3 Project breakdown structures
             a.   The supplier shall develop the product tree for his products down to the
                  deliverable end items, incorporating the product trees of each of his
                  lower tier suppliers, in conformance with Annex B.
             b.   The product tree shall be established at start of phase B and finalized not
                  later than PDR.
             c.   The rules for product item identification shall be uniform within the
                  project.
             d.   A unique identification shall be assigned to each item within the product
                  tree.
             e.   The identification shall remain unchanged during the product lifetime,
                  unless a modification causes discontinuation of interchangeability.
             f.   The product tree shall be subject to customer approval.
             g.   The supplier shall maintain the product tree up-to-date under
                  configuration control.
             h.   The supplier shall establish the work breakdown structure (WBS) for his
                  work share, incorporating the WBS of each of his lower tier suppliers, in
                  conformance with Annex C.
             i.   Work related to manufacturing, assembly, integration and test of all
                  product models shall be shown in the WBS.
             j.   Support functions (management, engineering, product assurance) shall
                  be identifiable in connection with its related product tree elements.
             k.   The WBS shall be subject to customer approval.
             l.   Each supplier shall maintain up-to-date the WBS for his work share in the
                  project.
             m.   The supplier shall identify control work packages based on the approved
                  WBS, and the level of visibility required by the customer.
             n.   The supplier shall establish work package (WP) descriptions for each
                  work package shown in his WBS in conformance with Annex D.
             o.   Each WP shall have a single responsible WP manager.
             p.   The supplier shall establish a project organization breakdown structure
                  (OBS), which includes.
                  1.    the interface and contractual responsibilities amongst the involved
                        parties
                  2.    the key personnel and the assigned responsible parties for each
                        work package in the WBS


             q.   The project OBS shall be submitted to the customer for approval.
             r.   The supplier shall maintain the approved OBS, keep it up-to-date, and
                  issue it to the lower tier suppliers and the customer.


## 5.4 Project phasing
             a.   The customer shall organize the project into sequential phases which
                  include all project specific reviews and decision milestones.
                       NOTE      Phases and reviews are defined in clause 4.4.3.
             b.   The customer shall prepare project review procedures for all project
                  reviews.
             c.   The customer shall ensure that the project reviews of his supplier(s) are
                  in line with the top down / bottom up sequence of the overall project
                  review planning.
             d.   The customer shall take the decision to move from one phase to the next
                  on the basis of the outcome of the associated “end of phase” review.
                       NOTE 1    Information concerning the expected delivery of
                                 ECSS management branch documents per review
                                 is provided in Annex F.
                       NOTE 2    Information concerning additional documents
                                 which are defined as outputs of the management
                                 standards requirements and which are not part of
                                 review data packages is provided in Annex G.


                      Annex A (normative)
      Project management plan (PMP) -- DRD

A.1   DRD identification

             A.1.1       Requirement identification and source document
             This DRD is called from ECSS-M-ST-10, requirement 5.1.3a.


             A.1.2       Purpose and objective
             The PMP is prepared to state the purpose and provide a brief introduction to
             the project management system. It covers all aspects of the latter.


A.2   Expected response

             A.2.1       Scope and content

             <1>      Introduction
             a.    The PMP shall contain a description of the purpose, objective and the
                   reason prompting its preparation (e.g. program or project reference and
                   phase).


             <2>      Applicable and reference documents
             a.    The PMP shall list the applicable and reference documents used in
                   support of the generation of the document.


             <3>      Objectives and constraints of the project
             a.    The PMP shall briefly describe the objective and constraints of the project
                   in conformance with the project requirements documents.


             <4>      Project organization
             a.    The PMP shall describe the project organization approach in
                   conformance with the requirements as defined in clause 5.2.


<5>       Project breakdown structures
a.     The PMP shall describe the project breakdown structures approach in
       conformance with the project breakdown structure requirements as
       defined in clause 5.3 and identify the title of individual documents called
       up by these requirements.


<6>       Configuration, information and documentation
          management
a.     The PMP shall describe the configuration, information and
       documentation management approach, as defined in ECSS-M-ST-40,
       Annex A.
b.     If the configuration, information and documentation management
       approach is contained in a rolled-out configuration management plan,
       the PMP may include only a brief description together with a reference to
       the configuration, information and documentation management plan.


<7>       Cost and schedule management
a.     The PMP shall describe the cost and schedule management approach, as
       defined in ECSS-M-ST-60.
b.     If the cost and schedule management approach is described in a rolled-
       out cost and schedule management plan, the PMP may include only a
       brief description together with a reference to the cost and schedule
       management plan.


<8>       Integrated logistic support
a.     The PMP shall describe the integrated logistic support approach, as
       defined in ECSS-M-ST-70.


<9>       Risk management
a.     The PMP shall briefly describe the risk management approach which is
       described in more detail in a rolled-out risk management policy and plan,
       as defined in ECSS-M-ST-80, Annexes A and B.


<10>      Product assurance management
a.     The PMP shall describe the product assurance management approach,
       including the proposed breakdown into PA disciplines and the interfaces
       between these disciplines, as defined in ECSS-Q-ST-10, Annex A.
b.     If the product assurance management approach is described in a rolled-
       out PA plan, the PMP may include only a brief description together with
       a reference to the product assurance plan.


<11>       Engineering management
a.      The PMP shall describe the engineering management approach,
        including the proposed breakdown into engineering disciplines and the
        interfaces between these disciplines, as defined in ECSS-E-ST-10,
        Annex D.
b.      If the engineering management approach is described in a rolled-out
        system engineering plan, the PMP may include only a brief description
        together with a reference to the system engineering plan.


A.2.2         Special remarks
None.


                                             Annex B (normative)
                                              Product tree -- DRD

B.1   DRD identification

             B.1.1        Requirement identification and source document
             This DRD is called from ECSS-M-ST-10, requirement 5.3a.


             B.1.2        Purpose and objective
             The objective of the product tree document is to describe, in a single document,
             the hierarchical partitioning of a deliverable product down to a level agreed
             between the customer and supplier.
             The product tree is part of the design definition file. It is the starting point for
             selecting configuration items (as specified in ECSS-M-ST-40) and establishing
             the work breakdown structure. It is a basic structure to establish the
             specification tree (as defined in ECSS-E-ST-10).


B.2   Expected response

             B.2.1        Scope and content

             <1>       Introduction
             a.    The product tree shall contain a description of the purpose, objective and
                   the reason prompting its preparation (e.g. program or project reference
                   and phase).


             <2>       Applicable and reference documents
             a.    The product tree shall list the applicable and reference documents used
                   in support of the generation of the document.


             <3>       Tree structure
             a.    The product tree shall provide the breakdown of lower level products
                   constituting the deliverable product.


b.      For each item identified in the product tree, the following information
        shall be provided:
        1.    identification code;
        2.    item name;
        3.    item supplier;
        4.    applicable specification.
c.      The product tree shall be presented either as a graphical diagram or an
        indentured structure where the product (i.e. at the top level of the tree) is
        decomposed into lower level products.
d.      Each product item selected as configuration item shall be identified in the
        product tree.
e.      When recurrent products from previous space projects are used, they
        shall be identified in the tree structure.


B.2.2         Special remarks
None.


                        Annex C (normative)
      Work breakdown structure (WBS) -- DRD

C.1    DRD identification

              C.1.1       Requirement identification and source document
              This DRD is called from ECSS-M-ST-10, requirement 5.3h.


              C.1.2       Purpose and objective
              The objective of the work breakdown structure (WBS) is to provide, in a single
              document, a framework for project in cost and schedule management activities
              (as defined in ECSS-M-ST-60) and for managing technical content. It assists
              projectʹs actors in:
              - conducting tender comparisons and business agreement negotiations;
              - optimizing the distribution of work amongst the different suppliers;
              - monitoring the schedule of the project.
              The WBS divides the project into manageable work packages, organized by
              nature of work. It identifies the total work to be performed down to a level of
              detail agreed between the customer and supplier.
              Information concerning the determination of the appropriate WBS level of
              detail is provided in ECSS-M-ST-10, Annex H.


C.2    Expected response

              C.2.1       Scope and contents

              <1>      Introduction
              a.    The WBS shall contain a description of the purpose, objective and the
                    reason prompting its preparation (e.g. program or project reference and
                    phase).


<2>        Applicable and reference documents
a.      The WBS shall list the applicable and reference documents used in
        support of the generation of the document.


<3>        Tree structure
a.      The WBS shall provide a logical and exhaustive breakdown of the
        product tree elements, that includes the customer’s defined support
        functions (e.g. project management, engineering, product assurance
        support) necessary to produce the end item deliverables (development
        and flight models) and the necessary services as appropriate for the
        project.
b.      A coding scheme for WBS elements that represents the hierarchical
        structure when viewed in text format shall be used.
             NOTE 1    A   common      coding     system        facilitates
                       communications among all project actors.
             NOTE 2    E.g.: to each WBS element is assigned a code used
                       for its identification throughout the life of the
                       project. It can be a simple decimal or alphanumeric
                       coding system that logically indicates the level of
                       an element and related lower-level subordinate
                       elements.
c.      The WBS shall identify all control work-packages.
d.      The control work-packages may be further broken down by the supplier
        in several more detailed work-packages.
e.      All defined work-packages together shall cover the total work scope.
f.      The WBS shall be presented either as a graphical diagram or an
        indentured structure.


C.2.2         Special remarks
None.


                      Annex D (normative)
       Work package (WP) description -- DRD

D.1   DRD identification

             D.1.1       Requirement identification and source document
             This DRD is called from ECSS-M-ST-10, requirement 5.3n.


             D.1.2       Purpose and objective
             The objective of the work package description is to describe the detailed content
             of each element of the WBS as defined in ECSS-M-ST-10, Annex C.


D.2   Expected response

             D.2.1       Scope and content
             a.    The WP description shall contain the following elements:
                   1.    project name and project phase;
                   2.    WP title;
                   3.    unique identification of each WP and issue number
                   4.    supplier or entity in charge of the WP performance;
                   5.    WP manager’s name and organization;
                   6.    supplier’s country;
                   7.    product to which the tasks of the WP are allocated (link to the
                         product tree);
                   8.    description of the objectives of the WP;
                   9.    description of the tasks;
                   10.   list of the inputs necessary to achieve the tasks;
                   11.   interfaces or links with other tasks or WP’s;
                   12.   list of constraints, requirements, standards, and regulations;
                   13.   list of the expected outputs;


        14.   list of deliverables;
        15.   location of delivery;
        16.   start event identification including date;
        17.   end event identification including date;
        18.   excluded tasks.


D.2.2         Special remarks
None.


                                           Annex E (normative)
                                         Progress report -- DRD

E.1   DRD identification

             E.1.1         Requirement identification and source document
             This DRD is called from ECSS-M-ST-10, requirement 5.2.2.2a.


             E.1.2         Purpose and objective
             The objective of the progress report is to provide all actors with actual
             information concerning the status of the project.


E.2   Expected response

             E.2.1         Scope and content
             a.      The progress report shall contain the following information:
                     1.    The project manager’s assessment of the current situation in
                           relation to the forecasts and risks, at a level of detail agreed
                           between the relevant actors.
                     2.    The status of the progress of work being performed by the
                           supplier.
                     3.    Status and trends of agreed key performance and engineering data
                           parameters.
                     4.    Adverse trends in technical and programmatic performance and
                           proposals for remedial actions.
                     5.    Planning for implementation of remedial actions.
                     6.    A consolidated report derived from the lower tier suppliers status
                           reports.
                     7.    Progress on all actions since the previous report.


             E.2.2         Special remarks
             None.


             Annex F (informative)
ECSS management branch documents
                delivery per review

    Table F-1 provides the information concerning the expected delivery of ECSS
    management branch documents per review.
                  NOTE       This table constitutes a first indication for the
                             data package content at various reviews. The
                             full content of such data package is established
                             as part of the business agreement, which also
                             defines the delivery of the document between
                             reviews.
    The various crosses in a row indicate the increased levels of maturity
    progressively expected versus reviews. The last cross in a row indicates that at
    that review the document is expected to be completed and finalized.


                                          Table F-1 :Management Documents Delivery per Review


                                                                             Phase
            Document Title                                                                                                     DRD ref.
0 A          B       C        D                   E                 F
                                          MDR   PRR   SRR       PDR CDR QR       AR   ORR FRR   LRR   CRR   ELR   MCR
Project management plan                          X    X         X                                                       ECSS-M-ST-10, Annex A
Product tree                                     X    X         X   X   X        X                                       ECSS-M-ST-10, Annex B
Work breakdown structure                         X    X         X                                                        ECSS-M-ST-10, Annex C
Work package description                         X    X         X                                                       ECSS-M-ST-10, Annex D
Schedule                                   X     X    X         X   X   X        X     X   X                             ECSS-M-ST-60, Annex B
Cost estimate report                             X    X         X                                                       ECSS-M-ST-60, Annex G
Configuration management plan                    X    X         X                                                       ECSS-M-ST-40, Annex A
Configuration item list                                         X   X                                                    ECSS-M-ST-40, Annex B
Configuration item data list                                    X   X   X        X                                       ECSS-M-ST-40, Annex C
As-built configuration list                                             X        X                                      ECSS-M-ST-40, Annex D
Software configuration file                                     X   X   X        X                                       ECSS-M-ST-40, Annex E
Configuration status accounting reports                         X   X   X        X                                       ECSS-M-ST-40, Annex F
Risk management policy document            X     X    X         X                                                       ECSS-M-ST-80, Annex A
Risk management plan                       X     X    X         X                                                        ECSS-M-ST-80, Annex B
Risk assessment report                           X    X         X   X   X        X     X   X                             ECSS-M-ST-80, Annex C


            Annex G (informative)
 Management documents delivery
   (periodic or incident triggered)

Table G-1 lists the documents which are defined as outputs of the management
standards requirements and which are not part of review data packages.

    Table G-1: Management documents delivery (periodic or
                     incident triggered)


                 Document Title                            DRD ref.


Cost breakdown structure                          ECSS-M-ST-60, Annex A
Schedule progress report                          ECSS-M-ST-60, Annex C
Company Price Breakdown Forms                     ECSS-M-ST-60, Annex D
Geographical Distribution Report                  ECSS-M-ST-60, Annex E
Cost Estimating Plan                              ECSS-M-ST-60, Annex F
Milestone Payment Plan                            ECSS-M-ST-60, Annex H
Inventory Record                                  ECSS-M-ST-60, Annex I
Cost and Manpower Report                          ECSS-M-ST-60, Annex J
OBCP and CBCP for Cost Reimbursement              ECSS-M-ST-60, Annex K
OBCP and CBCP for Fixed Price                     ECSS-M-ST-60, Annex L
EAC and ETC for Cost Reimbursement                ECSS-M-ST-60, Annex M
EAC for Fixed Price                               ECSS-M-ST-60, Annex N
Contract Change Notice                            ECSS-M-ST-60, Annex O
Change request                                    ECSS-M-ST-40, Annex G
Change proposal                                   ECSS-M-ST-40, Annex H
Request for deviation                             ECSS-M-ST-40, Annex I
Request for waiver                                ECSS-M-ST-40, Annex J


              Annex H (informative)
    Determination of the appropriate
                 WBS level of detail

The main challenge associated with developing the work breakdown structure
(WBS) is to determine the balancing between the project definition aspects
of the WBS and the requirements for data collecting and reporting. One has
to keep in mind that the WBS is a tool designed to assist the project manager
when decomposing the project only to the levels necessary to meet the needs of
the project, the nature of the work, and the confidence of the team.
An excessive WBS levels can lead to unrealistic levels of maintenance and
reporting, and consequently to an inefficient and over costly project. The theory
that more management data equates to better management control has been
proven false many times over in the last decades when assessing systems
performance. On the other hand, if not detailed enough it makes the element
difficult to manage or the risk unacceptable.
Among the different questions arising when developing a WBS, an important
one is: should the WBS be decomposed further?
To help answering this question, we propose the following list of questions. If
most of the questions can be answered YES, then the WBS element analyzed
should be decomposed. On the contrary, if most of the questions can be
answered NO, then this is not necessary. If the answers are approximately
50/50, then additional judgment is needed.
- Is there a need to improve the assessment of the cost estimates or
      progress measuring of the WBS element?
- Is there more than one individual responsible for the WBS element?
      Often a variety of resources are assigned to a WBS element, a unique
      individual is assigned the overall responsibility for the deliverable
      created during the completion of the WBS element.
- Does the WBS element content include more than one type of work
      process or produces more than one deliverable at completion?
- Is there a need to assess the timing of work processes that are internal to
      the WBS element?
- Is there a need to assess the cost of work processes or deliverables that
      are internal to the WBS element?
- Are there interactions between deliverables within a WBS element to
      another WBS element?


- Are there significant time gaps in the execution of the work processes
    that are internal to the WBS element?
- Do resource requirements change over time within a WBS element?
- Are there acceptance criteria, leading to intermediate deliverable(s),
    applicable before the completion of the entire WBS element?
- Are there identified risks that require specific attention to a subset of the
    WBS element?
- Can a subset of the work to be performed within the WBS element be
    organized as a separate unit?


# Bibliography


                  general requirements
                  requirements
                  conduct of reviews
                  management
                  support
                  management


