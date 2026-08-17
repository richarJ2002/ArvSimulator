


Space engineering
Reference coordinate system


# Foreword
This Standard is one of the series of ECSS Standards intended to be applied together for the
management, engineering and product assurance in space projects and applications. ECSS is a
cooperative effort of the European Space Agency, national space agencies and European industry
associations for the purpose of developing and maintaining common standards. Requirements in this
Standard are defined in terms of what shall be accomplished, rather than in terms of how to organize
and perform the necessary work. This allows existing organizational structures and methods to be
applied where they are effective, and for the structures and methods to evolve as necessary without
rewriting the standards.
This Standard has been prepared by the ECSS-E-10-09C Working Group, reviewed by the ECSS
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
Copyright:      2008 © by the European Space Agency for the members of ECSS


# Change log


                                                                                       Table of contents

Change log .................................................................................................................3

Introduction................................................................................................................7

1 Scope.......................................................................................................................8

# 2 Normative references .............................................................................................9

# 3 Terms, definitions and abbreviated terms..........................................................10
   3.1     Terms from other standards ..................................................................................... 10
## 3.2 Terms specific to the present standard .................................................................... 10
   3.3     Abbreviated terms .................................................................................................... 11

# 4 Objectives, process and principles ....................................................................13
   4.1     General..................................................................................................................... 13
   4.2     Concepts and processes .......................................................................................... 13
           4.2.1        Process....................................................................................................... 13
           4.2.2        Documentation ........................................................................................... 13
### 4.2.3 Coordinate system chain analysis .............................................................. 13
           4.2.4        Notation ...................................................................................................... 14
   4.3     Technical issues....................................................................................................... 14
### 4.3.1 Frame and coordinate system .................................................................... 14
### 4.3.2 Transformation between coordinate systems............................................. 14
### 4.3.3 IERS definition of a transformation............................................................. 15
           4.3.4        Time............................................................................................................ 15

# 5 Requirements........................................................................................................16
   5.1     Overview .................................................................................................................. 16
   5.2     Process requirements .............................................................................................. 16
           5.2.1        Responsibility ............................................................................................. 16
           5.2.2        Documentation ........................................................................................... 16
           5.2.3        Analysis ...................................................................................................... 17
   5.3     General requirements............................................................................................... 17
           5.3.1        Applicability................................................................................................. 17


         5.3.2        Notation ...................................................................................................... 18
         5.3.3        Figures........................................................................................................ 18
   5.4   Technical requirements ............................................................................................ 19
         5.4.1        Frame ......................................................................................................... 19
### 5.4.2 Coordinate system...................................................................................... 19
         5.4.3        Unit ............................................................................................................. 19
         5.4.4        Time............................................................................................................ 19
### 5.4.5 Mechanical frames ..................................................................................... 20
### 5.4.6 Planet coordinates...................................................................................... 20
### 5.4.7 Coordinate system parameterisation.......................................................... 20
### 5.4.8 Transformation decomposition and parameterisation ................................ 20
### 5.4.9 Transformation definition ............................................................................ 21

Annex A (normative) Coordinate Systems Document (CSD) - DRD....................23

Annex B (informative) Transformation tree analysis ...........................................26
   B.1   General..................................................................................................................... 26
   B.2   Transformation examples ......................................................................................... 26
   B.3   Tree analysis ............................................................................................................ 26
   B.4   Franck diagrams....................................................................................................... 26

Annex C (informative) International standards authorities..................................33
   C.1   Standards ................................................................................................................. 33
   C.2   Time ......................................................................................................................... 33
         C.2.1        United States Naval Observatory (USNO) ................................................. 33
         C.2.2        Bureau International des Poids et Mesures (BIPM) ................................... 33
   C.3   Ephemerides ............................................................................................................ 33
         C.3.1        Institut de Mécanique Céleste et de Calcul des Ephémérides
                      (IMCCE)...................................................................................................... 33
         C.3.2        Jet Propulsion Laboratory (JPL) ephemerides ........................................... 34
   C.4   Reference systems................................................................................................... 34
         C.4.1        International Earth Rotation and Reference Systems Service (IERS)........ 34
         C.4.2        International Astronomical Union (IAU) ...................................................... 34
         C.4.3        United States naval observatory (USNO)................................................... 34
         C.4.4        National Imagery and Mapping Agency (NIMA) ......................................... 35
   C.5   Consultative Committee for Space Data Systems (CCSDS).................................... 35
         C.5.1        Navigation................................................................................................... 35
         C.5.2        Orbit............................................................................................................ 35
         C.5.3        Attitude ....................................................................................................... 35


   C.6     IAU/IAG Working Group on Cartographic Coordinates and Rotational
           Elements (WGCCRE)............................................................................................... 36

References ...............................................................................................................37

Bibliography.............................................................................................................38


Figures
Figure B-1 : General tree structure illustrating a product tree ................................................ 29
Figure B-2 : Transformation chain decomposition for coordinate systems ............................ 30
Figure B-3 : Example of Franck diagram for a spacecraft...................................................... 31
Figure B-4 : Example of Franck diagram for a star tracker .................................................... 32


Tables
Table B-1 : Example of mechanical body frame..................................................................... 27
Table B-2 : Example of orbital coordinate system.................................................................. 28


# Introduction

Clear definition of reference directions, coordinate systems and their inter-
relationships is part of the System Engineering process. Problems caused by
inadequate early definition, often pass unnoticed during the exchange of
technical information.
This Standard addresses this by separating the technical aspects from the issues
connected with process, maintenance and transfer of such information. Clause 4
provides some explanation and justification, applicable to all types of space
systems, missions and phases. Clause 5 contains the requirements and
recommendations. Helpful and informative material is provided in the
Annexes.


# Scope

The objective of the Coordinate Systems Standard is to define the requirements
related to the various coordinate systems, as well as their related mutual inter-
relationships and transformations, which are used for mission definition,
engineering, verification, operations and output data processing of a space
system and its elements.
This Standard aims at providing a practical, space-focused implementation of
Coordinate Systems, developing a set of definitions and requirements. These
constitute a common reference or “checklist” of maximum utility for organising
and conducting the system engineering activities of a space system project or
for participating as customer or supplier at any level of system decomposition.
This standard may be tailored for the specific characteristics and constraints of a
space project in conformance with ECSS-S-ST-00.


# Normative references

The following normative documents contain provisions which, through
reference in this text, constitute provisions of this ECSS Standard. For dated
references, subsequent amendments to, or revisions of any of these
publications, do not apply. However, parties to agreements based on this ECSS
Standard are encouraged to investigate the possibility of applying the most
recent editions of the normative documents indicated below. For undated
references the latest edition of the publication referred to applies.


                        implementation


# Terms, definitions and abbreviated terms

## 3.1 Terms from other standards
              For the purpose of this Standard, the terms and definitions from
                          NOTE 1     Some terms are taken from other documents,
                                     referenced in square brackets in the References.
                          NOTE 2     There is no agreed convention for usage of
                                     combinations of the words “reference, coordinate,
                                     frame and system”. These terms are often used
                                     interchangeably in practice. In 1989, Wilkins’ [1]
                                     made a proposal. This Standard adopts a simpler
                                     terminology, which is more in line with everyday
                                     practice.


## 3.2 Terms specific to the present standard
### 3.2.1 coordinate system
              method of specifying the position of a point or a direction with respect to a
              specified frame
                          NOTE       E.g. Cartesian or rectangular coordinates, spherical
                                     coordinates and geodetic coordinates.

### 3.2.2 frame
              triad of axes, together with an origin

### 3.2.3 inertial frame
              non-rotating frame
                          NOTE 1     Inertial reference directions are fixed at an epoch.
                          NOTE 2     The centre of the Earth can be considered as non-
                                     accelerating for selecting the origin, in some
                                     applications.

### 3.2.4 J2000.0
              astronomical standard epoch 2000 January 1.5 (TT)
                          NOTE       equivalent to JD2451545.0 (TT).


## 3.3 Abbreviated terms
             For the purpose of this Standard, the abbreviated terms from ECSS-S-ST-00-01
            and the following apply:
             Abbreviation      Meaning
             AIT               assembly integration and test
             AIV               assembly integration and verification
             BCRS              barycentric celestial reference system
             BIPM              Bureau International des Poids et Mesures --
                               international bureau of weights and measures
             CAD               computer aided design
             CCSDS             Consultative Committee for Space Data Systems
             CoM               centre of mass
             CSD               coordinate systems document
             DoF               degree of freedom
             DRD               document requirements definition
             GCRS              geocentric celestial reference system
             IAG               International Association of Geodesy
             IAU               International Astronomical Union
             ICD               interface control document
             ICRF              international celestial reference frame
             ICRS              international celestial reference system
             IERS              international Earth rotation and reference service
             IMCCE             Institut de Mécanique Céleste et de Calcul des
                               Ephémérides
             ISO               International Organization for Standardization
             ITRF              international terrestrial reference frame
             ITRS              international terrestrial reference system
             IUGG              International Union of Geodesy and Geophysics
             J2000.0           epoch 2000 January 1.5 (TT)
             JPL DExxx         Jet Propulsion Laboratory development ephemeris,
                               number xxx
             L/V               launch vehicle
             MICD              mechanical interface control document
             RCS               reaction control system
             SEP               system engineering plan
             SI                système international
             STR               star tracker
             TAI               temps atomique international -- international atomic
                               time
             ToD               true of date


TT       terrestrial time
UTC      coordinated universal time -temps universel coordonné
WGCCRE   Working Group on Cartographic Coordinates and
         Rotational Elements
w.r.t.   with respect to


           Objectives, process and principles

## 4.1 General
            This Clause provides the background to the requirements and
            recommendations stated in Clause 5, from the conceptual, process and technical
            points of view.


## 4.2 Concepts and processes

### 4.2.1 Process
            The coordinate systems used within a project are identified early in the lifecycle
            of a project. These coordinate systems are then related via a chain of
            transformations to allow the transformation of coordinates, directions and other
            geometric parameters into any coordinate system used within the project at any
            time in the project life.


### 4.2.2 Documentation
            Besides the ICDs, CAD drawings and SRD, a specific document for all
            coordinate systems and their inter-relationships, throughout the product tree
            and the project life, are created, maintained and configured. The Coordinate
            System Document (CSD) takes shape before the end of phase-A.


### 4.2.3 Coordinate system chain analysis
            A chain of transformations is constructed using chain elements or links. A link
            is composed of two coordinate systems together with the transformation
            between them. The product tree can be mapped into a set of connected chains.
            For any analysis, the appropriate connected chain is used, even if other paths
            within the tree are later found to be useful for satellite integration, operations or
            processing. For subsystem or unit analysis, any link may be decomposed into a
            sub-chain containing intermediate coordinate systems. The relationship
            between two coordinate systems can involve kinematics, dynamics,
            measurement or constraints. See Annex B for some examples.


             The main mission chain typically includes inertial, rotating planet-centred
             orbital, spacecraft mechanical, instrument and product (i.e. post-processing
             related) coordinate systems.”


### 4.2.4 Notation
             Experts working together within a project need to have a common
             understanding of the parameters and variables. Specific coordinate systems are
             used to obtain a convenient formulation of the kinematic and dynamic
             equations involved. A shared understanding of all the coordinate systems and
             their parameterisations is therefore paramount. This necessitates the definition
             of a notational convention for naming variables, coordinate systems and their
             inter-relationships.


## 4.3 Technical issues

### 4.3.1 Frame and coordinate system
             Transformations between frames, having orthogonal axes, the same handedness
             (right or left) and unit vectors along each axis, enjoy the properties of unitary
             matrices, which facilitate the calculation of inverse transformations between
             these frames.
             The method for constructing a triad of orthogonal axes needs to be agreed and
             specified. The definition requires at least two non-parallel directions, which
             may be derived from physical elements, theoretical considerations or
             mathematical definitions. In general, a set of (physical) directions is not likely to
             be orthogonal.
             By definition of a coordinate system, the position of a point can be expressed by
             a set of coordinates with respect to its frame. The concept of coordinates
             requires a unit and an origin in addition to the directions as defined by the
             selected frame.
             Several mathematical representations exist to describe a position or direction,
             each with their own advantages. The Cartesian vector representation, being a
             common representation, is selected for this standard. Other parameterisations
             (e.g. geodetic coordinates and topocentric direction) can be also used to
             describe a position or direction.
             Formal parameterisation is specified in vector notation using an explicit
             mathematical relationship.


### 4.3.2 Transformation between coordinate
                          systems
             Accurate verbal, graphical and mathematical description of a transformation
             between two coordinate systems is essential for its correct interpretation.
             In general, each transformation consists of a translation, a rotation and possibly
             a scale factor operation. The specification of the order of operations is


important, even when the nominal translation is assumed to be the null vector.
A theoretically null translation can later, in the project life or in more precise
calculations, become non-null.
Quaternions, Euler angles, mechanical and other parameters can be used to
describe transformations between coordinate systems. In this standard, matrix
representation is selected for the mathematical definition of a rotational
transformation.


### 4.3.3 IERS definition of a transformation
The general transformation of the Cartesian coordinates of a point from frame 1
to frame 2 is given by the following equation, see Reference [2], page 21 from
Bibliography.
            →         →                      →
          X ( 2) = T1, 2 + λ1, 2 × R1, 2 × X (1)
where:
 →
T1,2     is the translation vector,

λ1, 2    is the scale factor, and

R1,2     is the rotation matrix.

This relates two Cartesian coordinate systems, by defining the coordinates of
the origin and the three unit vectors of one of them in the other one.


### 4.3.4 Time
Certain coordinate systems are time dependent. A unique specification of the
time standard is necessary. Such a definition includes the mathematical
relationship between each of the time standards used within the project.


                                                           Requirements

## 5.1 Overview
            This clause contains process requirements, covering the management and
            utilisation of coordinate systems throughout the life cycle of space missions;
            general requirements, covering applicability, terminology, notation, figures and
            illustrations; and technical requirements, covering the definition of coordinate
            systems and their parameterisation, and of the transformations between
            coordinate systems.


## 5.2 Process requirements

### 5.2.1 Responsibility
            a.    The responsibility for the task of system-level definition of the coordinate
                  systems and their inter-relationships, applicable to the whole product
                  tree and to be used throughout the lifetime a project, shall be identified.
                       NOTE 1     See ECSS-M-ST-10, subclause 4.3.4 and 5.3 and
                                  Annex B of this document for product tree. See
                                  also ECSS-S-ST-00-01 for the definition of product
                                  tree.
                       NOTE 2     The product tree includes the space segment, the
                                  launcher, the ground segment and associated
                                  processors, the user segment, operations, and the
                                  engineering tools and models such as simulators,
                                  emulators and test benches.


### 5.2.2 Documentation
            a.    The Coordinate Systems Document (CSD) shall be produced in
                  conformance with Annex A.
                       NOTE       The CSD is intended for reviews.
            b.    The CSD shall identify the specified coordinate systems and time scales
                  used throughout the project, by two or more subsystems or
                  organisations, together with their inter-relationships (in a parametric
                  form).


                      NOTE       Subsystems (or organisations) are free to make
                                 specifications within their area of responsibility, so
                                 long as the specific (internal) coordinate system or
                                 time scale is not used by another subsystem (or
                                 organisation).
            c.   For a spacecraft project, a preliminary version of the CSD shall be
                 produced before the end of phase A.
            d.   The CSD (and related database) shall be put under configuration control
                 at the beginning of phase B.
            e.   At each phase of the project, the coordinate systems and their inter-
                 relationships shall be re-examined.
            f.   The CSD shall include the new coordinate systems and transformations
                 following the progress of the project development.
                      NOTE       During the project, new details and elements are
                                 defined (e.g. equipment, methods and algorithms).


### 5.2.3 Analysis
            a.   The elements, which need coordinate systems, shall be identified.
                      NOTE       This involves iterative analysis of the functional
                                 and product trees as well as the interfaces, at each
                                 phase.
            b.   Each identified element of the system shall have its coordinate systems
                 defined.
            c.   A transformation chain structure shall be built to link coordinate systems
                 used by two or more subsystems
                      NOTE       See Annex B for guidelines and examples.
            d.   The nominal value, in numeric or parametric form, of the transformation
                 between two coordinate systems shall be specified.


## 5.3 General requirements

### 5.3.1 Applicability
            a.   Applicable parts of the international standards and conventions listed in
                 Annex C shall be selected and specified in the CSD.
                      NOTE       Such organisations maintain, for example,
                                 definitions of certain reference coordinate systems,
                                 and of time.
            b.   Applicable non compliant external conventions shall be converted into
                 the project’s convention.
            c.   The conversion of 5.3.1b shall be specified.


### 5.3.2 Notation
a.   A coordinate system shall be identified by a unique descriptive name.
b.   Recognised international names should not be used if the exact definition
     is not followed.
          NOTE       E.g. the name “Pseudo True of Date” can be used if
                     the conventional definition of ToD is not strictly
                     followed.
c.   A unique mnemonic shall be derived from the descriptive name of the
     coordinate system.
d.   The transformation from one coordinate system to another shall be
     identified by a unique name, which also indicates the direction of the
     transformation.
e.   The convention for naming coordinate systems and transformations shall
     be specified.
f.   The notation convention shall be specified.
g.   Sign conventions shall be identified and defined.
          NOTE       E.g. rotation around an axis.


### 5.3.3 Figures
a.   A figure shall show the relationship of a coordinate system with
     equipment, spacecraft or mission.
b.   The origin and axes of a coordinate frame shall be identified in figures
     using the reference mnemonic as indicated in 5.3.2c.
c.   A figure should show the relationship of a coordinate system to at least
     one other already defined coordinate system, once the first has been
     defined.
d.   If two or more rotations are used in a transformation between coordinate
     systems, they should be indicated on the figure with intermediate
     rotation axes.
e.   Symbols used within illustrations, figures and supporting diagrams shall
     be defined.
f.   In an engineering drawing, the applicable projection system shall be
     indicated.
          NOTE       The projection system is generally European or
                     American.
g.   In a 3D figure, the axes above, within and below a plane shall be
     differentiated.
          NOTE 1     An axis pointing out of the plane of the paper can
                     be depicted by a circle with a dot in it; an axis
                     pointing into the paper by a circle with a cross.
          NOTE 2     Shadowing and dotted lines can be used in 3D
                     figures.


## 5.4 Technical requirements

### 5.4.1 Frame
            a.   The origin of the frame shall be specified.
            b.   The derivation of the origin of a frame from reference points shall be
                 defined.
            c.   The derivation of the axes of a frame from reference directions shall be
                 defined.
            d.   The axes of a frame shall be orthogonal.
            e.   The orientation of the axes of a frame shall be defined according to the
                 right hand rule.
                      NOTE 1     Sometimes left handed frames cannot be avoided,
                                 because of imported off-the-shelf equipment.
                      NOTE 2     E.g. raw measurements or actuator commands
                                 may be given in a left handed frame.
            f.   Any imported left handed frame shall be specified.
            g.   Any left handed frame shall be associated with a system reference right
                 handed frame with the related transformation, for project development
                 use.
                      NOTE       This avoids a “change of sign” in the software
                                 without a change of variable.
            h.   The epoch of an inertial frame shall be defined.


### 5.4.2 Coordinate system
            a.   If a coordinate system is time dependent, then its time scale shall be
                 defined.
            b.   The position of a point shall be definable by a set of coordinates with
                 respect to a selected frame.


### 5.4.3 Unit
            a.   Dimensionless quantities shall be explicitly denoted as such.
            b.   The units or physical dimensions of all non-dimensionless parameters,
                 including angles, shall be defined.
                      NOTE       E.g. Units for angles include radians and degrees.


### 5.4.4 Time
            a.   The unit of time shall be defined.
            b.   The relationship between all time scales used shall be defined.
                      NOTE       E.g. The relationship between local clocks on a
                                 group of spacecraft and UTC on Earth.


### 5.4.5 Mechanical frames
a.   The frame for a mechanical system shall be related to its material
     structure definition.
b.   For alignment, integration and test purposes, the origin and axes of the
     coordinate systems shall be defined using physical and accessible points,
     including marks and targets.
c.   The process of constructing the origin and axes of a mechanical reference
     frame using the physical points shall be specified.
d.   The mathematical relationship between the coordinate system and
     physical points, as used in 5.4.5c above, shall be defined.
e.   The spacecraft interface frame w.r.t. its launcher adapter shall be
     specified.
          NOTE 1     This frame often coincides with the spacecraft
                     mechanical reference frame.
          NOTE 2     The spacecraft mechanical reference frame, defined
                     in the CSD, can be replicated in the MICD.
f.   The mechanical reference frames for the spacecraft, adapter and launch
     vehicle should be parallel and have the same positive direction.
          NOTE       This is sometimes not possible because clocking
                     the satellite inside the launcher can impose an
                     angle around the vertical axis of the launcher.


### 5.4.6 Planet coordinates
a.   The specification of geodetic/planetocentric coordinates shall include the
     parameters of the ellipsoid used, direction and origin of longitude, and
     definition of the North Pole.


### 5.4.7 Coordinate system parameterisation
a.   Any parameterisaton of a position or direction vector shall be specified
     mathematically.
b.   Permitted parameterisations of a coordinate system shall be specified in
     the CSD.


### 5.4.8 Transformation decomposition and
           parameterisation
a.   A transformation between coordinate systems shall be decomposed into
     a translational transformation and a rotational transformation, in a given
     order.
b.   The order of decomposition of a transformation between coordinate
     systems shall be the same throughout a project.
c.   If rotation is composed of three elementary rotations, the order of
     rotations shall be specified.


d.   Positive angles about an axis should be defined in a right handed sense.
e.   Any left handed rotation convention shall be highlighted in the CSD.
f.   An elementary rotation shall be defined by a rotation axis and an angle.
g.   If the rotation is represented by a quaternion, the order and mathematical
     definition of the quaternion parameters shall be specified in the CSD.
          NOTE       E.g. possibilities for the parameter order and the
                     scalar part of a quaternion representation include:
                     1. [q0, q1, q2, q3], with q0 = cos(Φ/2)
                     2. [q1, q2, q3, q4], with q1 = cos(Φ /2)
                     3. [q1, q2, q3, q4], with q4 = cos(Φ /2)
h.   The rotation error quaternion shall be expressed with a positive scalar
     part.

          NOTE       This constrains the rotation angle to [ -π , +π ] .

i.   Any parameterisation of a rotation shall be specified as a matrix in terms
     of the parameters.
j.   If the rotation is represented by a 3x3 matrix, each matrix element shall
     be defined.


### 5.4.9 Transformation definition
a.   A transformation between coordinate systems shall be defined in the
     parent coordinate system in three ways: verbally, mathematically and
     graphically.
          NOTE       E.g. see Table B-1 and Table B-2 in Annex B.
b.   Any simplification of a transformation shall be specified, as well as its
     assumptions and validity.
c.   The mathematical expression of the transformation between coordinate
     systems shall define the vector used for the translation, the method used
     for the rotation, and the order of the transformation.
d.   The rows and columns of a transformation matrix shall be identified.
e.   The transformation between coordinate systems shall be defined by a
     mathematical expression relating the coordinates of a point in one frame
     with its coordinates in the other frame.
f.   The numerical values of the elements of a rotation matrix shall be
     consistent with the precision required by the users of the data.
g.   Any alternative representation of a rotation between coordinate systems
     shall be specified in its matrix representation.
          NOTE 1     Typical ways to represent a rotation include
                     direction cosine matrix, elementary Euler rotations
                     and quaternions.
          NOTE 2     Quaternion multiplication is sometimes preferred
                     to matrix multiplication, when combining
                     rotations in software calculations.


         NOTE 3     The uncertainty of transformed quantities is not
                    the transformation of the uncertainties. See [3] for
                    pointing errors and [4] for measurement errors.
h.   The time dependency of a transformation between coordinate systems
     shall be defined.
         NOTE       The transformation from ICRS to a spacecraft CoM
                    coordinate frame can entail relativistic models.
i.   For time dependent transformations the method of interpolation shall be
     specified.
         NOTE       E.g. Inter-sample value of a quaternion.


                       Annex A (normative)
      Coordinate Systems Document (CSD) -
                                     DRD

A.1   DRD identification

             A.1.1       Requirement identification and source
                         document
             This DRD is called from ECSS-E-ST-10-09, requirement 5.2.2a.


             A.1.2       Purpose and objective
             Proper documentation and maintenance of coordinate systems and their inter-
             relationships, throughout the product tree and the project/mission life, shall be
             initiated with sufficient detail. Standard requirements for the document and
             related database would help to regularise conventions even earlier.


A.2   Expected response

             A.2.1       Scope and content

             <1>      Introduction
             a.    The CSD shall describe the purpose, objective and the reason prompting
                   its preparation (e.g. programme, project and phase).


             <2>      Applicable and reference documents
             a.    The CSD shall list the applicable and reference documents supporting the
                   generation of the document.


             <3>      Convention and Notation
             a.    The CSD shall specify the international conventions used within the
                   project for coordinate systems and transformations.
             b.    The CSD shall define the naming, notation and acronym rules for
                   coordinate systems, as well as for transformations.


c.    The CSD shall define notation conventions for the transfer of coordinates
      and transformation data.


<4>        Units
a.    The CSD shall specify the units pertaining to the coordinate systems and
      parameterisations used within the project.


<5>        Time standards
a.    The CSD shall specify the time standards used within the project and
      shall specify the relationship between them.


<6>        Coordinate system, overview
a.    The CSD shall present the overview of the various coordinate systems.
b.    The overview shall contain a brief description of at least the following
      coordinate systems, if applicable:
      1.     Inertial Coordinate Systems
      2.     Orbital Coordinate Systems
      3.     Launcher Coordinate Systems
      4.     Satellite-fixed Coordinate System (generic platform and payload)
      5.     Body-fixed Rotation (planet) Coordinate Systems
      6.     Topocentric Coordinate Systems
      7.     Test facility Coordinate Systems
      8.     Simulator Coordinate Systems
      9.     Processing / Product Coordinate Systems
c.    The description shall refer to the theory and conventions applied in
      between the various coordinate systems (e.g. precession, nutation, polar
      motion).


<7>        Parameterisations
a.    The CSD shall describe all parameterisations used within a coordinate
      system (e.g. azimuth, elevation), including the applicable type of
      coordinate systems where this parameterisation is allowed.
b.    The CSD shall describe all parameterisations used within a
      transformation (e.g. quaternions, Euler angles), including the applicable
      type of coordinate systems where this parameterisation is allowed.


<8>        Diagrams
a.    The CSD shall describe in a graphical representation the top-level chain
      of transformations for the project.
b.    The diagram of <8a> shall include any additional constraints between
      coordinate systems, as well as measurements.


c.    The CSD shall describe in a graphical representation the lower level
      chains of transformations.
d.    Each individual coordinate system, identified in <9> below, shall be
      graphically represented.
e.    These diagrams shall contain any additional constraints between
      coordinate systems, as well as measurements.


<9>      Coordinate systems, details
a.    The CSD shall give the detailed description of all Coordinate Systems
      used in the project.
b.    The transformation between coordinate systems shall be defined in the
      one that is the parent coordinate system.
c.    Parameterisations within a coordinate system shall be identified and
      specified.
           NOTE       E.g. right ascension and declination.
d.    The parameterisation of a transformation shall be identified and
      specified.
           NOTE       E.g. quaternions.
e.    Any source document for a coordinate system shall be identified in the
      CSD.


A.2.2       Special remarks
The CSD can be part of the SEP (as defined in ECSS-E-ST-10).


                               Annex B (informative)
                         Transformation tree analysis

B.1   General
             Issues involved in the definition of coordinate systems and the transformations
             between them are illustrated via examples below.


B.2   Transformation examples
             A coordinate system can be defined using a “Franck” template to ensure that all
             relevant and necessary items have been covered. See the examples of Table B-1
             and Table B-2, in which the transformation between a coordinate system and its
             parent coordinate system is also defined.
                         NOTE       Use of a Franck template helps to show that the
                                    combination of successive transformations is not,
                                    in general, purely a product of matrices.


B.3   Tree analysis
             Transformation chain analysis starts with a decomposition of the system into a
             product tree, see Figure B-1. This is followed by identification of the chains of
             transformations at a particular system level. The analysis is repeated at lower
             levels of the product tree, with the introduction of intermediate coordinate
             systems, if more detail is needed, see Figure B-2.


B.4   Franck diagrams
             A “Franck” diagram of transformation chains is a directed graph, composed of
             nodes connected by arrows. Each node is a frame, having an origin and axes.
             The arrow points from the parent frame to the child frame. A parent can be
             natural (i.e. from the definition of the child frame) or adopted (i.e. by decision).
             The arrow thus indicates the forward direction of the translational and
             rotational transformation.
             A connected graph is one in which it is possible to find a path from any node to
             any other node, not necessarily following the direction of the arrows. The graph
             can have a loop or closed path. This can occur when, for example, a robot
             grapples the body to which it is physically connected, or when two spacecraft


                         are docked together. Additional arrows (broken lines) can be added to indicate
                         measurement or estimation.
                         Figure B-3 shows a Franck diagram for a spacecraft, whilst Figure B-4 shows a
                         preliminary Franck diagram for star tracker alignment.

                            Table B-1: Example of mechanical body frame
TYPE :                     Title/Name :                           Mnemonic :            ID :
Spacecraft fixed           Attitude control frame                 CONT                  S/C-CONT-01
Definition :
Origin at spacecraft centre of mass
Axes parallel to the Mechanical Reference Frame (MRF) axes and with the same sign
Rationale : The coordinates of a point in S/C-MRF-01 are related its coordinates in S/C-CONT-01
Transformation :
from MRF, S/C-MRF-01
Translation : defined by the coordinates of the centre of mass of the spacecraft in MRF
Rotation : none
Order : not applicable
Comments/limitations : This centre of mass frame is applicable for the idealised case of a rigid body.
The null rotation is included here explicitly, as an example. In general, it may take other values.
Formula :
                                            Translation          Rotation
                          ⎡X ⎤            ⎡ X COM ⎤           ⎡1 0 0 ⎤ ⎡ X ⎤
                          ⎢Y ⎥        =   ⎢Y        ⎥     +   ⎢0 1 0 ⎥ × ⎢ Y ⎥
                          ⎢ ⎥             ⎢ COM ⎥             ⎢       ⎥ ⎢ ⎥
                          ⎢⎣ Z ⎥⎦ MRF     ⎢⎣ Z COM ⎥⎦ MRF     ⎢⎣0 0 1⎥⎦ ⎢⎣ Z ⎥⎦ CONT
Diagram:


                                                          ZCONT


                                                  YCONT            XCONT


                                                          ZMRF


                                                  YMRF               XMRF


                          Table B-2: Example of orbital coordinate system
TYPE :                    Title/Name :                                   Mnemonic :         ID :
Pseudo-inertial           Equatorial coordinate frame                    E                  IN-E-01
Definition :
Origin is at the centre of the Earth.
The X axis lies in the equatorial plane and passes through the intersection of the equator with the
meridian line at Kourou longitude.
The Z axis is the rotation axis of the Earth
The Y axis completes the right handed triad
Rationale : The equatorial coordinate frame is used to depict the trajectory of the launcher from Earth
to Orbit. Navigation and Guidance data (position, velocity and attitude) may be provided in this
frame.
Transformation :
from True of Date frame (TOD), IN-TOD-01
Translation : none
Rotation : defined by the following matrix
           ⎡ cos(θ E 2TOD ) sin(θ E 2TOD ) 0⎤
M E 2TOD = ⎢- sin(θ E 2TOD ) cos(θ E 2TOD ) 0⎥
           ⎢                                  ⎥
           ⎢⎣      0               0        1⎥⎦

where θ E 2TOD is the angle (in radians) between the X axis of the equatorial coordinate frame and the
true line of equinox directed towards the Sun at the vernal equinox
Order : not applicable
Comments/limitations : This equatorial frame is frozen at a given time.
Formula :
                                              Translation     Rotation
                              ⎡X ⎤                ⎡0 ⎤                    ⎡X ⎤
                              ⎢Y ⎥
                              ⎢ ⎥         =       ⎢0 ⎥
                                                  ⎢ ⎥       + M E 2TOD × ⎢⎢ Y ⎥⎥
                              ⎢⎣ Z ⎥⎦ TOD         ⎢⎣0⎥⎦ TOD               ⎢⎣ Z ⎥⎦ E


Diagram :


                                                                          ZE


                                   Kouro                         θE2TOD
                                                                          O                 YE
                            Vernal
                            direction
                                        XE


                                                   Level-0
                                                  reference


                                                                                                              Level-0
                                              coordinate system


                                                       kinetic
                                                       trans-


                                                                                                              Level-1
                                                        Level-1
                                                      coordinate
                                                        system

                         kinetic                                                kinetic
                         trans-                                                 trans-

                                                                                                              Level-2


                          Level-2                                                Level-2
                        coordinate                                             coordinate
                          system                                                 system


        kinetic                             kinetic                                          kinetic
        trans-                              trans-                                           trans-
                                                                                                              Level-3


        Level-3                              Level-3
      coordinate                           coordinate
        system                               system


                   Figure B-1: General tree structure illustrating a product tree


                               Application to Planet


           reference                      kinetic                   planetary
          coordinate                      trans-                   coordinate
            system                      formation                    system


                                                                                           etc.


                                                                 moving system
                                                                  coordinate
         intermediate                                               system
          coordinate
            system
Basic


                                                                                           etc.


                                     Application to Vehicle


            vehicle                       kinetic                 mobile equipment
          coordinate                      trans-                          or
            system                      formation                 fixed instrument


                                                                                         etc.
                              etc.
                 etc.


        NOTE    A kinetic transformation can have some fixed or constrained degrees of
                freedom (DoF).


  Figure B-2: Transformation chain decomposition for coordinate systems


         ToD
        frame


              trajectory


     local orbital                            attitude
        frame                                 guidance
                                               frame
                           T, R


                                                     attitude


      mechanical                               attitude
      reference                                control
        frame                                   frame
                           T, R


                                                     T, R


                                              Sun sensor
                                             measurement
                                                frame


Static transformations
          T = translational transformation
          R = rotational transformation

Dynamic transformations
        vehicle trajectory/orbit
        vehicle attitude


Figure B-3: Example of Franck diagram for a spacecraft


                                                                              Level-0
                    s/c mechanical                  s/c alignment
                   reference frame                      frame
                                          T,R


determine                   T,R                          measure


                                                                              Level-1
                   STR mechanical                   STR alignment
                   reference frame                      frame
                                          T,R


                            T,R


                                                                              Level-2
                     STR boresight
                    reference frame


                Quaternion of boresight
                 reference frame w.r.t.
                  star catalogue frame


            Figure B-4: Example of Franck diagram for a star tracker


                          Annex C (informative)
             International standards authorities

C.1   Standards
             The international authorities listed below define and maintain reference
             information.


C.2   Time

             C.2.1        United States Naval Observatory (USNO)
             The Official Source of Time for the Department of Defense (DoD) and for the
             Global Positioning System (GPS), as well as a Standard of Time for the United
             States.
             See <http://tycho.usno.navy.mil/systime.html> for a concise summary of the
             definitions of time, e.g. Terrestrial Time (TT).


             C.2.2        Bureau International des Poids et Mesures
                          (BIPM)
             The task of the BIPM is to ensure world-wide uniformity of measurements and
             their traceability to the International System of Units (SI). See
             <http://www.bipm.fr/en/home/>.
             The link to time information and link to the ftp server is
             <http://www.bipm.org/en/scientific/tai/>. Click on “Circular T” for information
             on TAI and UTC.
             Data for calculating TAI are available at <ftp://ftp2.bipm.org/pub/tai/>.


C.3   Ephemerides

             C.3.1        Institut de Mécanique Céleste et de Calcul des
                          Ephémérides (IMCCE)
                 The ephemerides of the planets and bodies of the solar system are
                 produced at the IMCCE. See <http://www.imcce.fr/>.


                Information on direct link to solar system ephemeris data is available
                at:
                <ftp://ftp.imcce.fr/pub/ephem> and
                <http://www.imcce.fr/inpop>.


            C.3.2       Jet Propulsion Laboratory (JPL) ephemerides
                Jet Propulsion Laboratory (JPL) provides ephemerides for planets,
                planetary satellites, comets and asteroids in the DExxx frame. The Moon
                ephemeris is in the LExxx frame. In addition, tools are provided for the
                correct          interpretation      of         the       data.      See
                <http://ssd.jpl.nasa.gov/?ephemerides>.


C.4   Reference systems

            C.4.1       International Earth Rotation and Reference
                        Systems Service (IERS)
            The IERS realises the definition, models and procedures for standard reference
            systems. These are based on resolutions of international scientific unions, such
            as the IAU and the IUGG. They include the celestial system, the terrestrial
            system, the transformation between the celestial and terrestrial systems,
            definition of time coordinates and time transformations, models of light
            propagation and motion of massive bodies. See <http://www.iers.org/>.
            See      <http://www.iers.org/documents/publications/tn/tn32/tn32.pdf>       for
            Technical Note 32 [2], which is updated regularly by the IERS to account for
            geophysical modifications. Chapters 2 and 3 treat the ICRS and ITRS, whilst
            chapter 4 provides the transformation from the celestial frame to a conventional
            terrestrial frame.
            Many ftp-links are provided for maintained software.


            C.4.2       International Astronomical Union (IAU)
            The IAU deals with all Solar system objects, whereas the IERS is concerned
            more specifically with the Earth. See <http://www.iau.org>.
            The ICRS for the solar system and for the Earth are called the Barycentric
            Celestial Reference System (BCRS) and the Geocentric Celestial Reference
            System (GCRS) respectively, each having a “non-rotating” origin.


            C.4.3       United States naval observatory (USNO)
            The USNO also provides FORTRAN routines and data for the transformation
            between ITRS and GCRS.
            See <ftp://maia.usno.navy.mil/conv2000/chapter5>.


            At <http://maia.usno.navy.mil/index.html>, it is possible to get a snapshot
            definition of time and access the Earth rotation parameters, which are essential
            for the transformation between Earth-centred inertial coordinates and Earth-
            centred Earth-fixed coordinates. It is also possible to obtain IERS bulletins A, B
            and C automatically, by email.


            C.4.4        National Imagery and Mapping Agency (NIMA)
            The world geodetic system, WGS84 (valid until 2010), defines Earth reference
            frames for use in geodesy and navigation. Though rather old, it is used for GPS.
            It provides the most accurate geodetic and gravitational data and local datum
            transformation constants and formulae for transforming different data into
            WGS84, see
            <http://earth-info.nga.mil/GandG/publications/tr8350.2/tr8350_2.html>.


C.5   Consultative Committee for Space Data Systems
      (CCSDS)

            C.5.1        Navigation
            Navigation data -- definitions and conventions, informational report CCSDS
            500.0-G-2, Green book, November 2005, see
             <http://public.ccsds.org/publications/archive/500x0g2.pdf>.
            Spacecraft navigation data are exchanged between CCSDS member agencies
            during cross support of space missions. The Green Book establishes a common
            understanding for the exchange of navigation data. It includes orientation and
            manoeuvre information as part of the spacecraft navigation process. See chapter
4 for coordinate frame identification, time and astrodynamic constants.


            C.5.2        Orbit
            Orbit data messages -- CCSDS 502.0-B-1, Blue book, September 2004, see
            <http://public.ccsds.org/publications/archive/502x0b1.pdf>.
            This recommendation specifies two standard message formats for use in
            transferring spacecraft orbit information between space agencies: the orbit
            parameter message and the orbit ephemeris message. The document includes
            sets of requirements and criteria that the message formats have been designed
            to meet. Another mechanism may be selected for exchanges where these
            requirements do not capture the needs of the participating agencies.


            C.5.3        Attitude
            Attitude data messages -- CCSDS 504.0-B-1, Blue book, see
            <http://public.ccsds.org/publications/archive/504x0b1.pdf>.


            This document specifies two types of standard attitude data message formats
            for use in transferring spacecraft attitude information between space agencies:
            the attitude parameter message and the attitude ephemeris message.


C.6   IAU/IAG Working Group on Cartographic Coordinates
      and Rotational Elements (WGCCRE)
            The WGCCRE issues a report, following three-yearly IAU meetings, describing
            the currently recommended models for the cartographic coordinates and
            rotational   elements of     all   solar    system    bodies.           See
            <http://astrogeology.usgs.gov/Projects/WGCCRE/>.


# References

[1]   “The past, present and future of reference systems for astronomy and
      geodesy”, G.A. Wilkins, Proceedings of the 141st symposium on the
      International Astronomical Union, Leningrad, October 17-21, 1989,
      (Kluwer academic publishers), pp 39-46.
[2]   IERS Technical Note 32 “IERS conventions (2003)”, D.D. McCarthy and
      G. Petit (eds.), US Naval Observatory (USNO) and Bureau International
      des Poids et Mesures (BIPM), 2004.
[3]   “ESA Pointing Error Handbook”, ESA-NCR-502, 19 February 1993.
[4]   “Guide to the expression of uncertainty in measurement”, ISO et al. 1995


# Bibliography


               requirements


