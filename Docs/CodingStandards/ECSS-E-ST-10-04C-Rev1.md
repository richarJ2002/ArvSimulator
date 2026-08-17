


Space engineering
Space environment


# Foreword
This Standard is one of the series of ECSS Standards intended to be applied together for the
management, engineering, product assurance and sustainability in space projects and applications.
ECSS is a cooperative effort of the European Space Agency, national space agencies and European
industry associations for the purpose of developing and maintaining common standards. Requirements
in this Standard are defined in terms of what shall be accomplished, rather than in terms of how to
organize and perform the necessary work. This allows existing organizational structures and methods
to be applied where they are effective, and for the structures and methods to evolve as necessary
without rewriting the standards.
This Standard has been prepared by the ECSS-E-ST-10-04C Rev. 1 Working Group, reviewed by the
ECSS Executive Secretariat and approved by the ECSS Technical Authority.


# Disclaimer
ECSS does not provide any warranty whatsoever, whether expressed, implied, or statutory, including,
but not limited to, any warranty of merchantability or fitness for a particular purpose or any warranty
that the contents of the item are error-free. In no respect shall ECSS incur any liability for any damages,
including, but not limited to, direct, indirect, special, or consequential damages arising out of, resulting
from, or in any way connected to the use of this Standard, whether or not based upon warranty, business
agreement, tort, or otherwise; whether or not injury was sustained by persons or property or otherwise;
and whether or not loss was sustained from, or arose out of, the results of, the item, or any services that
may be provided by ECSS.


Published by:   ESA Requirements and Standards Office
                ESTEC, P.O. Box 299,
2200 AG Noordwijk
                The Netherlands
Copyright:      2020 © by the European Space Agency for the members of ECSS


# Change log


15 June 2020             Changes with respect to ECSS-E-ST-10-04C (15 November 2008) are
                         identified with revision tracking.
                         Main changes are:
                         - Implementation of Change requests
                         - Update of Terms, definitions and abbreviated term in clause 3
                         - Addition of new Annex B.9 “MOBE-DIC” caused increase of all Table
                           numbers of Annex B by one
                         - Addition of new Annex I.7 “Atmospheric albedo neutron models”
                           caused increase of all Table numbers of Annex I by one


                         Detailed changes
                         Added requirements:
                         - 7.2.2c; 8.2.3c and d; 8.2.4c; 9.2.1.3b to d; 9.2.2.2e to g; 9.2.2.3c; 9.2.5a
                           (former informative text of 9.2.5 deleted; 9.2.7a and b; 10.2.2.1e to j;
                           10.2.2.2e to k; 10.2.5d.
                         Modified requirements:
                         - 4.2.1b; 4.2.2a, c and d; 5.2.1a, 5.2.1.1a NOTE; 5.2.2a (format corrected);
                           5.3a; 6.2.1b; 6.2.2a NOTE 3 added; 6.2.3a, c; Table 6-2; 7.2.1.1a and b;
                           7.2.2a; 7.2.3a; 8.2.1a (editorial); 8.2.2a to c; 8.2.2d (editorial and
                           NOTE); 8.2.3a (format corrected); 8.2.3b NOTE; 8.2.4a and b; 8.2.5a
                           NOTE 2 added; 9.2.1.1d; 9.2.1.2.1a and b; 9.2.1.2.2a and f; 9.2.1.3a;
                           9.2.2.2a; 9.2.2.3a and b (only update of Table numbers from Annex B);
                           9.2.3a (addition of year of publication of referenced ISO standard);
                           9.2.4a (format corrected); 9.3b.5 NOTE deleted; 9.3.c NOTE deleted;
                           10.2.1a and b; 10.2.2.1a, c (editorial) and d.
                         Deleted requirements:
                         - 6.2.3d; 7.2.1.1c; 9.2.6a and b.
                         Editorial corrections:
                         - Update of Clause 3.2 “Terms and definitions” anc 3.3 “Abbreviated
                           terms”
                         - Update of informative parts of the document: 4.1.1; 4.1.2; 5.1.4; 5.1.5;
                           5.1.5.2; 6.1.2.1; 6.1.2.3.2; 7.1.4; 8.1.2; 8.1.3; 8.1.5; 8.1.7; 9.1.2.2; 9.1.2.4;
                           9.1.2.5; 9.1.2.6; 9.1.2.7; 10.1.2.


- Footnote in Heading 9.2.1.2 removed and added as new informative
  clause 9.2.1.2.3
- Update of all Annexes
- Updated equations: B-1; B-4; B-5; B-8; B-9.
- Table B-2: data for Sunspot cycle number 23 updated and number 24
  added. updated
- Several equations recreated with new Word Equation editor
- Addition of Annex I.7 “Atmospheric albedo neutron models”
- Former informative Annex K “Contamination modelling and tools”
  deleted
- Update of Bibliography. The deleted reference documents, marked
  with and [RD xx] number were marked as deleted not to change
  reference numbers in existing text.


                                                                                   Table of contents

Change log ........................................................................................................ 3

Introduction..................................................................................................... 15

# 1 Scope ............................................................................................................ 16

# 2 Normative references .................................................................................. 17

# 3 Terms, definitions and abbreviated terms................................................. 20
## 3.1 Terms defined in other standards ..................................................................20
## 3.2 Terms specific to the present standard ..........................................................20
## 3.3 Abbreviated terms..........................................................................................28

# 4 Gravity .......................................................................................................... 30
## 4.1 Introduction and description ...........................................................................30
### 4.1.1 Introduction ......................................................................................30
### 4.1.2 Gravity model formulation ................................................................30
### 4.1.3 Third body gravitation.......................................................................32
### 4.1.4 Tidal effects......................................................................................32
## 4.2 Requirements for model selection and application .........................................32
### 4.2.1 General requirements for gravity models..........................................32
### 4.2.2 Selection and application of gravity models ......................................33

# 5 Geomagnetic fields ..................................................................................... 35
## 5.1 Introduction and description ...........................................................................35
### 5.1.1 The geomagnetic field and its sources .............................................35
### 5.1.2 The internal field ..............................................................................35
### 5.1.3 External field: ionospheric components ............................................35
### 5.1.4 External magnetic field: magnetospheric components......................36
### 5.1.5 Models of the internal and external geomagnetic fields ....................36
## 5.2 Requirements for model selection and application .........................................37
### 5.2.1 The internal field ..............................................................................37
### 5.2.2 The external field .............................................................................38
## 5.3 Tailoring guidelines ........................................................................................39

# 6 Natural electromagnetic radiation and indices ......................................... 40
## 6.1 Introduction and description ...........................................................................40
### 6.1.1 Introduction ......................................................................................40


### 6.1.2 Electromagnetic radiation and indices ..............................................40
## 6.2 Requirements ................................................................................................43
### 6.2.1 Electromagnetic radiation .................................................................43
### 6.2.2 Reference index values ....................................................................44
### 6.2.3 Tailoring guidelines ..........................................................................44
   6.3     Tables............................................................................................................45

# 7 Neutral atmospheres ................................................................................... 47
## 7.1 Introduction and description ...........................................................................47
### 7.1.1 Introduction ......................................................................................47
### 7.1.2 Structure of the Earth’s atmosphere .................................................47
### 7.1.3 Models of the Earth’s atmosphere ....................................................47
### 7.1.4 Wind model of the Earth’s homosphere and heterosphere ...............48
## 7.2 Requirements for atmosphere and wind model selection ...............................49
### 7.2.1 Earth atmosphere ............................................................................49
### 7.2.2 Earth wind model .............................................................................50
### 7.2.3 Models of the atmospheres of the planets and their satellites ..........51

# 8 Plasmas ........................................................................................................ 52
## 8.1 Introduction and description ...........................................................................52
### 8.1.1 Introduction ......................................................................................52
### 8.1.2 Ionosphere .......................................................................................52
### 8.1.3 Plasmasphere ..................................................................................53
### 8.1.4 Outer magnetosphere ......................................................................53
### 8.1.5 Solar wind ........................................................................................54
### 8.1.6 Magnetosheath ................................................................................54
### 8.1.7 Magnetotail and L2...........................................................................54
### 8.1.8 Planetary environments ...................................................................55
### 8.1.9 Induced environments ......................................................................55
## 8.2 Requirements for model selection and application .........................................55
### 8.2.1 General ............................................................................................55
### 8.2.2 Ionosphere .......................................................................................56
### 8.2.3 Auroral charging environment ..........................................................56
### 8.2.4 Plasmasphere ..................................................................................58
### 8.2.5 Outer magnetosphere ......................................................................58
### 8.2.6 The solar wind (interplanetary environment).....................................59
### 8.2.7 Other plasma environments .............................................................59
### 8.2.8 Tables ..............................................................................................60


# 9 Energetic particle radiation ........................................................................ 61
## 9.1 Introduction and description ...........................................................................61
### 9.1.1 Introduction ......................................................................................61
### 9.1.2 Overview of energetic particle radiation environment and effects .....61
## 9.2 Requirements for energetic particle radiation environments...........................64
### 9.2.1 Trapped radiation belt fluxes ............................................................64
### 9.2.2 Solar particle event models ..............................................................67
### 9.2.3 Cosmic ray models...........................................................................69
### 9.2.4 Geomagnetic shielding .....................................................................69
### 9.2.5 Neutrons ..........................................................................................70
           9.2.6.....................................................................................70
### 9.2.7 L2 and the Deep Magnetotail Environment ......................................70
## 9.3 Preparation of a radiation environment specification ......................................70
   9.4     Tables............................................................................................................72

# 10 Space debris and meteoroids................................................................... 73
## 10.1 Introduction and description ...........................................................................73
### 10.1.1 The particulate environment in near Earth space .............................73
### 10.1.2 Space debris ....................................................................................73
### 10.1.3 Meteoroids .......................................................................................74
## 10.2 Requirements for impact risk assessment and model selection .....................74
### 10.2.1 General requirements for meteoroids and space debris ...................74
### 10.2.2 Model selection and application .......................................................75
           10.2.3.....................................................................................78
### 10.2.4 The meteoroid model .......................................................................79
### 10.2.5 Impact risk assessment ....................................................................80
### 10.2.6 Margins ............................................................................................80

# 11 Contamination ........................................................................................... 81
## 11.1 Introduction and description ...........................................................................81
### 11.1.1 Introduction ......................................................................................81
### 11.1.2 Description of molecular contamination ............................................81
### 11.1.3 Transport mechanisms .....................................................................82
### 11.1.4 Description of particulate contamination ...........................................82
### 11.1.5 Transport mechanisms .....................................................................82
## 11.2 Requirements for on-orbit contamination assessment ...................................83

Annex A (normative) Natural electromagnetic radiation and indices ........ 84
   A.1     Solar activity values for complete solar cycle .................................................84


   A.2     Tables............................................................................................................85

Annex B (normative) Energetic particle radiation ....................................... 89
   B.1     Historical dates of solar maximum and minimum ...........................................89
   B.2     GEO model (IGE-2006) .................................................................................89
   B.3     ONERA MEOv2 model ..................................................................................89
   B.4     FLUMIC model ..............................................................................................90
           B.4.1       Overview ..........................................................................................90
           B.4.2       Outer belt (L>2,5 Re) .......................................................................90
           B.4.3       Inner belt (L<2,5 Re) ........................................................................91
   B.5     NASA worst case GEO spectrum ..................................................................91
   B.6     ESP solar proton model specification.............................................................92
   B.7     Solar ions model ............................................................................................92
   B.8     Geomagnetic shielding (Størmer theory) .......................................................93
   B.9     MOBE-DIC.....................................................................................................93
           B.9.1       Overview ..........................................................................................93
           B.9.2       Spectral form....................................................................................93
           B.9.3       L-shell profile....................................................................................94
           B.9.4       Magnetic latitude profile ...................................................................95
   B.10 Tables............................................................................................................96

Annex C (normative) Space debris and meteoroids .................................. 108
   C.1     Flux models .................................................................................................108
           C.1.1...................................................................................108
           C.1.2...................................................................................108
           C.1.3...................................................................................108
           C.1.4       Meteoroid streams .........................................................................108
           C.1.5       Grün meteoroid model ...................................................................110
   C.2     Tables..........................................................................................................113

Annex D (informative) Gravitation ............................................................. 117
   D.1     Gravity models: background ........................................................................117
   D.2     Guidelines for use ........................................................................................118
   D.3     Availability of models ...................................................................................120
   D.4     Tables..........................................................................................................120
   D.5     Figures ........................................................................................................121

Annex E (informative) Geomagnetic fields................................................. 122
   E.1     Overview of the effects of the geomagnetic field ..........................................122
   E.2     Models of the internal geomagnetic field ......................................................122


   E.3    Models of the external geomagnetic field .....................................................123
   E.4    Magnetopause boundary .............................................................................123
   E.5    Geomagnetic coordinate system -- B and L .................................................124
   E.6    Tables..........................................................................................................126
   E.7    Figures ........................................................................................................128

Annex F (informative) Natural electromagnetic radiation and indices .... 130
   F.1    Solar spectrum ............................................................................................130
   F.2    Solar and geomagnetic indices -- additional information ..............................130
          F.2.1       E10.7 .............................................................................................130
          F.2.2       F10.7..............................................................................................130
          F.2.3       S10.7 .............................................................................................130
          F.2.4       M10.7 .............................................................................................131
   F.3    Additional information on short-term variation ..............................................131
   F.4    Useful internet references for indices ...........................................................132
   F.5    Earth electromagnetic radiation ...................................................................132
          F.5.1       Earth albedo...................................................................................132
          F.5.2       Earth infrared .................................................................................133
   F.6    Electromagnetic radiation from other planets ...............................................134
          F.6.1       Planetary albedo ............................................................................134
          F.6.2       Planetary infrared ...........................................................................134
   F.7    Activity indices information...........................................................................134
   F.8    Tables..........................................................................................................134
   F.9    Figures ........................................................................................................135

Annex G (informative) Neutral atmospheres.............................................. 138
   G.1 Structure of the Earth’s atmosphere ............................................................138
   G.2 Development of models of the Earth’s atmosphere ......................................138
   G.3 NRLMSISE-00 and JB-2006 - additional information ...................................139
   G.4 The GRAM series of atmosphere models. ...................................................140
   G.5 Atmosphere model uncertainties and limitations ..........................................140
   G.6 HMW07 additional information .....................................................................140
   G.7 Planetary atmospheres models....................................................................141
          G.7.1       Jupiter ............................................................................................141
          G.7.2       Venus.............................................................................................141
          G.7.3       Mars ...............................................................................................142
          G.7.4       Saturn ............................................................................................142
          G.7.5       Titan ...............................................................................................142
          G.7.6       Neptune .........................................................................................142


           G.7.7       Mercury ..........................................................................................142
   G.8 Reference data ............................................................................................143
   G.9 Tables..........................................................................................................144
   G.10 Figures ........................................................................................................148

Annex H (informative) Plasmas ................................................................... 152
   H.1     Identification of plasma regions....................................................................152
   H.2     Plasma effects on spacecraft .......................................................................152
   H.3     Reference data ............................................................................................152
           H.3.1       Introduction ....................................................................................152
           H.3.2       Ionosphere .....................................................................................153
           H.3.3       Plasmasphere ................................................................................153
           H.3.4       Outer magnetosphere ....................................................................154
           H.3.5       Magnetosheath ..............................................................................155
           H.3.6       Magnetotail and distant magnetosheath .........................................155
           H.3.7       Planetary environments .................................................................155
           H.3.8       Induced environments ....................................................................156
   H.4     Tables..........................................................................................................157
   H.5     Figures ........................................................................................................160

Annex I (informative) Energetic particle radiation ..................................... 161
   I.1     Trapped radiation belts ................................................................................161
           I.1.1       Basic data ......................................................................................161
           I.1.2       Tailoring guidelines: orbital and mission regimes ...........................161
           I.1.3       Existing trapped radiation models ..................................................162
           I.1.4       The South Atlantic Anomaly ...........................................................164
           I.1.5       Dynamics of the outer radiation belt ...............................................165
           I.1.6       Internal charging ............................................................................165
   I.2     Solar particle event models..........................................................................166
           I.2.1       Overview ........................................................................................166
           I.2.2       ESP model .....................................................................................166
           I.2.3       JPL models ....................................................................................166
           I.2.4       Spectrum of individual events ........................................................167
           I.2.5       Event probabilities ..........................................................................168
           I.2.6       Other SEP models .........................................................................169
   I.3     Cosmic ray environment and effects models................................................169
   I.4     Geomagnetic shielding ................................................................................169
   I.5................................................................................................170
   I.6     Planetary environments ...............................................................................170


            I.6.1       Overview ........................................................................................170
            I.6.2       Existing models ..............................................................................170
   I.7      Atmospheric albedo neutron models ............................................................171
   I.8      Interplanetary environments ........................................................................172
   I.9      Tables..........................................................................................................173
   I.10 Figures ........................................................................................................175

Annex J (informative) Space debris and meteoroids ................................ 181
   J.1      Reference data ............................................................................................181
            J.1.1       Trackable space debris ..................................................................181
            J.1.2       Reference flux data for space debris and meteoroids.....................181
   J.2      Additional information on flux models...........................................................182
            J.2.1       Meteoroids .....................................................................................182
            J.2.2       Space debris flux models ...............................................................183
            J.2.3       Model uncertainties ........................................................................185
   J.3      Impact risk assessment ...............................................................................185
            J.3.1       Impact risk analysis procedure .......................................................185
            J.3.2...................................................................................186
            J.3.3       Damage assessment .....................................................................186
    J.4     Analysis tools...............................................................................................188
            J.4.1       General ..........................................................................................188
            J.4.2       Deterministic analysis ....................................................................188
            J.4.3       Statistical analysis ..........................................................................189
    J.5     Tables..........................................................................................................190
    J.6     Figures ........................................................................................................196

Annex K (informative)............................................................ 198


Figures
Figure D-1 : Graphical representation of the EIGEN-GLO4C geoid (note: geoid heights
            are exaggerated by a factor 10 000)........................................................121
Figure E-1 : The IGRF-12 field strength (nT, at 2015) and predicted change in intensity
            between 2015 and 2020 at the mean Earth radius. (Mercator projection
            from [RN.38]) ..........................................................................................128
Figure E-2 : The general morphology of model magnetospheric field lines, according to
            the Tsyganenko 1989 model, showing the seasonal variation, dependent
            on rotation axis tilt ...................................................................................129
Figure F-1 : Solar spectral irradiance (in red, AM0 (Air Mass 0) is the radiation level
            outside of the Earth's atmosphere (extraterrestrial), in blue, AM1,5 is the
            radiation level after passing through the atmosphere 1,5 times, which is


                about the level at solar zenith angle 48,19°s, an average level at the Earth's
                surface (terrestrial)). ................................................................................135
Figure F-2 : Daily solar and geomagnetic activity indices over the last two solar
            cycles ......................................................................................................136
Figure F-3 : Monthly (27-day) mean solar and geomagnetic activity indices over the last
            two solar cycles .......................................................................................137
Figure G-1 : Temperature profile of the Earth’s atmosphere ......................................148
Figure G-2 : Variation of the JB-2006 mean air density with altitude for low, moderate,
           high long and high short term solar and geomagnetic activities ............... 149
Figure G-3 : Variation of the NRLMSISE­00 mean atomic oxygen with altitude for low,
           moderate and high long solar and geomagnetic activities .......................150
Figure G-4 : Variation of the NRLMSISE­00 mean concentration profile of the
           atmosphere constituents N2, O, O2, He, Ar, H, N and anomalous O with
           altitude for moderate solar and geomagnetic activities (F10.7 = F10.7avg =
           140, Ap = 15) ...........................................................................................151
Figure H-1 : Profile of electron density for solar magnetic local time = 18 hr, solar
            magnetic latitude=0, Kp =0 and 9 from the GCPM for 1/1/1999. .............. 160
Figure I-1 : Contour plots of the proton and electron radiation belts ...........................175
Figure I-2 : Electron (a) and proton (b) omnidirectional fluxes, integral in energy, on the
             geomagnetic equator for various energy thresholds ................................176
Figure I-3 : Integral omnidirectional fluxes of protons (>10 MeV) and electrons
             (>10 MeV) at 400 km altitude showing the inner radiation belt’s “South
             Atlantic anomaly” and, in the case of electrons, the outer radiation belt
             encountered at high latitudes ..................................................................177
Figure I-4 : Comparison of POLE with AE8 (flux vs. Energy) for 15 year mission (with
             worst case and best case included).........................................................178
Figure I-5 : Comparison of ONERA/GNSS model from 0,28 MeV up to 1,12 MeV (best
             case, mean case and worst case) with AE8 (flux vs. Energy) for 15 yr
             mission (with worst case & best case) .....................................................178
Figure I-6 : Albedo neutron spectra at 100 km altitude at solar maximum .................. 179
Figure I-7 : Albedo neutron spectra at 100 km altitude at solar minimum ...................179
Figure I-8 : Jupiter environment model (proton & electron versions) ..........................180
Figure J-1 : Time evolution of the number of trackable objects in orbit (as of May 2018).
            Regular updates available online:
            https://discosweb.esoc.esa.int/web/guest/statistics .................................196
Figure J-2 : Semi-major axis distribution of trackable objects in LEO orbits (as of May
            2018).......................................................................................................196
Figure J-3 : Distribution of trackable objects as function of their inclination (as of May
            2018).......................................................................................................197
Figure J-4 : The HRMP velocity distribution for different altitudes from the Earth
            surface ....................................................................................................197


Tables
Table 6-1: Conversion from Kp to ap ............................................................................45


Table 6-2: Electromagnetic radiation values ................................................................45
Table 6-3: Reference fixed index values ......................................................................45
Table 6-4: Reference index values for variations of ap .................................................46
Table 8-1: Worst­case bi­Maxwellian environment ......................................................60
Table 8-2: Solar wind parameters................................................................................60
Table 9-1: Standard field models to be used with AE8 and AP8 ..................................72
Table 11-1: Contamination levels - interaction with the space environment
           components ..............................................................................................83
Table A-1 : Solar cycle 23 solar activity indices averaged over 30-day (1 month)
            intervals.....................................................................................................85
Table B-1 : A and E0 for three confidence levels ..........................................................94
Table B-2 : Minima and maxima of sunspot number cycles .........................................96
Table B-3 : IGE-2006 GEO average model -- electron flux (kev-1cm-2s-1sr-1) according to
            year in the solar cycle (referred to solar min: 0) and for different energies
            for a mission duration of 1 year. ................................................................97
Table B-4 : IGE-2006 GEO upper case model - maximum electron flux (kev-1cm-2s-1sr-1)
            according to year in the solar cycle (referred to solar min: 0) and for
            different energies for a mission duration of 1 year. ....................................98
Table B-5 : MEOv2 average case model - average electron flux (Mev-1cm-2s-1sr-1)
            according to year in the solar cycle (referred to solar min: 0) and for
            different energies for a mission duration of 1 year. ..................................100
Table B-6 : MEOv2 upper case model - maximum electron flux (Mev-1cm-2s-1sr-1)
            according to year in the solar cycle (referred to solar min: 0) and for
            different energies for a mission duration of 1 year. ..................................100
Table B-7 : Worst case spectrum for geostationary orbits..........................................101
Table B-8 : Values of the parameters for the ESP model...........................................101
Table B-9 : Values to scale fluence from >100 MeV to >300 MeV .............................102
Table B-10 : CREME-96 solar ion worst 5-minute fluxes in an interplanetary
           environment ............................................................................................102
Table B-11 : CREME-96 solar ion worst day fluxes in an interplanetary environment 104
Table B-12 : CREME-96 solar ion worst week fluxes in an interplanetary
           environment ............................................................................................106
Table C-1 : Normalized meteoroid velocity distribution ..............................................113
Table C-2 : The annual meteor streams ....................................................................115
Table D-1 : Degree power attenuation for an orbit at 25 000 km altitude ................... 120
Table D-2 : Coefficients of the EIGEN-GL04C model up to degree and order 8 × 8... 121
Table E-1 : Magnetic pole positions since 1900 as determined from IGRF-12 in WGS84
            geodetic latitude (taken from [RN.38]) .....................................................126
Table E-2 : Sibeck et al. Magnetopause model .........................................................127
Table F-1 : Reference values for average planetary albedo and infra-red radiation ... 134


Table G-1 : Altitude profiles of the atmosphere constituents N2, O, O2, He, Ar, H, N and
           anomalous O for low solar and geomagnetic activities (NRLMSISE-00
           model - F10.7 = F10.7avg = 65, Ap = 0).....................................................144
Table G-2 : Altitude profiles of the atmosphere constituents N2, O, O2, He, Ar, H, N and
           anomalous O for mean solar and geomagnetic activities (NRLMSISE-00
           model - F10.7 = F10.7avg = 140, Ap = 15).................................................145
Table G-3 : Altitude profiles of the atmosphere constituents N2, O, O2, He, Ar, H, N and
           anomalous O for high long term solar and geomagnetic activities
           (NRLMSISE-00 model - F10.7 = F10.7avg = 250, Ap = 45) .......................146
Table G-4 : Altitude profiles of total density ρ [kg m-3] for low, moderate, high long and
           high short term solar and geomagnetic activities (JB-2006 model) .......... 147
Table H-1 : Worst­case 3­Maxwellian environment....................................................154
Table H-2 : Regions encountered by different mission types .....................................157
Table H-3 : Main engineering concerns due to space plasmas ..................................157
Table H-4 : Ionospheric electron density profiles derived from IRI-2016 for date
            01/01/2016, lat=0, long=0. .......................................................................158
Table H-5 : Profile of densities for solar magnetic local time = 18 hr, solar magnetic
            latitude=0, Kp = 5,0 from the GCPM for 1/1/1999 ....................................158
Table H-6 : Typical plasma parameters at geostationary orbit ...................................159
Table H-7 : Typical magnetosheath plasma parameters ............................................159
Table H-8 : Typical plasma parameters around L2 ....................................................159
Table H-9 : Worst-case environments for eclipse charging near Jupiter and Saturn .. 159
Table H-10 : Photoelectron sheath parameters .........................................................160
Table H-11 : Some solar UV photoionization rates at 1 AU .......................................160
Table I-1 : Example albedo neutron environment at 450 km altitude [RD.151] ........... 172
Table I-2 : Characteristics of typical radiation belt particles .......................................173
Table I-3 : Recommended updated values of the parameters of the JPL model ........ 173
Table I-4 : Proton fluence levels for energy, mission duration and confidence levels
             from the ESP model with the NASA parameters from Table B-7. ............ 174
Table I-5 : Parameters for the fit to the peak fluxes from the October 1989 events. ... 174
Table J-1 : Approximate flux ratios for meteoroids for 400 km and 800 km altitudes.. 190
Table J-2 : Cumulative number of impacts, N, to a randomly tumbling plate for a range
            of minimum particle sizes using the MASTER-8 model (version 8.0.0) .... 191
Table J-3 : Cumulative number of impacts, N, to a randomly tumbling plate for a range
            of minimum particle sizes using the MASTER-8 model (version 8.0.0) .... 192
Table J-4 : Cumulative number of impacts, N, to a randomly tumbling plate for a range
            of minimum particle sizes using the MASTER-8 model (version 8.0.0) .... 193
Table J-5 : Cumulative number of impacts, N, to a randomly tumbling plate for a range
            of minimum particle masses ....................................................................194
Table J-6 : Parameters (appearing in Eq. (C-15) to account for modified meteoroid
            fluxes encountered by spacecraft in circular Earth orbits at various
            altitudes...................................................................................................195


# Introduction

This standard forms part of the System Engineering branch (ECSS-E-10) of the
Engineering area of the ECSS system. As such it is intended to assist in the
consistent application of space environment engineering to space products
through specification of required or recommended methods, data and models to
the problem of ensuring best performance, problem avoidance or survivability of
a product in the space environment.
The space environment can cause severe problems for space systems. Proper
assessment of the potential effects is part of the system engineering process as
defined in ECSS-E-ST-10. This is performed in the early phases of a mission when
consideration is given to e.g. orbit selection, mass budget, thermal protection,
and component selection policy. As the design of a space system is developed,
further engineering iteration is normally necessary with more detailed analysis.
In this Standard, each component of the space environment is treated separately,
although synergies and cross-linking of models are specified. Informative
annexes are provided as explanatory background information associated with
each clause.


# Scope

This standard applies to all product types which exist or operate in space and
defines the natural environment for all space regimes. It also defines general
models and rules for determining the local induced environment.
Project-specific or project-class-specific acceptance criteria, analysis methods or
procedures are not defined.
The natural space environment of a given item is that set of environmental
conditions defined by the external physical world for the given mission (e.g.
atmosphere, meteoroids and energetic particle radiation). The induced space
environment is that set of environmental conditions created or modified by the
presence or operation of the item and its mission (e.g. contamination, secondary
radiations and spacecraft charging). The space environment also contains
elements which are induced by the execution of other space activities (e.g. debris
and contamination).
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


 [RN.1]     C. Förste, F. Flechtner, R. Schmidt, R. König, U. Meyer, R. Stubenvoll,
            M. Rothacher, F. Barthelmes, H. Neumayer, R. Biancale, S. Bruinsma, J.-
            M. Lemoine, and S. Loyer, A Mean Global Gravity Field Model from the
            Combination of Satellite Mission and Altimetry/Gravimetry Surface Data
            -- EIGEN-GL04C, Geophysical Research Abstracts, Vol.8, 03462, 2006
 [RN.2]     G. Petit, B. Luzum (eds.), in IERS Conventions (2010), IERS Technical
            Note No. 36, 2010,
            https://www.iers.org/SharedDocs/Publikationen/EN/IERS/Publications/tn
            /TechnNote36/tn36.html
 [RN.3]     W.M. Folkner et al, The Planetary and Lunar Ephemerides DE430 and
            DE431, IPN Progress Report 42-196, February 15, 2014
 [RN.4]     Picone, J. M., A. E. Hedin, D. P. Drob and Aikin, A. C., “NRLMSISE-00
            Empirical Model of the Atmosphere: Statistical Comparisons and
            Scientific Issues”, J. Geophys. Res., 107(A12), doi
            10.1029/2002JA009430. 2002, p. 1468.
 [RN.5]     Bowman, B. R., Tobiska, W. K., Marcos, F. A., Valladares, “The JB2006
            Empirical Thermospheric Density Model”, Journal of Atmospheric and
            Solar-Terrestrial Physics, Vol. 70, Issue 5, pp. 774-793, 2008,
            doi:10.1016/j.jastp.2007.10.002.
 [RN.6]     Hedin, A.E., E.L. Fleming, A.H. Manson, F.J. Scmidlin, S.K. Avery, R.R.
            Clark, S.J. Franke, G.J. Fraser, T. Tsunda, F. Vial and R.A. Vincent,
            Empirical Wind Model for the Upper, Middle, and Lower Atmosphere, J.
            Atmos. Terr. Phys., 58, 1421-1447, 1996.
 [RN.7]     E. Millour et al., “The Mars Climate Database (MCD version 5.3)”, Vol.
            19, EGU2017-12247, 2017
 [RN.8]     Gallagher D.L., P.D. Craven, and R.H. Comfort. Global Core Plasma
            model. J. Geophys. Res., 105, A8, 18819-18833, 2000.
 [RN.9]     D. Bilitza, D,., Altadill, V. D, Zhang Y, Mertens C, Truhlik, V. Shubin, I.
            Galkin, B. Reinisch, and X. Huang, V, et al.: The International Reference
            Ionosphere 2016: From ionospheric climate to real-time weather
            predictions, 2012 -- a model of international collaboration. J. Space
            Weather, 15, 418-429, 2017 Space Clim., 2014, 4, A07
 [RN.10]    Vette J.I., “The AE-8 Trapped Electron Model Environment”,
            NSSDC/WDC-A-R&S Report 91-24, NASA-GSFC, 1991.
 [RN.11]    Sawyer D.M. and J.I. Vette, “AP8 Trapped Proton Environment For Solar
            Maximum and Solar Minimum”, NSSDC WDC-A-R&S 76-06, NASA-
            GSFC, 1976.
 [RN.12]    A Sicard-Piet, S. A.Bourdarie, D. M. Boscher, R. H. W. Friedel, M.
            Thomsen, T. Goka, H.Matsumoto, H. Koshiishi, “A new international
            geostationary electron model: IGE-2006, from 1 keV to 5.2 MeV”, Space
            Weather, 6, S07003, doi:10.1029/2007SW000368, 2008.


[RN.13]   Sicard-Piet A., S. Bourdarie, D. Boscher, R. Friedel, T. Cayton, Solar
          Cycle Electron Radiation Environement at GNSS Like Altitude, session
          D5.5-04, Proceedings 57th International Astronautical Congress,
          Valencia, Sept 2006
[RN.14]   Rodgers D.J, Hunter K.A and Wrenn G.L, The Flumic Electron
          Environment Model, Proceedings 8th Spacecraft Charging Technology
          Conference, Huntsville Alabama, 2003
[RN.15]   Xapsos, M. A., G.P. Summers, J.L. Barth, E. G. Stassinopoulos and E.A.
          Burke, “Probability Model for Cumulative Solar Proton Event Fluences”,
          IEEE Trans. Nucl. Sci., vol. 47, no. 3, June 2000, pp 486-490
[RN.16]   Lario et al., Radial and Longitudinal Dependence of solar 4-13 MeV and
          27-37 MeV Proton Peak Intensities and Fluences: HELIOS and IMP8
          Observations, Astrophys Journal, 653:1531-1544, Dec 20, 2006.
[RN.17]   Bourdarie, S., A. Sicard-Piet, “Jupiter environment modelling”, ONERA
          Technical note 120 Issue 1.2, ESA contract 19735/NL/HB, FR 1/11189
          DESP, October 2006
[RN.18]   CREME96: https://creme96.nrl.navy.mil/
[RN.19]   ISO Model 15390:2004, ISO/TC 20/SC 14 Space systems and operations,
          June 2004
[RN.20]   Adams J.H., R. Silberberg and C.H. Tsao, “Cosmic Ray Effects on
          Microelectronics, Part I: The Near­Earth Particle Environment”, NRL
          Memorandum Report 4506, Naval Research Laboratory, Washington DC
          20375-5000, USA, 1981.
[RN.21]   Desorgher, L., MAGNETOCOSMICS User Manual 2003,
          http://reat.space.qinetiq.com/septimess/magcos/
[RN.22]   Smart, D. F., Shea, M.A., Calculated cosmic ray cut-off rigidities at 450
          km for epoch 1990, Proc. 25th ICRC, 2, 397-400, 1997.
[RN.23]   Stassinopoulos E.G. and J.H. King, “Empirical Solar Proton Model For
          Orbiting Spacecraft Applications”, IEEE Trans. on Aerosp. and Elect.
          Systems AES-10, 442, 1973
[RN.24]   D. C. Jensen and J. C. Cain, An Interim Geomagnetic Field, J.
          Geophys.Res. 67, 3568, 1962.
[RN.25]   J. C. Cain, S. J. Hendricks, R. A. Langel, and W. V. Hudson, A Proposed
          Model for the International Geomagnetic Reference Field, 1965, J.
          Geomag. Geoelectr. 19, 335, 1967.
[RN.26]   MASTER-8, https://sdup.esoc.esa.int, 2018
[RN.27]   NOAA/SEC source of dates for solar maxima and minima:
          ftp://ftp.ngdc.noaa.gov/STP/SOLAR_DATA/SUNSPOT_NUMBERS/ma
          xmin.new
[RN.28]   Roberts C.S., “Co­ordinates for the Study of Particles Trapped in the
          Earth’s Magnetic Field: A Method of Converting from B,L to R,λ
          Co­ordinates”, J. Geophys. Res. 69, 5 089, 1964.
[RN.29]   IGRF-12, the list of coefficients is given at the IGRF web page on the
          IAGA web site: http://www.ngdc.noaa.gov/IAGA/vmod/igrf.html
[RN.30]   Alexeev I.I., Kalegaev V.V., Belenkaya E.S., Bobrovnikov S.Yu.,
          Feldstein Ya.I., Gromova L.I. (2001), J. Geophys. Res., V.106, No A11,
          P. 25,683-25,694
[RN.31]   Tsyganenko, N.A., and D.P. Stern, Modeling the global magnetic field of
          the large-scale Birkeland current sustems, J. Geophys. Res., V. 101,
          27187-27198, 1996.
[RN.32]   T.L. Gulyaeva et al., “Inter-hemispheric imaging of the ionosphere with the
          upgraded IRI-Plas model during the space weather storms”, Earth Planets
          Space, 63, 929-939, 2011
[RN.33]   S. Bourdarie et al., “GEO-handbook V1.1”, TN 1/13377 DESP, April 2008,
          http://space-env.esa.int/Reports/ECSS/1-
          13377%20avril%202008%20GEO_handbook-V1.1.pdf
[RN.34]   RadMod           Research       Ltd        web-site      for      MAIRE:
          http://www.radmod.co.uk/maire, 2017


[RN.35]   Fan Lei, Alex Hands, Simon Clucas, Clive Dyer, and Pete Truscott,
          “Improvement to and validations of the QinetiQ Atmospheric Radiation
          Model (QARM),” IEEE Trans Nucl Sci, Vol 53, No 4, pp1851-1858, 2006.
[RN.36]   Paula H. Krisko. "The New NASA Orbital Debris Engineering Model
          ORDEM 3.0 (Invited)", AIAA/AAS Astrodynamics Specialist Conference,
          AIAA SPACE Forum, (AIAA 2014-4227) https://doi.org/10.2514/6.2014-
          4227, 2014
[RN.37]   Moorhead, A. V., H. M. Koehler, and W. J. Cooke. "NASA Meteoroid
          Engineering Model Release 2.0." (2015)
[RN.38]   Thebault et al, International Geomagnetic Reference Field 12th
          Generation, Earth, Planets and Space (2015) 67:79
[RN.39]   Bowman, Bruce R., W. Kent Tobiska, Frank A. Marcos, Cheryl Y. Huang,
          Chin S. Lin, and William J. Burke (2008a), A new empirical
          thermosphericdensity model JB-2008 using new solar and geomagnetic
          indices, in AIAA/AAS Astrodynamics Specialist Conference and Exhibit,
          18--21 August 2008, Honolulu, Hawaii, number AIAA 2008--6438
[RN.40]   D.P. Drob et al., “An empirical model of the Earth’s horizontal wind fields:
          HWM-07”,          J    Geophys      Res,       Vol.      113,     A12304,
          doi:10.1029/2008JA013668, 2008


# Terms, definitions and abbreviated terms

## 3.1 Terms defined in other standards
              a.      For the purpose of this Standard, the terms and definitions from ECSS-S-
                      ST-00-01 apply, in particular for the following terms:
                      1.    contamination
                      2.    environment
                      3.    mission
                      4.    space debris


## 3.2 Terms specific to the present standard
### 3.2.1 Ap, Kp indices
              geomagnetic activity indices to describe fluctuations of the geomagnetic field
                              NOTE         Values of Ap range from 0 to 400 and they are
                                           expressed in units of nT (nanotesla). Kp is
                                           essentially the logarithm of Ap.

### 3.2.2 absorbed dose
              energy absorbed locally per unit mass as a result of radiation exposure which is
              transferred through ionization and excitation
                              NOTE         A portion of the energy absorption can result in
                                           damage to the lattice structure of solids through
                                           displacement of atoms, and this is now
                                           commonly referred to as Non-Ionizing Energy
                                           Loss (NIEL).

### 3.2.3 albedo
              fraction of sunlight which is reflected off a planet

### 3.2.4 atmospheric albedo neutrons
              neutrons escaping from the earth’s atmosphere following generation by the
              interaction of cosmic rays and solar particles
                              NOTE         Albedo neutrons can also be produced by other
                                           planetary atmospheres and surfaces.

### 3.2.5 bremsstrahlung
              high-energy electromagnetic radiation in the X-γ energy range emitted by
              charged particles slowing down by scattering of atomic nuclei


              NOTE        The primary particle is ultimately absorbed
                          while the bremsstrahlung can be highly
                          penetrating. In space, the most common source
                          of bremsstrahlung is electron scattering.

### 3.2.6 contaminant
molecular and particulate matter that can affect or degrade the performance of
any component when being in line of sight with that component or when residing
onto that component

### 3.2.7 confidence level
probability with which a confidence interval contains an unknown parameter
              NOTE 1      For example a 95 % CL means that there is a 5 %
                          chance that the specified environment can be
                          exceeded according to the model.
              NOTE 2      Statistical environment models often provide
                          outputs as a function of confidence level (CL).
              NOTE 3      The CL does not account for systematic
                          uncertainties associated with environment
                          models.
              NOTE 4      The confidence level is typically a chosen
                          parameter which stipulates the level of
                          uncertainty one is willing to accept.

### 3.2.8 current
the rate of transport of particles through a boundary
              NOTE        In contrast to flux, current is dependent on the
                          direction in which the particle crosses the
                          boundary (it is a vector integral). An isotropic
                          omnidirectional flux, f, incident on a plane gives
                          rise to a current of ¼ f normally in each direction
                          across the plane. Current is often used in the
                          discussion of radiation transport.

### 3.2.9 distribution function f(x,v)
function describing the particle density of a plasma in 6-D space made up of the
three spatial vectors and the three velocity vectors, with units s3 m-6
              NOTE        For distributions that are spatially uniform and
                          isotropic, it is often quoted as f(v), a function of
                          scalar velocity, with units s m-4, or f(E) a function
                          of energy, with units J-1m-3. This can be
                          converted to flux as follows:

                                   Flux = ∫ Vf (v)dv                              (3-1)

                          or
                                              f (E)                               (3-2)
                                   Flux = ∫         dE
                                                m


                          where
                          v        is the scalar velocity;
                          E        is the energy;
                          m        is the particle mass.

### 3.2.10 dose
quantity of radiation delivered at a position
               NOTE       In its broadest sense this can include the flux of
                          particles, but in the context of space energetic
                          particle radiation effects, it usually refers to the
                          energy absorbed locally per unit mass as a result
                          of radiation exposure.

### 3.2.11 dust
particulates which have a direct relation to a specific solar system body and
which are usually found close to the surface of this body
               NOTE       For example Lunar, Marian or Cometary dust.

### 3.2.12 Earth infrared
thermal radiation emitted by the Earth
               NOTE       It is also called outgoing long wave radiation.

### 3.2.13 energetic particle
particles which, in the context of space systems radiation effects, can penetrate
outer surfaces of spacecraft
               NOTE       For electrons, this is typically above 100 keV,
                          while for protons and other ions this is above 1
                          MeV. Neutrons, gamma rays and X-rays are also
                          considered energetic particles in this context.

### 3.2.14 equivalent fluence
quantity which attempts to represent the damage at different energies and from
different species
               NOTE 1     For example: For solar cell degradation it is often
                          taken that one 10 MeV protons is “equivalent” to
3 000 electrons of 1 MeV. This concept also
                          occurs in consideration of Non-ionizing Energy
                          Loss effects (NIEL).
               NOTE 2     Damage coefficients are used to scale the effect
                          caused by particles to the damage caused by a
                          standard particle and energy.

### 3.2.15 exosphere
part of the Earth’s atmosphere above the thermosphere for which the mean free
path exceeds the scale height, and within which there are very few collisions
between atoms and molecules


               NOTE 1     Near the base of the exosphere atomic oxygen is
                          normally the dominant constituent.
               NOTE 2     With increasing altitude, the proportion of
                          atomic hydrogen increases, and hydrogen
                          normally becomes the dominant constituent
                          above about 1 000 km. Under rather special
                          conditions (i.e. winter polar region) He atoms
                          can become the major constituent over a limited
                          altitude range.
               NOTE 3     A small fraction of H and He atoms can attain
                          escape velocities within the exosphere.

### 3.2.16 external field
part of the measured geomagnetic field produced by sources external to the solid
Earth
               NOTE       the external sources are mainly: electrical
                          currents in the ionosphere, the magnetosphere
                          and coupling currents between these regions.

### 3.2.17 F10.7 flux
solar flux at a wavelength of 10.7 cm in units of 104 Jansky (one Jansky equals
10-26 Wm-2Hz-1)

### 3.2.18 fluence
time-integration of the flux

### 3.2.19 flux
amount of radiation crossing a surface per unit of time
               NOTE 1     The directional flux is the differential with
                          respect to solid angle (e.g. particles cm-2
                          steradian-1s-1) while the “differential” flux is
                          differential with respect to energy (e.g. particles
                          cm-2 MeV-1s-1). In some cases fluxes are also
                          treated as a differential with respect to Linear
                          Energy Transfer (see 3.2.28).
               NOTE 2     Flux is often expressed in “integral form” as
                          particles per unit area per unit time (e.g.
                          electrons cm-2s-1) above a certain threshold
                          energy.

### 3.2.20 geocentric solar magnetospheric coordinates (GSM)
elements of a right-handed Cartesian coordinate system (X,Y,Z) with the origin
at the centre of the Earth
               NOTE       X points towards the Sun; Z is perpendicular to
                          X, lying in the plane containing the X and
                          geomagnetic    dipole     axes;    Y    points
                          perpendicular to X and Z and points


                           approximately towards dusk magnetic local
                           time (MLT).

### 3.2.21 GNSS orbits
orbits with altitudes between 20 500 km and 24 000 km within an inclination
range of 55° ± 5°

### 3.2.22 heterosphere
Earth’s atmosphere above 105 km altitude where the neutral concentration
profiles are established due to diffusive equilibrium between the species
               NOTE        N2 is normally dominant below approximately
200 km, O is normally dominant from approx
200 km to approx. 600 km, He is dominant above
600 km altitude, and H dominant at very high
                           altitudes. These conditions depend on solar and
                           geomagnetic activity, and the situation may be
                           quite variable at high altitudes during major
                           geomagnetic disturbances.

### 3.2.23 homosphere
Earth’s atmosphere below 105 km altitude where complete vertical mixing yields
a near-homogeneous composition of about 78,1% N2, 20,9% O2, 0,9% Ar, and 0,1%
CO2 and trace constituents
               NOTE        The homopause (or turbopause) marks the
                           ceiling of the homosphere.

### 3.2.24 internal field
part of the measured geomagnetic field produced by sources internal to the solid
Earth, primarily due to the time-varying dynamo operating in the outer core of
the Earth

### 3.2.25 interplanetary magnetic field
solar coronal magnetic field carried outward by the solar wind, pervading the
solar system

### 3.2.26 isotropic
property of a distribution of particles where the flux is constant over all directions

### 3.2.27 L or L shell
parameter of the geomagnetic field, often used to describe positions in near-Earth
space
               NOTE        L or L shell has a complicated derivation based
                           on an invariant of the motion of charged
                           particles in the terrestrial magnetic field (see
                           Annex E). However, it is useful in defining
                           plasma regimes within the magnetosphere
                           because, for a dipole magnetic field, it is equal to


                         the geocentric altitude in Earth-radii of the local
                         magnetic field line where it crosses the equator.

### 3.2.28 linear energy transfer (LET)
rate of energy deposit from a slowing energetic particle with distance travelled
in matter, the energy being imparted to the material
              NOTE       Normally used to describe the ionization track
                         caused by passage of an ion. LET is material-
                         dependent and is also a function of particle
                         energy. For ions involved in space radiation
                         effects, it increases with decreasing energy (it
                         also increases at high energies, beyond the
                         minimum ionizing energy). LET allows different
                         ions to be considered together by simply
                         representing the ion environment as the
                         summation of the fluxes of all ions as functions
                         of their LETs. This simplifies single-event upset
                         calculation. The rate of energy loss of a particle,
                         which also includes emitted secondary
                         radiations, is the stopping power.

### 3.2.29 magnetic local time (MLT)
parameter analogous to longitude, often used to describe positions in near-Earth
space
              NOTE       Pressure from the solar wind distorts the Earth
                         magnetic field into a comet-like shape. This
                         structure remains fixed with its nose towards the
                         Sun and the tail away from it as the Earth spins
                         within it. Hence longitude, which rotates with
                         the Earth, is not a useful way of describing
                         position in the magnetosphere. Instead,
                         magnetic local time is used. This has value 0
                         (midnight) in the anti-sunward direction, 12
                         (noon) in the sunward direction and 6 (dawn)
                         and 18 (dusk) perpendicular to the
                         sunward/anti-sunward line. This is basically an
                         extension of the local solar time on Earth,
                         projected vertically upwards into space
                         although allowance is made for the tilt of the
                         dipole.

### 3.2.30 Maxwellian distribution
plasma distribution functions described in terms of scalar velocity, v, by the
Maxwellian distribution below:
                   m 2 2        v2m 
     f (v) = 4π n        v exp -                                         (3-3)
                   2πkT         2kT 
            where


             n      is the density;
             k      is the Boltzmann constant;
             T      is the temperature.
                 NOTE      The complete distribution is therefore described
                           by a pair of numbers for density and
                           temperature. This distribution is valid in
                           thermal equilibrium. Even non-equilibrium
                           distributions can often be usefully described by
                           a combination of two Maxwellians.

### 3.2.31 meteoroids
particles in space which are of natural origin
                 NOTE      nearly all meteoroids originate from asteroids or
                           comets.

### 3.2.32 meteoroid stream
meteoroids that retain the orbit of their parent body and that can create periods
of high flux

### 3.2.33 nano-Tesla
standard unit of Geomagnetism
                 NOTE      An older unit, not widely used now, is the
                           Gauss, which is 105 nT.

### 3.2.34 omnidirectional flux
scalar integral of the flux over all directions
                 NOTE      This implies that no consideration is taken of the
                           directional distribution of the particles which
                           can be non-isotropic. The flux at a point is the
                           number of particles crossing a sphere of unit
                           cross-sectional surface area (i.e. of radius 1/√π).
                           An omnidirectional flux is not to be confused
                           with an isotropic flux.

### 3.2.35 particulate contaminant
solid or liquid contaminant particles

### 3.2.36 plasma
partly or wholly ionized gas whose particles exhibit collective response to
magnetic and electric fields
                 NOTE      The collective motion is brought about by the
                           electrostatic Coulomb force between charged
                           particles. This causes the particles to rearrange
                           themselves to counteract electric fields within a
                           distance of the order of the Debye length. On
                           spatial scales larger than the Debye length
                           plasmas are electrically neutral.


### 3.2.37 radiation
transfer of energy by means of a particle (including photons)

### 3.2.38 single-event upset (SEU), single-event effect (SEE),
             single-event latch-up (SEL)
effects resulting from the highly localized deposition of energy by single particles
or their reaction products and where the energy deposition is sufficient to cause
observable effects

### 3.2.39 sporadic flux
random flux with no apparent pattern

### 3.2.40 total Solar irradiance (TSI)
mean level of solar radiation that falls on a unit area normal to the line from the
Sun per unit time outside the Earth’s atmosphere, at one AU from Sun-centre
               NOTE 1      1 AU = 149 597 870 700 m.
               NOTE 2      Total Solar Irradiance is historically known as
                           "solar constant".

### 3.2.41 solar flare
emission of optical, UV and X-radiation from an energetic event on the Sun
               NOTE        There is some controversy about the causal
                           relationship between solar flares and the arrival
                           of large fluxes of energetic particles at Earth.
                           Therefore, it is more consistent to refer to the
                           latter as Solar Energetic Particle Events (SEPEs).

### 3.2.42 thermosphere
Earth’s atmosphere between 120 km and 250 km to approximately 400 km
(depending on the activity level), where temperature has an exponential increase
up to a limiting value T∞ at the thermopause (where T∞ is the exospheric
temperature)

### 3.2.43 trackable objects
objects regularly observed and catalogued by ground-based sensors of a space
surveillance network
               NOTE        Trackable objects are typically objects larger
                           than about 5 cm to 10 cm in LEO and larger than
                           about 50 cm to 1 m in GEO.

### 3.2.44 world magnetic model
revised every five years by a US-UK geomagnetic consortium, primarily for
military use


## 3.3 Abbreviated terms
            For the purpose of this Standard, the abbreviated terms from ECSS-S-ST-00-01
            and the following apply:


              Abbreviation       Meaning
              ASTM               American Society for Testing and Materials
              AE                 auroral electrojet
              AO                 atomic oxygen
              BIRA               Belgisch Instituut voor Ruimte-Aeronomie
              CIRA               COSPAR International Reference Atmosphere
              COSPAR             Committee on Space Research
              DISCOS             ESA’s database and information system characterizing
                                 objects in space
              DTM                density and temperature model
              ESP Model          Emission of Solar Protons Model
              GCR                galactic cosmic ray
              GEO                geostationary Earth orbit
              GNSS               global navigation satellite system
              GRAM               global reference atmosphere model
              GSM                geocentric solar magnetospheric co-ordinates
              HEO                highly eccentric orbit
              HWM                horizontal wind model
              IAGA               International Association for Geomagnetism and
                                 Aeronomy
              IASB               Institute d’Aeronomie Spatiale de Belgique
              IERS               international earth rotation service
              IGRF               international geomagnetic reference field
              IMF                interplanetary magnetic field
              JB-2006            Jacchia-Bowman semi-empirical model (2006)
              JB-2008            Jacchia-Bowman semi-empirical model (2008)
              LDEF               long duration exposure facility
              LEO                low Earth orbit
              LET                linear energy transfer
              MASTER             meteoroid and space debris terrestrial environment
                                 reference model
              MEO                medium (altitude) Earth orbit
              MLT                magnetic local time
              MSIS               mass spectrometer and incoherent scatter
              NIEL               non-ionizing energy loss
              nT                 nano-Tesla


Abbreviation   Meaning
R              sunspot number
RC             rigidity Cut-off for geomagnetic shielding
RE             Earth radius
RHU            radiosisotope heater unit
RJ             jovian radius
r.m.s.         root-mean-square
RTG            radioisotope thermo-electric generator
SEU            single-event upset
SEE            single-event effect
SEL            single-event latch-up
SEPs           solar energetic particles
SEPE           solar energetic particle events
sfu            solar flux unit
SPE            solar particle events
SRP            solar radiation pressure
SPIDR          Space Physics Interactive Data Resource
SW             solar wind
URSI           Union Radio Science Internationale
WMM            world magnetic model


                                                                                Gravity

## 4.1 Introduction and description

### 4.1.1 Introduction
             Any two bodies attract each other with a force that is proportional to the product
             of their masses, and inversely proportional to the square of the distance between
             them (Newton’s law):

                                     m1 m2                                               (4-1)
                              F =G
                                      r2

                          where
                          F       is the gravitational force
                          G       = (6,67408 ± 0,00031)×10-11m3kg-1s-2 is the
                                     universal gravitational constant
                          m1, m2 are the two point masses
                          r       is the distance between the masses
             The simplest case of gravitational attraction occurs between bodies that can be
             considered as point masses. These are bodies at a relative distance r that is
             sufficiently large in comparison to the sizes of the bodies to ignore the shape of
             the bodies. For two spherical bodies with a homogeneous mass distribution
             Newton’s law is correct also at all locations above their surface (“2-body
             problem”).
             Also third body perturbations and tidal effects are important for an accurate
             analysis of the gravitational interaction.


### 4.1.2 Gravity model formulation
             Without compromising the general validity of underlying theories, all
             subsequent gravity model discussions are focused on the Earth. The gravity
             acceleration acting on a point mass, which is external to the central body, is the
             gradient of the potential function U of that body. The corresponding geopotential
             surface satisfies the so called Laplace equation:

                                    ∇2 U = 0                                              (4-2)


The corresponding perturbing acceleration can be determined from equation
(4-3) by means of computationally efficient recursion algorithms (e.g. as in
[RD.1]).

                      𝑟𝑟⃗̈ = ∇𝑈𝑈                                                  (4-3)

             where

             𝑟𝑟⃗̈ is the 2nd time derivative of the position vector.
The solution U of the partial differential equation (4-2) is typically written in the
form of a series expansion, in terms of so-called surface spherical harmonic
functions, for a location defined in spherical coordinates r, λ, ϕ.


     GM                                                        
                      l
             N
                 ae  l
  U=    1 + ∑   ∑ [Clm cos(mλ ) + S lm sin (mλ )] Plm (sin ϕ )                (4-4)
      r  l =2  r  m=0                                         

             where
             GM = μ          is the gravity constant of the Earth (M being its mass);
             μ = 3,986004415×1014 m3s-2 for the EIGEN-GL04C model
             ae    is the mean equatorial radius of the Earth;
             ae = 6 378 136,460 m for the EIGEN-GL04C model
             r     is the radial distance from centre of the Earth to satellite
             N     is the maximum degree of the expansion
             l     is the degree of a certain harmonic function
             m     is the order of a certain harmonic function
             Clm, Slm      are coefficients that determine amplitude and phase of
             a certain harmonic function
             λ     is the geodetic longitude of the sub-satellite point
             ϕ     is the geodetic latitude of the sub-satellite point
             Plm are associated Legendre functions of the first kind, of degree l
             and order m; recurrance relations for these functions are available
             in the literature (e.g. [RD.1]).


A gravity model consists of adopted values for GM, ae, and a set of model
coefficients Clm, Slm. Practical implementations of gravity models, e.g. for
numerical integration of a satellite orbit, are typically interested in the gravity
acceleration resulting from the potential function U in (4-4). Corresponding
partial derivatives of (4-4) in Cartesian coordinates of an Earth-fixed system x, y,
z can be computed recursively (see [RD.1]).
The model coefficients Clm, Slm are typically provided in their normalized
versions, according to (4-5) in order to limit their numerical range for higher
degrees and orders.


                  Clm           (l + m)!       Clm        1 for m = 0
                   =                                    k=                           (4-5)
                   S lm    k (2l + 1) (l - m)!  S lm      2 for m ≠ 0

             The Legendre functions Plm (sin ϕ) in this case are normalized by the inverse of
             the square root in equation (4-5).


### 4.1.3 Third body gravitation
             When acting as a third-body perturbation, the gravitational attraction by the Sun
             and its planets can be modelled by means of point mass attractions. This requires
             knowledge on the masses and positions of the bodies, as well as some guidelines
             on which effects are important. In general, for orbit computations of Earth-
             orbiting satellites it is sufficient to include the planetary gravity due to Venus,
             Mars, Jupiter and Saturn; the other planets are either too small, or too far away
             to have any significant impact on a satellite orbit around the Earth.


### 4.1.4 Tidal effects
             The gravity potential of a central body only represents the static part of the
             gravitational acceleration acting on a satellite. There are, however, additional
             gravity-related effects due to tides that can be important for precise applications.
             Several tidal effects can be distinguished (see [RD.1]):
             - Solid Earth tides associated with the deformations of the Earth’s body
                     under the gravitational effects of Sun and Moon and leading to
                     complicated variations in the geopotential coefficients.
             - Ocean tides, associated with the displacements of the ocean water masses
                     under the effect of solar and lunar tides. The water displacements in turn
                     modify the geopotential in complicated variational patterns.
             - The permanent tide, which is a non-zero constant component of the above
                     tides which nonetheless is not considered part of the static geopotential.
             - Pole tides, which are due to the centrifugal effects of polar motion, which
                     in turn is the movement of the Earth’s body axis relative to the
                     instantaneous axis of rotation.


## 4.2 Requirements for model selection and application

### 4.2.1 General requirements for gravity models

             a.      Gravity effects shall be included in all orbit determination and orbit
                     prediction processes, and in attitude determination and prediction
                     processes for Earth and planetary orbiters.


b.   The inclusion of different gravity sources, their associated model details,
     and corresponding model truncation errors shall be compliant with the
     requirements on orbit and/or attitude determination accuracy, and be at
     least of the same perturbation order as considered perturbing accelerations
     due to non-gravitational effects.


c.   The retained accuracy level of a gravity model shall be compliant with the
     accuracy of the position and orientation of the central body.
             NOTE        Harmonic coefficients can lead to resonance
                         effects, if they have a degree or order close to
                         some integer multiple of the ground track repeat
                         cycle. For orbits that are known to be repetitive,
                         it is then recommendable to include discrete
                         resonant harmonics of degrees that normally fall
                         outside the truncated expansion series.


### 4.2.2 Selection and application of gravity models

a.   For Earth orbits a gravity model shall be applied that fulfills the following:
     1.    The model is a global and static model
     2.    The model is based on Grace or GOCE data
     3.    The model is published at:
           http://icgem.gfz-potsdam.de/tom_longtime
     4.    The model is described by spherical harmonic coefficients up to at
           least degree and order of 70.
             NOTE 1      For example the EIGEN-GLO4C model [RN.1]
                         fulfills given requirements. It has a spatial
                         resolution in latitude and longitude of 1° × 1°
                         (corresponding to degree × order = 360 × 360).
             NOTE 2      For other planetary environments no standard
                         gravity model exists. Some information for
                         Jupiter is provided in [RD.148].


b.   Data on gravitational effects from tides and on Earth orientation
     parameters shall be obtained from the International Earth Rotation Service
     IERS given in [RN.2].


c.   For third body gravitational perturbations the Development Ephemerides
     data on planets (DE-430) and the Lunar Ephemerides data (LE-430), both
     given in [RN.3], shall be used.


d.   For planetary mass values the 2010 standards of the International Earth
     Rotation Services IERS, as described in IERS Technical Note 36 [RN.2],
     shall be used.


                                                 Geomagnetic fields

## 5.1 Introduction and description

### 5.1.1 The geomagnetic field and its sources
             Within the magnetopause, the boundary between the influence of the solar wind
             and embedded IMF of solar origin, the near-Earth environment is strongly
             influenced by the geomagnetic field. The geomagnetic field is due to a variety of
             sources, those within the Earth, those within the ionosphere, and those within
             the magnetosphere.
             The Earth’s magnetic field is responsible for organizing the flow of ionized
             plasmas within most regions of the near-Earth environment. Hence, it determines
             the boundaries of distinct plasma regimes. The magnetic field is also used widely
             for attitude measurement and for important spacecraft sub-systems such as
             magneto-torquers.


### 5.1.2 The internal field
             Under quiet solar and geomagnetic activity conditions, the magnetic field
             measured at the Earth’s surface is primarily (>90%) due to a magneto-
             hydrodynamic dynamo, operating in the liquid outer core of the Earth. The
             secular (or time) variation of this field operates on a scale of months to centuries,
             or more, with position dependent amplitude of anywhere between zero and up
             to a few hundred nT year-1. The core field morphology is closely dipolar, at least
             far from the Earth, and is inclined to the Earth’s rotation axis by around 11
             degrees at the present time (see Figure E-1).
             Superimposed on this core field is the static magnetic field of geological sources
             in the lithosphere and upper mantle. Typically the field from these crustal rocks
             decays rapidly away from the source. For example, in low Earth orbit, the crustal
             signature is probably no more than about 20 nT, decaying rapidly with altitude.
             Traditionally the combination of the core and crustal field is referred to as the
             “main field’” The mean “main field” as measured at the Earth’s surface is
             depicted in Figure E-1.


### 5.1.3 External field: ionospheric components
             Currents flowing in the ionosphere induce an external magnetic field component.
             Sources of these currents include wind-driven motion of ionospheric plasma that
             produces a daily variation field known as Sq (‘solar quiet’). This takes the form of
             two vortices, fixed north and south of the Sun-Earth line, on the dayside of the
             Earth, as the Earth rotates beneath. Along the geomagnetic equator an equatorial
             electrojet is formed, due to a high conductivity channel related to the near-


horizontal field morphology. Below (or above) this electrojet the field amplitude
can be enhanced by several hundred nT, within about five degrees i.e. a few
hundred km of the magnetic equator.
At auroral latitudes (approximately 55-65 magnetic degrees), the auroral
electrojet is formed at the open/closed field line boundary. This electrojet is fed
by field-aligned currents that connect the ionosphere to the magnetospheric
flanks and to the night-side tail and partial ring current sheet. The magnitude of
the resulting induced fields is very dynamic and can be many hundreds of nT as
observed at ground level or in low Earth orbit during periods of disturbed
geomagnetic activity.
In the lower magnetosphere there are inter-hemispheric (field-aligned) currents
of several nT at around 400 km altitude. Plasma ‘bubbles’ can also cause localised
magnetic variations of a few nT to be measured by low-Earth orbit satellite
altitudes. At high and polar latitudes the Earth’s field is also open to the solar
wind and cusp currents, also known as Region 0 currents flow.


### 5.1.4 External magnetic field: magnetospheric
             components
In the magnetosphere, there are several major current systems controlled by the
interaction of the Earth’s field with the solar wind. The strength of the total
magnetospheric field is closely tied to solar and solar wind variations and to
plasma outflow from the ionosphere. The major magnetospheric magnetic fields
are a result of: magnetopause currents; cross-tail currents, and the symmetric and
partial ring currents.
Magnetopause currents flow to shield the internal field from the IMF. And
connect to a cross-tail current sheet that separates lobes of opposite magnetic
polarity, extending hundreds of Earth radii down-wind from the Earth. An
azimuthal drift of plasma (westward for ions, eastwards for electrons) around
the Earth produces the symmetric ring current. The partial, or asymmetric, ring
current is found on the dusk-side of the Earth and is closed via ionospheric
currents. Figure E-2 provides the general morphology of model magnetospheric
field lines, according to the Tsyganenko 1989 model [RD.111] showing the
seasonal variation, dependent on rotation axis tilt. This figure shows a cut in the
noon-midnight plane.


### 5.1.5 Models of the internal and external
             geomagnetic fields
The magnetic field is commonly modelled by expressing the field as a series of
spherical harmonic terms. There has been much scientific activity in the field
modelling community and in source field reconstruction. This is due to several
successful satellite magnetometer surveys, such as those of Ørsted, Champ and
Swarm.


#### 5.1.5.1 Models of the internal field
Scientific models of the internal field now extend to around spherical harmonic
degree 100, equivalent to a minimum wavelength of 400 km at the Earth’s surface.


             However the effective amplitudes of these high degree terms decrease rapidly
             with increasing altitude above the Earth’s surface. The core field, which
             dominates for degrees less than about 14 at the Earth’s surface, can be readily
             simplified to that of a simple inclined and offset dipole or a low-degree model
             for spacecraft operation above a few hundred km altitude.
             Although they are by no means the only recognised high quality models, the
             IGRF models are products of the international community of geomagnetic
             scientists, updated on a five-year basis, assuming a linear secular variation
             between updates.
             The descriptive annex to this Chapter (Annex E) describes in more detail the
             current revision of the IGRF, and further information on other internal field
             models.


#### 5.1.5.2 Models of the external field
             There are a number of dynamic models of the external field. These are typically
             either empirical (in the sense of a simplified mathematical model fit to measured
             data), analytic (based on physical models of the various external current
             systems), or magneto-hydrodynamic (or ‘general circulation models’). Of the
             latter type, the science is rapidly evolving and whilst, in principle, they should
             fully capture the details of magnetospheric processes, such models are judged
             not yet mature enough to serve as a reliable standard.
             Of those models that are currently maintained and updated in the light of new
             data and new field parameterisations, the model of Tsyganenko (revised
             repeatedly between 1987 and 2006 [RN.31] [RD.98] [RD.99] [RD.111] [RD.112]) is
             well used and is empirical in nature. The model of Alexeev et al (2001) [RN.30] is
             described as an analytic model. This model is at the core of an International
             Standards Organisation (ISO) standard external field model [RD.113].
             The availability of suitable inputs to external models is a factor that affects
             whether they can be useful in common applications. Alexeev et al (2001) [RN.30]
             has inputs of date, time, solar wind density and velocity, and Tsyganenko 1996
             [RN.31]has inputs of solar wind pressure, Dst and IMF By and Bz components.
             Tsyganenko 2002 to 2005 [RD.98] [RD.99] models require a more complex set of
             inputs.
             Further discussion of these models and of their applications are dealt with in
             Annex E.


## 5.2 Requirements for model selection and application

### 5.2.1 The internal field

             a.    IGRF-12 [RN.29] shall be used as the Internal Geomagnetic Field Model.
                            NOTE       As a stand-alone model, the inputs required of
                                       the IGRF-12 are either position in geodetic
                                       coordinates, according to the reference ‘World


                         Geodetic Service 84’ standard ellipsoid, or
                         position in a geocentric system, with respect to
                         the centre of the Earth and for which the
                         reference Earth radius is 6 371,2 km. The
                         coordinates are therefore geodetic or geocentric
                         latitude in decimal degrees, longitude (same in
                         both coordinate systems), altitude in km above
                         the reference ellipsoid, or distance in km from
                         the centre of the Earth. Time is input in decimal
                         years, e.g. 2 007,5. It is recommended that
                         geocentric data are used, to avoid errors or
                         confusion in respect of the reference ellipsoid.


b.   If a different model is an inherent part of a specific space environment
     model, then that specific geomagnetic field model shall be used.
             NOTE        An example is the AE8 and AP8 radiation flux /
                         belt models (see Clause 9)


#### 5.2.1.1 Application

a.   For times in the past and in the future, IGRF-12 shall be used, in association
     with its secular variations.
             NOTE 1      IGRF-12 and future versions contain revisions of
                         models of earlier epochs.
             NOTE 2      Beyond 5 years from the assumed epoch (2015),
                         the precision of the model is considerably
                         reduced. IGRF-13 is expected to be issued for the
                         epoch 2020, and can be used post 2019.


### 5.2.2 The external field

a.   For modelling the average characteristics of the terrestrial magnetic field
     and its variation according to geomagnetic and solar activity, one of the
     following two external magnetic field models shall be used:
     1.    Alexeev et al 2001, [RN.30]
     2.    Tsyganenko 1996 [RN.31]
             NOTE 1      These models are suitable for assessment of the
                         mean and range of magnetic field strength; for
                         estimation of B and L coordinates (but not for
                         input to radiation belt models created with
                         different field models); and in calculation of
                         geomagnetic shielding of cosmic rays and solar
                         particles.


                          NOTE 2    Recently, external field models have been
                                    created (e.g. Tsyganenko 2001 [RD.98], 2004
                                    [RD.99]) that are used in research environments
                                    for dynamic modelling of field variations, e.g.
                                    substorm development. These have the capacity
                                    to represent more accurately the instantaneous
                                    magnetic field, but are not given here as
                                    standards because the definition of inputs to the
                                    models is not reasonably achievable in an
                                    engineering environment.


## 5.3 Tailoring guidelines
             a.   While the IGRF-12 model should normally be used for internal fields, a
                  low­fidelity dipole model, using aligned, eccentric or tilted dipoles as
                  appropriate, can be sufficient for some engineering applications.


             b.   For the external field, the recent Tsyganenko 2001 [RD.98] and 2004
                  [RD.99] models may be used instead of the reference models defined in
                  clause 5.2.2.
                          NOTE      Most engineering applications do not need the
                                    external­source model augmentation of these
                                    later Tsyganenko models. These are only useful
                                    for certain scientific magnetospheric missions,
                                    for instance if data on high latitude or high
                                    altitude variability of the fields with respect to
                                    local time and solar­geomagnetic activity was
                                    important.


        Natural electromagnetic radiation and
                                      indices

## 6.1 Introduction and description

### 6.1.1 Introduction
             A spacecraft in LEO receives electromagnetic radiation from three primary
             external sources. The largest source is the direct solar flux. The mean value of this
             solar flux at the mean Sun­Earth distance is called the “solar constant”. It is not
             really a constant but varies by about 3,4 % during each year because of the
             slightly elliptical orbit of the Earth about the Sun. The two other radiation sources
             are the fraction of the incident sunlight reflected off the planet, termed albedo,
             and the Earth infrared radiation.
             Solar and geomagnetic activities are often described by indices. The UV radiation
             of the Sun, which strongly affects the Earth atmosphere, cannot be directly
             measured from the ground. But it was found to be strongly correlated with e.g.
             the sunspot number and the cm wavelength Sun radiation. For example, the
             widely used 10,7 cm radio flux index (F10.7) gives an indication of the solar UV
             radiation output which is highly variable over a solar cycle.
             Geomagnetic indices typically describe the variation of the geomagnetic field
             over a certain time period. They provide a measure of the disturbance of the
             magnetosphere which has direct consequences for the charged particle space
             environment, or the external component of the geomagnetic field.
             Solar and geomagnetic indices are used as input for upper atmosphere and other
             models of the near Earth space environment. They are provided for short
             durations or as long time averages. Predictions for future index values are
             usually provided at different confidence levels and they are available for
             complete solar cycles. The given data are mainly average values. For detailed
             thermal analyses or certain special applications, more detailed data and models
             are required. These are outside the scope of this Standard.


### 6.1.2 Electromagnetic radiation and indices

#### 6.1.2.1 Total Solar Irradiance (TSI)
             The TSI value and one-sigma uncertainty are presently taken to be 1361 ± 0,5 W
             m-² [RD.149]. In addition, the long-term (yearly) smoothed solar cycle minimum-
             to-maximum relative variation is approximately 1,3 W m-², with the (yearly)
             smoothed solar minimum value being approximately 1360,5 W m-² and the
             smoothed solar maximum value being approximately 1362 W m-² .


#### 6.1.2.2 Solar spectrum

##### 6.1.2.2.1 Soft X-rays or XUV (0,1 nm to 10 nm)
Usually associated with solar coronal phenomena, flares, million-degree
temperatures, and atomic dissociation. The corona extends from about 21 000 km
to 1 400 000 km above the photosphere. X-ray flares are responsible for
enhancements in the D and E regions of the Earth's ionosphere.

##### 6.1.2.2.2 Extreme ultraviolet or EUV (10 nm to 121 nm)
EUV has emission lines that come from the upper chromosphere (near-coronal
temperatures), transition region, and lower corona. This spectral band is
responsible for ionization and heating in the E and F regions of the ionosphere.

##### 6.1.2.2.3 Ultraviolet or UV (100 nm to 400 nm)
UV solar flux is emitted primarily from the base of the sun's chromosphere layer,
and has components due to active and quiet solar conditions. This band is
responsible for only 1% of the total solar irradiance, but it is important because
below 300 nm, it is completely absorbed by ozone and diatomic oxygen atoms in
the earth's upper atmosphere.

##### 6.1.2.2.4 Visible, optical or VIS (380 nm to 760 nm)
Visible light comes from the solar photosphere, which is only about 400 km thick,
has a temperature of approximately 5 000 to 6 000 degrees Kelvin, and yet is
responsible for the greatest percentage of the total solar radiation.

##### 6.1.2.2.5 Infrared or IR (0,70 µm to 1 mm)
Solar infrared in this range is responsible for the direct heating of the Earth's
lower atmosphere, through absorption by H2O, and has an effect on minor
species constituents in the Earth's mesosphere and thermosphere.
               NOTE       The ISO 21348 Standard on determining solar
                          irradiances provides more details on the solar
                          spectrum [RD.3].


#### 6.1.2.3 Indices

##### 6.1.2.3.1 General
Solar and geomagnetic indices are used to describe the activity levels of the Sun
and the disturbance of the geomagnetic field. Most activity indices are given for
short periods and as long duration averages. They are also used for long range
predictions of solar activities. Many space environment models require activity
index values as input parameters.

##### 6.1.2.3.2 Solar activity indices
- Sunspot number (R)
      The sunspot number (R, alternatively called Ri or Rz) is a daily index of
      sunspot activity, defined as


        R = k (10 g + s )                                                          (6-1)

    where
    s     is the number of individual spots,
    g     the number of sunspot groups, and
    k     is an observatory factor.
               NOTE         R12 (Rz12) is the 12-month running mean of the
                            sunspot number R.
- F10.7
    F10.7 (abbreviated F10) is the traditional solar energy proxy that is used
    both for NRLMSISE-00 [RN.4] and JB-2006 [RN.5] atmosphere models. It
    corresponds to the solar radio flux emitted by the sun at 2 800 MHz (10,7
    cm wavelength).
               NOTE         The physical units of F10.7 are 10-22 Wm-2Hz-1;
                            the numerical value is used without the
                            multiplier as is customarily done and expressed
                            as solar flux units (sfu). In other words, a 10,7 cm
                            radio emission of 150x10-22 W m-2Hz-1 is simply
                            referred to as F10.7 = 150 sfu.
    F10.7 and the sunspot number, R, are correlated. Averaged (over one
    month or longer) values can be converted by the following expression:

    F10.7 = 63,7 + 0,728 R + 8,9 × 10 -4 R 2                                       (6-2)

- S10.7
    S10.7 (abbreviated S10) [RD.122] is a solar energy proxy that is used for the
    JB-2006 and JB-2008 atmosphere model [RN.5] It is measured by SOHO
    with the Solar Extreme-ultraviolet Monitor (SEM) in the 26--34 nm solar
    EUV range, and normalized using a mean value of 1,9955x1010 photons cm-
    2s-1. It is expressed in sfu, as F10.7.


- M10.7
    M10.7 (abbreviated M10) [RD.122] is a solar energy proxy that is used for
    JB-2006 and JB-2008 atmosphere model. It is measured by NOAA 16 and
    NOAA 17 operational satellites with the Solar Backscatter Ultraviolet
    (SBUV) spectrometer. It is a measure of chromospheric and some
    photospheric solar active region activity and is expressed in sfu, as F10.7
    and S10.7.
- IG12
    IG12 [RD.147] is a solar activity index derived from the monthly mean
    noon f0F2 data available from thirteen ionospheric observations. The IG
    index has been confirmed as an alternative to sunspot number when
    predictions of f0F2 are being prepared with the aid of the CCIR atlas of
    ionospheric characteristics. IG12 is used for the IRI-2016 ionospheric
    model.


            - Solar wind speed
                  The solar wind speed is used in external magnetic field model
                  computation. It is the outward flux of solar particles and magnetic fields
                  from the sun. Typically, solar wind velocities are near 468 km s-1.

##### 6.1.2.3.3 Geomagnetic activity indices
            Geomagnetic activity indices are used to describe fluctuations of the geomagnetic
            field.
            - Kp and ap
                  Most widely used planetary indices are Kp and ap. They are based on 3­hour
                  measurements from 13 ground stations. Values of ap range from 0 to 400
                  and are expressed in units of 2 nT. Kp is essentially the logarithm of ap, its
                  scale is 0 to 9 expressed in thirds of a unit, e.g. 5- is 4 2/3, 5o is 5 and 5+ is
5 1/3.The conversion from Kp to ap is given in Table 6-1 (taken from
                  [RD.100]. A daily index, Ap, is obtained by averaging the eight values of ap
                  for each day. The index Ap can have values intermediate to those of ap.
            - Dst
                  Dst (Disturbance Storm Time) is a geomagnetic index used in external
                  magnetic field model computation. It describes variations in the equatorial
                  ring current and is derived from hourly scalings of low-latitude horizontal
                  magnetic variation. It is expressed in nT.
            - IMF
                  IMF (Interplanetary Magnetic Field) is a geomagnetic index used in
                  external magnetic field model computation. It corresponds to the part of
                  the Sun's magnetic field that is carried into interplanetary space by the
                  solar wind. The three orthogonal components of the IMF are Bx, By and Bz.
                  Bx and By are oriented parallel to the ecliptic.
                  The IMF is a weak field, varying in strength near the Earth from 1 to 37 nT,
                  with an average value of about 6 nT.


## 6.2 Requirements

### 6.2.1 Electromagnetic radiation

            a.    The values in Table 6-2 shall be used for the electromagnetic radiation.


            b.    The solar spectrum shall be approximated by a black body curve with a
                  characteristic temperature of 5 778 K.


            c.    A space sink temperature of 3 K shall be used.


### 6.2.2 Reference index values

a.   For daily and 81-day averaged values of F10.7, S10.7 and M10.7 the values
     given in Table A-1 shall be used.
             NOTE 1     Ap is only weakly correlated with the solar
                        activity indices. It has a seasonal variation and is
                        higher at the equinoxes.
             NOTE 2     81 days corresponds to 3 solar rotations and 81
                        day averaged values are used as input for
                        atmosphere models.
             NOTE 3     Alternative daily and 81-day average values and
                        forecast methods are available [ISO 27852:2016].
                        Their values can be more appropriate depending
                        on the use-case.


b.   For fixed index values, the numbers given in Table 6-3 for low, moderate
     and high solar and geomagnetic activities shall be used:
     1.    The long­term values are averaged values for periods longer than
27 days.
     2.    The long-term values apply as well for periods of 1 week or longer.
     3.    The short-term values are daily values.


c.   The temporal evolution in ap shown in Table 6-4 shall be used to describe
     the worst case fluctuations during successive three-hour intervals for a
     total duration of 24 hours.


d.   The ap values of Table 6-4 shall be used together with the relevant (low,
     moderate or high) long term averaged values of F10.7, S10.7 and M10.7
     given in Table 6-3.


### 6.2.3 Tailoring guidelines

a.   For design purposes the “worst-case” activity values given in Table 6-3
     may be used.
             NOTE       These can be the high or low values, depending
                        on the effect to be studied.


b.   All worst-case values shall be used without any additional margin.


                          c.        The values given in Table A-1 shall be used:
                                    1.       for applications that require a realistic sequence of index values for
                                             future predictions, for example orbital calculations using index-
                                             driven atmospheric models;
                                    2.       for a given specific phase of the respective solar activity cycle.


                          d.6.3        Tables
                                      Table 6-1: Conversion from Kp to ap
                                 Kp 0        0+ 1- 1o 1+ 2- 2o              2+   3      3o       3+    4-   4o    4+
                                 ap      0   2   3    4   5   6   7         9    12     15       18    22   27    32
                                 Kp 5- 5o 5+ 6- 6o 6+ 7-                    7o   7+     8-       8o    8+   9-    9o
                                 ap      39 48 56 67 80 94 111 132 154 179 207 236 300 400


                               Table 6-2: Electromagnetic radiation values
 Total Solar Irradiance (at 1 AU)                                                    1 361 W m-2
 Solar energy flux at aphelion                                                       1 316 W m-2
 Solar energy flux at perihelion                                                     1 407 W m-2
 NOTE The solar constant, a historical term, is not constant. It varies geometrically with the Earth’s distance from the Sun and
      physically with the Sun’s magnetic field activity on short to long timescales. The value of 1 361±0,5 W m-2 is the current
      value agreed upon by the International Astronomical Union (IAU).


                                Table 6-3: Reference fixed index values
                                      Long-term (27+ days)                                            Short-term (daily)
                               Low            Moderate            High                   Low                Moderate       High
          F10.7                65                 140                 250                    65                  140       300

          S10.7                60                 125                 220                    60                  125       235

          M10.7                60                 125                 220                    60                  125       240

            Ap                  0                    15               45                     0                   15        240
      NOTE 1 The reference index values are rounded numbers from the last solar cycle 23.
      NOTE 2 Low, moderate or high values for Ap can occur at any time in the solar cycle.
      NOTE 3 For short terms, higher values than those given in this table have been measured (e.g. F10.7 = 380 over a day and ap=
# 400 for 3 hours). However, present atmosphere models are not developed for such high index values and its use leads
             to large and unknown errors.


Table 6-4: Reference index values for variations of ap
            Time [hrs]             ap
0 15
3 15
6 300
9 130
12 50
15 15
18 15
21 15
24 15


                                             Neutral atmospheres

## 7.1 Introduction and description

### 7.1.1 Introduction
             A good knowledge of temperature, total density, concentrations of gas
             constituents and pressure is important for many space missions exploiting the
             low-earth orbit regime (LEO), below approx. 1 000 km altitude. Aerodynamic
             forces on the spacecraft, due to the orbital motion of a satellite through a rarefied
             gas which itself can have variable high velocity winds, are important for the
             combination of planning satellite lifetime, for the maintenance of orbits, for sizing
             the necessary propulsion system, for the design of attitude control system, and
             for estimating the peak accelerations and torques imposed on sensitive payloads.
             Surface corrosion effects due to the impact of large fluxes of atomic oxygen are
             assessed to predict the degradation of a wide range of sensitive coatings of
             spacecraft and instruments. The reactions of atomic oxygen around a spacecraft
             can also lead to intense “vehicle glow”.


### 7.1.2 Structure of the Earth’s atmosphere
             The Earth atmosphere can be broadly divided into three distinct regimes:
             - The homosphere which comprises the regions of the troposphere (surface
                   up to ~ 10 - 12 km altitude), the stratosphere (~ 10 - 12 km up to 50 km),
                   and the mesosphere (~50 km up to about 90 km);
             - The thermosphere which extends from about 90 km altitude to approx. 400
                   km (depending on solar and geomagnetic activity levels);
             - The exosphere which extends from the top of the thermosphere and
                   extends into space.
             More information on these three regions can be found in Annex G.


### 7.1.3 Models of the Earth’s atmosphere
#### 7.1.3.1 NRLMSISE-00 model
             The NRL Mass Spectrometer, Incoherent Scatter Radar Extended Model
             (NRLMSISE-00) model [RN.4] describes the neutral temperature and species
             densities in Earth's atmosphere.
             It is based on a very large underlying set of supporting data from satellites,
             rockets and radars, with extensive temporal and spatial distribution. It has been
             extensively tested by the global scientific community against experimental data.
             The model has a flexible mathematical formulation.
             It is valid for use from ground level to the exosphere.
             Two indices are used in this model:


- F10.7 (both the daily value of the previous day and the 81-day average
      centred on the input day),
- Ap (daily value).

#### 7.1.3.2 JB-2006 model
The Jacchia-Bowman 2006 (JB-2006) model [RN.5] also describes the neutral
temperature and the total density in Earth’s thermosphere and exosphere. Its
new features, described in Annex G, lead to a better and more accurate model
representation of the mean total density, compared with previous models,
including the NRLMSISE-00.
It is valid for use from an altitude of 120 km to the exosphere.
Four indices are used in this model:
- F10.7 (both tabular value one day earlier and the 81-day average centred
      on the input time),
- S10.7 (both tabular value one day earlier and the 81-day average centred
      on the input time),
- M10.7 (both tabular value five days earlier and the 81-day average centred
      on the input time),
- Ap (tabular value 6,7 hours earlier).


### 7.1.4 Wind model of the Earth’s homosphere and
             heterosphere
The Horizontal Wind Model (HWM) is a comprehensive empirical global model
of horizontal winds in the mesosphere and thermosphere (middle and upper
atmosphere). The HWM07 model [RN.40] is based on accumulated
measurements made using a variety of observational techniques, including
satellite, radar, and ground-based optical remote sensing. The model is used to
provide the necessary winds, accounting for time, space and geophysical
variations, for many ionospheric, dynamical, and aeronomical calculations It
provides meridional (+ northward) and zonal (+ eastward) speed and covers all
altitude regions.
Two indices are used in this model:
- F10.7 (both the daily value of the previous day and the 81-day average
      centred on the input day),
- Ap (daily value).


## 7.2 Requirements for atmosphere and wind model
      selection

### 7.2.1 Earth atmosphere
#### 7.2.1.1 General

            a.   The NRLMSISE-00 model [RN.4] shall be used for calculating the neutral
                 temperature, the total density and the detailed composition of the
                 atmosphere.


            b.   The JB-2006 model [RN.5] or JB-2008 model [RN.39] may be used for
                 calculating the total atmospheric density above an altitude of 120 km.


            c.7.2.1.2    Application guidelines

            a.   The NRLMSISE-00 model for species densities shall not be mixed with the
                 JB-2006 model for total density.


            b.   For worst case high results and analysis periods not exceeding 1 week high
                 daily short-term values given in Table 6-3 shall be used as input for daily
                 activity together with the high long-term values for the 81-day average
                 activity.


            c.   For analysis periods longer than 1 week the long term activities given in
                 Table 6-3 shall be used as input for both, the daily and the 81-day averaged
                 values.


            d.   For analysis periods longer than 1 week and conditions specified in 6.2.3c,
                 the daily and 81-day averaged solar activities given in Table A-1 shall be
                 used.


            e.   Short-term daily high solar activity values shall not be used together with
                 low or moderate long-term solar activity values.


             NOTE 1     Both models can only predict large scale and
                        slow variations, on the order of 1 000 km (given
                        by the highest harmonic component) and 3
                        hours. Spacecraft can encounter density
                        variations with smaller temporal and spatial
                        scales partly since they are in motion (for
                        example, +100% or -50% in 30 s), and partly
                        because smaller-scale disturbances certainly
                        occur during periods of disturbed geomagnetic
                        activity.
             NOTE 2     Reference values for the key indices needed as
                        inputs for the atmosphere models are given in
                        Clause 6.
             NOTE 3     The F10.7 81-day average activity can also be
                        estimated by averaging three successive
                        monthly predicted values.
             NOTE 4     Information on density model uncertainties can
                        be found in G.5 and in [RN.4] and [RN.5].
             NOTE 5     For high activities the atmosphere models only
                        give realistic results if high short term values are
                        combined with high 81-day averaged values.
             NOTE 6     High Ap values can be used with low, moderate
                        or high solar activities.


### 7.2.2 Earth wind model

a.   The HWM07 model [RN.40] shall be used.


b.   High daily short-term values shall be used as worst-case for the daily
     activity but the 81-day average activity shall not exceed the high long-term
     value.
             NOTE 1     Reference values for the key Indices needed as
                        inputs for the wind model are given in Clause 6.
             NOTE 2     The F10.7 81-day average activity can also be
                        estimated by averaging three successive
                        monthly predicted values as given in Clause 6.
             NOTE 3     The use of the HWM-93 model at high
                        geomagnetic latitudes and for disturbed
                        geomagnetic periods necessitates caution.


c.   As an alternative to the model specified in 7.2.2a, the HWM93 model
     [RN.6] may be used.


### 7.2.3 Models of the atmospheres of the planets
           and their satellites

a.   For the Martian Atmosphere, the Martian Climate Database [RN.7] shall
     be used.
            NOTE 1     No specific models are imposed for the other
                       planets and their satellites.
            NOTE 2     International Reference Atmospheres have been
                       adopted for Mars (MIRA) and Venus (VIRA).
                       There have also been major advances in the case
                       of the atmospheres of Jupiter, Saturn, Neptune
                       and Titan. This is a matter of ongoing work.
                       Considerable work has also been performed for
                       the atmosphere of Mercury.
            NOTE 3     Additional    information    on     Planetary
                       Atmospheres is provided in Annex G.


                                                                            Plasmas

## 8.1 Introduction and description

### 8.1.1 Introduction
             All spacecraft, once they exceed about 60 km in altitude during the day or around
80 km at night, are exposed to the charged particles of the space plasma
             environment. These particles interact with and are collected by the surface
             materials of a spacecraft and change the electric fields on and around it. Of the
             continuum of charged particles of all energies, those below 50 keV are generally
             regarded as plasma and are covered in this clause. Higher energy particles are
             covered in the radiation environment clause (clause 9).
             Within the magnetosphere, plasma flows almost freely up and down magnetic
             field lines but only slowly across it. Hence, two spacecraft observe similar
             plasmas if they are on the same field line, even if far apart. These spacecraft share
             the same L­shell and magnetic local time.
             A brief overview of the effects of the plasma environment is given in Annex H.2.
             Requirements for design, analysis and testing of spacecraft, concerning the
             effects of plasma on spacecraft systems are described in a parallel standard ECSS-
             E-ST-20-06 (Spacecraft Charging).


### 8.1.2 Ionosphere
             The ionosphere is the ionized plasma in the upper atmosphere, produced by the
             dissociation of atmospheric atoms. It is generally divided into layers D, E and F1
             at low altitudes and F2 at higher altitude. The low altitude layers are significant
             only during daylight hours. F2 is permanent and the densest, peaking at around
# 300 km altitude. For most space applications, it is the electron density which is
             the most important characteristic. Immediately above the F2 peak, density falls
             off nearly exponentially with height. At mid to low latitudes, the density fall­off
             slows down at higher altitudes as the magnetic field traps plasma to form the
             plasmasphere.
             Intense auroral charging environments are associated with discrete aurorae
             which are generally found between 60 and 77 degrees magnetic latitude.
             However, at times of enhanced geomagnetic activity, the auroral zone is moved
             southwards. In this region, ionospheric density can become irregular on the scale
             of metres to kilometres vertically and metres to hundreds of kilometres
             horizontally. The energetic electrons have energies of 10s of keV. Plasma density
             in this region can suddenly increase by a factor of up to 100 during magnetically
             active periods.
             In the Polar Cap, typically above 70° latitude, there is a strong winter­summer
             asymmetry because of the tilt of the Earth,. Strong drift motion occurs due to


electric fields. In winter, density is maintained by this drift and by “polar rain”,
a weak electron flux from the solar wind with energy around 100eV. When both
these processes are depressed, ionospheric density in this region can become very
low.
Ionospheric plasma characteristics are expressed in the International Reference
Ionosphere (IRI) [RN.9]. IRI is an empirical model based on a large volume of
ground and space data. IRI describes monthly average conditions but can be
updated to time-specific conditions using measured characteristic parameters,
e.g., F-peak density and height, if these are available. This model calculates
densities, temperatures and composition in the altitude range 60 to 2 000 km.
Auroral boundaries are part of the model but the auroral populations are
currently not modelled in IRI-2016. The model describes the densities of O+, H+,
He+, NO+, O2+, N+, and Cluster ions. External drivers for the IRI model are the
sunspot number and the ionospheric index IG; in both cases the 12-month
running mean of the index is used.


### 8.1.3 Plasmasphere
The plasmasphere is a region of cold dense plasma originating in the ionosphere
and trapped by the Earth’s magnetic field. At low L­shells, the particles drift
around the Earth on closed drift paths. This allows ions, escaping from the
ionosphere, to accumulate to form this dense region. The boundary between
closed and open drift paths is highly variable and the outer regions of the
plasmasphere are continually being lost and refilled over a period of days.
Typically, the plasmapause, the outer edge of the plasmasphere, lies at an L­shell
(3.2.27) of 3 to 6, with a bulge in the dusk region of magnetic local time.
The Global Core Plasma Model (GCPM) [RN.8] is a widely used and well tested
plasmasphere model and is recommended by the authors of IRI. It provides
empirically derived plasma density as a function of geomagnetic conditions
throughout the inner magnetosphere. Another plasmasphere model that is
designed to complement the IRI model is IRI-PLAS [RD.166].


### 8.1.4 Outer magnetosphere
Beyond the plasmapause, the magnetospheric plasma environment is
characterized by high temperatures and low densities. This region usually
encompasses the geostationary orbit. The location of the outer boundary of this
region, the magnetopause, is controlled by the balance between the ram pressure
of the flowing solar wind and the magnetic pressure of the terrestrial magnetic
field. See Annex H.3.4 for further discussion of the magnetopause position.
During active periods, large amounts of magnetic energy are injected into the plasma
in this region. These are called magnetic storms and substorms and are detectable on
the ground as magnetic disturbances at certain latitudes. Hence there is a strong link
between hot plasma and high values of the magnetic index Kp.


### 8.1.5 Solar wind
The solar wind is part of the Sun’s outer atmosphere, expanding outwards and
carrying the solar magnetic field with it. Solar wind velocity near the Earth is
commonly around 468 km s-1 but with frequent high­speed streams with
velocities around 700 km s-1 and sometimes beyond 1 000 km s-1. Earth­orbiting
satellites and those in L1 and L2 see solar wind fluctuations at different times but
otherwise do not observe noticeable differences in solar wind characteristics.
On average, the solar wind is made up mostly of protons (95%), with 4% alpha
particles and around 1% minor ions, of which carbon, nitrogen, oxygen, neon,
magnesium, silicon and iron are the most abundant [RD.5].
In interplanetary space, solar wind average density varies, to a good
approximation with r-2 (where r is radial distance from the Sun) in the range ±40
degrees solar latitude. The average electron temperature has been seen to vary as
r-0,64 for r between 1,52 to 2,31 AU. Ion velocity does not show a significant radial
variation.


### 8.1.6 Magnetosheath
Near the magnetopause the solar wind is slowed, compressed, heated and
deflected by the ‘bow shock’. This typically lies 3 RE upstream of the
magnetopause on the Earth­Sun line. The diameter of the bow shock
perpendicular to the Earth-Sun axis increases in the anti-sunward direction so
that around L2 (236 RE downstream) it is around 100 RE in radius. The region
between the bow shock and the magnetopause is called the ‘magnetosheath’.


### 8.1.7 Magnetotail and L2
Although the Earth’s magnetosphere extends typically out to 10 RE in the
sunward direction, it extends to at least 500RE in the anti-sunward direction. This
downstream region of the magnetosphere is called the magnetotail.
Beyond about 30 RE, the magnetotail becomes cylindrical with radius virtually
independent of distance from the Earth (around 15 to 30 RE in radius depending
on solar wind pressure). It does not point directly anti-sunwards but swings
according to solar wind velocity components up to about 10 degrees from the
Earth-Sun line in both the ecliptic plane and perpendicular to it. The mean
deflection with respect to the Earth-Sun line is about 4 degrees.
Within the magnetotail, there are somewhat different plasmas, with hotter
plasma (the plasma sheet) around the ecliptic plane and the cooler plasma (the
lobes/mantle) north and south of it [RD.117]. Although these are magnetically
linked to regions near the Earth, populated with ions of ionospheric and solar
wind origin respectively, in this region virtually all ions are of solar wind origin
[RD.6] and the differences in density and temperature are not as strong as near
the Earth.
The second Earth-Sun Lagrange point is in the anti sunward direction, some 1,5
million km from the Earth, in the deep magnetotail (the Moon’s orbit has a semi-
major axis of about 0,385 million km and also provides some ions to the deep tail
environment).


### 8.1.8 Planetary environments
             Whenever planets have strong magnetic fields that exclude the solar wind from
             around the planet, there is the possibility of plasma being trapped in a similar
             way to the plasma in the Earth’s magnetosphere. Jupiter and Saturn, in particular,
             have large magnetic fields and larger magnetospheres than that of the Earth.


### 8.1.9 Induced environments
             The natural plasma environment can be augmented by a number of sources
             inside or on the satellite surface, such as photo-emission, outgassing and electric
             propulsion systems.


## 8.2 Requirements for model selection and application

### 8.2.1 General

             a.    Applicable plasma regions that can be encountered shall be identified
                   according to the spacecraft location or orbit as follows:
                   1.     The ionosphere for altitudes between 60 km and 2 000 km.
                   2.     The auroral charging environment for orbital inclinations above 50
                          degrees for altitudes above 80 km and below 2 000 km.
                   3.     The plasmasphere for altitudes above 2 000 km (approximately
                          L=1,3 at the equator) and below L=7.
                   4.     The outer magnetosphere for all L values above L=3 and within the
                          magnetopause as defined in clause 5, (including the geostationary
                          regime).
                   5.     The magnetosheath for locations outside of the magnetopause as
                          defined in clause 5 and within the bow shock.
                   6.     The solar wind for locations outside of the magnetopause and bow
                          shock.
                   7.     The magnetotail and distant magnetosheath for locations within the
                          bow shock but more than 30 RE from the Earth in the anti-Sunward
                          direction.
                   8.     Planetary plasma environments for regions within the planetary
                          bow shock, or planetary magnetopause, or planetary ionopause,
                          whichever of these are present.
                            NOTE 1     See Annex E.5 for definition of L (L-shell).
                            NOTE 2     Some typical orbits and regions encountered are
                                       described in Annex H


b.   Applicable environments for each region shall be characterised according
     to the models specified in 8.2.2 to 8.2.6.


### 8.2.2 Ionosphere

a.   For the ionospheric environment, the International Reference Ionosphere
# 2016 (IRI-2016) [RN.9], shall be used.


b.   Inputs to the IRI-2016 model, shall be:
     1.    choice of geographic or geomagnetic coordinates;
     2.    latitude;
     3.    longitude;
     4.    date;
     5.    local or universal time;
     6.    altitude (start and end of range and step size).


c.   Other inputs shall be the default solar and geomagnetic index values for
     dates up to 2018 or later periods if available from www.irimodel.org.
              NOTE       This means that Sunspot number Rz12, IG12 (see
                         6.1.2.3.2), F10.7 and ap data are taken from
                         default files.


d.   For future dates not covered by the default files, for F10.7 and ap the activity
     indices defined in clause 6 and corresponding values for IG12 and Rz12
     shall be used.
              NOTE       Information on the accuracy of the IRI-2016
                         model and typical ionospheric density profiles
                         are given in Annex H.3.1


### 8.2.3 Auroral charging environment

a.   For auroral charging assessment, the following worst­case electron
     distribution function shall be used.
     1.    For E ≤17,44 keV:


                         f(v) = 3,9 × 10-18 s3m-6                                (8-1)

     2.    For E > 17,44:

                      [ N 0 (me ) 3 / 2 exp{- ( E - E0 ) / kT0 }]
           f (v ) =                                                             (8-2)
                                       (2πkT0 ) 3 / 2

           where
           f(v) is the distribution function in sec3 m-6
           N0    is the density in m-3
           me    is the electron mass in kg
           kT0   is the thermal energy in J
           E0    is in J
           E     is energy in J
           and parameters of the worst case environment are:
           N0    = 1,13E6 m-3
           kT0   = 3,96 keV
           E0    = 17,44 keV
               NOTE         This comes from [RD.7] and is based on work
                            described in [RD.8]. Unfortunately, it is printed
                            in [RD.7] with a typographical error.


b.   For worst case auroral charging assessments, a thermal ion density of
125 cm-3 and temperature 0,2 eV shall be used.
               NOTE         This low ion density comes from a severe
                            charging case seen on the DMSP spacecraft by
                            [RD.9]. Measuring ionospheric thermal ion
                            density during a strong charging event is
                            potentially prone to errors because of the way
                            the charged satellite alters ion trajectories, so
                            there is a high degree of uncertainty in this
                            measurement but there is currently no better
                            information.


c.   A Maxwellian fit to the auroral electron distribution specified in 8.2.3a may
     be used with temperature 11 keV and density 1.1e7 m-3 [RD.167].


d.   The worst case environments specified in 8.2.3a, 8.2.3b and 8.2.3c shall be
     applied for 10s.


### 8.2.4 Plasmasphere

a.   The plasma parameters representing the terrestrial plasmasphere should
     be taken from the Global Core Plasma Model (GCPM) [RN.8], version 2.4.
             NOTE 1     Profiles of typical plasmasphere densities versus
                        altitude are given in Annex H.3.3.
             NOTE 2     Outputs are densities of electrons, protons,
                        helium ions and oxygen ions. Input parameters
                        are: time, geocentric radial distance, solar
                        magnetic local time, solar magnetic latitude and
                        Kp index.


b.   For spacecraft charging assessments, Kp=9 shall be used to represent a
     worst case situation.
             NOTE       This is because the plasmasphere is a
                        moderating influence on spacecraft charging,
                        and so the worst case is considered to be when
                        the plasmasphere is small which occurs when
                        geomagnetic activity is high.


c.   As an alternative to the model specified in 8.2.4a, the IRI-Plas model may
     be used [RD.166].


### 8.2.5 Outer magnetosphere

a.   For assessment of surface charging, the worst­case environment listed in
     Table 8-1 shall be used as input to a spacecraft charging simulation or
     calculation, applicable to the outer magnetosphere environment.
             NOTE 1     This is a dynamic region in terms of plasma
                        density and temperature and for most
                        engineering purposes, worst­case environments
                        are the most important consideration. See Annex
                        H.3.4 for typical plasma parameters in this
                        region.
             NOTE 2     See Annex H.3.4 for some other worst-case
                        environments.


### 8.2.6 The solar wind (interplanetary environment)

a.    For calculation of engineering effects due to the solar wind, a flowing
      Maxwellian distribution shall be used, with density and temperature given
      in Table 8-2.


b.    Spacecraft in L1 and L2 shall be considered to experience the same mean
      and range of plasma parameters in the solar wind as at the Earth.
              NOTE       Because the solar wind flows through the near-
                         Earth interplanetary medium with negligible
                         modification (unless it encounters the bow
                         shock), the mean and range of plasma density
                         and temperature can be considered spatially
                         uniform in the vicinity of 1AU. However,
                         variations in plasma at the Earth are seen at L1
                         and L2 between approximately 30 and 90
                         minutes earlier or later, respectively.


c.    A r-2 variation shall be used to map the mean and range of solar wind
      density to other locations in the heliosphere in the ecliptic plane, where r
      is heliocentric distance.


d.    A r-0,64 variation shall be used to map the mean and range of the electron
      temperature to other locations in the heliosphere in the ecliptic plane.


e.    The ion temperature and composition shall be assumed to be the same as
      near the Earth.


### 8.2.7 Other plasma environments

#### 8.2.7.1 Magnetosheath
Magnetosheath plasma parameters differ according to the latitude and local time
of the observation. No standard models for magnetosheath plasma
characteristics are defined but typical values can be found in Annex H.3.5.


#### 8.2.7.2 Magnetotail, distant magnetosheath and L2
No standard model for the magnetotail and distant magnetosheath are defined.
Typical plasma parameters that can be encountered in the magnetotail and
distant magnetosheath around the L2 point are given in Annex H.3.6.


#### 8.2.7.3 Planetary environments
 No standard models are defined for planetary environments because information
 in these regions is still quite limited. Information relevant to worst case charging
 environments around Jupiter and Saturn are described in Annex H.3.7.


#### 8.2.7.4 Induced environments
 There are no standard models related to plasma created by spacecraft surface
 interactions but information on the calculation of induced environment
 parameters is given in Annex H.3.8.


### 8.2.8 Tables
 The values in Table 8-1 is a double­Maxwellian fit to an extremely severe event
 observed by the SCATHA spacecraft on 24 April 1979 [RD.114], when the
 spacecraft charged to -8 kV in sunlight. The values in Table 8-2 are taken from
 [RD.10]. Note that although the listed ion and electron densities are not equal,
 electrical neutrality is maintained by less energetic plasma which is not involved
 in the charging process and so not stated.


Table 8-1: Worst­case bi­Maxwellian environment
                       Electron       Electron           Ion density           Ion
                     density (cm-3) temperature             (cm-3)         temperature
                                       (keV)                                  (keV)
   Population 1     0,2               0,4               0,6              0,2
   Population 2     1,2               27,5              1,3              28,0


            Table 8-2: Solar wind parameters
   Parameter                            Mean                     5-95 % Range
   Speed (km s-1)                           468                     320 - 710
   Density (cm-3)                           8,7                      3,2 - 20
   Tp (K)                              1,2 x105                  1 x104 - 3 x 105
   Te (K)                               1,0x105                  9 x 104 - 2 x 105
   Nalpha/Nproton                        0,047                    0,017 - 0,078


                              Energetic particle radiation

## 9.1 Introduction and description

### 9.1.1 Introduction
             Energetic charged particles with energies in the MeV range and above are
             encountered throughout the Earth magnetosphere, in interplanetary space, and
             in the magnetospheres of other planets [RD.12].
             At pre­phase A, radiation environments are an element in trade­offs for orbit
             selection. Effects on both the payload and on the spacecraft carrier are
             considered.
             A radiation environment specification for a mission is established wherein all
             types of radiation are considered, reflecting general and mission­specific
             radiation susceptibilities; this specification is then used for component selection,
             material effects and shielding optimisation.
             For radiation analysis, there are general models and models more specific to
             particular orbits, such as geostationary orbits.


### 9.1.2 Overview of energetic particle radiation
                          environment and effects

#### 9.1.2.1 Radiation belts
             Energetic electrons and ions are magnetically trapped around the Earth forming
             the radiation belts, also known as the Van Allen belts. The radiation belts extend
             from 100 km to 65 000 km and consist principally of electrons of up to a few MeV
             energy and protons of up to several hundred MeV energy. The high energy
             particle flux in the radiation belts is dependent on the solar activity. The so­called
             South Atlantic anomaly is the inner edge of the inner radiation belt encountered
             in low altitude orbits. The offset, tilted geomagnetic field brings the inner belt to
             its lowest altitudes in the South Atlantic region. More information can be found
             in references [RN.10] and [RN.11].


#### 9.1.2.2 Solar energetic particles
             Solar Energetic Particles (SEP) are high-energy particles that are encountered in
             interplanetary space and close to the Earth. These particles are seen in short
             duration bursts associated with other solar activity. Solar Energetic Particle
             Events, as detected in Earth orbit, can last from a few hours to several days. The
             Earth’s magnetic field provides a varying degree of geomagnetic shielding of
             near­Earth locations from these particles. They consist of protons, electrons and
             heavy ions with energies from a few tens of keV to GeV ranges and can originate
             from two processes: energisation in association with activity seen on the solar


disk e.g. flaring, or by shock waves associated with Coronal Mass Ejection
(CMEs) as they propagate through the heliosphere. They are of interest and
importance because they can endanger life and electronics in outer space
(especially particles exceeding some tens of MeV). Solar protons are the principle
contributors to non-ionising dose effects in components at GEO and in
interplanetary space, they are also the primary source of ionising dose for
interplanetary missions and can cause sensor interference. Solar heavy ions are
of particular interest and importance because they can endanger life and
electronics in outer space (especially particles exceeding some tens of MeV). Solar
electrons can be significant for certain applications and effects such as sensor
interference and internal charging.


#### 9.1.2.3 Galactic cosmic rays
Galactic cosmic rays (GCR) are high-energy charged particles that enter the solar
system from the outside, the flux of which becomes modulated in anti-correlation
with solar activity due to the solar wind. They are composed of protons,
electrons, and fully ionized nuclei. There is a continuous and isotropic flux of
Galactic Cosmic Ray (GCR) ions. Although the flux is low, a few particles cm-2s-1,
GCRs include energetic heavy ions which can deposit significant amounts of
energy in sensitive volumes and so cause problems to spacecrafts' electronics and
humans in space. As for Solar particles, the Earth’s magnetic field provides a
varying degree of geomagnetic shielding of near­Earth locations from these
particles.


#### 9.1.2.4 Geomagnetic shielding
The Earth’s magnetic field partially shields near­Earth space from solar energetic
particles and cosmic rays, an effect known as geomagnetic shielding. However,
these particles can easily reach polar regions and high altitudes such as the
geostationary orbit. Geomagnetic shielding of ions at locations or on spacecraft
trajectories is computed by considering locations or trajectories in geomagnetic
B, L space.


#### 9.1.2.5 Other planets
The above environments are common to planets other than the Earth. Jupiter,
Saturn, Uranus and Neptune have strong magnetic fields inducing severe
radiation environments in their radiation belts. Mercury has a small
magnetosphere which may lead to transient radiation belts. The other planets
(Mars, Venus) have no trapped radiation. Missions to them are only exposed to
GCR and SEP.
No normative model is specified for the radiation environment at other planets.
Some information on planetary radiation environments is provided in Annex I.7.


#### 9.1.2.6 Neutrons
Neutrons are ejected by the Sun. They decay rapidly in the interplanetary
medium, and only a few can reach the Earth. They are important for missions
close to the Sun.


When highly energetic charged particles strike the earth’s upper atmosphere they
create secondary particles throughout the atmosphere including very significant
fluxes of neutrons. Of these, some are emitted back into space as atmospheric
albedo neutrons of between 0,1 and 2,2 cm-2s-1, depending on the geomagnetic
latitude and the phase of the solar cycle, and these can be significant where there
is a specific susceptibility, such as in human spaceflight or with sensitive
detectors. Model results for albedo neutron spectra are given in Annex I.
For some planetary environments, such as Mars, the secondary neutrons from
cosmic ray and solar proton interactions with the atmosphere and regolith
become a relevant contributor, in particular for human missions.


#### 9.1.2.7 Secondary radiation
Secondary radiation is generated by the interaction of the above environmental
components with materials of the spacecraft. A wide variety of secondary
radiations are possible, of varying importance. The ECSS-E-ST-10-12 standard
deals with these sources of radiation. Secondary neutrons are important for
human missions and also play a role in generating background in sensitive
detector systems.


#### 9.1.2.8 Other radiation sources
Other sources of radiation include emissions from on­board radioactive sources
such as in instrument calibration units, Radioisotope Thermo­electric Generator
(RTG) electrical power systems and Radioisotope Heating Units (RHU). Any use
of reactor power sources provide intense fluxes of neutrons and gamma rays.


#### 9.1.2.9 Effects survey
The above radiation environments represent important hazards to space
missions. Energetic particles, particularly from the radiation belts and from solar
particle events cause radiation damage to electronic components, solar cells and
materials. They can easily penetrate typical spacecraft walls and deposit doses of
hundreds of kilorads (1 rad = 1 cGy) during missions in certain orbits.
Radiation is a concern for manned missions. The limits of acceptable radiological
dose for astronauts, determined to ensure as low as reasonably achievable
long­term risk, is indicated in ECSS-E-ST-10-12. There are many possible
radiation effects to humans, beyond the scope of this document. These are
described in . Heavy ions and neutrons are known to cause severe biological
damage, and therefore these contributions receive a heavier weighting than
gamma radiation. The “quality factors”, as they are called, are established by the
International Commission on Radiological Protection [RD.13].
Energetic ions, primarily from cosmic rays and solar particle events, lose energy
rapidly in materials, mainly through ionization. This energy transfer can disrupt
or damage targets such as a living cell, or a memory element, leading to
Single­event Effect (SEE) in a component, or an element of a detector (radiation
background). These effects can also arise from nuclear interactions between very
energetic trapped protons and materials (sensitive parts of components,
biological experiments, detectors). Here, the proton breaks the nucleus apart and
the fragments cause highly­localized ionization.


             Energetic particles also interfere with payloads, most notably with detectors on
             astronomy and observation missions where they produce a “background” signal
             which is not distinguishable from the photon signal being counted, or which can
             overload the detector system.
             Energetic electrons can penetrate thin shields and build up static charge in
             internal dielectric materials such as cable and other insulation, circuit boards, and
             on ungrounded metallic parts. These can subsequently discharge, generating
             electromagnetic interference.
             Apart from ionizing dose, particles can lose energy through non­ionizing
             interactions with materials, particularly through “displacement damage”, or
             “bulk damage”, where atoms are displaced from their original sites. This can alter
             the electrical, mechanical or optical properties of materials and is an important
             damage mechanism for electro­optical components (e.g. solar cells and
             opto­couplers) and for detectors, such as CCDs.
             For a more complete description of these effects refer to ECSS-E-ST-10-12.


## 9.2 Requirements for energetic particle radiation
      environments

### 9.2.1 Trapped radiation belt fluxes

#### 9.2.1.1 Long term average fluxes for Earth orbits

             a.    For Earth orbits other than those addressed in 9.2.1.2, the standard models
                   of the radiation belt energetic particle fluxes shall be the AE-8 and AP-8
                   models for electrons [RN.10] and protons [RN.11].
                            NOTE 1      These models are based on long term dataset
                                        averages and are most appropriate for long term
                                        cumulative effects on missions of more than 6
                                        months duration. Statistical variation and
                                        uncertainties can be significant and are
                                        presented in Annex I.


             b.    They shall be used together with the geomagnetic field models shown in
                   Table 9-1.


             c.    The version of the model, i.e. solar maximum/minimum that is
                   commensurate with the solar activity levels (MIN or MAX), of the mission
                   phase shall be used.


d.   The dates of Minima and Maxima that shall be used for solar cycles 1 to 24
     and the algorithm for forecasting future Minima and Maxima are
     presented in Annex B.1 and Table B-2.
             NOTE        As it is difficult to define the % of solar MIN and
                         MAX to apply for missions not scheduled in
                         Max or Min periods, a more conservative
                         analysis can be obtained for all periods using
                         AE8MAX for electron fluxes and AP8MIN for
                         proton fluxes.


e.   For analysis of the South Atlantic Anomaly (SAA), the drift of the SAA due
     to geomagnetic field evolution shall be included.
             NOTE        The translation of the orbit locations eastward in
                         longitude 0,3° per year since 1960 prior to
                         accessing the models provides a first
                         approximation to this drift. [RD.14].


#### 9.2.1.2 Long term Flux models for specific orbits

##### 9.2.1.2.1 Long term average fluxes in geostationary orbits

a.   For electron fluxes at altitudes within 500 km of geostationary orbits (35 786
     km) the standard model for Earth radiation belt energetic electrons shall be
     the IGE-2006 average model.
             NOTE        IGE-2006 model was previously called POLE
                         [RN.12] and Annex B.2.


b.   For conservative analysis, the IGE-2006 upper case model shall be used.
             NOTE        Information on model development               and
                         uncertainties can be found in [RN.33].


c.   The mission duration parameter used with the IGE2006 model shall be
     rounded up to the nearest integral year.


d.   For trapped proton fluxes in geostationary orbit, the trapped proton
     models (AP-8) specified in 9.2.1.1 shall be used.


##### 9.2.1.2.2 Long term fluxes in GNSS/Navigation orbits

a.    For electron fluxes in GPS orbits (circular, 20 200 km ± 500 km altitude; 55°
      Inclination) the standard model for Earth radiation belt energetic electrons
      shall be the ONERA MEOv2 average model (Annex B.3, [RN.13]).


b.    For conservative analysis, the upper case MEOv2 model shall be used.


c.    The mission duration parameter used with the MEOv2 model shall be
      rounded up to the nearest integral year.


d.    Extrapolation of the flux spectrum from the MEOv2 model to higher
      energies shall use the orbit averaged spectral form provided by AE-8
      MAX.


e.    For trapped proton fluxes, the trapped proton models (AP-8) specified in
#### 9.2.1.1 shall be used.


f.    For trapped electron fluxes at altitudes between 20 500 km and 24 000 km
      and the Inclination range of 55° ± 5°, either the AE-8 or the MEOv2 model
      may be used.
              NOTE        If used above 20 500 km altitude the MEOv2
                          model can provide conservative results. More
                          information on this model is given in Annex I.

##### 9.2.1.2.3 Long term fluxes for other orbits
Models for other orbits are available; more information on these models is given
in Annex I.


#### 9.2.1.3 Worst case trapped electron fluxes for internal
            charging analyses

a.    For Earth orbits, except the one in 9.2.1.3c, the FLUMIC V3 model [RN.14]
      (Annex B.4) shall be used.
              NOTE 1      These electron belt models are also appropriate
                          for short-term (from 1 day to 1 month) worst-
                          case cumulative radiation effect analyses.
              NOTE 2      For a conservative assessment with FLUMIC V3,
21 March 2005 corresponding to 0.219 ‘fraction


                         of year’ and 0.802 ‘fraction of solar cycle’ can be
                         assumed.


b.    For geostationary orbits, the NASA worst case model (Annex B.5) may be
      used.


c.    For GNSS orbits, the MOBE-DIC model (Annex B.10) shall be used.


d.    The highest flux reported by the models during the mission shall be used.


#### 9.2.1.4 Worst case trapped proton fluxes
There is no provision in this standard related to peak or worst case trapped
proton fluxes. These particles can be significant for certain applications and
effects, such as sensor interference.


### 9.2.2 Solar particle event models
Standard solar particle event models do not include electrons. These electrons
can be significant for certain applications and effects like internal charging.
Information on typical electron fluxes during solar particle events is given in
[RD.15], [RD.16].


#### 9.2.2.1 Directionality

a.    Fluxes and fluences of solar energetic particles shall be assumed to be
      isotropic.
              NOTE       Anisotropic distributions do exist in near-Earth
                         space due to geomagnetic shielding (see clause
                         9.2.4) and in the early stages of a SPE, where
                         particles arrive along interplanetary field lines.
                         The direction of the interplanetary magnetic
                         field can be variable and not along the Earth-Sun
                         direction. An isotropic distribution is assumed
                         due to a lack of knowledge for specific events.


#### 9.2.2.2 Solar Particle Fluence Models

a.    Proton fluence spectra from Solar Particle Events integrated over mission
      durations (of 1 year or more) shall be derived using the ESP model [RN.15]
      described in Annex B.6.


b.   For mission durations shorter than 1 year, the fluences for one year shall
     be used [RN.15].
             NOTE       For mission durations shorter than 1 year, this
                        results in a conservative fluence estimate.


c.   When using the model to calculate fluences for mission durations longer
     than 1 solar cycle (11 years), the model shall be used with the total number
     of years of high solar activity during the mission.


d.   For interplanetary missions, the results of the solar particle models shall
     be scaled by a factor calculated as the mean value over the mission of: r-2
     for r<1AU [RN.16] and 1 for r>1AU, where r is in units of AU.
             NOTE       Beyond 1 AU using a factor of 1 corresponds to
                        a conservative estimate of the maximum
                        coefficient recommended in [RN.16].


e.   For calculations of geomagnetic shielding all ions shall be treated based on
     CREME96 ionization states.


f.   If CREME96 specified in 9.2.2.2e does not provide ionization states the ions
     shall be treated as half ionised.


g.   Electron fluence from Solar Particle Events (SPEs) integrated over mission
     durations, of 6 months or more, may be derived using the IEM model
     [RD.150].
             NOTE       This is considered only relevant for applications
                        such as sensitive instrument background on
                        interplanetary missions. The fluxes and energies
                        provide a negligible contribution to cumulative
                        effects compared to solar protons or trapped
                        particle fluxes.


#### 9.2.2.3 Solar Particle Peak Flux Models

a.   For solar particle fluxes (protons and other ions), either the CREME96
     model [RN.18] (only available online) or Table B-10, Table B-11, and Table
     B-12 shall be used.


b.   In Table B-10, Table B-11, and Table B-12 all ions shall be treated as fully
     ionised for geomagnetic shielding calculations.
             NOTE       In cases where the instantaneous solar proton flux
                        is required or as a function of time during an
                        event, there are several large events that have
                        been measured, their spectral fits are provided in
                        Annex I.2.4.


c.   For maximum SPE electron fluences, the IEM model [RD.150] may be used.
             NOTE       This is considered only relevant for applications
                        such as sensitive instrument background on
                        interplanetary missions. The fluxes and energies
                        provide a negligible contribution to cumulative
                        effects compared to solar protons or trapped
                        particle fluxes.


### 9.2.3 Cosmic ray models

a.   The ISO 15390:2004 Model [RN.19] of galactic cosmic rays shall be used for
     GCR flux calculations.
             NOTE       Although cosmic ray fluxes increase gradually
                        with heliocentric distance, it is a reasonable
                        engineering approximation for current missions
                        to assume uniformity throughout the
                        heliosphere.


### 9.2.4 Geomagnetic shielding

a.   The minimum energies, i.e. cut-off energies, necessary for ions to penetrate
     to a geographic location shall be calculated with one of the following
     methods:
     1.    Størmer’s theory [RN.20]
     2.    MAGNETOCOSMICS [RN.21]
     3.    The method given by Smart and Shea in [RN.22]
     4.    Stassinopoulos & King: no geomagnetic shielding for McIlwain L-
           shells greater than 5 RE [RN.23]
     5.    No geomagnetic shielding for a conservative estimate.


### 9.2.5 Neutrons

             a.   To assess the atmospheric albedo neutron fluxes the models given in
                  Annex I.7 may be used.


             9.2.6a.b.9.2.7      L2 and the Deep Magnetotail Environment

             a.   The interplanetary environment shall apply for the energetic particle
                  environment at L2 and the deep tail.


             b.   For specific cases, as X-ray optics and detectors, the population of medium
                  energy charged particles should be evaluated.
                          NOTE       Further information is provided in Annex I.7.


## 9.3 Preparation of a radiation environment specification
             a.   A specification of the expected radiation environment of a space system
                  shall be established.


             b.   The specification of a mission environment shall include:
                  1.    Mission­average proton and electron energy spectra from trapped
                        radiation issued from the chosen models (according to mission orbit
                        and time).
                  2.    The fluence spectrum of solar protons for the complete mission with
                        geomagnetic shielding applied.
                  3.    Maximum instantaneous energy spectra of trapped electrons,
                        trapped protons and solar energetic protons (geomagnetically


           shielded) for the mission, for internal charging and sensor
           interference analysis.
     4.    The ion LET flux spectrum derived from the GCR flux spectra for
           the appropriate solar cycle phase, together with the worst 5 minute
           solar energetic particle LET spectrum, including:
           (a)   Contributions from all ions from Z = 1 to Z = 92.
           (b)   Geomagnetic shielding.
           (c)   Material shielding. If no justification is available for another
                 value, 1 g cm-2 of aluminium shielding is used.
     5.    The ion LET fluence spectrum derived from the GCR fluence spectra
           for the appropriate solar cycle phase, together with the fluence
           spectra from a number of events at worst day CREME96 solar
           energetic particle LET spectrum, including:
           (a)   Contributions from all ions from Z = 1 to Z = 92.
           (b)   Geomagnetic shielding.
           (c)   Material shielding. If no justification is available for another
                 value, 1 g cm-2 of aluminium shielding is used.
     6.    Orbital time­behaviour of radiation­belt (if any), cosmic ray and
           solar energetic particle fluxes if the mission has a susceptibility to
           radiation background in sensors.
     7.    Additional   contributions    from   on­board    nuclear/radioactive
           sources.
     8.    Uncertainties of the radiation models as applied for the given
           mission.


c.   The uncertainties in results from the models shall be included in the risk
     assessment.


d.   The specification shall include the evolution of the mission orbit whether
     caused naturally or by deliberate orbit manoeuvres.
             NOTE       This can have significant effects on
                        radiation­belt exposure (e.g. due to natural
                        perigee rise and apogee fall).


e.   The effects of operations that result in geo­synchronization of the orbit
     shall be included in the assessment
             NOTE 1     For example: geostationary, apogee longitude
                        maintenance of near­synchronous HEO orbits.
             NOTE 2     In such missions radiation belt exposures are not
                        averaged out.


## 9.4 Tables


       Table 9-1: Standard field models to be used with AE8 and AP8
                Radiation­belt model        Geomagnetic field model
                AE-8-MIN               Jensen­Cain 1960 [RN.24]
                AE-8-MAX               Jensen­Cain 1960
                AP-8-MIN               Jensen­Cain 1960
                AP-8-MAX               GSFC 12/66 extrapolated to 1970 [RN.25]


                       Space debris and meteoroids

## 10.1 Introduction and description

### 10.1.1 The particulate environment in near Earth
                         space
            Every spacecraft in Earth orbit is exposed to a certain flux of natural
            micrometeoroids and man­made space debris. Collisions with these particles
            take place with hypervelocity speed.
            The damage caused by collisions with meteoroids and space debris depends on
            the size, density, speed and direction of the impacting particle and on the
            characteristics of the impacted structure.
            Impact analysis techniques fall naturally into two different categories: larger,
            trackable pieces and smaller, non­trackable particles.
            Trackable orbiting objects, whose orbital elements are known, can be propagated
            along their orbit and their chance of a future collision with another spacecraft or
            fragment can be assessed. This deterministic approach provides at the same time
            all relevant parameters of such a potential collision, like impact velocity and
            direction.
            For meteoroids and the abundant smaller space debris particles which cannot be
            tracked, the risk assessment is supported by statistical flux models as described
            in the subsequent chapters.


### 10.1.2 Space debris
            Space debris are man-made objects that are remainders of human spaceflight
            activities. In early 2018 only 9% of the publicly available catalogued orbit
            population are operational spacecraft, while 33% can be attributed to
            decommissioned satellites, spent upper stages, and mission related objects
            (launch adapters, lens covers, etc.). The remainder of 58% is mostly originating
            from more than 250 on-orbit fragmentations which have been recorded since
            1961. These events are collisions (in at least seven cases) and explosions of
            spacecraft and upper stages. The total population of objects larger than 1 cm is
            on the order of 750 000 to 1 000 000.
            One of the major sources of space debris, fragmentations of space objects,
            originates from spare fuel that mostly remains inside pressurized tanks once the
            rocket stage is discarded into Earth orbit. Over time, and in the harsh
            environment of space, the mechanical integrity of the booster's internal
            components breaks down and tanks start to leak. The resulting sudden releases
            of pressure or even high energetic explosions expel numerous fragments into
            orbit. The most important non-fragmentation source is solid rocket motor firings
            during which aluminium oxide (Al2O3) in the form μm-sized dust and mm to cm-


            sized slag particles is exhausted. A second important source was the ejection of
            reactor cores during the end of operation of the Russian RORSATs (Radar Ocean
            Reconnaissance Satellites) in the 1980’s, which released droplets of the reactor
            coolant (sodium potassium alloy (NaK)) into space. Another historic source was
            the release of thin copper wires as part of a radio communication experiment
            during the MIDAS missions in the 1960’s. Finally, under the influence of the
            harsh space environment (extreme ultra violet radiation, impinging atomic
            oxygen and micro particle impacts), surfaces of space objects start to erode. This
            leads to mass losses of surface coatings and to the detachment of flakes of the
            surface paint, both with μm and mm sizes.


### 10.1.3 Meteoroids
            Meteoroids are particles of natural origin. Nearly all meteoroids originate from
            asteroids or comets. The natural meteoroid flux represents, at any instant, a total
            of about 200 kg of mass within 2 000 km of the Earth surface [RD.21].
            Meteoroid streams are accumulations of meteoroids with nearly identical
            heliocentric orbits. Relative to Earth all particles of a given meteoroid stream
            have nearly identical impact directions and velocities. Encounters with
            meteoroid streams typically last from a few hours to several days.
            Meteoroids which do not form part of identified streams are called sporadics.
            Their flux is fairly constant over the year and they do not follow any apparent
            pattern with respect to incident direction or velocity. The annual integrated flux
            of meteoroid streams amounts to about 10% of the sporadic meteoroid flux.


## 10.2 Requirements for impact risk assessment and model
     selection

### 10.2.1 General requirements for meteoroids and
                         space debris

            a.    Impact risk assessments shall be performed for space debris and meteoroid
                  populations.


            b.    The statistical flux models specified in 10.2.2 shall be used tailored for the
                  specific mission parameters.


            c.    The directional and velocity distributions of the space debris and
                  meteoroid fluxes shall be included in the impact risk assessment.


### 10.2.2 Model selection and application

#### 10.2.2.1 Space debris

a.   The space debris part of the MASTER-8 model [RN.26] shall be used for
     Earth orbits with perigee altitudes below 36 786 km.


b.   The model shall be used for all mission durations.


c.   The model shall be used for particle diameters from 1 µm to 100 m.


d.   For conversion between mass and diameter the following shall be used:
     1.    An average density of 2,8 g cm-3.
     2.    A spherical shape.
             NOTE       The density of 2,8 g cm-3 represents the average
                        density of space debris objects > 1mm.
                        Additional information is given in Annex
                        J.2.2.1.4.


e.   Densities and shapes different from ones specified in requirement
     10.2.2.1d may be included in specific cases.


f.   The MASTER-8 flux model [RN.26] shall be used together with the
     following input parameters:
     1.    Timeframes between 1957 and 2066.
     2.    The size interval given in terms of diameter.
     3.    Condensed population, with all sources included.
     4.    The model intrinsic future prediction.
             NOTE 1     Access points for the ESA MASTER-8 model and
                        its patches are defined in Annex J.2.2.1, together
                        with model characteristics, uncertainties, some
                        general aspects and other space debris flux
                        models.
             NOTE 2     Tabulated reference values are provided in
                        Annex J.5.


               NOTE 3      Due to the dynamic nature of the debris
                           environment significant and abrupt increases of
                           populations can occur.
               NOTE 4      The condensed population files combine all
                           individual populations. This results in a reduced
                           file size on the file system and saves
                           computation time. Individual population files
                           are still an option in MASTER-8 but are
                           recommended to be used for special cases only.


g.   Later versions of MASTER-8 or population files may be applied
               NOTE        For details how to obtain later verisons, see
                           Annex J.2.2.1.2.


h.   For specific missions, the debris flux implemented in ORDEM 3.0 [RN.36]
     may be used for Earth altitudes below 40 000 km.


i.   For ORDEM 3.0 debris model the following shall be used:
     1.      Time range from 2010 to 2035
     2.      Nominal flux (zero sigma)
     3.      the density model implemented in ORDEM 3.0
     4.      particle diameters of 10 micron to over 1 m for altitudes below
34 000 km
     5.      particle diameters of 10 cm to over 1 m for altitudes from 34 000 to
40 000 km.


j.   For Earth altitudes not covered by 10.2.2.1a or 10.2.2.1h space debris flux
     may be neglected.


#### 10.2.2.2 Meteoroids

a.   The Grün model [RD.22] shall be used to determine near-Earth meteoroid
     environments.
               NOTE 1      It gives the total average meteoroid flux
                           (sporadic + stream average) in terms of the
                           integral flux Fmet,0 as:

          Fmet , 0 (m) = 3,15576 × 10 7 (F1 (m) + F2 (m) + F3 (m) )        (10-1)

                           where


                         Fmet,0   is     the    unshielded      isotropic
                         interplanetary flux at 1 AU distance from the
                         Sun. It gives the number of particles with mass
                         m or larger per m2 per year impacting a single-
                         sided randomly­tumbling flat plate.
                         and
                         𝐹𝐹1(𝑚𝑚) = (2,2 × 103 𝑚𝑚0,306 + 15)-4,38
                         𝐹𝐹2(𝑚𝑚) = 1,3 × 10-9 (𝑚𝑚 + 1011 𝑚𝑚2 + 1027 𝑚𝑚4 )-0,36
                         𝐹𝐹3(𝑚𝑚) = 1,3 × 10-16 (𝑚𝑚 + 106 𝑚𝑚2 )-0,85
                         with m in g
             NOTE 2      The near-Earth environment includes Earth and
                         Lunar orbits and the Lagrange points of the Sun-
                         Earth and Earth-Moon systems.
             NOTE 3      Tabulated reference values are provided in
                         Table J-5.


b.   The models specified in 10.2.2.2a and 10.2.2.2h shall be used for all mission
     durations.


c.   For missions of less than 3 weeks duration the flux from the meteoroid
     stream model specified in 10.2.4.5 shall be added for the given mission
     period.


d.   For conversion between mass and diameter and for impact damage
     assessments the following shall be used:
     1.    A density of 2,5 g cm-3 for the Grün model and 1,0 g cm-3 for the
           MEMR2 model.
     2.    A spherical shape.


e.   The meteoroid model given in 10.2.2.2a shall be used together with the
     normalised velocity distribution of meteoroids at 1 AU [RD.27] given in
     Table C-1.


f.   The velocity distribution in Table C-1 shall be adjusted to reflect the
     altitude dependence of the meteoroid model given in Annex C according
     to one of the procedures specified in Annex C.1.5.1.
             NOTE        The velocity correction which is used to increase
                         the flux with decreasing distance from the Earth
                         is used to adjust the velocity distribution which
                         is then re-binned accordingly.


g.   For Earth and Lunar orbits, the unshielded flux Fmet,0 specified in 10.2.2.2a
     shall be modified to account for the gravitational attraction as specified in
     Annex C.1.5.2.
             NOTE         This enhances the meteoroid flux in the Earth
                          proximity.


h.   For specific missions, the MEM and LunarMEM models or the Divine-
     Staubach model may be used.
             NOTE         For interplanetary orbits no reference model is
                          specified. Available interplanetary meteoroid
                          flux models are given in Annex J.2.1.5.


i.   The MEMR2 flux model [RN.37] shall be used with the following input
     parameters:
     1.    Mass range 10-6 - 10 g
     2.    Constant particle density of 1 g/cm3


j.   For lunar environments the MEMR2 flux model [RN.37] shall be used with
     the following input parameters:
     1.    Radius up to 66000 km from the Moon
     2.    Mass range 10-6 - 10 g
     3.    Constant particle density of 1 g/cm3


k.   The Divine-Staubach model [RD.108] shall be used with following input
     parameters:
     1.    Mass range 10-12 g to 1 g.
     2.    Inherent velocity distribution model.
     3.    Particle density equal to:
           (a)     2,0 g/cm3 for m < 10-6 g
           (b)     1,0 g/cm3 for 10-6 g < m < 10-2 g
           (c)     0,5 g/cm3 for 10-2 g < m


10.2.3a.10.2.4     The meteoroid model

10.2.4.1a.10.2.4.2a.10.2.4.3a.10.2.4.4a.b.10.2.4.5   Meteoroid streams fluxes

a.   For the calculation of meteoroid stream fluxes, the meteor stream
     parameters given in Table C-2 shall be used together with the flux
     calculation procedure given in Annex C.1.4.2 and C.1.4.3.


b.   For each meteoroid stream the specific particle velocity shall be
     considered.


c.   For meteoroid stream particles a mass density of 1,0 g cm-3 shall be used.
             NOTE       This meteoroid stream model              is   also
                        implemented in MASTER-2005


### 10.2.5 Impact risk assessment
a.   For the translation of flux F into number of impacts N, a linear increase of
     N with exposed area and with exposure time shall be used, as follows:

                          N = F ⋅ A ⋅T                                   (10-2)

           Where:
           N     is the number of impacts;
           F     is the particulate flux per unit time and unit area;
           A     is the total exposed area;
           T     is the exposure time.


b.   Impact risk analyses based on the number of impacts N shall be conducted
     through the application of Poisson statistics.


c.   The probability Pn of exactly n impacts occurring in the corresponding time
     interval shall be determined according to the expression:

                             N n  -N
                      Pn =      e                                    (10-3)
                             n! 

               NOTE      Additional information on the conduct of impact
                         risk assessments is provided in Annex [RD.91].


d.   Simplified assessments may be performed with an average velocity and a
     constant impact angle of 45 degrees from the surface normal.
               NOTE      Typical average impact velocity for space debris
                         in LEO is 10 km/s, 5 km/s for space debris in
                         GEO and of 20 km/s for meteoroids.


### 10.2.6 Margins
a.   For a nominal assessment of the space debris and meteoroid populations
     in the near-Earth environment the nominal flux models shall be applied
     without additional margin or uncertainty factors.
               NOTE      The flux models given in 10.2.2 and 10.2.3 were
                         developed as best estimates rather than as
                         conservative ones. Information on the model
                         uncertainties is given in Annex J.2.3.


                                                           Contamination

## 11.1 Introduction and description

### 11.1.1 Introduction
            This clause deals with the induced molecular and particulate environment in the
            vicinity of and created by the presence of a spacecraft in space. It is meant mainly
            to aid in the definition of the contamination environment of a satellite.
            The quantitative modelling of this contamination environment is very complex.
            This is due to the high number of materials involved, with a variability of
            outgassing characteristics. Furthermore, there are interactions of the outgassing
            products with surfaces, residual gas and with other environmental parameters
            such as solar radiation and atomic oxygen.
            The contamination analysis, which necessarily is very much dependent on a
            specific project/application, is not detailed in this standard. ECSS-Q-ST-70-01
            defines amongst others the requirements to be followed and guidelines to be
            taken into account in order to control the particulate and molecular
            contamination within the specified limits during mission. It also includes a list of
            potential contamination effects on space hardware.


### 11.1.2 Description of molecular contamination

#### 11.1.2.1 Primary sources of molecular contamination

##### 11.1.2.1.1 Outgassing of organic materials
            Outgassing of organic materials can be approached as a surface evaporation
            combined with diffusion for bulk contaminant species. These species can be
            either initially present components, or decomposition products.
            Initially present outgassing species can be: water, solvents, additives, uncured
            monomeric material, lubricants, ground contamination species, due to e.g.
            processes, test, storage, handling, pre­launch and launch.
            The decomposition products are due to exposure of molecular materials to other
            environments, such as: thermal, solar radiation, electromagnetic and charged
            particles, atomic oxygen, impacts by micrometeoroids or debris, electrical
            discharges and arcing
            These products consist of lower molecular weight (higher volatility) species than
            the original species.

##### 11.1.2.1.2 Plumes
            Plume species can result from combustion, unburned propellant vapours,
            incomplete combustion products, sputtered material and other degradation


products from a propulsion or attitude control system and its surroundings
swept along with the jet.
Plumes can also be produced by dumps of gaseous and liquid waste materials of
the environment control and life support systems in manned spacecraft or by
leaks in systems or internal payloads. Return flux or back flow is possible due to
ambient scattering, self scattering or diffusion processes.

##### 11.1.2.1.3 Pyrotechnics and release mechanisms
During operation of pyrotechnics or other release mechanisms gases can evolve.


#### 11.1.2.2 Secondary sources of molecular contamination
A surface can act as a secondary source if an incoming contaminant molecule
reflects (i.e. does not accommodate, stick or condense on the surface) or if it has
a limited residence time on that surface. Secondary sources can for example be
solar panels having a higher temperature than the surrounding surfaces.


### 11.1.3 Transport mechanisms
Main transport mechanisms are: reflection on surfaces, re­evaporation from
surfaces, migration on surfaces, collisions with the residual (natural) atmosphere,
collisions with other outgassed molecules, ionization by other environmental
parameters.


### 11.1.4 Description of particulate contamination

#### 11.1.4.1 Sources of particulate contamination
Sources inherent to materials are: particles originating from manufacturing
(machining, sawing), handling (e.g. for brittle materials such as certain paints) or
wear (friction); degradation of binder under different environments (e.g. AO,
UV) resulting in loose filler; crack formation and subsequent flaking as a result
of thermal cycling; formation of particles due to oxidation in an atomic oxygen
environment.
Sources external to materials are: Dust particles caused by atmospheric fall­out
(dust) during assembly, integration and storage or by human sources during
such activities (e.g. hair, skin flakes, lints or fibres from garments); particles
produced during spacecraft propulsion or attitude control operations, the
functioning of moving parts (such as shutters), and water dumps; particles
resulting from micrometeoroid or debris impacts on materials.


### 11.1.5 Transport mechanisms
Particles can be transported by vibrations due to launch, on-orbit manoeuvring
and docking. Pyrotechnic shocks can cause particles to migrate from one surface
to another.
Particles can be charged due to their interaction with ambient plasma or photo
emission, and subsequently attracted by electrically charged surfaces.


                     For specific missions other mechanisms can have an effect on the particles, such
                     as: drag, due to the residual atmosphere in the lowest Earth orbits; radiation
                     pressure due to solar radiation; gravitational tide, e.g. re­attraction to spacecraft.


## 11.2 Requirements for on-orbit contamination assessment
                     a.      The evaluation of contamination levels on sensitive items should include
                             the interaction with the following space environment components:
                             1.     Atmospheric density at altitudes below 250 km
                             2.     Atomic oxygen at altitudes below 400 km
                             3.     UV radiation
                             4.     EM and particle radiation.
                                      NOTE         Synergistic effects are indicated in Table 11-1.


                     b.c.d.Table 11-1: Contamination levels - interaction with the space environment
                                  components
Environment               Clause                           Effect
component
Atmosphere density        7 - Neutral atmosphere           Collision scattering with atmosphere
level                                                      particles
Atomic Oxigen             7 - Neutral atmosphere           Erosion and modification of deposited
                                                           contamination on sensitive items
UV                        6 - Natural electromagnetic      Deposition fixation on sensitive surfaces
                          radiation and indeces            (sticking factors) and optical properies
                                                           modification
EM and particle           6 - Natural electromagnetic      Outgassing product ionization
radiation                 radiation and indeces
# 9 - Energetic particle
                          radiation


                         Annex A (normative)
        Natural electromagnetic radiation and
                                      indices

A.1   Solar activity values for complete solar cycle
             Table A-1 lists the minimum, mean and maximum daily and 81­day averaged
             values for F10.7, S10.7 and M10.7 for each month of solar cycle 23. The values are
             averaged over 30-day (1 month) intervals. This table is referred to in 6.2.2, 6.2.3
             and 7.2.1.


A.2     Tables
                             Table A-1: Solar cycle 23 solar activity indices averaged over 30-day (1 month) intervals.
                                                                     (Part 1 of 4)
Month   F10min   F10mean   F10max   F81min   F81mean   F81max   S10min   S10mean   S10max   S81min   S81mean   S81max   M10min   M10mean   M10max   M81min   M81mean    M81max
0       72       74        77       74       76        78       74       78        82       78       79        79       65       72        76       72       73         74
1       71       74        81       74       74        74       74       77        82       78       78        78       62       71        75       72       72         73
2       70       74        76       74       74        74       73       79        83       78       79        79       66       73        80       73       73         74
3       69       74        81       74       74        74       74       80        86       79       80        81       67       75        86       74       75         76
4       71       75        85       72       73        74       78       83        91       81       81        81       72       78        87       76       76         77
5       68       72        77       72       72        73       78       81        87       81       81        82       70       76        86       76       76         77
6       67       71        80       73       73        77       75       80        87       82       83        86       68       75        85       76       77         80
7       70       78        92       77       82        85       80       88        95       86       89        93       73       81        92       80       83         87
8       85       96        119      85       87        90       95       100       103      93       96        98       81       94        101      87       89         92
9       79       85        90       90       92        93       92       98        103      98       100       102      85       91        98       92       93         95
10      86       97        118      93       94        96       97       103       119      102      102       103      84       95        118      95       95         97
11      85       100       117      96       97        97       95       105       120      103      104       105      84       100       121      97       98         99
12      81       95        108      94       95        97       92       104       110      103      104       105      85       100       114      97       98         99
13      83       94        107      94       97        101      93       104       110      103      105       108      85       98        114      97       99         101
14      90       108       133      101      105       108      97       109       123      108      110       113      83       103       117      101      105        108
15      88       109       141      108      109       110      101      118       131      113      115       116      94       114       147      108      110        112
16      87       107       133      106      107       109      101      114       125      116      116       117      90       111       129      112      113        113
17      93       104       117      106      108       109      103      117       128      116      117       117      90       110       124      113      116        118
18      99       114       129      108      116       123      118      118       118      117      118       119      101      125       150      118      123        128
19      109      130       154      123      128       131      118      118       118      118      118       118      120      132       144      128      131        133
20      117      141       179      130      132       133      118      118       118      118      118       119      121      139       151      132      134        135
21      112      123       143      128      130       132      118      118       118      119      123       127      117      132       147      131      133        134
22      103      128       162      129      133       139      118      133       150      127      133       138      109      129       156      133      135        137
23      126      147       168      139      142       147      127      146       159      138      141       142      116      141       175      137      139        140
24      110      147       184      143      145       147      134      141       148      139      140       140      109      140       170      137      139        140
25      99       146       205      137      141       144      115      135       159      137      138       139      102      140       172      134      136        138
26      110      133       157      130      132       137      129      143       154      137      138       138      117      137       159      130      133        134
27      100      117       141      127      128       131      118      135       151      138      139       142      101      125       157      130      131        133
28      98       135       178      131      138       148      111      142       168      142      147       154      97       131       175      133      138        145
29      137      157       176      148      156       162      140      162       179      154      161       166      121      151       175      145      152        157
30      130      166       210      162      165       168      156      174       200      166      169       170      132      163       197      157      159        161
31      123      164       216      157      164       169      146      165       190      162      168       171      129      156       187      154      159        162
32      107      161       248      153      155       157      136      162       194      158      161       162      121      155       202      150      153        154
33      122      149       200      154      160       167      148      157       168      158      160       162      130      152       167      150      153        156


                           Table A-1: Solar cycle 23 solar activity indices averaged over 30-day (1 month) intervals.
                                                                            (Part 2 of 4)
Month   F10min   F10mean    F10max   F81min   F81mean   F81max   S10min   S10mean   S10max   S81min   S81mean   S81max   M10min   M10mean   M10max   M81min   M81mean    M81max
34      143      184        249      167      172       181      151      166       187      162      166       170      134      161       195      156      159        164
35      143      175        221      175      177       181      153      176       193      168      171       173      139      165       186      161      164        167
36      130      172        217      163      167       177      143      170       200      170      171       173      125      165       209      163      164        167
37      126      159        208      165      172       181      142      173       196      171      174       179      129      166       209      163      166        171
38      141      193        233      181      186       191      157      182       201      179      184       189      131      171       196      171      175        181
39      164      199        234      189      192       195      173      198       214      187      189       191      156      189       213      178      180        183
40      127      174        244      182      187       194      165      181       206      186      188       191      146      171       199      177      179        182
41      146      193        262      181      185       194      165      185       212      184      186       192      141      175       210      173      176        183
42      156      188        245      186      190       196      176      193       222      192      194       197      152      183       224      181      184        187
43      148      191        262      178      181       186      185      208       234      193      195       197      162      196       236      182      184        187
44      131      159        194      170      177       184      162      184       212      184      189       193      131      175       220      174      179        183
45      133      184        232      171      172       174      166      179       197      181      182       184      150      173       196      173      174        174
46      150      172        204      171      175       179      171      185       197      181      182       183      137      177       211      173      174        176
47      135      168        205      171      174       176      156      178       224      183      184       184      126      165       211      174      175        176
48      144      180        201      166      171       174      158      186       209      179      182       183      139      177       203      170      174        176
49      148      163        184      155      161       166      174      179       185      171      176       179      154      176       188      159      166        170
50      130      145        177      155      163       168      158      164       179      171      174       176      127      147       179      158      162        164
51      134      193        274      165      169       170      155      185       218      173      174       174      141      170       216      157      158        159
52      123      163        196      166      170       172      152      170       186      173      174       174      116      157       188      158      161        163
53      130      147        180      155      161       166      151      163       173      168      170       173      125      153       173      161      161        163
54      116      165        221      150      151       155      151      174       190      165      166       168      142      170       194      159      160        161
55      115      137        167      151      156       163      142      156       168      166      167       168      133      149       172      159      160        162
56      143      177        226      163      180       193      167      175       195      168      177       185      145      166       188      162      169        177
57      173      230        285      193      209       222      189      204       230      185      195       203      173      197       223      177      189        197
58      171      215        248      216      219       222      192      208       232      203      205       206      176      201       234      197      199        201
59      170      215        271      214      221       226      182      201       232      204      206       209      168      197       225      200      203        206
60      206      234        275      223      224       226      197      213       232      207      210       213      196      214       233      203      209        212
61      189      229        261      213      221       227      197      218       235      210      212       213      195      220       243      210      213        214
62      172      197        235      200      204       213      191      202       213      200      205       210      192      203       228      200      204        210
63      166      184        217      185      190       200      181      189       195      190      194       200      176      186       202      189      193        200
64      147      185        226      179      182       185      171      189       203      181      185       190      167      188       212      183      186        189
65      157      178        191      159      169       179      161      179       194      168      176       181      157      185       210      171      178        183
66      131      146        170      159      163       165      150      161       174      163      166       168      143      164       188      165      168        171
67      129      177        242      163      169       177      144      162       181      163      165       168      139      165       201      165      167        170
68      135      183        241      177      182       183      149      172       202      168      171       172      134      173       214      170      173        176
69      136      173        221      174      177       182      150      173       198      169      172       173      144      175       207      173      175        176
70      136      168        183      164      170       174      150      165       180      163      166       169      146      169       190      165      169        173
71      137      168        199      162      165       169      149      161       176      160      163       166      140      162       185      161      165        169
72      114      157        213      148      157       162      135      164       177      154      158       161      130      164       193      153      159        163
73      115      144        189      137      143       148      133      149       172      144      150       154      128      149       182      143      149        154


                           Table A-1: Solar cycle 23 solar activity indices averaged over 30-day (1 month) intervals.
                                                                            (Part 3 of 4)
Month   F10min   F10mean    F10max   F81min   F81mean   F81max   S10min   S10mean   S10max   S81min   S81mean   S81max   M10min   M10mean   M10max   M81min   M81mean    M81max
74      102      125        150      129      133       137      111      135       151      133      139       144      109      130       163      132      137        143
75      89       132        160      126      127       129      102      131       153      126      130       133      94       131       172      126      129        132
76      99       127        160      121      123       126      109      128       149      123      125       126      106      131       158      123      125        126
77      92       117        154      122      124       126      104      123       142      124      125       126      94       122       147      123      125        128
78      106      128        193      125      126       127      107      125       139      125      126       127      103      126       151      127      128        131
79      100      129        157      123      126       128      110      128       134      125      126       127      113      134       150      129      130        131
80      99       121        137      118      120       123      108      122       136      123      124       126      118      127       140      127      128        130
81      94       110        134      115      121       132      106      121       136      122      123       126      106      123       144      125      127        130
82      92       134        257      129      134       141      110      124       161      123      125       127      102      128       163      126      129        133
83      91       158        279      137      138       141      100      132       185      124      125       127      92       136       187      128      130        133
84      86       123        175      122      129       140      92       122       150      117      120       124      84       128       173      122      124        129
85      102      119        137      111      115       122      97       114       136      112      114       117      96       119       156      113      116        122
86      87       102        118      109      110       113      96       109       120      109      111       113      88       107       127      109      111        114
87      90       110        127      106      107       110      101      110       122      110      111       112      90       107       123      108      109        112
88      88       108        129      104      105       106      101      113       125      109      110       110      99       112       126      107      108        109
89      85       99         118      99       101       104      99       105       111      104      106       109      95       104       115      103      105        108
90      83       99         119      97       102       108      97       101       107      102      103       104      87       102       116      101      103        105
91      78       114        175      106      109       112      89       106       125      103      104       105      81       108       142      102      104        106
92      83       117        165      111      113       115      88       105       118      105      105       106      79       107       135      105      107        108
93      86       105        131      102      107       114      97       105       112      102      104       106      85       108       131      103      106        108
94      87       92         112      106      107       108      92       97        111      104      104       105      86       98        109      106      107        109
95      95       122        141      106      106       107      103      111       122      104      104       105      99       113       131      107      107        109
96      85       99         113      101      105       107      92       101       113      101      102       104      87       105       129      103      106        108
97      83       103        145      98       100       101      89       99        119      96       98        101      83       101       117      98       101        103
98      82       101        133      97       98        99       85       99        119      93       95        96       79       102       121      95       97         98
99      74       92         114      91       93        97       76       89        101      89       91        93       72       92        113      92       93         95
100     77       84         90       90       91        93       81       87        92       88       89        90       75       89        101      91       92         94
101     77       99         126      92       93        95       81       90        100      89       89        90       75       93        109      93       93         94
102     82       96         116      94       97        99       84       90        98       89       91        92       79       96        107      94       95         97
103     72       95         130      93       94        95       77       91        107      89       90        91       72       94        123      92       94         95
104     71       87         111      91       92        95       72       85        103      89       89        90       71       89        118      92       93         94
105     74       95         119      85       89        91       74       90        101      84       86        89       72       93        110      88       90         92
106     72       82         112      84       85        85       73       83        98       82       83        84       71       88        105      85       87         88
107     72       78         100      83       84        85       70       78        83       80       81        82       71       81        91       84       85         86
108     80       92         106      85       86        88       78       83        89       81       82        83       79       88        102      85       86         87
109     77       85         93       83       86        88       76       84        93       82       83        83       75       88        107      85       86         87
110     74       81         94       78       81        83       72       79        88       77       80        82       72       81        96       80       83         85
111     72       76         79       78       79        80       71       75        79       77       77        77       70       78        86       79       80         80
112     72       83         100      79       81        82       71       79        88       77       79        80       72       82        91       80       82         83
113     72       85         101      82       83        83       74       84        89       80       81        82       77       90        108      83       85         86


                           Table A-1: Solar cycle 23 solar activity indices averaged over 30-day (1 month) intervals.
                                                                              (Part 4 of 4)
Month   F10min   F10mean    F10max   F81min    F81mean   F81max   S10min   S10mean    S10max   S81min   S81mean   S81max   M10min   M10mean      M10max   M81min   M81mean    M81max
114     72       78         85       78        80        82       72       79         88       78       80        81       69       83           97       81       84         85
115     70       77         87       76        77        78       70       76         82       75       76        78       70       79           91       78       80         81
116     70       73         85       77        78        79       69       72         76       74       74        75       67       75           82       78       78         79
117     73       82         89       77        78        78       70       75         82       74       74        74       67       80           92       76       77         78
118     70       76         85       78        78        79       67       75         81       74       74        75       66       77           92       75       76         76
119     70       78         91       79        80        83       66       72         81       74       74        75       63       71           81       74       75         76
120     77       89         103      82        83        85       73       78         90       74       74        75       63       78           86       74       76         77
121     72       83         94       83        84        85       68       74         80       74       75        75       62       77           89       76       77         77
122     76       83         92       79        80        83       72       74         77       72       73        74       67       76           84       73       75         76
123     71       74         78       74        76        79       67       70         75       70       71        72       65       70           74       70       72         73
124     69       72         75       73        73        74       64       68         73       68       69        70       64       68           74       69       69         70
125     68       75         87       73        74        75       63       67         71       68       68        69       62       69           80       69       70         71
126     67       75         87       74        74        75       66       70         79       68       68        69       64       72           89       70       71         72
127     65       71         84       72        73        74       61       68         79       67       68        69       62       72           89       70       71         72
128     66       71         79       70        70        72       62       66         70       65       66        67       61       69           76       68       69         70
129     67       69         72       68        69        70       61       64         66       63       64        65       60       65           69       66       66         68
130     65       67         69       68        68        68       60       61         62       61       62        63       61       64           67       65       65         66
131     67       68         69       68        69        71       59       61         66       61       61        62       61       64           67       65       66         69
132     67       70         75       71        73        74       59       61         64       62       62        64       62       68           80       69       71         72
133     71       79         94       74        75        75       60       65         71       64       64        65       62       79           94       72       72         72
134     70       74         80       72        74        75       61       67         76       64       64        65       61       67           77       67       70         72
135     68       71         73       72        72        72       59       62         66       63       63        64       64       67           74       67       67         67
136     68       74         89       71        71        72       60       64         70       63       63        64       64       67           71       66       67         67
137     67       70         76       70        71        71       60       64         70       63       64        64       62       65           70       66       66         66
138     66       68         72       67        68        70       58       63         68       60       61        63       62       65           70       65       65         66
139     65       66         67       66        67        67       57       58         60       58       59        60       62       63           65       63       64         65
NOTE 1 F10 (F10.7), S10 (S10.7) and M10 (M10.7) are the daily activity indices, F81, S81 and M81 are the corresponding 81-day averaged values.
NOTE 2 The subscripts min, mean and max, denote the minimum, mean and maximum values for the given month of the solar cycle.


                                           Annex B (normative)
                                      Energetic particle radiation

B.1   Historical dates of solar maximum and minimum
            The dates of the commencement of solar minimum and solar maximum are provided
            in Table B-2 based on data from NOAA/SEC [RN.27].
            For use with the trapped radiation belt models specified in 9.2.1.1 and for solar particle
            models, a period of solar maximum activity is considered to be starting 2,5 years before
            the year of maximum sunspot number and ending 4,5 years after the period of solar
            maximum. For solar cycles beyond cycle 23, the year of solar maximum for cycle i is
            estimated by the following formula:

                     𝑌𝑌𝑌𝑌𝑌𝑌𝑌𝑌 𝑜𝑜𝑜𝑜 𝑆𝑆𝑆𝑆𝑆𝑆𝑆𝑆𝑆𝑆 𝑀𝑀𝑀𝑀𝑀𝑀𝑖𝑖 = 2013,5 + 11(𝑖𝑖 - 24)                    (B-1)


B.2   GEO model (IGE-2006)
            IGE-2006 (International GEO electrons) (referred to in 9.2.1.2.1) is an international
            model based on two and a half solar cycles of in-orbit data coming from different space
            environment monitors which have been inter-calibrated. It provides the average and
            upper case electron flux at geostationary orbit for different energies (from 0,9 keV to 5,2
            MeV) and for the eleven years around Solar Min (see Table B-3 and Table B-4). The
            upper case model includes uncertainties in the models and underlying data.


B.3   ONERA MEOv2 model
            The ONERA MEOv2 (referred to in 9.2.1.2.2) model is based on data from
            intercalibrated space environment monitors on board LANL-GPS satellites in the
            period 1990 to 2006. It provides the average and upper case electron flux at GNSS orbits
            for different energies (from 280 keV to 2,24 MeV) and for the eleven years around Solar
            Min (see Table B-5 and Table B-6). The upper case model includes uncertainties in the
            models and underlying data.


B.4   FLUMIC model

                  B.4.1           Overview
                  FLUMIC (Flux Model for Internal Charging) model (referred to in 9.2.1.3) is for
                  evaluating severe internal charging environment in the Earth’s magnetosphere. The
                  model is a fit to the upper boundary envelope of daily-averaged fluxes. The algorithms
                  used by FLUMIC version 3 [RN.14] are shown below.


                  B.4.2           Outer belt (L>2,5 Re)

                  B.4.2.1.        >2MeV flux at L=6,6 Re
                  The peak integral flux above 2 MeV at L= 6,6 is taken to be 8x108m-2s-1sr-1.


                  B.4.2.2.        Solar cycle

                 𝐹𝐹(𝑓𝑓𝑓𝑓𝑓𝑓) = 8 × 108 {0,625 + 0,375𝑠𝑠𝑠𝑠𝑠𝑠[2𝜋𝜋(𝑓𝑓𝑓𝑓𝑓𝑓 - 0,7)] + 0,125𝑠𝑠𝑠𝑠𝑠𝑠[4𝜋𝜋(𝑓𝑓𝑓𝑓𝑓𝑓 - 0,15]}        (B-2)

                          where
                          fsc          is the solar cycle phase starting at solar minimum


                  B.4.2.3.        Season

           𝐹𝐹(𝑓𝑓𝑓𝑓𝑓𝑓, 𝑓𝑓𝑓𝑓𝑓𝑓) = 𝐹𝐹(𝑓𝑓𝑓𝑓𝑓𝑓){0,625 + 0,375𝑐𝑐𝑐𝑐𝑐𝑐[4𝜋𝜋(𝑓𝑓𝑓𝑓𝑓𝑓 + 0,03)] - 0,125𝑐𝑐𝑐𝑐𝑐𝑐[2𝜋𝜋(𝑓𝑓𝑓𝑓𝑓𝑓 + 0,03]}   (B-3)

                          where
                          foy       is the fraction of year starting from 1st January.


                  B.4.2.4.        Spectrum
                                                                                          2-𝐸𝐸
                                            𝐹𝐹(> 𝐸𝐸, 𝐿𝐿 = 6,6) = 𝐹𝐹(> 2𝑀𝑀𝑀𝑀𝑀𝑀) × exp �           �                     (B-4)
                                                                                           𝐸𝐸0


                          where
                  𝐸𝐸0 = 0,25 for 𝐹𝐹(> 2𝑀𝑀𝑀𝑀𝑀𝑀) ≤ 107 𝑚𝑚-2 𝑠𝑠 -1 𝑠𝑠𝑠𝑠 -1
                  𝐸𝐸0 = 0,25 + 0,11(log10 [𝐹𝐹(> 2𝑀𝑀𝑀𝑀𝑀𝑀)] - 7)1,3 for 𝐹𝐹(> 2𝑀𝑀𝑀𝑀𝑀𝑀) > 107 𝑚𝑚-2 𝑠𝑠 -1 𝑠𝑠𝑠𝑠 -1


                  B.4.2.5.        Flux versus L profile

       𝐹𝐹(> 𝐸𝐸, 𝐿𝐿) = 𝐹𝐹(> 𝐸𝐸, 𝐿𝐿 = 6.6) × 16 𝑡𝑡𝑡𝑡𝑡𝑡ℎ[0,6(𝐿𝐿 - 2,5)]/𝑐𝑐𝑐𝑐𝑐𝑐ℎ[1,5(𝐿𝐿 - 4,3)] 𝑚𝑚-2 𝑠𝑠 -1 𝑠𝑠𝑠𝑠 -1         (B-5)

                          where

                                                                             2-𝐸𝐸
                                 𝐹𝐹(𝐸𝐸, 𝐿𝐿 = 6,6) = 𝐹𝐹(𝑓𝑓𝑓𝑓𝑓𝑓, 𝑓𝑓𝑓𝑓𝑓𝑓) × exp(         )
                                                                                𝐸𝐸0


            B.4.3          Inner belt (L<2,5 Re)

            B.4.3.1.       >1MeV flux versus L profile
2 3
               𝐹𝐹 = (> 1𝑀𝑀𝑀𝑀𝑀𝑀, 𝐿𝐿) = 4,0 × 10�2,12+45,4/(𝐿𝐿+0,05) -45,6/(𝐿𝐿+0,05) � 𝑚𝑚-2 𝑠𝑠 -1 𝑠𝑠𝑠𝑠 -1                   (B-6)


            B.4.3.2.       Spectrum
                                                                                       1-𝐸𝐸
                                         𝐹𝐹(> 𝐸𝐸) = 𝐹𝐹(> 1𝑀𝑀𝑀𝑀𝑀𝑀) × 𝑒𝑒𝑒𝑒𝑒𝑒 �                  �                            (B-7)
                                                                                       𝐸𝐸0


                   where
                   𝐸𝐸0 = 0,14𝑀𝑀𝑀𝑀𝑀𝑀


            B.4.3.3.       B/B0

            B.4.3.3.1      For L < 3

                                                                                          𝐵𝐵
                                                                                   �-𝑎𝑎�� �-1��                           (B-8)
                                                                                         𝐵𝐵0
                                  𝐹𝐹𝐹𝐹𝐹𝐹𝐹𝐹 = 𝐹𝐹𝐹𝐹𝐹𝐹𝐹𝐹(𝑒𝑒𝑒𝑒𝑒𝑒𝑒𝑒𝑒𝑒𝑒𝑒𝑒𝑒𝑒𝑒𝑒𝑒𝑒𝑒) × 10

                   where

                              a = -0,4559 L + 1,4385 for L ≥ 1,75

                          𝑎𝑎 = 36,0 �                     � + 0,7 for 𝐿𝐿 < 1,75
                                        sinh�(𝐿𝐿-1)×10�


            B.4.3.3.2      For L ≥ 3
            The formula of Vette [RD.26] is used, as in AE8, i.e.

                                                                                                                 𝑚𝑚+0,5
                                                                                       �0,52×�
                                                                                                     𝐵𝐵
                                                                                                        ��
                                                                                                                          (B-9)
                                                                 𝐵𝐵 -𝑚𝑚                             𝐵𝐵0
                      𝐹𝐹𝐹𝐹𝐹𝐹𝐹𝐹 = 𝐹𝐹𝐹𝐹𝐹𝐹𝐹𝐹(𝑒𝑒𝑒𝑒𝑒𝑒𝑒𝑒𝑒𝑒𝑒𝑒𝑒𝑒𝑒𝑒𝑒𝑒𝑒𝑒) × � �     × �1 -                             �
                                                                 𝐵𝐵0                          𝐿𝐿3


                   where

                                          m = 0,6 for L ≥ 4

              𝑚𝑚 = 0,6 + 0,06 × (4 - 𝐿𝐿) + 0,046 × (4 - 𝐿𝐿)6                        for 3 ≤ 𝐿𝐿 < 4


B.5   NASA worst case GEO spectrum
            The model given in Table B-7 (referred to in 9.2.1.3) is a worst case spectrum for
            geostationary orbits.
            This model is provided by NASA-HDBK-4002 and is based on data from the LANL
            SOPA and ESP instruments for an approximately 99,9 % worst day for GOES >2MeV
            fluxes.


B.6   ESP solar proton model specification
             The ESP model [RN.15], (first published in [RD.146]; referred to in 9.2.2.2) provides a
             technique to compute the percentile of the distribution of cumulated solar proton
             fluence. It is based on an explicit formula for the probability of exceeding a given
             fluence ϕ of protons with energy above E, over a duration T:

                                                           ϕ
                                                                                              (B-10)
           F (ϕ , T | Φ RV ( E ), Φ mean ( E )) =
                                                         ∫
                                                             exp -
                                                                        [ln( x) - µ ]2 dx
                                                    σ 2π 0 x     2σ                    


                     with

                                          σ 2 = ln(1 + Φ RV / T )                              (B-11)


                     and

                                                                σ2                             (B-12)
                                          µ = ln(T ⋅ Φ mean ) -

                     where

                     ФRV and Фmean are respectively the relative variance and the mean of 1 year
                     averaged proton fluence at 1 AU from the sun in the corresponding energy range.


             The values for ФRV and Фmean for different energy ranges during solar maximum are
             given in Table B-8 and Table B-9.
             The parameter values given in Table B-8 and Table B-9 have been calculated at NASA
             for periods during solar active years. The latest update of these parameters, which are
             used for these tables, dates from 14 Nov. 2002.
             The extension to higher energy (up to > 300 MeV) is done through using the probability
             parameters for the > 100 MeV fluence, ϕ (>100 MeV), and scaling the fluence according
             to Table B-9.
             Tabulated values of the proton fluence as obtained from the ESP model for different
             confidence levels are given in Table I-4.


B.7   Solar ions model
             Table B-10, Table B-11, and Table B-12 are derived from the CREME-96 solar proton
             worst 5-minute, worst day and worst week fluxes in an interplanetary environment.
             These tables are referred to in 9.2.2.


B.8   Geomagnetic shielding (Størmer theory)
             At a given location in the field there are minimum cut­off energies necessary for ions to
             penetrate to that point. Størmer’s theory gives a cut­off rigidity, Pc, for particle arrival
             at a point, depending on the point’s geomagnetic R, λ coordinates and the angle of ion
             arrival from east, γ [RN.20].


                             Pc =
                                                 {M cos λ}4                                  (B-13)

                                    
                                    
                                         [ (                        ) ]
                                     R 2 1 + 1 - cos 3 (λ ) cos(γ ) 1 2 2 
                                                                           
                                                                           

             M is the normalized dipole moment of the Earth. From this equation, it can be seen that
             cosmic rays penetrate the geomagnetic field more easily from the west (γ = 180°) than
             from the east (γ = 0). The R, λ coordinates can be computed from B and L according to
             the method of Roberts [RN.28]. For vertical arrival, the expression simplifies to:

16 cos 4 (λ ) 16                                 (B-14)
                                    Pc ≅                = 2 GV
                                               R2        L

                   since γ =90° and R = L cos2 (λ)
             An approximate value of 16 for the constant M/4 is used to fit with observed effective
             cut­offs. Magnetospheric disturbances, which often follow solar­flares or CMEs, can
             result in a lowering of cut­off; this has been described by Adams et al. [RN.20] as:

                                      APc            P                                    (B-15)
                                          = 0,54 exp - c 
                                      Pc             2,9 

                   with Pc in units of GV.


B.9   MOBE-DIC

             B.9.1        Overview
             MOBE-DIC (Model for Outer Belt Electrons for Dielectric Internal Charging) [RD.165],
             is based on Giove-A/Merlin-SURF data at MEO and from GOES data at GEO. The model
             provides electron fluxes during enhanced periods as a function of confidence level and
             location within the magnetosphere.


             B.9.2        Spectral form
             Differential flux (units: e/cm2/s/sr/MeV)

                                                             𝐸𝐸
                                                         -
                                         𝑓𝑓(𝐸𝐸) = 𝐴𝐴 × 𝑒𝑒 𝐸𝐸0                           (B-16)


   Integral flux (units: e/cm2/s/sr)

                                                                         𝐸𝐸
                                                                     -                                  (B-17)
                                   𝑓𝑓(> 𝐸𝐸) = 𝐴𝐴 × E0 × 𝑒𝑒 𝐸𝐸0
     where:
     Values for A and E0 are given Table B-1 for three confidence levels.

         Table B-1: A and E0 for three confidence levels
  Fit Parameter                  100 % (Worst Case)                             99 %         90 %
Normalisation, A
                                           2,76 x 107                         1,19 x 107   6,94 x 106
(e/cm2/s/sr/MeV)
Folding energy, E0
                                                0,836                           0,696        0,552
(MeV)


   B.9.3           L-shell profile


                                   𝐹𝐹(𝐿𝐿, 𝐸𝐸) = 𝑓𝑓(𝐸𝐸) × 𝑔𝑔(𝐿𝐿, 𝐸𝐸)                                     (B-18)

         where:
                                  tanh�0,6∗(𝐿𝐿-2,5)�        𝑔𝑔(4,5,𝐸𝐸)
         𝑔𝑔(𝐿𝐿, 𝐸𝐸) = 16 ×                              ×                          3 < 𝐿𝐿 < 4,5
                                  cosh�1,5∗(𝐿𝐿-4,3)�         12,76

                        max�𝑔𝑔1 (𝐿𝐿,𝐸𝐸),𝑔𝑔2 (𝐿𝐿,𝐸𝐸)�
         𝑔𝑔(𝐿𝐿, 𝐸𝐸) =                                                              4,5 ≤ 𝐿𝐿 < 8
                                 𝑔𝑔1 (4,7,𝐸𝐸)


         and
                                     -(𝐿𝐿-4,5)2
         𝑔𝑔1 (𝐿𝐿, 𝐸𝐸) = 𝐴𝐴1 × 𝑒𝑒       2∗𝜎𝜎 2

         𝑔𝑔2 (𝐿𝐿, 𝐸𝐸) = 𝐴𝐴2 × 𝑒𝑒 -0,6∗(𝐿𝐿-4,5)


         The parameters, A1, A2 and σ are defined as follows (energy in MeV):
         𝐴𝐴1 (𝐸𝐸) = 1,1 × (1 - 𝑒𝑒 -2,5×(𝐸𝐸-0,05) )
         𝐴𝐴2 (𝐸𝐸) = 0,0871 × 𝐸𝐸 3 - 0,585 × 𝐸𝐸 2 + 1,005 × 𝐸𝐸 + 0,1436
         𝜎𝜎(𝐸𝐸) = 0,75 - 0,0878 × 𝐸𝐸


         The L-shell profile for integral flux is almost identical to the differential profile.
         However, an additional factor is applied to allow for the influence of changing L
         shell profile at higher energies.
         𝐹𝐹𝑖𝑖𝑖𝑖𝑖𝑖 (𝐿𝐿, > 𝐸𝐸) = 𝑓𝑓(> 𝐸𝐸) × 𝑔𝑔(𝐿𝐿, 𝐸𝐸) × 𝑔𝑔𝑐𝑐𝑐𝑐𝑐𝑐 (𝐿𝐿, 𝐸𝐸)


                               ∫ 𝑓𝑓(𝐸𝐸) × 𝑔𝑔(𝐿𝐿, 𝐸𝐸) 𝑑𝑑𝑑𝑑
         𝑔𝑔𝑐𝑐𝑐𝑐𝑐𝑐 (𝐿𝐿, 𝐸𝐸) =
                                     ∫ 𝑓𝑓(𝐸𝐸) 𝑑𝑑𝑑𝑑


B.9.4         Magnetic latitude profile
    This is taken from the FLUMIC3 model, which itself is based on Vette et al.
    [RN.10].

               𝐹𝐹(𝐵𝐵/𝐵𝐵0 , 𝐿𝐿, 𝐸𝐸) = 𝐹𝐹(𝐿𝐿, 𝐸𝐸) × ℎ(𝐵𝐵/𝐵𝐵0 , 𝐿𝐿)


                                                𝐵𝐵
                                   0,52 × �        �          𝐵𝐵 -𝑚𝑚(𝐿𝐿)
                                               𝐵𝐵0
           ℎ(𝐵𝐵/𝐵𝐵0 , 𝐿𝐿) = �1 -                       �×�       �
                                         𝐿𝐿3                 𝐵𝐵0


        𝑚𝑚(𝐿𝐿) = max(9,767 - 2,87 × 𝐿𝐿, 1,17 - 0,15 × 𝐿𝐿, 0,6)


     B.10 Tables

                           Table B-2: Minima and maxima of sunspot number cycles
Sunspot                     Smallest                               Largest             Rise to      Fall to
 cycle          Year       smoothed                               smoothed              max          min      Cycle length
number         of min     monthly mean          Year of max      monthly mean          (years)      (years)     (years)
# 1 1755,2            8,4               1761,5              86,5              6,3          5            11,3
# 2 1766,5           11,2               1769,7              115,8             3,2         5,8             9
# 3 1775,5            7,2               1778,4              158,5             2,9         6,3            9,2
# 4 1784,7            9,5               1788,1              141,2             3,4        10,2           13,6
# 5 1798,3            3,2               1805,2              49,2              6,9         5,4           12,3
# 6 1810,6             0                1816,4              48,7              5,8         6,9           12,7
# 7 1823,3            0,1               1829,9              71,7              6,6          4            10,6
# 8 1833,9            7,3               1837,2              146,9             3,3         6,3            9,6
# 9 1843,5           10,5               1848,1              131,6             4,6         7,9           12,5
# 10 1856             3,2               1860,1              97,9              4,1         7,1           11,2
# 11 1867,2            5,2               1870,6              140,5             3,4         8,3           11,7
# 12 1878,9            2,2               1883,9              74,6               5          5,7           10,7
# 13 1889,6             5                1894,1              87,9              4,5         7,6           12,1
# 14 1901,7            2,6                1907               64,2              5,3         6,6           11,9
# 15 1913,6            1,5               1917,6              105,4              4           6             10
# 16 1923,6            5,6               1928,4              78,1              4,8         5,4           10,2
# 17 1933,8            3,4               1937,4              119,2             3,6         6,8           10,4
# 18 1944,2            7,7               1947,5              151,8             3,3         6,8           10,1
# 19 1954,3            3,4               1957,9              201,3             3,6          7            10,6
# 20 1964,9            9,6               1968,9              110,6              4          7,6           11,6
# 21 1976,5           12,2               1979,9              164,5             3,4         6,9           10,3
# 22 1986,8           12,3               1989,6              158,5             2,8         6,8            9,7
# 23 1996,4 a           8,0              2001,9 a             120,8             5,5         7,0           12,5
# 24 2008,9            2,2               2014,3              116,4             5,4
a.   May 1996 marks the mathematical minimum of cycle 23. October 1996 marks the consensus minimum determined by an
     international group of solar physicists. April 2000 marks the mathematical maximum of cycle 23. However, several other
     solar indices recorded a higher secondary maximum in late 2001.
b.   Similar to cycle 23 the solar cycle 24 also displayed a double peak in the sunspot number although the peak was observed
     in 2014,3 there was an earlier peak in 2011. Thus, the maximum date used to estimate future solar maxima Annex B.1 is
     selected to be 2013,5.


        Table B-3: IGE-2006 GEO average model -- electron flux (kev-1cm-2s-1sr-1) according to year in the solar cycle
                    (referred to solar min: 0) and for different energies for a mission duration of 1 year.
                                                             (Part 1 of 2)
Energy (keV)      -6         -5         -4         -3         -2         -1      0 (solar min)      1          2          3          4
  9,17E-01     1,35E+07   1,43E+07   1,25E+07   9,80E+06   8,57E+06   6,93E+06     7,13E+06      7,87E+06   8,99E+06   9,98E+06   1,39E+07
  1,20E+00     1,15E+07   1,21E+07   1,06E+07   8,41E+06   7,29E+06   6,01E+06     6,22E+06      6,86E+06   7,80E+06   8,58E+06   1,19E+07
  1,57E+00     9,85E+06   1,04E+07   9,13E+06   7,32E+06   6,34E+06   5,28E+06     5,47E+06      6,02E+06   6,85E+06   7,47E+06   1,02E+07
  2,05E+00     8,39E+06   8,84E+06   7,80E+06   6,32E+06   5,52E+06   4,63E+06     4,53E+06      4,71E+06   5,70E+06   6,27E+06   8,53E+06
  2,67E+00     7,07E+06   7,42E+06   6,62E+06   5,42E+06   4,78E+06   4,01E+06     3,91E+06      4,02E+06   4,93E+06   5,36E+06   7,21E+06
  3,47E+00     5,85E+06   6,06E+06   5,52E+06   4,59E+06   4,08E+06   3,40E+06     3,54E+06      3,85E+06   4,45E+06   4,70E+06   6,15E+06
  4,53E+00     4,67E+06   4,76E+06   4,45E+06   3,77E+06   3,38E+06   2,79E+06     2,96E+06      3,21E+06   3,69E+06   3,85E+06   4,94E+06
  5,90E+00     3,57E+06   3,58E+06   3,47E+06   2,99E+06   2,70E+06   2,19E+06     2,35E+06      2,52E+06   2,88E+06   3,00E+06   3,80E+06
  7,73E+00     2,57E+06   2,54E+06   2,56E+06   2,24E+06   2,04E+06   1,61E+06     1,75E+06      1,84E+06   2,10E+06   2,20E+06   2,76E+06
  1,02E+01     1,73E+06   1,68E+06   1,77E+06   1,57E+06   1,45E+06   1,10E+06     1,19E+06      1,24E+06   1,41E+06   1,51E+06   1,87E+06
  1,33E+01     1,08E+06   1,05E+06   1,15E+06   1,01E+06   9,56E+05   7,09E+05     7,50E+05      7,72E+05   8,79E+05   9,68E+05   1,18E+06
  1,74E+01     6,28E+05   6,10E+05   6,99E+05   6,06E+05   5,85E+05   4,28E+05     4,35E+05      4,39E+05   5,09E+05   6,17E+05   7,05E+05
  3,00E+01     1,92E+05   1,89E+05   2,39E+05   2,13E+05   2,42E+05   2,14E+05     1,74E+05      1,61E+05   1,92E+05   2,14E+05   1,59E+05
  6,12E+01     6,66E+04   6,42E+04   8,20E+04   7,54E+04   8,92E+04   7,76E+04     6,39E+04      5,87E+04   6,82E+04   7,30E+04   5,52E+04
  8,87E+01     2,62E+04   2,48E+04   3,19E+04   3,02E+04   3,70E+04   3,18E+04     2,64E+04      2,41E+04   2,74E+04   2,83E+04   2,18E+04
  1,26E+02     9,18E+03   8,52E+03   1,11E+04   1,08E+04   1,35E+04   1,17E+04     9,86E+03      9,02E+03   1,00E+04   9,90E+03   7,83E+03
  1,84E+02     3,45E+03   3,15E+03   4,13E+03   4,22E+03   5,37E+03   4,71E+03     4,02E+03      3,66E+03   3,91E+03   3,65E+03   2,99E+03
  2,66E+02     1,23E+03   1,10E+03   1,48E+03   1,58E+03   2,07E+03   1,79E+03     1,53E+03      1,36E+03   1,43E+03   1,27E+03   1,07E+03
  3,97E+02     3,83E+02   3,23E+02   4,77E+02   5,41E+02   7,31E+02   6,22E+02     5,24E+02      4,53E+02   4,64E+02   3,87E+02   3,33E+02
  6,12E+02     7,56E+01   6,33E+01   9,96E+01   1,22E+02   1,71E+02   1,45E+02     1,17E+02      9,93E+01   9,87E+01   7,70E+01   6,57E+01
  9,08E+02     1,81E+01   1,57E+01   2,80E+01   3,51E+01   5,39E+01   4,28E+01     3,26E+01      2,73E+01   2,66E+01   1,97E+01   1,60E+01


          Table B-3: IGE-2006 GEO average model -- electron flux (kev-1cm-2s-1sr-1) according to year in the solar cycle
                      (referred to solar min: 0) and for different energies for a mission duration of 1 year.
                                                                      (Part 2 of 2)
       1,29E+03     4,63E+00    4,56E+00    8,68E+00    1,11E+01    1,86E+01   1,37E+01       9,84E+00       8,07E+00   7,78E+00   5,52E+00   4,25E+00
       1,99E+03     5,79E-01    6,73E-01    1,39E+00    1,81E+00    3,41E+00   2,28E+00       1,52E+00       1,22E+00   1,15E+00   7,74E-01   5,56E-01
       2,44E+03     1,96E-01    2,45E-01    5,26E-01    6,92E-01    1,37E+00     8,79E-01     5,65E-01       4,48E-01   4,21E-01   2,76E-01   1,92E-01
       3,07E+03     5,29E-02    7,23E-02    1,62E-01    2,15E-01    4,54E-01     2,76E-01     1,71E-01       1,34E-01   1,24E-01   7,93E-02   5,30E-02
       3,97E+03     9,09E-03    1,37E-02    3,21E-02    4,32E-02    9,74E-02     5,60E-02     3,31E-02       2,56E-02   2,36E-02   1,46E-02   9,36E-03
       5,20E+03     1,27E-03    2,12E-03    5,23E-03    7,12E-03    1,72E-02     9,33E-03     5,27E-03       4,01E-03   3,67E-03   2,19E-03   1,35E-03


Table B-4: IGE-2006 GEO upper case model - maximum electron flux (kev-1cm-2s-1sr-1) according to year in the solar cycle (referred to solar
                                 min: 0) and for different energies for a mission duration of 1 year.
                                                                      (Part 1 of 2)
     Energy (keV)       -6          -5          -4           -3          -2           -1            0              1          2           3              4
                                                                                               (solar min)
        9,17E-01     1,89E+07    2,00E+07    1,75E+07    1,37E+07     1,20E+07     9,71E+06     9,99E+06       1,10E+07    1,26E+07   1,40E+07      1,95E+07
        1,20E+00     1,61E+07    1,69E+07    1,48E+07    1,18E+07     1,02E+07     8,42E+06     8,71E+06       9,61E+06    1,09E+07   1,20E+07      1,67E+07
        1,57E+00     1,38E+07    1,46E+07    1,28E+07    1,03E+07     8,88E+06     7,40E+06     7,66E+06       8,43E+06    9,60E+06   1,05E+07      1,43E+07
        2,05E+00     1,18E+07    1,24E+07    1,09E+07    8,86E+06     7,73E+06     6,49E+06     6,35E+06       6,60E+06    7,99E+06   8,79E+06      1,20E+07
        2,67E+00     9,91E+06    1,04E+07    9,28E+06    7,60E+06     6,70E+06     5,62E+06     5,48E+06       5,63E+06    6,91E+06   7,51E+06      1,01E+07
        3,47E+00     8,20E+06    8,50E+06    7,74E+06    6,44E+06     5,72E+06     4,77E+06     4,96E+06       5,40E+06    6,24E+06   6,59E+06      8,62E+06
        4,53E+00     6,55E+06    6,68E+06    6,24E+06    5,29E+06     4,74E+06     3,91E+06     4,15E+06       4,50E+06    5,18E+06   5,40E+06      6,93E+06
        5,90E+00     5,01E+06    5,02E+06    4,87E+06    4,20E+06     3,79E+06     3,07E+06     3,30E+06       3,54E+06    4,04E+06   4,21E+06      5,33E+06
        7,73E+00     3,61E+06    3,57E+06    3,60E+06    3,15E+06     2,87E+06     2,26E+06     2,46E+06       2,58E+06    2,95E+06   3,09E+06      3,88E+06


Table B-4: IGE-2006 GEO upper case model - maximum electron flux (kev-1cm-2s-1sr-1) according to year in the solar cycle
                   (referred to solar min: 0) and for different energies for a mission duration of 1 year.
                                                           (Part 2 of 2)
   1,02E+01   2,43E+06   2,36E+06   2,49E+06   2,21E+06   2,04E+06   1,55E+06    1,67E+06   1,74E+06   1,98E+06     2,12E+06    2,63E+06
   1,33E+01   1,52E+06   1,48E+06   1,62E+06   1,42E+06   1,35E+06   9,98E+05    1,06E+06   1,09E+06   1,24E+06     1,36E+06    1,66E+06
   1,74E+01   8,86E+05   8,60E+05   9,86E+05   8,55E+05   8,25E+05   6,04E+05    6,14E+05   6,19E+05   7,18E+05     8,70E+05    9,94E+05
   3,00E+01   2,72E+05   2,68E+05   3,39E+05   3,02E+05   3,43E+05   3,03E+05    2,47E+05   2,28E+05   2,72E+05     3,03E+05    2,25E+05
   6,12E+01   9,57E+04   9,22E+04   1,18E+05   1,08E+05   1,28E+05   1,11E+05    9,18E+04   8,43E+04   9,80E+04     1,05E+05    7,93E+04
   8,87E+01   3,81E+04   3,60E+04   4,64E+04   4,39E+04   5,38E+04   4,62E+04    3,84E+04   3,50E+04   3,98E+04     4,11E+04    3,17E+04
   1,26E+02   1,35E+04   1,26E+04   1,64E+04   1,59E+04   1,99E+04   1,73E+04    1,45E+04   1,33E+04   1,48E+04     1,46E+04    1,16E+04
   1,84E+02   5,21E+03   4,76E+03   6,24E+03   6,37E+03   8,11E+03   7,11E+03    6,07E+03   5,53E+03   5,91E+03     5,51E+03    4,52E+03
   2,66E+02   1,92E+03   1,72E+03   2,31E+03   2,46E+03   3,23E+03   2,79E+03    2,39E+03   2,12E+03   2,23E+03     1,98E+03    1,67E+03
   3,97E+02   6,27E+02   5,29E+02   7,81E+02   8,86E+02   1,20E+03   1,02E+03    8,58E+02   7,42E+02   7,60E+02     6,34E+02    5,46E+02
   6,12E+02   1,34E+02   1,12E+02   1,76E+02   2,16E+02   3,02E+02   2,56E+02    2,07E+02   1,75E+02   1,74E+02     1,36E+02    1,16E+02
   9,08E+02   3,52E+01   3,05E+01   5,45E+01   6,83E+01   1,05E+02   8,32E+01    6,34E+01   5,31E+01   5,17E+01     3,83E+01    3,11E+01
   1,29E+03   1,01E+01   9,91E+00   1,89E+01   2,41E+01   4,04E+01   2,98E+01    2,14E+01   1,75E+01   1,69E+01     1,20E+01    9,24E+00
   1,99E+03   1,50E+00   1,75E+00   3,61E+00   4,70E+00   8,85E+00   5,91E+00    3,94E+00   3,16E+00   2,98E+00     2,01E+00    1,44E+00
   2,44E+03   5,61E-01   7,02E-01   1,51E+00   1,98E+00   3,92E+00   2,52E+00    1,62E+00   1,28E+00   1,21E+00     7,90E-01     5,50E-01
   3,07E+03   1,72E-01   2,34E-01   5,25E-01   6,97E-01   1,47E+00    8,95E-01   5,54E-01   4,34E-01   4,02E-01     2,57E-01     1,72E-01
   3,97E+03   3,44E-02   5,18E-02   1,21E-01   1,63E-01   3,68E-01    2,12E-01   1,25E-01   9,68E-02   8,93E-02     5,52E-02     3,54E-02
   5,20E+03   5,74E-03   9,58E-03   2,36E-02   3,22E-02   7,77E-02    4,22E-02   2,38E-02   1,81E-02   1,66E-02     9,90E-03     6,10E-03


   Table B-5: MEOv2 average case model - average electron flux (Mev-1cm-2s-1sr-1) according to year in the solar cycle
                (referred to solar min: 0) and for different energies for a mission duration of 1 year.
Energy (MeV)      -6         -5         -4         -3         -2         -1      0 (solar min)      1          2          3          4
    0,28       2,90E+06   2,89E+06   3,79E+06   3,95E+06   4,93E+06   4,31E+06     3,88E+06      3,46E+06   3,69E+06   3,36E+06   2,90E+06
    0,4        1,61E+06   1,57E+06   2,25E+06   2,53E+06   3,35E+06   2,89E+06     2,47E+06      2,15E+06   2,22E+06   1,87E+06   1,61E+06
    0,56       6,75E+05   6,48E+05   1,01E+06   1,22E+06   1,70E+06   1,44E+06     1,17E+06      1,00E+06   9,98E+05   7,91E+05   6,75E+05
    0,8        2,00E+05   1,94E+05   3,33E+05   4,14E+05   6,19E+05   5,03E+05     3,89E+05      3,28E+05   3,21E+05   2,42E+05   2,00E+05
    1,12       5,80E+04   5,99E+04   1,11E+05   1,40E+05   2,27E+05   1,72E+05     1,27E+05      1,05E+05   1,02E+05   7,35E+04   5,80E+04
    1,6        1,21E+04   1,37E+04   2,70E+04   3,48E+04   6,14E+04   4,34E+04     3,01E+04      2,44E+04   2,33E+04   1,61E+04   1,21E+04
    2,24       2,15E+03   2,62E+03   5,45E+03   7,12E+03   1,35E+04   8,98E+03     5,94E+03      4,75E+03   4,49E+03   3,01E+03   2,15E+03


   Table B-6: MEOv2 upper case model - maximum electron flux (Mev-1cm-2s-1sr-1) according to year in the solar cycle
                 (referred to solar min: 0) and for different energies for a mission duration of 1 year.
Energy (MeV)      -6         -5         -4         -3         -2         -1      0 (solar min)      1          2          3          4
    0,28       7,39E+06   7,40E+06   9,54E+06   9,79E+06   1,20E+07   1,06E+07     9,65E+06      8,65E+06   9,27E+06   8,55E+06   7,39E+06
    0,4        4,38E+06   4,27E+06   6,03E+06   6,73E+06   8,78E+06   7,61E+06     6,58E+06      5,74E+06   5,94E+06   5,05E+06   4,38E+06
    0,56       1,99E+06   1,91E+06   2,95E+06   3,53E+06   4,86E+06   4,16E+06     3,41E+06      2,92E+06   2,92E+06   2,32E+06   1,99E+06
    0,8        6,48E+05   6,24E+05   1,06E+06   1,32E+06   1,94E+06   1,60E+06     1,25E+06      1,05E+06   1,03E+06   7,82E+05   6,48E+05
    1,12       2,13E+05   2,18E+05   4,01E+05   5,06E+05   8,09E+05   6,22E+05     4,61E+05      3,82E+05   3,71E+05   2,69E+05   2,13E+05
    1,6        5,24E+04   5,88E+04   1,15E+05   1,48E+05   2,60E+05   1,85E+05     1,29E+05      1,05E+05   1,00E+05   6,96E+04   5,24E+04
    2,24       1,11E+04   1,34E+04   2,77E+04   3,61E+04   6,78E+04   4,55E+04     3,03E+04      2,43E+04   2,30E+04   1,54E+04   1,11E+04


Table B-7: Worst case spectrum for geostationary orbits
  Electron Energy, MeV                Flux, cm-2s-1sr-1
          0,225                            6,5E6
          0,315                            4,2E6
           0,5                             2,2E6
           0,75                            1,0E6
           1,1                             4,4E5
           1,5                             2,0E5
           1,8                             1,05E5
           3,5                             6,4E3


Table B-8: Values of the parameters for the ESP model
       Energy range    Фmean (cm-2)         ФRV
      > 1 MeV          8,877E+10        0,940
      > 3 MeV          3,297E+10        3,038
      > 5 MeV          1,973E+10        5,250
      > 7 MeV          1,371E+10        7,575
      > 10 MeV         9,089E+09        11,239
      > 15 MeV         5,476E+09        17,675
      > 20 MeV         3,707E+09        24,351
      > 25 MeV         2,687E+09        31,126
      > 30 MeV         2,034E+09        37,889
      > 35 MeV         1,589E+09        44,572
      > 40 MeV         1,273E+09        51,130
      > 45 MeV         1,038E+09        57,504
      > 50 MeV         8,602E+08        63,674
      > 55 MeV         7,215E+08        69,642
      > 60 MeV         6,117E+08        75,368
      > 70 MeV         4,518E+08        86,122
      > 80 MeV         3,431E+08        95,852
      > 90 MeV         2,665E+08        104,635
      > 100 MeV        2,109E+08        112,465


            Table B-9: Values to scale fluence from >100 MeV to >300 MeV
                 Energy Range:                        Fluence (p cm-2):
                   > 125 MeV                       0,603 x ϕ(>100 MeV)
                   > 150 MeV                       0,390 x ϕ(>100 MeV)
                   > 175 MeV                       0,267 x ϕ(>100 MeV)
                   > 200 MeV                       0,191 x ϕ(>100 MeV)
                   > 225 MeV                       0,141 x ϕ(>100 MeV)
                   > 250 MeV                       0,107 x ϕ(>100 MeV)
                   > 275 MeV                       0,0823 x ϕ(>100 MeV)
                   > 300 MeV                       0,0647 x ϕ(>100 MeV)


Table B-10: CREME-96 solar ion worst 5-minute fluxes in an interplanetary environment
                                      (Part 1 of 2)
                                          Ion Flux [# m-2s-1sr-1(MeV/nucl)-1]
       Energy
     [MeV/nucl]            H         He               C          N              O         Fe
       1,0E+00          1,36E+09   5,25E+07     5,05E+05      1,29E+05      1,07E+06   4,11E+05
       2,0E+00          6,36E+08   2,09E+07     2,01E+05      5,15E+04      4,27E+05   1,64E+05
       3,0E+00          3,81E+08   1,11E+07     1,07E+05      2,74E+04      2,27E+05   8,70E+04
       4,0E+00          2,56E+08   6,76E+06     6,50E+04      1,66E+04      1,38E+05   5,30E+04
       5,0E+00          1,83E+08   4,47E+06     4,29E+04      1,10E+04      9,12E+04   3,50E+04
       6,0E+00          1,37E+08   3,12E+06     3,00E+04      7,69E+03      6,38E+04   2,45E+04
       7,0E+00          1,06E+08   2,27E+06     2,18E+04      5,59E+03      4,64E+04   1,78E+04
       8,0E+00          8,44E+07   1,71E+06     1,64E+04      4,20E+03      3,48E+04   1,34E+04
       9,0E+00          6,83E+07   1,31E+06     1,26E+04      3,23E+03      2,68E+04   1,03E+04
       1,0E+01          5,61E+07   1,03E+06     9,91E+03      2,54E+03      2,11E+04   8,08E+03
       2,0E+01          1,32E+07   1,25E+05     1,20E+03      3,09E+02      2,56E+03   1,37E+03
       3,0E+01          4,89E+06   2,30E+04     2,21E+02      5,66E+01      4,69E+02   2,96E+02
       4,0E+01          2,26E+06   6,90E+03     6,62E+01      1,70E+01      1,41E+02   7,94E+01
       5,0E+01          1,20E+06   2,71E+03     2,61E+01      6,68E+00      5,54E+01   2,87E+01
       6,0E+01          6,95E+05   1,27E+03     1,22E+01      3,12E+00      2,59E+01   1,25E+01
       7,0E+01          4,31E+05   6,67E+02     6,40E+00      1,64E+00      1,36E+01   6,18E+00
       8,0E+01          2,81E+05   3,83E+02     3,67E+00      9,42E-01      7,81E+00   3,37E+00
       9,0E+01          1,91E+05   2,35E+02     2,25E+00      5,77E-01      4,79E+00   1,97E+00
       1,0E+02          1,35E+05   1,52E+02     1,46E+00      3,73E-01      3,09E+00   1,22E+00
       2,0E+02          1,18E+04   8,78E+00      8,43E-02     2,16E-02      1,79E-01   5,41E-02
       3,0E+02          2,70E+03   1,72E+00      1,65E-02     4,23E-03      3,50E-02   9,03E-03
       4,0E+02          9,45E+02   5,53E-01      5,31E-03     1,36E-03      1,13E-02   2,60E-03


Table B-10: CREME-96 solar ion worst 5-minute fluxes in an interplanetary
                             environment
                               (Part 2 of 2)
                                   Ion Flux [# m-2s-1sr-1(MeV/nucl)-1]
    Energy
  [MeV/nucl]        H         He               C         N               O       Fe
    5,0E+02      4,00E+02   2,20E-01      2,11E-03    5,40E-04     4,48E-03   9,47E-04
    6,0E+02      1,74E+02   1,03E-01      9,91E-04    2,54E-04     2,11E-03   4,14E-04
    7,0E+02      9,16E+01   5,45E-02      5,24E-04    1,34E-04     1,11E-03   2,06E-04
    8,0E+02      5,27E+01   3,14E-02      3,01E-04    7,72E-05     6,40E-04   1,13E-04
    9,0E+02      3,24E+01   1,93E-02      1,85E-04    4,74E-05     3,93E-04   6,60E-05
    1,0E+03      2,09E+01   1,24E-02      1,20E-04    3,06E-05     2,54E-04   4,10E-05
    2,0E+03      1,19E+00   7,06E-04      6,78E-06    1,74E-06     1,44E-05   1,77E-06
    3,0E+03      2,21E-01   1,32E-04      1,26E-06    3,24E-07     2,69E-06   2,83E-07
    4,0E+03      6,72E-02   4,00E-05      3,84E-07    9,85E-08     8,17E-07   7,68E-08
    5,0E+03      2,67E-02   1,59E-05      1,53E-07    3,91E-08     3,24E-07   2,80E-08
    6,0E+03      1,25E-02   7,47E-06      7,17E-08    1,84E-08     1,52E-07   1,22E-08
    7,0E+03      6,63E-03   3,94E-06      3,79E-08    9,71E-09     8,05E-08   6,09E-09
    8,0E+03      3,81E-03   2,27E-06      2,18E-08    5,58E-09     4,63E-08   3,33E-09
    9,0E+03      2,34E-03   1,39E-06      1,34E-08    3,43E-09     2,84E-08   1,95E-09
    1,0E+04      1,51E-03   9,01E-07      8,65E-09    2,22E-09     1,84E-08   1,21E-09
    2,0E+04      8,58E-05   5,11E-08      4,90E-10    1,26E-10     1,04E-09   5,24E-11
    3,0E+04      1,60E-05   9,53E-09      9,15E-11    2,34E-11     1,94E-10   8,35E-12
    4,0E+04      4,86E-06   2,89E-09      2,78E-11    7,13E-12     5,91E-11   2,27E-12
    5,0E+04      1,93E-06   1,15E-09      1,10E-11    2,83E-12     2,35E-11   8,25E-13
    6,0E+04      9,08E-07   5,40E-10      5,19E-12    1,33E-12     1,10E-11   3,61E-13
    7,0E+04      4,79E-07   2,85E-10      2,74E-12    7,02E-13     5,82E-12   1,80E-13
    8,0E+04      2,76E-07   1,64E-10      1,58E-12    4,04E-13     3,35E-12   9,82E-14
    9,0E+04      1,69E-07   1,01E-10      9,68E-13    2,48E-13     2,06E-12   5,76E-14
    1,0E+05      1,09E-07   6,52E-11      6,26E-13    1,60E-13     1,33E-12   3,57E-14


Table B-11: CREME-96 solar ion worst day fluxes in an interplanetary environment
                                    (Part 1 of 2)
                                  Ion Flux [# m-2s-1sr-1(MeV/nucl)-1]
       Energy
     [MeV/nucl]         H         He          C          N          O          Fe
        1,0E+00      3,24E+08   1,25E+07   1,20E+05   3,08E+04   2,56E+05   9,81E+04
        2,0E+00      1,54E+08   5,07E+06   4,87E+04   1,25E+04   1,03E+05   3,97E+04
        3,0E+00      9,34E+07   2,72E+06   2,61E+04   6,70E+03   5,55E+04   2,13E+04
        4,0E+00      6,32E+07   1,67E+06   1,60E+04   4,11E+03   3,41E+04   1,31E+04
        5,0E+00      4,57E+07   1,11E+06   1,07E+04   2,74E+03   2,27E+04   8,71E+03
        6,0E+00      3,44E+07   7,82E+05   7,51E+03   1,93E+03   1,60E+04   6,13E+03
        7,0E+00      2,68E+07   5,73E+05   5,50E+03   1,41E+03   1,17E+04   4,48E+03
        8,0E+00      2,14E+07   4,32E+05   4,15E+03   1,06E+03   8,82E+03   3,38E+03
        9,0E+00      1,74E+07   3,34E+05   3,21E+03   8,23E+02   6,82E+03   2,62E+03
        1,0E+01      1,44E+07   2,64E+05   2,53E+03   6,49E+02   5,38E+03   2,06E+03
        2,0E+01      3,47E+06   3,31E+04   3,18E+02   8,14E+01   6,75E+02   3,61E+02
        3,0E+01      1,31E+06   6,17E+03   5,93E+01   1,52E+01   1,26E+02   7,95E+01
        4,0E+01      6,16E+05   1,88E+03   1,80E+01   4,62E+00   3,83E+01   2,16E+01
        5,0E+01      3,29E+05   7,45E+02   7,15E+00   1,83E+00   1,52E+01   7,86E+00
        6,0E+01      1,92E+05   3,50E+02   3,36E+00   8,62E-01   7,14E+00   3,44E+00
        7,0E+01      1,19E+05   1,85E+02   1,78E+00   4,55E-01   3,77E+00   1,71E+00
        8,0E+01      7,82E+04   1,06E+02   1,02E+00   2,62E-01   2,17E+00    9,35E-01
        9,0E+01      5,33E+04   6,53E+01   6,27E-01   1,61E-01   1,33E+00    5,49E-01
        1,0E+02      3,75E+04   4,22E+01   4,05E-01   1,04E-01   8,62E-01    3,40E-01
        2,0E+02      3,22E+03   2,39E+00   2,30E-02   5,89E-03   4,89E-02    1,47E-02
        3,0E+02      7,02E+02   4,47E-01   4,29E-03   1,10E-03   9,12E-03    2,35E-03
        4,0E+02      2,32E+02   1,36E-01   1,30E-03   3,34E-04   2,77E-03    6,38E-04
        5,0E+02      9,29E+01   5,39E-02   5,17E-04   1,33E-04   1,10E-03    2,32E-04
        6,0E+02      3,91E+01   2,53E-02   2,43E-04   6,23E-05   5,17E-04    1,02E-04
        7,0E+02      2,06E+01   1,34E-02   1,28E-04   3,29E-05   2,73E-04    5,06E-05
        8,0E+02      1,18E+01   7,69E-03   7,39E-05   1,89E-05   1,57E-04    2,76E-05
        9,0E+02      7,27E+00   4,72E-03   4,54E-05   1,16E-05   9,64E-05    1,62E-05
        1,0E+03      4,70E+00   3,05E-03   2,93E-05   7,52E-06   6,23E-05    1,01E-05
        2,0E+03      2,66E-01   1,73E-04   1,66E-06   4,26E-07   3,53E-06    4,35E-07
        3,0E+03      4,97E-02   3,23E-05   3,10E-07   7,95E-08   6,59E-07    6,94E-08
        4,0E+03      1,51E-02   9,82E-06   9,43E-08   2,42E-08   2,00E-07    1,88E-08
        5,0E+03      6,00E-03   3,90E-06   3,74E-08   9,59E-09   7,95E-08    6,86E-09
        6,0E+03      2,82E-03   1,83E-06   1,76E-08   4,51E-09   3,74E-08    3,00E-09


Table B-11: CREME-96 solar ion worst day fluxes in an interplanetary environment
                                     (Part 2 of 2)
                                   Ion Flux [# m-2s-1sr-1(MeV/nucl)-1]
          Energy
        [MeV/nucl]       H         He          C          N          O         Fe
          7,0E+03     1,49E-03   9,68E-07   9,29E-09   2,38E-09   1,97E-08   1,49E-09
          8,0E+03     8,57E-04   5,57E-07   5,35E-09   1,37E-09   1,14E-08   8,16E-10
          9,0E+03     5,26E-04   3,42E-07   3,28E-09   8,41E-10   6,98E-09   4,79E-10
          1,0E+04     3,40E-04   2,21E-07   2,12E-09   5,44E-10   4,51E-09   2,97E-10
          2,0E+04     1,93E-05   1,25E-08   1,20E-10   3,08E-11   2,56E-10   1,29E-11
          3,0E+04     3,60E-06   2,34E-09   2,24E-11   5,75E-12   4,77E-11   2,05E-12
          4,0E+04     1,09E-06   7,10E-10   6,82E-12   1,75E-12   1,45E-11   5,56E-13
          5,0E+04     4,34E-07   2,82E-10   2,71E-12   6,94E-13   5,75E-12   2,03E-13
          6,0E+04     2,04E-07   1,33E-10   1,27E-12   3,26E-13   2,70E-12   8,87E-14
          7,0E+04     1,08E-07   7,00E-11   6,72E-13   1,72E-13   1,43E-12   4,41E-14
          8,0E+04     6,20E-08   4,03E-11   3,87E-13   9,91E-14   8,22E-13   2,41E-14
          9,0E+04     3,81E-08   2,47E-11   2,37E-13   6,09E-14   5,05E-13   1,41E-14
          1,0E+05     2,46E-08   1,60E-11   1,54E-13   3,93E-14   3,26E-13   8,77E-15


Table B-12: CREME-96 solar ion worst week fluxes in an interplanetary environment
                                    (Part 1 of 2)
                                  Ion Flux [# m-2s-1sr-1(MeV/nucl)-1]
        Energy
      [MeV/nucl]        H         He          C          N          O          Fe
        1,0E+00      4,64E+07   2,36E+06   2,75E+04   7,04E+03   5,84E+04   1,57E+04
        2,0E+00      2,28E+07   9,53E+05   1,11E+04   2,85E+03   2,36E+04   6,34E+03
        3,0E+00      1,41E+07   5,12E+05   5,97E+03   1,53E+03   1,27E+04   3,41E+03
        4,0E+00      9,77E+06   3,14E+05   3,66E+03   9,39E+02   7,79E+03   2,09E+03
        5,0E+00      7,19E+06   2,09E+05   2,44E+03   6,25E+02   5,19E+03   1,39E+03
        6,0E+00      5,51E+06   1,47E+05   1,72E+03   4,40E+02   3,65E+03   9,80E+02
        7,0E+00      4,36E+06   1,08E+05   1,26E+03   3,22E+02   2,67E+03   7,17E+02
        8,0E+00      3,53E+06   8,13E+04   9,48E+02   2,43E+02   2,02E+03   5,41E+02
        9,0E+00      2,91E+06   6,29E+04   7,33E+02   1,88E+02   1,56E+03   4,19E+02
        1,0E+01      2,44E+06   4,96E+04   5,78E+02   1,48E+02   1,23E+03   3,30E+02
        2,0E+01      6,61E+05   5,20E+03   6,06E+01   1,55E+01   1,29E+02   4,93E+01
        3,0E+01      2,74E+05   1,13E+03   1,32E+01   3,37E+00   2,80E+01   1,07E+01
        4,0E+01      1,38E+05   3,81E+02   4,45E+00   1,14E+00   9,45E+00   3,63E+00
        5,0E+01      7,90E+04   1,64E+02   1,92E+00   4,92E-01   4,08E+00   1,57E+00
        6,0E+01      4,88E+04   8,27E+01   9,65E-01   2,47E-01   2,05E+00    7,91E-01
        7,0E+01      3,20E+04   4,63E+01   5,40E-01   1,38E-01   1,15E+00    4,43E-01
        8,0E+01      2,20E+04   2,80E+01   3,26E-01   8,36E-02   6,94E-01    2,68E-01
        9,0E+01      1,56E+04   1,80E+01   2,09E-01   5,37E-02   4,45E-01    1,72E-01
        1,0E+02      1,14E+04   1,21E+01   1,41E-01   3,61E-02   2,99E-01    1,16E-01
        2,0E+02      1,27E+03   8,86E-01   1,03E-02   2,65E-03   2,20E-02    1,28E-02
        3,0E+02      3,16E+02   1,92E-01   2,24E-03   5,74E-04   4,76E-03    4,00E-03
        4,0E+02      1,13E+02   6,50E-02   7,58E-04   1,94E-04   1,61E-03    1,76E-03
        5,0E+02      4,79E+01   2,80E-02   3,27E-04   8,38E-05   6,95E-04    9,28E-04
        6,0E+02      2,13E+01   1,41E-02   1,64E-04   4,21E-05   3,50E-04    5,51E-04
        7,0E+02      1,19E+01   7,89E-03   9,20E-05   2,36E-05   1,96E-04    3,54E-04
        8,0E+02      7,20E+00   4,77E-03   5,56E-05   1,43E-05   1,18E-04    2,42E-04
        9,0E+02      4,62E+00   3,06E-03   3,57E-05   9,14E-06   7,58E-05    1,73E-04
        1,0E+03      3,11E+00   2,06E-03   2,40E-05   6,15E-06   5,10E-05    1,28E-04
        2,0E+03      2,30E-01   1,51E-04   1,76E-06   4,51E-07   3,74E-06    1,76E-05
        3,0E+03      5,00E-02   3,27E-05   3,82E-07   9,79E-08   8,12E-07    5,51E-06
        4,0E+03      1,69E-02   1,11E-05   1,29E-07   3,31E-08   2,75E-07    2,42E-06
        5,0E+03      7,31E-03   4,78E-06   5,57E-08   1,43E-08   1,18E-07    1,28E-06
        6,0E+03      3,68E-03   2,40E-06   2,80E-08   7,18E-09   5,96E-08    7,58E-07


Table B-12: CREME-96 solar ion worst week fluxes in an interplanetary environment
                                      (Part 2 of 2)
                                    Ion Flux [# m-2s-1sr-1(MeV/nucl)-1]
           Energy
         [MeV/nucl]       H         He          C          N          O         Fe
           7,0E+03     2,06E-03   1,34E-06   1,57E-08   4,02E-09   3,33E-08   4,88E-07
           8,0E+03     1,25E-03   8,13E-07   9,48E-09   2,43E-09   2,01E-08   3,33E-07
           9,0E+03     8,02E-04   5,21E-07   6,08E-09   1,56E-09   1,29E-08   2,38E-07
           1,0E+04     5,40E-04   3,51E-07   4,09E-09   1,05E-09   8,69E-09   1,76E-07
           2,0E+04     3,98E-05   2,57E-08   3,00E-10   7,69E-11   6,38E-10   2,42E-08
           3,0E+04     8,66E-06   5,58E-09   6,51E-11   1,67E-11   1,38E-10   7,59E-09
           4,0E+04     2,94E-06   1,89E-09   2,20E-11   5,64E-12   4,68E-11   3,33E-09
           5,0E+04     1,27E-06   8,14E-10   9,49E-12   2,43E-12   2,02E-11   1,76E-09
           6,0E+04     6,39E-07   4,09E-10   4,78E-12   1,22E-12   1,02E-11   1,04E-09
           7,0E+04     3,58E-07   2,29E-10   2,67E-12   6,85E-13   5,68E-12   6,72E-10
           8,0E+04     2,17E-07   1,38E-10   1,62E-12   4,14E-13   3,43E-12   4,59E-10
           9,0E+04     1,39E-07   8,88E-11   1,04E-12   2,66E-13   2,20E-12   3,27E-10
           1,0E+05     9,35E-08   5,97E-11   6,97E-13   1,79E-13   1,48E-12   2,42E-10


                                     Annex C (normative)
                             Space debris and meteoroids

C.1   Flux models

            C.1.1C.1.2C.1.3C.1.4       Meteoroid streams

            C.1.4.1.    Introduction and description
            Table C-2 gives the parameters for the main annual meteor streams. From these stream
            parameters fluxes are derived according to the method given in C.1.4.2.
            The meteoroid streams model is based on a method by N. McBride [RD.28] to derive
            meteoroid fluxes from meteor data. The present reference model uses data for 50 annual
            meteor streams as given by P. Jenniskens [RD.29]. These data were collected by a large
            number of observers over a 10 year period from observation sites in both the northern
            and southern hemispheres.
            The meteoroid streams model given below is implemented in MASTER-8 [RN.26] and
            in ESABASE2/DEBRIS [RD.30].


            C.1.4.2.    Meteor stream fluxes
            The meteoroid streams model is based on a method by N. McBride [RD.28] to derive
            meteoroid fluxes from meteor data. The present reference model uses data for 50 annual
            meteor streams as given by P. Jenniskens [RD.29]. These data were collected by a large
            number of observers over a 10 year period from observation sites in both the northern
            and southern hemispheres.
            The meteor stream geometry and activity at shower maximum is defined by:
            - The solar longitude λ at shower maximum λmax.
            - The maximum zenithal hourly rate ZHRmax , which is the number of ‘visible’
                  meteors seen after various observer and location related corrections have been
                  applied.
            - Apparent radiant position in RA (right ascension of the radiant) and Dec
                  (declination of the radiant). These values are tabulated in Table C-2 at an epoch
                  defined by the solar longitude λ0.


 - The geocentric meteoroid speeds, defined as the final geocentric velocity V∞ (in
        km s-1) as the meteoroids reach the top of the atmosphere.
 The right ascension of the radiant and for the declination for an instantaneous value of
 the solar longitude λ are obtained by

                       RA(λ ) = RA(λ °) + ∆RA(λ - λ °)                                    (C-1)


                     Dec(λ ) = Dec(λ °) + ∆Dec(λ - λ °)                                   (C-2)

 The shower activity as a function of time around its maximum is described by

                          ZHR(λ ) = ZHRmax 10 - B |λ -λmax |                              (C-3)


 where B is given in Table C-2 and describes the slopes of the activity profiles. Since most
 streams are found to have symmetrical profiles a single value of B is sufficient. The
 Geminids are the exception; this stream needs a different value of B for the inward and
 outward slope. Six of the streams do not have a strong enough ZHR to produce a slope,
 here a ‘typical’ value of B = 0,2 is used. Six other streams are best represented by the
 sum of 2 activity profiles, defined by a peak profile ZHRpmax and Bp and a background
 profile ZHRbmax with separate inward and outward slope values Bb+ and Bb- respectively.
 This results in the following expression:


ZHR(λ ) = ZHRmax
             p
                 10- B |λ - λmax | + ZHRmax
                            p
                                        b
                                                  (       b-             b+
                                            10- B ( λmax - λ ) + 10- B ( λ - λmax )   )    (C-4)


 The cumulative flux at solar longitude λ can now be expressed as:

                                                      ZHR (λ )                             (C-5)
                           F (m, λ ) = F (m) max
                                                      ZHRmax

 with

                                   F (m) max = k m -α                                      (C-6)


 The total particle flux FTOT is obtained by summation over all streams

                            FTOT = FSPORADIC + ∑ FST                                       (C-7)


                 NOTE           If the stream model is used in combination with the
                                reference model of 10.2.2.2 it is considered that the
                                model in 10.2.2.2 already includes the average yearly
                                stream contribution.


C.1.4.3.     Calculation of meteoroid stream fluxes
The following algorithm applies to determine the individual streams’ fluxes:
a.     Given λ, choose the closest value of λmax in Table C-2 and determine the stream
       number.
b.     From ∆λ = 2/B determine if λ is within the range (λmax - ∆λ) < λ < (λmax+ ∆λ) (∆λ
       determined by 1% of ZHRmax), if not, skip this stream (λmax to be taken from Table
       C-2).
c.     Calculate ZHR within the profile

                        ZHR (λ ) = ZHRmax
                                      p
# 10 - B|λ -λmax |                        (C-8)


d.     For the six streams in Table C-2 which have two activity profiles (non vanishing
       Bb+ / Bb- values), calculate ZHR(λ) according to equation (C-4).
e.     Form the ratio

                                      ZHR (λ )                                    (C-9)
                                Q=
                                      ZHRmax

f.     The cumulative flux is now given by

                             F (m) = F (m) max ⋅ Q                               (C-10)

with

                               F (m) max = km -α                                 (C-11)

or

                             dF = -α k m - (α +1) dm                             (C-12


k and α are obtained from Table C-2 according to the relevant stream number.
The arrival velocity V∞ includes the gravitational corrections due to the Earth gravity.


C.1.5        Grün meteoroid model

C.1.5.1.     Altitude dependent scaling method
The velocity distribution given in Table C-1 is modified by the gravitational attraction
of the central body.
In case of a single velocity value the flux increase due to gravity at a given distance r of
the centre of the central body is described by the factor G which is given by

                                           vesc                                     (C-13)
                                 G = 1+
                                           v∞2

       or


                                                                                     (C-14)
                                          v2
                              G=
                                       v 2 - v esc


       with
                                                                                     (C-15)
                              v 2 = v esc
                                          + v ∞2

G describes the factor by which a particle flux a large distance from the central body, is
enhanced when measured near to it, due to the gravitational bending of trajectories
(causing an increase in particle spatial density) and increase of particle velocity
[RD.121].
Using the product µ of the constant of gravitation with the mass of the central body (for
Earth µ = 3,986 105 km³/s²; for the Moon µ = 4,900 103 km3/s2), the escape velocity at
distance r can be written as

                                             2µ                                   (C-16)
                                vesc =
                                              r
and v∞ is the velocity in free space, i.e. in the absence of the gravity potential which is
tabulated in Table C-1, and v is the ‘enhanced’ meteoroid velocity at distance r. To
obtain the correct flux enhancement in case a velocity distribution is given we realise
that G is a function of v∞. Thus the enhanced flux FE is obtained from the flux Fmet,0 by

                              FE = G ⋅ Fmet , 0                                   (C-17)

with
                                                                                  (C-18)
                                   ∞
                           G = ∫ n(v∞ )G (v∞ )dv∞

G is the weighted mean G factor for a given velocity distribution. This assumes that
the velocity distribution n(v∞) has been normalised:

                               ∞                                                  (C-19)
                              ∫0 n(v∞ )dv∞ = 1
The above formulas contain the necessary information to calculate the altitude
dependence of the velocity distribution, since we can write

                     ∞                               N     N                      (C-20)
              G = ∫0 n(v∞ )G (v∞ )dv∞ ≈∑ nk Gk =∑ nk'
                                                 k =1      k =1


With nk = n(v∞,k) and n’k = n’(v,k) representing the tabulated values for the original
distribution function and for the distribution function at distance r respectively. N gives
the number of bins used for the velocity distribution. Given the escape velocity at
distance r, vesc and the tabulated values of n(v∞) in 1 km/s bins nk, we calculate the values
n’k for the distribution n’(v) at distance r by


                                 nk' = Gk nk                                   (C-21)

with

                                    vk2                                        (C-22)
                             Gk = 2
                                 vk - vesc


and

                                                                               (C-23)
                            vk = vesc
                                      + v∞2 ,k


If we now tabulate the values of n’k we need to change the bin limits by inserting the
values of v at the places of the given values of v∞ which is done by using again the
formula

                                                                               (C-24)
                              v = vesc
                                       + v∞2

As a result the bin widths are now no longer equidistant in v, which is the independent
variable of the new distribution function n’(v). The new distribution function is re-
normalized and re-binning is required by interpolating the values of n’(v) to obtain
equidistant bins in v. This completes the calculation procedure of the new table for the
velocity distribution n’(v) at the given distance r.
The gravitational enhancement, expressed by the factor G , increases the flux due to a
real increase in spatial density of meteoroids due to gravitational attraction and also
due to the increase in the meteoroids’ velocity. Expression ) accounts for both effects.


C.1.5.2.     Flux enhancement

C.1.5.2.1    Overview
The meteoroid flux to an orbiting spacecraft is given by:

                         Fmet = Fmet , 0 ⋅ G ⋅ s f ⋅ K                        (C-25)

With gravitational enhancement factor G , central body shielding factor sf and
spacecraft motion factor K. Values of G , sf and K for typical Earth orbits are given in
Table J-6.

C.1.5.2.2    Geometric shielding
The shielding factor, sf, for a given surface depends on the spacecraft altitude above the
surface of the central body and on the relative orientation of the surface normal with
respect to the direction of the central body.


                   The average shielding factor is given by:

                                                          (1 + cosη )                             (C-26)
                                                   sf =

                   with:

                                                            (R + RA )                             (C-27)
                                                   sinη =
                                                             ( R + h)

                           where
                           R is the radius of the central body (for Earth R = 6 378 km);
                           RA is the altitude of the atmosphere (for Earth RA = 100 km);
                           h   is the spacecraft altitude above surface;
                           The shielding factors are derived from [RD.21].

                   C.1.5.2.3       Spacecraft motion
                   In addition to the attraction and shielding by the central body, the spacecraft velocity
                   causes the encountered flux to increase. The flux increase is given by vrel/v where v is
                   the (gravitational enhanced) meteoroid velocity and vrel is the relative velocity of the
                   meteoroid with respect to the spacecraft. When calculating fluxes using numerical
                   codes one generally considers each meteoroid velocity vk bin separately. However, the
                   outcome, which depends on the velocity distribution, is a single enhancement factor K.


C.2      Tables
                    Table C-1: Normalized meteoroid velocity distribution
  v      n(v∞)     n(v400 km)          v       n(v∞)        n(v400 km)        v        n(v∞)     n(v400 km)
[km/s]                               [km/s]                                [km/s]
 0,5     7,2E-04    0,0E+00           24,5     2,7E-02         3,2E-02       48,5      4,3E-04     3,7E-04
 1,0     1,5E-03    0,0E+00           25,0     2,5E-02         3,0E-02       49,0      4,3E-04     3,5E-04
 1,5     2,3E-03    0,0E+00           25,5     2,4E-02         2,8E-02       49,5      4,2E-04     3,4E-04
 2,0     3,7E-03    0,0E+00           26,0     2,3E-02         2,6E-02       50,0      4,1E-04     3,3E-04
 2,5     5,2E-03    0,0E+00           26,5     2,2E-02         2,4E-02       50,5      4,1E-04     3,2E-04
 3,0     7,3E-03    0,0E+00           27,0     2,0E-02         2,3E-02       51,0      4,0E-04     3,2E-04
 3,5     9,4E-03    0,0E+00           27,5     1,9E-02         2,1E-02       51,5      3,9E-04     3,1E-04
 4,0     1,2E-02    0,0E+00           28,0     1,8E-02         2,0E-02       52,0      3,8E-04     3,1E-04
 4,5     1,5E-02    0,0E+00           28,5     1,7E-02         1,9E-02       52,5      3,7E-04     3,0E-04
 5,0     1,8E-02    0,0E+00           29,0     1,6E-02         1,8E-02       53,0      3,6E-04     2,9E-04
 5,5     2,1E-02    0,0E+00           29,5     1,5E-02         1,7E-02       53,5      3,6E-04     2,8E-04
 6,0     2,4E-02    0,0E+00           30,0     1,4E-02         1,6E-02       54,0      3,5E-04     2,8E-04


  v      n(v∞)     n(v400 km)     v      n(v∞)     n(v400 km)     v        n(v∞)     n(v400 km)
[km/s]                          [km/s]                          [km/s]
 6,5     2,7E-02    0,0E+00      30,5    1,3E-02     1,5E-02     54,5      3,5E-04     2,7E-04
 7,0     3,0E-02    0,0E+00      31,0    1,2E-02     1,4E-02     55,0      3,4E-04     2,7E-04
 7,5     3,2E-02    0,0E+00      31,5    1,2E-02     1,3E-02     55,5      3,3E-04     2,6E-04
 8,0     3,5E-02    0,0E+00      32,0    1,1E-02     1,2E-02     56,0      3,1E-04     2,6E-04
 8,5     3,7E-02    0,0E+00      32,5    9,9E-03     1,1E-02     56,5      3,0E-04     2,5E-04
 9,0     3,9E-02    0,0E+00      33,0    9,1E-03     1,0E-02     57,0      2,8E-04     2,4E-04
 9,5     4,1E-02    0,0E+00      33,5    8,4E-03     9,2E-03     57,5      2,7E-04     2,3E-04
 10,0    4,2E-02    0,0E+00      34,0    7,8E-03     8,4E-03     58,0      2,5E-04     2,1E-04
 10,5    4,3E-02    0,0E+00      34,5    7,1E-03     7,7E-03     58,5      2,4E-04     2,0E-04
 11,0    4,5E-02     8,6E-02     35,0    6,5E-03     7,1E-03     59,0      2,3E-04     1,9E-04
 11,5    4,6E-02     7,4E-02     35,5    5,9E-03     6,5E-03     59,5      2,2E-04     1,8E-04
 12,0    4,6E-02     7,5E-02     36,0    5,4E-03     5,9E-03     60,0      2,0E-04     1,7E-04
 12,5    4,7E-02     7,5E-02     36,5    4,9E-03     5,4E-03     60,5      1,9E-04     1,6E-04
 13,0    4,8E-02     7,3E-02     37,0    4,5E-03     4,9E-03     61,0      1,8E-04     1,5E-04
 13,5    4,8E-02     7,2E-02     37,5    4,0E-03     4,4E-03     61,5      1,7E-04     1,5E-04
 14,0    4,9E-02     7,0E-02     38,0    3,7E-03     4,0E-03     62,0      1,6E-04     1,4E-04
 14,5    4,9E-02     6,8E-02     38,5    3,3E-03     3,6E-03     62,5      1,4E-04     1,3E-04
 15,0    4,9E-02     6,6E-02     39,0    3,0E-03     3,2E-03     63,0      1,3E-04     1,2E-04
 15,5    4,9E-02     6,4E-02     39,5    2,7E-03     2,9E-03     63,5      1,2E-04     1,1E-04
 16,0    4,8E-02     6,2E-02     40,0    2,4E-03     2,6E-03     64,0      1,1E-04     9,7E-05
 16,5    4,8E-02     6,1E-02     40,5    2,1E-03     2,3E-03     64,5      9,5E-05     8,8E-05
 17,0    4,7E-02     5,9E-02     41,0    1,9E-03     2,1E-03     65,0      8,5E-05     7,9E-05
 17,5    4,7E-02     5,8E-02     41,5    1,7E-03     1,9E-03     65,5      7,5E-05     7,0E-05
 18,0    4,6E-02     5,6E-02     42,0    1,5E-03     1,7E-03     66,0      6,5E-05     6,3E-05
 18,5    4,5E-02     5,4E-02     42,5    1,3E-03     1,5E-03     66,5      5,6E-05     5,5E-05
 19,0    4,3E-02     5,3E-02     43,0    1,2E-03     1,3E-03     67,0      4,8E-05     4,7E-05
 19,5    4,2E-02     5,1E-02     43,5    1,0E-03     1,1E-03     67,5      4,0E-05     4,0E-05
 20,0    4,1E-02     4,9E-02     44,0    9,2E-04     9,9E-04     68,0      3,4E-05     3,4E-05
 20,5    3,9E-02     4,8E-02     44,5    8,2E-04     8,8E-04     68,5      2,8E-05     2,9E-05
 21,0    3,8E-02     4,6E-02     45,0    7,4E-04     7,7E-04     69,0      2,4E-05     2,4E-05
 21,5    3,6E-02     4,4E-02     45,5    6,5E-04     6,9E-04     69,5      1,9E-05     2,0E-05
 22,0    3,5E-02     4,2E-02     46,0    5,9E-04     6,1E-04     70,0      1,6E-05     1,7E-05
 22,5    3,3E-02     4,0E-02     46,5    5,4E-04     5,4E-04     70,5      1,2E-05     1,4E-05
 23,0    3,1E-02     3,8E-02     47,0    5,0E-04     4,8E-04     71,0      8,3E-06     1,1E-05
 23,5    3,0E-02     3,6E-02     47,5    4,7E-04     4,4E-04     71,5      4,9E-06     8,0E-06
 24,0    2,8E-02     3,4E-02     48,0    4,5E-04     4,0E-04


                                     Table C-2: The annual meteor streams
                                                      (Part 1 of 2)
               λmax    RAmax   ΔRA   Decmax   ΔDec    ZRHpmax   Bp+      Bp-    ZHRbmax   Bb+     Bb-     α       k        v∞
  Bootids      283,3    232    0,6    45      -0,31     10       2,5     2,5      20      0,37    0,45   0,92   8,4E-17    43
  γVelids      285,7    124    0,5    -47     -0,2      2,4     0,12    0,12       0       0       0     1,1    5,8E-19    35
 αCrucids      294,5    193    1,1    -63     -0,4       3      0,11    0,11       0       0       0     1,06   1,9E-19    50
αHydrusids     300      138    0,7    -13     -0,3       2       0,2     0,2       0       0       0     1,03   3,4E-19    44
 αCarinids     311,2    99     0,4    -54      0        2,3     0,16    0,16       0       0       0     0,92   1,3E-17    25
  δVelids      318      127    0,5    -50     -0,3      1,3      0,2     0,2       0       0       0     1,1    3,1E-19    35
αCentaurids    319,4    210    1,3    -58     -0,3      7,3     0,18    0,18       0       0       0     0,83   3,7E-18    57
οcentaurids    323,4    176    0,9    -55     -0,4      2,2     0,15    0,15       0       0       0     1,03   1,9E-19    51
θCentaurids    334      220    1,1    -44     -0,4      4,5      0,2     0,2       0       0       0     0,95   4,4E-19    60
 δLeonids      335      169     1     17      -0,3      1,1     0,049   0,049      0       0       0     1,1    1,9E-18    23
 Virginids     340      165    0,9     9      -0,2      1,5      0,2     0,2       0       0       0     1,1    1,5E-18    26
 γNormids      353      285    1,3    -56     -0,2      5,8     0,19    0,19       0       0       0     0,87   1,9E-18    56
 δPavonids     11,1     311    1,6    -63     -0,2      5,3     0,075   0,075      0       0       0     0,95   5,1E-19    60
  Lyrids       32,4     274    1,2    33       0,2     12,8     0,22    0,22       0       0       0     0,99   2E-18      49
μVirginids      40      230    0,5     -8     -0,3      2,2     0,045   0,045      0       0       0     1,1    1,1E-18    30
 ηAquarids     46,5     340    0,9     -1      0,3     36,7     0,08    0,08       0       0       0     0,99   1,5E-18    66
  βCorona
   Aust.        56      284    1,3    -40      0,1       3       0,2     0,2       0       0       0     1,13   1,5E-19    45
 αScorpiids    55,9     252    1,1    -27     -0,2      3,2     0,13    0,13       0       0       0     0,92   4,7E-17    21
Da.Arietids     77      47     0,7    24       0,6      54       0,1     0,1       0       0       0     0,99   2,6E-17    38
γSagitarids    89,2     286    1,1    -25      0,1      2,4     0,037   0,037      0       0       0     1,06   1,9E-18    29
  τCetids      95,7     24     0,9    -12      0,4      3,6     0,18    0,18       0       0       0     0,92   3,7E-19    66
θOphiuchids     98      292    1,1    -11      0,1      2,3     0,037   0,037      0       0       0     1,03   3,5E-18    27
 τAquarids      98      342     1     -12      0,4      7,1     0,24    0,24       0       0       0     0,92   8,9E-19    63
νPhoenicids    111,2    28      1     -40      0,5       5      0,25    0,25       0       0       0     1,1    2,6E-19    48
 οCygnids      116,7    305    0,6    47       0,2      2,5     0,13    0,13       0       0       0     0,99   1,4E-18    37
Capricornid    122,4    302    0,9    -10      0,3      2,2     0,041   0,041      0       0       0     0,69   8,3E-17    25
τAquarids N    124,1    324     1      -8      0,2       1      0,063   0,063      0       0       0     1,19   3,6E-20    42
Pisces Aust.   124,4    339     1     -33      0,4       2       0,4     0,4      0,9     0,03    0,1    1,16   1,5E-19    42
δAquarids S.   125,6    340    0,8    -17      0,2     11,4     0,091   0,091      0       0       0     1,19   3,6E-19    43
τAquarids S.   131,7    335     1     -15      0,3      1,5     0,07    0,07       0       0       0     1,19   1,2E-19    36
  Perseids     140,2    47     1,3    58       0,1      70      0,35    0,35      23      0,05   0,092   0,92   1,2E-17    61
 κCygnids      146,7    290    0,6    52       0,3      2,3     0,069   0,069      0       0       0     0,79   3E-17      27
πEridanids     153      51     0,8    -16      0,3      40       0,2     0,2       0       0       0     1,03   1,7E-18    59
 γDoradids     155,7    60     0,5    -50      0,2      4,8     0,18    0,18       0       0       0     1,03   1,1E-18    41
 Aurigids      158,2    73      1     43       0,2       9      0,19    0,19       0       0       0     0,99   2,9E-19    69
 κAquarids     177,2    339    0,9     -5      0,4      2,7     0,11    0,11       0       0       0     1,03   1,9E-17    19
εGeminids      206,7    104    0,7    28       0,1      2,9     0,082   0,082      0       0       0     1,1    2,1E-20    71
 Orionids      208,6    96     0,7    16       0,1      25      0,12    0,12       0       0       0     1,13   1,6E-19    67
   Leo
 Minorids      209,7    161     1     38      -0,4      1,9     0,14    0,14       0       0       0     0,99   1,1E-19    61
  Taurids      223,6    50     0,3    18       0,1      7,3     0,026   0,026      0       0       0     0,83   4,3E-17    30
δEridanids     229      54     0,9     -2      0,2      0,9      0,2     0,2       0       0       0     1,03   7,5E-19    31


                                     Table C-2: The annual meteor streams
                                                      (Part 2 of 2)
              λmax    RAmax   ΔRA     Decmax   ΔDec   ZRHpmax   Bp+      Bp-    ZHRbmax   Bb+     Bb-     α       k        v∞
 ζPuppids     232,2    117    0,7      -42     -0,2     3,2     0,13    0,13       0       0       0     1,22   9,5E-20    41
 Leonids      235,1    154     1       22      0,4      19      0,55    0,55       4      0,025   0,15   1,22   3,4E-20    71
Puppids/Vel   252      128    0,8      -42     -0,4     4,5     0,034   0,034      0       0       0     1,06   8,2E-19    40
Phoenicids    252,4    19     0,8      -58     0,4      2,8      0,3     0,3       0       0       0     1,03   2,5E-17    18
Monoceroti.   260,9    100     1       14      -0,1      2      0,25    0,25       0       0       0     1,25   3,3E-20    43
 Geminids     262,1    113     1       32      0,1      74      0,59    0,81      18      0,09    0,31   0,95   7,8E-17    36
σHydrusids    265,5    133    0,9       0      -0,3     2,5      0,1     0,1       0       0       0     1,1    4,7E-20    59
  Ursids      271      224    -0,2     78      -0,3     10       0,9     0,9       2      0,08    0,2    1,22   8,1E-19    35


                                                       Annex D (informative)
                                                                 Gravitation

D.1   Gravity models: background
            Equation (4-4) can be rewritten in terms of amplitude Jlm and phase angle λlm of
            individual contributions of the spherical harmonic functions to the geopotential.

                           GM                                               
                                             l
                                    N
                                        ae  l
                        U=     1 - ∑   ∑ J lm cos(m[λ - λlm ]) Plm (sin φ )                (D-1)
                            r  l = 2  r  m =0                              

            The equivalence of J lm , λlm and Clm , S lm is governed by the following equations.


                                        Clm = - J lm cos(m λlm )                              (D-2)


                                         Slm = - J lm sin(m λlm )                             (D-3)


                                                                                              (D-4)
                                              J lm = Clm2 + Slm2


# 2  S lm                               (D-5)
                                      λlm =     arctan             
                                              m          J lm + Clm 

            For m ≠ l, the terms Clm , S lm are called tesseral harmonics. These components divide
            the Earth’s surface in a checkerboard pattern of hills and valleys, the amplitude and
            phase of which are determined by the associated coefficients J lm , λlm .

            For l = m, the functions Plm = 1,0. These terms are called sectorial harmonics. They
            divide the spherical surface into longitude-dependent sectors, similar to the segments
            of a basket ball.

            For m = 0, the only remaining terms Cl 0 = - J l 0 (where J l 0 is mostly abbreviated as J l
            ) are called zonal harmonics. They divide the spherical surface into purely latitude-
            dependent bands of toroidal hills and valleys, with Earth oblateness ( J 2 ) as the
            dominating contribution. J 2 reflects the equilibrium response of a rotating, elastic
            Earth under the influence of centrifugal and gravitational forces. For the model EIGEN-
            GL04C the resulting Earth ellipsoid has an equatorial radius of a e = 6378136 m (can
            slightly vary with the selected geopotential model), a polar radius of be = 6356752 m
            (can slightly vary with the selected geopotential model), and an oblateness of
             f e = (a e - be ) / a e = 1 / 298,257 .
            By convention, the central attraction term of a spherical body of uniform mass
            distribution is C 00 = - J 00 = 1 . If the centre of mass coincides with the origin of the


             body-centred coordinate system, then          C10 = C11 = S11 = 0 . If the body-fixed
             coordinate axes furthermore coincide with the axes of the main moments of inertia, then
             C21 = S 21 = S 22 = 0 .
             In order to develop a geopotential model it is necessary to measure the gravitational
             acceleration directly or indirectly, and estimate the set of model coefficients (GM, a e ,
             Clm , S lm ) in a least squares sense on the basis of an adequately large number of such
             measurements. Direct measurements of the gravity potential are difficult, and typically
             involve highly sensitive gradiometers that measure the acceleration gradient. Indirect
             measurements of the gravity potential are obtained from precise tracking data for Earth
             orbiting satellites. Because of the difficulties of collecting global gravity measurements
             on land or sea, relevant global geopotential models did not exist before the days of
             artificial Earth orbiting satellites, and only the first few degree and order terms were
             known with some accuracy.
             However, a revolution in gravity model development has occurred after the year 2000,
             in the form of the three dedicated gravity field missions: CHAMP, GRACE and GOCE.
             All three satellites employ precise global tracking via GPS, allowing continuous high
             quality orbit determination, and measure the gravity acceleration directly. The arrival of
             these dedicated gravity missions has essentially rendered any earlier gravity model
             obsolete. GRACE-only models of 360×360 resolution in degree and order (about 1°×1°
             patches, with ~100 km resolution on the Earth’s surface) have demonstrated to be
             superior to any of the earlier combined models, even if these were based on the
             accumulated satellite data sets from three preceding decades. The GRACE models are
             accurate enough to investigate the temporal variability of the gravity field, for instance
             due to seasonal displacements of water masses. The EIGEN-6C4 model [RD.168] based
             on GOCE mission data with a resolution up to 2190 in degree and order (sub-degree,
             ~10km resolution) is one of the latest state of the art models to consider for gravity
             model applications.


D.2   Guidelines for use
             The evaluation of a complete 360 × 360 geopotential model at every satellite location of
             interest represents a substantial computational effort that is usually both undesirable
             and unnecessary. This section explains how an adequate truncation level of the
             expansion series can be selected for a satellite orbit of interest, based on two elementary
             observations.

             The first observation is that the term (ae / r ) in equations (D-1) and (4-4) leads to a
                                                             l

             rapid attenuation of the gravity potential with orbit radius r, so that the details of the
             geopotential become less and less notable at increasing height (in other words, the Earth
             rapidly turns into a point mass with increasing distance).
             The second observation is that the expansion series can always be safely truncated at a
             degree l that provides contributions of lower order of magnitude than the inherent noise
             level of the model itself.
             Considering these observations, an adequate truncation degree can be determined on
             the basis of Kaula’s rule ([RD.31] and equation D.6). This is briefly illustrated via an
             example that selects a suitable truncation degree l for the orbit height of GNSS


constellations, which have a radius r of about 4 times the equatorial radius ae (i.e. an
altitude of H≈25 000 km).
In theory, the degree N of the expansion should be infinite to model the exact variability
of the geopotential surface. In practice the maximum degree remains finite. This leads
to truncation errors in the expansion series, and thus in a quantification error of the
gravity acceleration. In order to get an impression of the truncation effect, Kaula (see
[RD.31]) formulated a rule-of-thumb that provides the order of magnitude of
normalized expansion coefficients as a function of the degree l:

# 10 -5                               (D-6)
                               Clm , S lm =
                                               l2

This estimate has turned out to be remarkably accurate, even for modern day models
that expand up to degree and order 360 or higher.
Table D-1 shows for increasing degree l the signal power in the harmonic components
for that degree according to the Kaula rule, the attenuation factor (ae / r ) for that
                                                                                  l

degree, and the product of these two, which represents the remaining signal power at
the orbit height of interest.
The inherent noise level of a 360 × 360 degree model can be approximated by the signal
power for l = 360, which is 7,7x10-11.
Looking in the last column of Table D-1, it appears that the attenuating effect of the
# 25 000 km orbit height already reduces the degree 8 terms of the model to an order of
magnitude that is below the noise level of the model.
In practice, one should account for the fact that Kaula’s rule is just an approximation,
albeit an accurate one. Instead of applying the estimated 8 × 8 resolution, one can choose
to apply e.g. a 12 × 12 resolution for GPS orbits, especially because the effort of
evaluating a 12 × 12 field is still trivial in comparison to the evaluation of the full 360 ×
360 model.
The above selection process for a suitable truncation degree does not account for cases
where the orbital motion of the satellite, in combination with the rotation of the Earth,
leads to a resonance situation where certain harmonic components are continuously
sensed by the satellite in exactly the same way. This is particularly likely to happen for
so called repeat orbits, where the ground track of the spacecraft returns to the same
point on the Earth surface after M orbital revolutions, which take exactly the same
amount of time as N revolutions of the Earth (= days). This is, for instance, the case for
geosynchronous, GNSS, and Earth observation satellites. Even very small harmonic
components that are in exact phase with orbital motion can then result in significant
orbital perturbations after sufficient propagation time intervals.
For Earth-orbiting satellites, the only tide generating bodies of interest are the Sun and
the Moon. This leads to the following main conclusions:
- The tidal effects of the Moon are more pronounced than those due to the Sun,
      because the effect of distance is stronger than that of mass.

- The main gravity harmonic perturbation is the zonal harmonic J 2 which is of
      order 10-3, while further gravity harmonics are of order 10-6 or smaller.
      Consequently, tidal effects can only be ignored in cases where the gravity field is
      truncated at degree 2 (Earth oblateness only) or 1 (central body gravity only).


               Hence, luni-solar tide effects become non negligible when modelling harmonic
               perturbations of the gravity field for degrees 3 or higher.
               Table D-2 gives the coefficients of the EIGEN-GLO4C model up to degree and order
               8x8.
               Figure D-1 shows a graphical representation of the EIGEN-GLO4C Geoid (greatly
               exaggerated).


D.3   Availability of models
               - The EIGEN-GLO4C and other EIGEN model data and implementation details
                      can be downloaded from the International Centre for Global Earth Models
                      http://icgem.gfz-potsdam.de/ICGEM/ICGEM.html
               - The IERS report 36 can be downloaded from
                      http://www.iers.org/
               - The DE430 directory is available at
                      ftp://ssd.jpl.nasa.gov/pub/eph/planets/ascii/de430
               - A modified version including additional perturbing asteroids can be found at
                      ftp://ssd.jpl.nasa.gov/pub/eph/planets/
               - The SPICE kernal version of DE430 is located at
                      ftp://ssd.jpl.nasa.gov/pub/eph/planets/bsp/de430.bsp


D.4   Tables
                    Table D-1: Degree power attenuation for an orbit at 25 000 km altitude
                   degree l      Kaula signal         attenuation factor        remaining signal
                                power for this         at H=25 000 km           power at H=25 000
                                   degree                                              km
2 2,500E-06               6,250E-02                1,563E-07
3 1,111E-06               1,563E-02                1,736E-08
4 6,250E-07               3,906E-03                2,441E-09
5 4,000E-07               9,766E-04                3,906E-10
6 2,778E-07               2,441E-04                6,782E-11
7 2,041E-07               6,104E-05                1,246E-11
8 1,563E-07               1,526E-05                2,384E-12
9 1,235E-07               3,815E-06                4,710E-13
10 1,000E-07               9,537E-07                9,537E-14
12 6,944E-08               5,960E-08                4,139E-15
15 4,444E-08               9,313E-10                4,139E-17
20 2,500E-08               9,095E-13                2,274E-20
50 4,000E-09               7,889E-31                3,155E-39
100 1,000E-09               6,223E-61                6,223E-70
360 7,716E-11               1,813E-217               1,399E-227


      Table D-2: Coefficients of the EIGEN-GL04C model up to degree and order 8 × 8
              m=0           1           2           3           4           5             6             7          8
       l=0   1,00E+00
             0,00E+00
1 0,00E+00    0,00E+00
             0,00E+00    0,00E+00
# 2 -4,84E-04   -2,55E-10   2,44E-06                                        C-coefficient
             0,00E+00    1,44E-09    -1,40E-06                                       S-coefficient
3 9,57E-07    2,03E-06    9,05E-07    7,21E-07
             0,00E+00    2,48E-07    -6,19E-07   1,41E-06
4 5,40E-07    -5,36E-07   3,51E-07    9,91E-07    -1,88E-07
             0,00E+00    -4,74E-07   6,62E-07    -2,01E-07   3,09E-07
5 6,87E-08    -6,29E-08   6,52E-07    -4,52E-07   -2,95E-07   1,75E-07
             0,00E+00    -9,44E-08   -3,23E-07   -2,15E-07   4,98E-08    -6,69E-07
# 6 -1,50E-07   -7,59E-08   4,87E-08    5,72E-08    -8,60E-08   -2,67E-07    9,46E-09
             0,00E+00    2,65E-08    -3,74E-07   8,94E-09    -4,71E-07   -5,37E-07    -2,37E-07
# 7 9,05E-08    2,81E-07    3,30E-07    2,50E-07    -2,75E-07   1,65E-09     -3,59E-07      1,52E-09
             0,00E+00    9,51E-08    9,30E-08    -2,17E-07   -1,24E-07   1,79E-08     1,52E-07       2,41E-08
# 8 4,95E-08    2,32E-08    8,00E-08    -1,94E-08   -2,44E-07   -2,57E-08    -6,60E-08      6,73E-08   -1,24E-07
             0,00E+00    5,89E-08    6,53E-08    -8,60E-08   6,98E-08    8,92E-08     3,09E-07       7,49E-08   1,21E-07


D.5   Figures


  Figure D-1: Graphical representation of the EIGEN-GLO4C geoid (note: geoid heights are
                               exaggerated by a factor 10 000).


                                                 Annex E (informative)
                                                   Geomagnetic fields

E.1   Overview of the effects of the geomagnetic field
             Spacecraft motion across the geomagnetic field results in a motionally-induced e.m.f.
             given by E=v×B in the spacecraft. If a current path can be completed, a current flows
             through the spacecraft and the surrounding plasma. These phenomena can lead to
             generation of a few volts potential differences on large spacecraft in LEO. The effect is
             also used or studied in tethered satellite missions where the length of the tether
             perpendicular to B can lead to large currents and potentials.
             Interaction between the magnetic field and an on­board magnetic moment m gives rise
             to a force:

                                            F = (m . ∇ )B                                   (E-1)

             which can be used for attitude control where an on­board magnetic torquer provides m.
             Dynamic fluctuations in plasma populations, electric fields and geomagnetic fields are
             intimately connected and plasma disturbances can be monitored via observations of the
             geomagnetic field. These are quantified by the familiar Kp, Ap, Dst and other geomagnetic
             indices (see clause 6 for more detail on geomagnetic activity indices.


E.2   Models of the internal geomagnetic field
             Examples of recognised, high-degree, models of the internal field are those due to Olsen
             et al. [RD.138] and Maus et al. [RD.139]. These models currently cover the period
             (approximately) of 2000 to 2005. Another is the ‘Comprehensive Model’ of Sabaka et al
             (2004) [RD.140]. This model seeks to represent all field sources under magnetically quiet
             conditions and models the time variation of sources by cubic splines. The
             Comprehensive Model is widely used in the scientific community: it has a long history
             and is regarded as being amongst the most accurate and flexible for scientific purposes.
             It can be expected that this model, now at revision four (CM4), continues to be
             occasionally updated, in the light of new scientific advances. However the set of input
             parameters is relatively complex and it is not applicable under all solar and
             geomagnetic activity conditions. Moreover the external field component is not as
             flexible as the purely internal field models such as the IGRF even though it does include
             a representation of the dayside Sq ionospheric magnetic field.
             Models such as the International Geomagnetic Reference Field (IGRF) and World
             Magnetic Model (WMM) represent the internal fields of the Earth only.
             See Figure E-1 and Table E-1 for more information on the current revision of the IGRF.
             These models are updated on a five-year basis, assuming a linear secular variation
             between updates. The IGRF currently extends to spherical harmonic degree 13
             (equivalent to a wavelength of 3 077 km on the ground) and is produced by a
             collaboration of IAGA scientists. IAGA also define a definitive reference field (DGRF)
             for a given epoch (most recently DGRF2010), where it is agreed that no new data is


             likely to be forthcoming to revise and improve the existing IGRF for that epoch or
             earlier. Prior to 2000, the IGRF is truncated at degree 10, the increased resolution after
             that date being due to the improved quality of recent global satellite surveys of the main
             field.
             The World Magnetic Model (WMM), produced jointly with the US National
             Geophysical Data Centre (NGDC), is the standard model in UK Ministry of Defence
             and US Department of Defence navigation and attitude reference systems. It is also used
             widely in civilian navigation systems. The model is used on marine charts. Like the
             IGRF the WMM is revised according to fixed procedures every five years. The current
             model, WMM2015, extends to spherical harmonic degree 12 and is valid till 2020.


E.3   Models of the external geomagnetic field
             Spherical harmonic models of external fields, e.g. CM4, are typically no higher than
             degree two (i.e. quadrupolar) and capture only the quasi-static elements of the external
             field. There is usually some dependence on the Dst (or similar) geomagnetic index,
             which parameterises variations in the symmetric ring current intensity. Neither the
             IGRF nor WMM have an external field component.
             For satellite operations closer to the Earth, the spherical harmonic models of Olsen et al
             [RD.138] or Sabaka et al [RD.140] can be useful. However, these models are inaccurate
             on the dayside of the Earth (approximately 0700-1700 local solar time), at geomagnetic
             latitudes above about 55 degrees, or during more active geomagnetic conditions
             (approximately Kp>3). They are also likely to be degraded in accuracy beyond low-Earth
             orbit (>800km altitude), where the magnetic survey satellites that measure the base data
             for these models are flown.
             Non-spherical harmonic models use a variety of geomagnetic and solar wind data to
             parameterise the various external current systems. Dynamic models are widely used
             and combined with internal models such as IGRF. The models of Tsyganenko and of
             Alexeev and co-workers both use the IGRF as the core field. They therefore both provide
             a consistent model of the total field measured by any in-situ spacecraft, from
             approximately 2-70 Earth radii.
             Older dynamic models also exist, dating back to the 1960s, and these are occasionally
             used in the space science and engineering community, e.g. when using radiation belt
             models of that era. These include models due to Mead and Fairfield (1975) [RD.141],
             Olsen and Pfitzer (1977) [RD.142], Hilmer (1989) [RD.143] and Voight (1981) [RD.144].
             For further information on these older models see the review of Jordan (1994) [RD.145].


E.4   Magnetopause boundary
             The location and field strength of the magnetopause is integral to most external field
             models. However, it is sometimes useful to be able to estimate the magnetopause
             location explicitly. Some simple expressions can be used to estimate basic locations of
             magnetospheric boundaries for mission planning. The stand­off radial distance of the
             magnetopause in the sunward direction is given approximately by:


# 2 -1 6
                                         Lmp = 107,4(n sw u sw )                               (E-2)


                         where
                         Lmp   is in units of Earth­radii,
                         nsw   the solar wind proton number density is in units of cm-3 and
                         usw   the solar wind bulk velocity is in units of km s-1.
            Typical values for nsw and usw are 8 cm-3 and 450 km s-1 respectively, leading to a stand­off
            distance of about 10 RE.
            The model of Sibeck et al. [RD.32] represents the complete magnetopause position, not
            just at the sub-solar point, as the function:

                                         R 2 + Ax 2 + Bx + C = 0                               (E-3)

                         where
                         R2 = y2 + z2;
                         x, y, and z      are GSM coordinates, in Earth­radii;
                         A, B and C are fit parameters dependent on the solar wind pressure as
                         given in Table E-2.


E.5   Geomagnetic coordinate system -- B and L
            Geomagnetic coordinates are useful or necessary for a number of applications where
            charged particle morphology or behaviour needs to be described in the magnetosphere.
            The most important application is in models of the Earth’s radiation­belt environment
            (see clause 9). These particle models give fluxes of trapped energetic particles as
            functions of particle energy and of McIlwain’s geomagnetic co­ordinates L and B/B0
            [RD.102].
            The kinetic energy of a charged particle trapped in a geomagnetic field model is
            conserved (a constant of motion) provided the B-field is stationary (independent of
            time), and provided that the acceleration by magnetospheric electric fields can be
            neglected. This is a satisfactory approximation for particles whose kinetic energy is
            larger than 500 keV.
            When the kinetic energy of the particles is smaller than 500 MeV their motion can be
            described as the superposition of a gyration about the magnetic field lines, a latitudinal
            oscillation between two conjugate mirror points and an azimuthal drift around the
            Earth. Three adiabatic invariants (μ, I and Ф) can be associated respectively with these
            three periodic motions provided certain conditions are satisfied. The approximate
            conservation of the adiabatic invariants, contributes to the definition of invariant
            coordinates for mapping directional and omni-directional fluxes of particles trapped in
            the Earth’s Radiation Belts.
            Two invariant coordinates, e.g. mirror point magnetic field (Bm) and I (E-4), are required
            to define a drift shell, i.e. the surface formed by the segments of geomagnetic field lines
            between conjugate mirror points of particles.


                                      B 
                                l2

                           I = ∫ 1 -      dl                                  (E-4)
                               l1 
                                       Bm 

Bm is the magnetic field strength at the mirror points (the low altitude edge of a drift
shell); since the magnetic moment μ of trapped particles is the first adiabatic invariant
of motion of trapped particles, Bm is also an invariant coordinate characterizing a drift
shell;
I is the second invariant coordinate required to identify uniquely the drift shell. The
integral in (E-4) is evaluated along the field line between both conjugate mirror points
l1 and l2 .
Since I is not a visually suggestive coordinate, McIwain [RD.101], [RD.102], [RD.118]
introduced his L parameter which is approximately (but not exactly) equal to the
equatorial distance of the magnetic field line passing across the point of an
observational measurement.
When Bm is determined by using a geomagnetic field model (e.g. IGRF) the value of L
is uniquely determined by the mathematical transformation (E-5):

                              B         I 3 Bm 
                          L3  m  = f                                     (E-5)
                               Md       Md 

In this equation I is computed by numerical integration of (E-4) using the same magnetic
field model (IGRF).
Md           = 31 165,3 nT RE3 is the fixed value of the magnetic moment of the reference
             dipole adopted in 1961 by McIwain to map the measured fluxes of trapped
             of radiation belt particles [RD.102], [RD.118].
L            is the second invariant coordinate used (instead of I) to label drift shells.
The pair of invariant coordinates (Bm, L) uniquely defines a drift shell. It should be
emphasized that different points along the same geomagnetic field lines can be
characterized by different values L and by different drift shells.
The function f (E-5) was calculated by McIlwain [RD.102] and a simple approximation
for f was found by Hilton [RD.103].
Note that a drift shell can also be characterized by Ф the third invariant of motion (the
flux invariant), and an associated L* parameter. In general L and L* are not equal, except
for a dipole geomagnetic field. However, the invariance of Ф or L* requires that the
geomagnetic field distribution does not change significantly over a time period longer
than the azimuthal drift period (> 10 minutes), while the adiabatic invariance of I or L
requires that the B-field distribution is independent of time over only several bounce
periods (> 1 second).
Other pairs of invariant coordinates derived from Bm and L have been proposed and
happen to be more appropriate in certain cases: e.g. the invariant latitude (Λ), the
invariant radius (R), or the invariant altitude (h_inv) [RD.120] which is quite convenient
to bin/map fluxes measurements at low-altitudes in the Radiations Belts.


E.6   Tables
      Table E-1: Magnetic pole positions since 1900 as determined from IGRF-12 in WGS84 geodetic latitude (taken from [RN.38])
                          North dip pole         South dip pole     North geomagnetic pole    South geomagnetic pole
              Epoch    Latitude Longitude Latitude Longitude        Latitude    Longitude     Latitude    Longitude
# 1900 70.46      -96.19     -71.72     148.32      78.68       -68.79       -78.68       111.21
# 1905 70.66      -96.48     -71.46     148.55      78.68       -68.75       -78.68       111.25
# 1910 70.79      -96.72     -71.15     148.64      78.66       -68.72       -78.66       111.28
# 1915 71.03      -97.03      -70.8     148.54      78.64       -68.57       -78.64       111.43
# 1920 71.34      -97.39     -70.41      148.2      78.63       -68.38       -78.63       111.62
# 1925 71.79       -98       -69.99     147.63      78.62       -68.27       -78.62       111.73
# 1930 72.27      -98.69     -69.52     146.79      78.6        -68.26        -78.6       111.74
# 1935 72.8      -99.34     -69.06     145.77      78.57       -68.36       -78.57       111.64
# 1940 73.3      -99.87     -68.57      144.6      78.55       -68.51       -78.55       111.49
# 1945 73.93     -100.24     -68.15     144.44      78.55       -68.53       -78.55       111.47
# 1950 74.64     -100.86     -67.89     143.55      78.55       -68.85       -78.55       111.15
# 1955 75.18     -101.41     -67.19      141.5      78.54       -69.16       -78.54       110.84
# 1960 75.3     -101.03      -66.7     140.23      78.58       -69.47       -78.58       110.53
# 1965 75.63     -101.34     -66.33     139.53      78.6        -69.85        -78.6       110.15
# 1970 75.88     -100.98     -66.02      139.4      78.66       -70.18       -78.66       109.82
# 1975 76.15     -100.64     -65.74     139.52      78.76       -70.47       -78.76       109.53
# 1980 76.91     -101.68     -65.42     139.34      78.88       -70.76       -78.88       109.24
# 1985 77.4     -102.61     -65.13     139.18      79.04        -70.9       -79.04       109.1
# 1990 78.09     -103.68     -64.91      138.9      79.21       -71.13       -79.21       108.87
# 1995 79.09     -105.42     -64.79     138.76      79.39       -71.42       -79.39       108.58


          North dip pole                  South dip pole              North geomagnetic pole         South geomagnetic pole
Epoch   Latitude Longitude Latitude Longitude                         Latitude      Longitude         Latitude   Longitude
2000     80.97         -109.64           -64.66          138.3         79.61            -71.57         -79.61      108.43
2005     83.19         -118.24           -64.55          137.85        79.82            -71.81         -79.82      108.19
2010     85.02         -132.84           -64.43          137.32        80.09            -72.21         -80.09      107.78
2015     86.29         -160.06           -64.28          136.59        80.37            -72.63         -80.37      107.37
2020     86.39           169.8           -64.11          135.76        80.65            -73.17         -80.65      106.83


                                   Table E-2: Sibeck et al. Magnetopause model

                  Solar wind                                               Sub­solar              Dawn
                    pressure                                                 point               meridian
                  range (nPa)             A          B            C              (RE)               (RE)
                 0,54-0,87           0,19         19,3      -272,4       12,6                16,5
                 0,87-1,47           0,19         19,7      -243,9       11,7                15,6
                 1,47-2,60           0,14         18,2      -217,2       11,0                14,7
                 2,60-4,90           0,15         17,3      -187,4       10,0                13,7
                 4,90-9,90           0,18         14,2      -139,2       8,8                 11,8
                 Sibeck et al. [RD.32]


E.7    Figures


 Figure E-1: The IGRF-12 field strength (nT, at 2015) and predicted change in intensity between
2015 and 2020 at the mean Earth radius. (Mercator projection from [RN.38])


              The Figure shows a cut in the noon-midnight plane, with the Sun to the left
              and with distance Re in GSM coordinates.

Figure E-2: The general morphology of model magnetospheric field lines, according to the
 Tsyganenko 1989 model, showing the seasonal variation, dependent on rotation axis tilt


                         Annex F (informative)
  Natural electromagnetic radiation and indices

F.1   Solar spectrum
             In 2000, the American Society for Testing and Materials developed an AM0 reference
             spectrum (ASTM E-490) for use by the aerospace community [RD.33]. That ASTM E490 Air
             Mass Zero solar spectral irradiance is based on data from satellites, space shuttle missions,
             high-altitude aircraft, rocket soundings, ground-based solar telescopes, and modelled
             spectral irradiance. The integrated spectral irradiance has been made to conform to the
             value of the solar constant accepted by the space community; which is 1 362 W m-2. Figure
             F-1 shows the solar irradiation spectrum at AM0 and AM1.5.


F.2   Solar and geomagnetic indices -- additional information

             F.2.1        E10.7
             Although not used in atmosphere models described in clause 7, E10.7 is the integration in
             the range from 1 to 105 nm of the energy flux of solar irradiance, reported in solar flux
             units (sfu) or x10-22 Watts per meter squared per Hertz.


             F.2.2        F10.7
             The sun emits radio energy with a slowly varying intensity. This radio flux, which
             originates from atmospheric layers high in the sun's chromosphere and low in its corona,
             changes gradually from day-to-day in response to the number of spot groups on the disk.
             Solar flux density at 10,7 cm wavelength has been recorded routinely by radio telescope
             near Ottawa since February 14, 1947.
             Each day, levels are determined at local noon (1700 GMT). Beginning in June 1991, the solar
             flux density measurement source is Penticton, B.C., Canada. Its observations are available
             through the DRAO website and all values are also archived at the Space Physics Interactive
             Data Resource (SPIDR).
             Three sets of fluxes - the observed, the adjusted, and the absolute - are summarized. Of the
             three, the observed numbers are the least refined, since they contain fluctuations as large
             as 7% that arise from the changing sun-earth distance. In contrast, adjusted fluxes have this
             variation removed; the numbers in these tables equal the energy flux received by a detector
             located at the mean distance between sun and earth. Finally, the absolute levels carry the
             error reduction one step further; here each adjusted value is multiplied by 0,90 to
             compensate for uncertainties in antenna gain and in waves reflected from the ground.


             F.2.3        S10.7
             The NASA/ESA Solar and Heliospheric Observatory (SOHO) research satellite operates in
             a halo orbit at the Lagrange Point 1 (L1) on the Earth-Sun line and has an uninterrupted
             view of the Sun. One of the instruments on SOHO is the Solar Extreme-ultraviolet Monitor


             (SEM) that measures the 26--34 nm solar EUV emission with 15-second time resolution in
             its first order broadband wavelength range. The integrated 26--34 nm emission is
             normalized. The normalized value is converted to sfu through linear regression with F10.7
             (for historical data) over the common time frame and the resulting index is called S10.7.
             The broadband (wavelength integrated) SEM 26-34 nm irradiances, represented by the
             S10.7 index, are EUV line emissions dominated by the chromospheric He II line at 30,4 nm
             with contributions from other chromospheric and coronal lines. This energy principally
             comes from solar active regions, plage, and network. Once the photons reach the Earth,
             they are deposited (absorbed) in the terrestrial thermosphere mostly by atomic oxygen
             above 200 km.


             F.2.4        M10.7
             NOAA 16 and NOAA 17 operational satellites host the Solar Backscatter Ultraviolet
             (SBUV) spectrometer that has the objective of monitoring ozone in the Earth’s lower
             atmosphere. In its discrete operating mode, a diffuser screen is placed in front of the
             instrument’s aperture in order to scatter solar MUV radiation near 280 nm into the
             instrument. This solar spectral region contains both photospheric continuum and
             chromospheric line emissions. The chromospheric Mg II h and k lines at 279,56 and 280,27
             nm, respectively, and the weakly varying photospheric wings or continuum longward and
             shortward of the core line emission, are operationally observed by the instrument.
             On the ground, the Mg II core-to-wing ratio is calculated between the variable lines and
             nearly non-varying wings. The result is a measure of chromospheric and some
             photospheric solar active region activity is referred to as the Mg II core-to-wing ratio (cwr),
             and is provided daily by NOAA Space Environment Center (SEC). The ratio is an especially
             good proxy for some solar FUV and EUV emissions and it can represent very well the
             photospheric and lower chromospheric solar FUV Schumann-Runge Continuum emission.
             The daily Mg II cwr is used in a linear regression with F10.7 to derive the M10.7 index for
             reporting in F10.7 units and with a 5-day lag.


F.3   Additional information on short-term variation
             The profile given in Table 6-4 starts from medium activity levels. Then an x-ray / gamma-
             ray flare occurs. On the sun-surface this goes together with the ejection of highly energetic
             charged particles. The flare can push up the F10.7 index near Earth almost instantaneously.
             The ap is still at its normal value for medium activity between 7 and 15. The F10.7 then fades
             within about 9 hours to pre-flare values. After a little less than a day the fastest solar wind
             particles arrive at Earth, disturb the magnetic field, and thus the ap index increases. The
             disturbance lasts only about 6 hours. Thereafter it settles at its pre-event levels between 7-
15 hours. The F10.7 stays at its average value.
             The profile covers 1 day. It can be recurring as a disturbance event can easily last about a
             week. During such an event, flares occur repeatedly within the same active region on the
             sun. Extreme values of F10.7 and ap do not usually occur simultaneously. Such a situation
             only occurs at the Earth if a second flare, essentially unrelated to the first, occurred on the
             sun at the same time that the charged particles from the first flare arrived at Earth. That
             situation is possible but happens rarely and seems not to have occurred within the
             historical data set.


             The activity profile given in Table 6-4 describes a “worst case” event but is neither
             unrealistic nor overly conservative. The x-rays (high F10.7) can lead to enhanced intensities
             and heating at equatorial and low latitude regions where the solar radiation intensity is
             highest. The high ap values lead mainly to an increase of atmospheric density in the high
             latitude and polar regions where the effect of dissipation of energy and momentum from
             the magnetosphere is largest.
             The short term variation profile in Table 6-4 addresses ap only. Short term variations of the
             geomagnetic field have larger effects on the atmosphere than short term variations of the
             solar activity. The atmospheric effects of solar activity variations on time scales of hours
             are still uncertain. Large short term variations of ap can occur during all phases of a solar
             cycle.


F.4   Useful internet references for indices
             - Indices glossary: https://www.swpc.noaa.gov/content/space-weather-glossary
             - F10.7, Kp, Ap, Dst, Solar Wind Speed, IMF archive values at ESA Space Weather
                   User Portal: http://swe.ssa.esa.int
             - S10.7 and M10.7 at JB-2006 website:
                   http://sol.spacenvironment.net/~JB2006/indices.html
             - F10.7 predictions at Marshall Space Flight Center’s: http://sail.msfc.nasa.gov/


F.5   Earth electromagnetic radiation

             F.5.1        Earth albedo
             The fraction of incident sunlight that is reflected off a planet is termed albedo. For an
             orbiting spacecraft the albedo value depends mainly on the sunlit part of the Earth which
             it can see. Albedo radiation has approximately the same spectral distribution as the Sun
             and in this Standard albedo refers to the total solar spectrum albedo. Albedo is highly
             variable across the globe and depends on surface properties and cloud cover. It also
             depends on the solar zenith angle. Average albedo values have sometimes to be used with
             care, e.g. for short duration analyses or for Sun­synchronous orbits where albedo is from
             specific local times.
             The average albedo of the Earth is 0,3. For an orbiting spacecraft, the albedo can vary
             between 0,05 (open ocean) and 0,6 (high cloud/icecap).
             A model has been constructed for estimating the influence of latitude and longitude on
             albedo variability (seasonal effect) [RD.34]. The albedo, a, is given by:

                                  a = a0 + a1 P1 (sin ϕ ) + a2 P2 (sin ϕ )                      (F-1)


                          where
                          a1 = c0 + c1 cos( ω( JD - t 0 )) + c2 sin( ω( JD - t 0 ))
                          t0   is the date
                          ω    is the orbital pulsation (=2π/365,25)


             ϕ     is the equatorial latitude
             JD    is the Julian date of interest
             Pn    is the nth degree Legendre polynomial


             and
             a0=0,34
             a1 [c0=0, c1=0,10, c2=0]
             a2=0,29


F.5.2        Earth infrared
The Earth­emitted thermal radiation has a spectrum of a black body with a characteristic
average temperature of 288 K. The Earth infrared radiation also varies across the globe but
less than the albedo. It also shows a diurnal variation which is small over the ocean but can
amount to 20 % for desert areas.
The average infrared radiation emitted by Earth is 230 W m-2. For an orbiting spacecraft, it
can vary from 150 W m-2 to 350 W m-2. The diurnal variations can amount to about 20 %
over desert areas while being smaller over the oceans.
A model has been constructed for estimating the influence of latitude and longitude on
Earth infrared variability (seasonal effect) [RD.34], given by:

                       e = e0 + e1 P1 (sin ϕ ) + e2 P2 (sin ϕ )                   (F-2)


             where
             e1 = k 0 + k1 cos( ω( JD - t 0 )) + k 2 sin( ω( JD - t 0 ))
             t0      is the date
             ω       is the orbital pulsation (=2π/365,25)
             ϕ       is the equatorial latitude
             JD      is the Julian date of interest
             Pn      is the nth degree Legendre polynomial
             and the following values are proposed:
             e0=     0,68
             e1      [k0=0, k1=-0,07, k2=0]
             e2=     -0,18


F.6   Electromagnetic radiation from other planets

                F.6.1        Planetary albedo
                Albedo is the fraction of sunlight, which is reflected off a planet. The reflection is assumed
                to be diffuse. For the albedo the same spectral shape as for sunlight is assumed. The actual
                albedo spectrum can change, depending on properties of the surface (different materials
                can lead to absorption in certain wavelength bands and result in a highly variable
                spectrum). Albedo values are only applicable when the portion of the planet that is seen
                by the spacecraft is sunlit.


                F.6.2        Planetary infrared
                A large portion of the incident solar radiation being absorbed as heat by the planet is re-
                emitted in the infrared range of the spectrum. Reference values for average planetary
                albedo and infra-red radiation are given in Table F-1.


F.7   Activity indices information
                Figure F-2 and Figure F-3 show the F10.7, Sunspot Number R and Ap indices over the last
                two solar cycles. Figure F-2 gives the daily and Figure F-3 the monthly mean values. The
                large fluctuations in the daily values are averaged out in the monthly mean values (please
                note the different scale of the figures). The short term Ap spikes are important for density
                variations and this is not well reflected in the long term high values.


F.8   Tables
      Table F-1: Reference values for average planetary albedo and infra-red radiation
                 Planet         Average        Albedo           Average       IR Range [K]
                                Albedo         Range            IR [K]
                 Mercury        0,106          0,09 -- 0,45      442           100 -- 725
                 Venus          0,65                            231,7         737 (surface)
                 Mars           0,15                            210,1         184 - 242
                 Jupiter        0,52                            110,0         112 @ 100 hPa
                 Saturn         0,47                            81,1          1 -- 143 @ 1000 hPa
                 Uranus         0,51                            58,2          76 @ 1000 hPa, 53@ 100
                                                                              hPa
                 Neptune        0,41                            46,6          72@ 1000 hPa, 44 @ 100
                                                                              hPa
                 Titan          0,22


F.9     Figures


 Figure F-1: Solar spectral irradiance (in red, AM0 (Air Mass 0) is the radiation level outside of the
Earth's atmosphere (extraterrestrial), in blue, AM1,5 is the radiation level after passing through the
atmosphere 1,5 times, which is about the level at solar zenith angle 48,19°s, an average level at the
                                     Earth's surface (terrestrial)).


Figure F-2: Daily solar and geomagnetic activity indices over the last two solar cycles


Figure F-3: Monthly (27-day) mean solar and geomagnetic activity indices over the last two solar
                                            cycles


                                                    Annex G (informative)
                                                     Neutral atmospheres

G.1   Structure of the Earth’s atmosphere
             The Earth atmosphere can be broadly divided into three distinct regimes, as shown in
             Figure G-1:
             - the homosphere comprises the regions of the troposphere (surface up to ~ 10 - 12 km
                   altitude), the stratosphere (~ 10 - 12 km up to 50 km), and the mesosphere (~50 km
                   up to 90 km),
             - the thermosphere extends from about 90 km altitude to approx 400 km, depending
                   on solar and geomagnetic activity,
             - the exosphere extends from the top of the thermosphere and extends into space.
             The boundaries between these regions are classically defined by relatively sharp and
             consistent changes in the temperature profile as a function of altitude, with the exception
             of the base of the exosphere. The exosphere base is defined by that altitude where the mean
             free path equals the scale height. In practice, all of these boundaries, whether determined
             in altitude or in a pressure co-ordinate system, vary with solar, seasonal, latitudinal and
             other conditions.
             Due to vertical winds and turbulent mixing the homosphere has a nearly uniform
             composition of about 78,1% N2, 20,9% O2, and 0,9% Ar. The temperature profile of the
             heterosphere shows alternating gradients with (normally) the maximum temperature at
             the surface (global average ~288K), a local minimum at the tropopause (global average
             ~218K), a local maximum at the stratopause (global average ~280K), and another local
             minimum at the mesopause (≈150K -- 250K).


G.2   Development of models of the Earth’s atmosphere
             A “Standard Atmosphere” is defined as a vertical distribution of atmospheric temperature,
             pressure, and density, which by international agreement is taken to be representative of
             the Earth’s atmosphere. The first “Standard Atmospheres” established by international
             agreement were developed in the 1920’s primarily for purposes of pressure altimeter
             calibrations, aircraft performance calculations, aircraft and rocket design, ballistic tables,
             etc. Later some countries, notably the United States, also developed and published
             “Standard Atmospheres”. The term “Reference Atmosphere” is used to identify vertical
             descriptions of the atmosphere for specific geographical locations or globally. These were
             developed by organizations for specific applications, especially as the aerospace industry
             began to mature after World War II. The term “Standard Atmosphere” has in recent years
             also been used by national and international organizations to describe vertical descriptions
             of atmospheric trace constituents, the ionosphere, atomic oxygen, aerosols, ozone, winds,
             water vapour, planetary atmospheres, etc.
             Currently some of the most commonly used Standard and Reference Atmospheres include
             the ISO Standard Atmosphere, 1975 [RD.126], 1982 [RD.127] the U. S. Standard
             Atmosphere Supplements, 1962 [RD.123], 1966 [RD.124]] 1976 [RD.125], the COSPAR


             International Reference Atmosphere (CIRA), 1986 [RD.128] (previously issued as CIRA
# 1961 [RD.129], CIRA 1965 [RD.130] and CIRA 1972 [RD.131]), the NASA/MSFC Global
             Reference Atmosphere Model (GRAM), 1999 [RD.136] (previously issued as GRAM-86
             [RD.132]], GRAM-88 [RD.133], GRAM-90 [RD.134] and GRAM-95 [RD.135]), the
             NRLMSISE-00 Thermospheric Model, 2000 [RN.4] (previously issued as MSIS-77 [RD.35],
             -83 [RD.37], -86 [RD.38]] and MSISE-90 [RD.137]) and most recently the JB-2006 density
             Model [RN.5].


G.3   NRLMSISE-00 and JB-2006 - additional information
             The Mass Spectrometer and Incoherent Scatter (MSIS) series of models developed between
# 1977 and 1990 are used extensively by the scientific community for their superior
             description of neutral composition. The models utilized atmospheric composition data
             from instrumented satellites and temperatures from ground-based radars. The initial MSIS
# 1977 model [RD.35] was based on the Jacchia temperature profile framework, but the
             density at 120 km varied with local time and other geophysical parameters to fit the
             measurements. Exospheric temperature and density variations were represented by
             spherical harmonics resulting in requiring fewer parameters for a given level of accuracy.
             Subsequent versions of the model include the longitude variations [RD.36], a refined
             geomagnetic storm effect [RD.37], improved high latitude, high solar flux data [RD.38] and
             a boundary lowered to sea level [RD.39].
             The NRLMSISE-00 model [RN.4] of atmospheric composition, temperature, and total mass
             density from ground to exobase includes the following:
             - drag data based on orbit determination,
             - more recent accelerometer data sets,
             - new temperature data derived from Millstone Hill and Arecibo incoherent scatter
                   radar observations,
             - observations of O2 by the Solar Maximum Mission (SMM), based on solar ultraviolet
                   occultation.
             A new species, “anomalous oxygen,” primarily for drag estimation, allows for appreciable
             O+ and hot atomic oxygen contributions to the total mass density at high altitudes.
             The new Jacchia-Bowman density (JB-2006) model [RN.5] is based on the Jacchia model
             heritage. It includes two key novel features. Firstly, there is a new formulation concerning
             the semi-annual density variation observed in the thermosphere, but not previously
             included in any of the semi-empirical atmospheric models. Secondly, there is a new
             formulation of solar indices, relating more realistically to the dependence of heat and
             energy inputs from the solar radiation to specific altitude regions and heating processes
             within the upper atmosphere. JB-2006 inserts the improved J70 temperature formulations
             into the CIRA 1972 model to permit integrating the diffusion equation at every point rather
             than relying on look-up tables.


G.4   The GRAM series of atmosphere models.
             The GLOBAL Reference Atmosphere Models have been produced on behalf of NASA to
             describe the terrestrial atmosphere from ground level upward for operational purposes.
             These models are available via license to qualified users, and provide usability and
             information quality similar to that of the NRLMSISE-00 Model [RD.40].


G.5   Atmosphere model uncertainties and limitations
             For mean activity conditions, the estimated uncertainty of the NRLMSISE-00 species
             density is 15%. For short term and local-scale variations, the estimated uncertainty of the
             NRLMSISE-00 species density is 100%. Within the homosphere (below 90 km), the
             uncertainty is below 5% [RD.40].
             For mean activity conditions, the estimated uncertainty of the JB-2006 total density within
             the thermosphere is 10-15% (depending on altitude). For extreme conditions (very high
             solar or geomagnetic activities), this uncertainty can considerably increase due to the lack
             of corresponding measurement data. The total density can have +/- 100% variation at 400-
500 km for some activities and locations.
             It should be noted that the NRLMSISE-00 model’s accuracy of prediction of atmospheric
             density and other parameters is limited by the complex behaviour of the atmosphere, and
             the causes of variability. While certain aspects of atmospheric variability are more or less
             deterministic, meteorological variations of the homosphere are difficult to predict more
             than 3 -- 5 days in advance, and yet have effects on higher regions of the atmosphere
             (thermosphere). In the thermosphere, the response to varying solar and geomagnetic
             activity is complex, particularly in respect of the latter. Upper atmosphere density models
             can be used for prediction of future orbital lifetime, either to determine the orbital altitude
             insertions to ensure a given lifetime, or to estimate energy requirements for maintaining a
             particular orbit, for a particular spacecraft/satellite. The primary influence on accuracy of
             the model’s density output is the accuracy of the future predictions of solar and
             geomagnetic activity used as inputs, rather than the accuracy of the specific model in
             representing the density as a function of solar and geomagnetic activity.


G.6   HMW07 additional information
             The HWM is an empirical model of the horizontal neutral wind in the upper thermosphere.
             It is based on an extensive data set gathering 60x106 observations from 35 different
             instruments spanning 50 years (see Table 1 of [RN.40]. A limited set of vector spherical
             harmonics is used to describe the zonal and meridional wind components. The first edition
             of the model released in 1987 (HWM87) [RD.42] was intended for winds above 220 km.
             With the inclusion of wind data from ground-based incoherent scatter radar and Fabry-
             Perot optical interferometers, HWM90 was extended down to 100 km and using
             MF/Meteor data HWM93 was extended down to the ground [RN.6]. Solar cycle variations
             are included (since HWM90), but they are found to be small and not always very clearly
             delineated be the current data. Variations with magnetic activity (Ap) are included. Mid-
             and low-latitude data are reproduced quite well by the model. The polar vortices are
             present, but not in full detail. The model describes the transition from predominately
             diurnal variations in the upper thermosphere to semidiurnal variations in the lower
             thermosphere and a transition from summer to winter flow above 140 km to winter to
             summer flow below. Significant altitude gradients in the wind extend up to 300 km at some


            local times. The model software provides zonal and meridional winds for specified
            latitude, longitude, time, and Ap index. A comparison of the HWM values with winds
            derived from IRI parameters and from ionosonde measurements have shown in general
            good agreement. The HMW07 model provides a better agreement with obervational data.
            Its ability to represent the observed variations of the atmosphere is significantly improved
            compared to that of HWM93. While HWM07 represents geomagnetically quiet conditions
            the DWM07 component (see [RD.169]) represents storm-induced thermospheric
            disturbance winds in the altitude range from 200 to 600 km, based on the 3h Kp
            geomagnetic activity index.


G.7   Planetary atmospheres models

            G.7.1        Jupiter
            Because Jupiter is a large planet that rotates fast, the equatorial tangential velocity of the
            atmosphere is 12,7 km s-1, and decreases like the cosine of latitude. In the reference frame
            rotating with the planet the acceleration of gravity is 22,88 m s-2 at the equator and 25 N kg-
1 at the poles.


            The structure of the upper atmosphere of Jupiter is reasonably well-known between 60
            degrees north and south down to a pressure of 1 000 hPa, thanks to the measurements of
            the Composite Infrared Spectrometer, during the swing-by of the Cassini spacecraft past
            Jupiter in late 2000 and early 2001 [RD.43]. In addition the equatorial atmosphere has been
            explored down to a pressure of 2,1E+04 hPa during the entry and descent of the Galileo
            probe [RD.44].
            These measurements reveal that the structure of the atmosphere of Jupiter is relatively
            simple: a troposphere in convective equilibrium with a constant adiabatic lapse rate,
            topped by a well-defined tropopause at a minimum temperature of about 100 K above
            which the temperature increases to a temperature of 160 K and remains practically constant
            in the region of maximum deceleration and heat fluxes during entry. Above that constant
            temperature region, roughly above 300 km the temperature increases again.
            The composition of the atmosphere of Jupiter has been measured by the Galileo probe
            between pressure levels of 510 hPa and 2,11E+04 hPa [RD.44]. This composition is as
            follows (volume mixing ratio): H2 (86%), He (13,6%), CH4 (0,18%), N2 (0,07%). The above
            composition is valid for the troposphere and most of the stratosphere. The corresponding
            molar mass is 2,31x10-3 kg mol-1.
            The atmosphere of Jupiter is subject to a small seasonal cycle and the equatorial
            stratosphere experiences cyclic temperature variations of about 10 K with a quasi-
            quadrennial cycle. This cycle seems to be related to wave activity [RD.45], and large-scale
            gravity waves have been observed by the Galileo Atmosphere Structure Instrument (ASI)
            during the Galileo entry [RD.46].


            G.7.2        Venus
            A Venus International Reference Atmosphere (VIRA), from 0 to 100 km, has been compiled
            by COSPAR [RD.47] , with follow-up work ongoing to update the original model [RD.153].
            It consists of a deep atmosphere, extending from 0 to 32 km (altitudes are referenced to a
            planetary radius of 6 052 km) whose vertical structure is independent of latitude and


characterized by a surface pressure of 9,21E+04 hPa , surface temperature of 753,3 K and
surface density of 64,8 kg m-3 and a lapse rate increasing from 8 to 9 K km-1. Above 32 km,
the atmosphere shows some latitude dependence, and is tabulated by bands of latitude.


G.7.3        Mars
Basic knowledge of the Martian atmospheric environment can be found in [RD.48]].
For Mars two reference models exist: the MarsGRAM-2010 [RD.49], [RD.50] developed by
NASA MSFC and the Martian Climate Database (EMCD) developed jointly by Laboratoire
de Météorologie Dynamique (France), Oxford University (UK) and the Institute of
Astrophysics of Andalusia (Spain) [RN.7].
These models, which cover the altitude range 0--250 km, have been derived with the help
of a combination of geophysical measurements and simulations using general circulation
models of the Martian atmosphere [RD.41], [RD.51].
The models agree broadly with each other but differ in many details. Ultimately the use of
one or the other model for mission design gives equivalent results if appropriate margins
have been taken into account.


G.7.4        Saturn
There is currently no adopted Reference Atmosphere Model for Saturn, however global
circulation models are being developed ([RD.154] and [RD.155]) and form the most
accurate source of information to date. Saturn's atmosphere is about 96 percent hydrogen
and 3 percent helium by volume, a proportion similar to that found in the sun and Jupiter.
Small amounts of methane, ammonia, and water also are present. A layer of clouds
composed of ammonia ice compose what is seen in photographs and through the telescope.
Deeper in the atmosphere, the clouds can be formed of water ice.


G.7.5        Titan
An engineering-level atmospheric model for Titan (Titan-GRAM) has been developed
[RD.52] for use in NASA’s systems analysis studies of aerocapture applications in missions
to outer planets. A Titan atmosphere database has been gathered in Europe [RD.156]
including Cassini/Huygens data, but is not tailored for engineering purposes.


G.7.6        Neptune
An engineering-level atmospheric models for Neptune (Neptune-GRAM) has been
developed [RD.52] for use in NASA’s systems analysis studies of aerocapture applications
in missions to outer planets.


G.7.7        Mercury
There is currently no adopted Reference Atmosphere Model for Mercury. The atmosphere is
more accurately described as an exosphere, where individual atoms and molecules reside
mainly on the surface, until released into ballistic orbits by a combination of excitation by
solar photons and energetic particles (again, primarily of solar origin). The composition is not
precisely known, but O, H, He, Na, Ca and K have been detected. The temperature reflects
the Mercury surface temperature, the surface pressure is of order 10-9 hPa, with a number
density of order 1011 m-3


G.8   Reference data
            NRLMSISE­00 altitude profiles at equatorial latitude of temperature, and number densities
            (concentrations) are listed in Table G-1, Table G-2, and Table G-3 for low solar and
            geomagnetic activities (F10.7 = F10.7avg = 65, Ap = 0), moderate solar and geomagnetic
            activities (F10.7 = F10.7avg = 140, Ap = 15), and high long term solar and geomagnetic
            activities (F10.7 = F10.7avg = 250, Ap = 45), respectively. The tables cover both homospheric
            and heterospheric altitudes from ground level up to 900 km, averaged over diurnal and
            seasonal variations. Figure G-1, illustrates the altitude profile of the temperature. Figure
            G-3 shows the atomic oxygen number densities at low, moderate and high long term
            activity conditions. For moderate activity levels, Figure G-4 shows the logarithmic number
            concentration profiles of the main atmospheric constituents.
            A JB-2006 altitude profile of total density at equatorial latitude is listed in Table G-4 and
            plotted again in Figure G-2 for
            - low solar and geomagnetic activities
                  (F10.7 = F10.7avg = 65, S10.7 = S10.7avg = 60, M10.7 = M10.7avg = 60, Ap = 0)
            - moderate solar and geomagnetic activities
                  (F10.7 = F10.7avg = 140, S10.7 = S10.7avg = 125, M10.7 = M10.7avg = 125, Ap = 15)
            - high long term (27 days or longer) solar and geomagnetic activities
                  (F10.7 = F10.7avg = 250, S10.7 = S10.7avg = 220, M10.7 = M10.7avg = 220, Ap = 45)
            - and high short term (daily) solar and geomagnetic activities
                  (F10.7 = 300, F10.7avg = 250, S10.7 = 235, S10.7avg = 220, M10.7 = 240, M10.7avg = 220, Ap
                  = 240)
            - The subscript ‘avg’denotes the 81-day average.
            These values have been averaged over diurnal and seasonal variations.


 G.9      Tables
Table G-1: Altitude profiles of the atmosphere constituents N2, O, O2, He, Ar, H, N and anomalous O
    for low solar and geomagnetic activities (NRLMSISE-00 model - F10.7 = F10.7avg = 65, Ap = 0)
   H                                                                                     nAnomal O                 ρ
 (km)   nHE (m-3)   nO (m-3)   nN2 (m-3)   nO2 (m-3)   nAR (m-3)   nH (m-3)   nN (m-3)     (m-3)       T(K)     (kg.m-3)
# 0 1,17E+20    0,00E+00   1,74E+25    4,67E+24    2,08E+23    0,00E+00   0,00E+00   0,00E+00    3,00E+02   1,07E+00
# 20 9,46E+18    0,00E+00   1,41E+24    3,78E+23    1,69E+22    0,00E+00   0,00E+00   0,00E+00    2,06E+02   8,68E-02
# 40 4,05E+17    0,00E+00   6,04E+22    1,62E+22    7,23E+20    0,00E+00   0,00E+00   0,00E+00    2,57E+02   3,72E-03
# 60 3,29E+16    0,00E+00   4,90E+21    1,31E+21    5,86E+19    0,00E+00   0,00E+00   0,00E+00    2,45E+02   3,01E-04
# 80 1,89E+15    3,01E+15   2,73E+20    7,27E+19    3,25E+18    2,65E+13   6,64E+10   2,28E-51    2,06E+02   1,68E-05
# 100 1,17E+14    4,78E+17   1,02E+19    2,38E+18    1,04E+17    2,70E+13   3,10E+11   2,24E-37    1,71E+02   6,18E-07
# 120 2,50E+13    7,23E+16   3,11E+17    4,36E+16    1,36E+15    6,07E+12   1,19E+12   1,41E-27    3,53E+02   1,88E-08
# 140 1,50E+13    2,12E+16   4,89E+16    4,45E+15    1,09E+14    2,17E+12   6,16E+12   2,44E-19    5,21E+02   3,08E-09
# 160 1,16E+13    9,37E+15   1,38E+16    1,06E+15    1,88E+13    1,09E+12   1,61E+13   1,12E-12    6,05E+02   9,49E-10
# 180 9,61E+12    4,88E+15   4,76E+15    3,34E+14    4,23E+12    7,31E+11   2,20E+13   1,45E-07    6,48E+02   3,70E-10
# 200 8,21E+12    2,73E+15   1,80E+15    1,15E+14    1,08E+12    5,94E+11   2,02E+13   1,20E-03    6,70E+02   1,63E-10
# 220 7,12E+12    1,59E+15   7,14E+14    4,11E+13    2,98E+11    5,32E+11   1,51E+13   1,22E+00    6,82E+02   7,80E-11
# 240 6,21E+12    9,42E+14   2,93E+14    1,51E+13    8,62E+10    4,98E+11   1,04E+13   2,43E+02    6,88E+02   3,97E-11
# 260 5,45E+12    5,66E+14   1,23E+14    5,66E+12    2,59E+10    4,75E+11   6,85E+12   1,40E+04    6,92E+02   2,13E-11
# 280 4,78E+12    3,44E+14   5,27E+13    2,16E+12    8,02E+09    4,57E+11   4,50E+12   3,08E+05    6,94E+02   1,18E-11
# 300 4,21E+12    2,10E+14   2,30E+13    8,42E+11    2,54E+09    4,41E+11   2,96E+12   3,26E+06    6,95E+02   6,80E-12
# 320 3,71E+12    1,30E+14   1,01E+13    3,33E+11    8,22E+08    4,27E+11   1,96E+12   1,96E+07    6,96E+02   4,01E-12
# 340 3,28E+12    8,05E+13   4,54E+12    1,33E+11    2,71E+08    4,13E+11   1,30E+12   7,64E+07    6,96E+02   2,41E-12
# 360 2,90E+12    5,02E+13   2,06E+12    5,42E+10    9,06E+07    4,00E+11   8,74E+11   2,13E+08    6,96E+02   1,47E-12
# 380 2,56E+12    3,15E+13   9,43E+11    2,23E+10    3,07E+07    3,87E+11   5,88E+11   4,60E+08    6,96E+02   9,14E-13
# 400 2,27E+12    1,99E+13   4,37E+11    9,29E+09    1,06E+07    3,75E+11   3,98E+11   8,15E+08    6,96E+02   5,75E-13
# 420 2,01E+12    1,26E+13   2,04E+11    3,91E+09    3,66E+06    3,64E+11   2,70E+11   1,24E+09    6,96E+02   3,66E-13
# 440 1,78E+12    8,06E+12   9,61E+10    1,66E+09    1,29E+06    3,53E+11   1,85E+11   1,69E+09    6,96E+02   2,35E-13
# 460 1,58E+12    5,17E+12   4,56E+10    7,13E+08    4,55E+05    3,42E+11   1,26E+11   2,09E+09    6,96E+02   1,53E-13
# 480 1,41E+12    3,33E+12   2,18E+10    3,09E+08    1,63E+05    3,32E+11   8,68E+10   2,42E+09    6,96E+02   1,01E-13
# 500 1,25E+12    2,15E+12   1,05E+10    1,35E+08    5,87E+04    3,22E+11   5,99E+10   2,66E+09    6,96E+02   6,79E-14
# 520 1,11E+12    1,40E+12   5,11E+09    5,92E+07    2,13E+04    3,12E+11   4,15E+10   2,81E+09    6,96E+02   4,63E-14
# 540 9,91E+11    9,14E+11   2,50E+09    2,62E+07    7,81E+03    3,03E+11   2,88E+10   2,88E+09    6,96E+02   3,21E-14
# 560 8,83E+11    5,99E+11   1,23E+09    1,17E+07    2,88E+03    2,94E+11   2,00E+10   2,88E+09    6,96E+02   2,28E-14
# 580 7,88E+11    3,94E+11   6,07E+08    5,24E+06    1,07E+03    2,85E+11   1,40E+10   2,83E+09    6,96E+02   1,65E-14
# 600 7,04E+11    2,60E+11   3,02E+08    2,36E+06    4,01E+02    2,77E+11   9,79E+09   2,74E+09    6,96E+02   1,23E-14
# 620 6,29E+11    1,73E+11   1,51E+08    1,07E+06    1,51E+02    2,69E+11   6,88E+09   2,63E+09    6,96E+02   9,37E-15
# 640 5,63E+11    1,15E+11   7,59E+07    4,90E+05    5,74E+01    2,61E+11   4,84E+09   2,50E+09    6,96E+02   7,33E-15
# 660 5,04E+11    7,67E+10   3,84E+07    2,25E+05    2,19E+01    2,54E+11   3,42E+09   2,37E+09    6,96E+02   5,88E-15
# 680 4,51E+11    5,14E+10   1,95E+07    1,04E+05    8,42E+00    2,46E+11   2,42E+09   2,23E+09    6,96E+02   4,83E-15
# 700 4,04E+11    3,45E+10   9,94E+06    4,84E+04    3,26E+00    2,39E+11   1,72E+09   2,09E+09    6,96E+02   4,04E-15
# 720 3,63E+11    2,33E+10   5,10E+06    2,26E+04    1,27E+00    2,33E+11   1,22E+09   1,96E+09    6,96E+02   3,44E-15
# 740 3,26E+11    1,58E+10   2,63E+06    1,06E+04    4,97E-01    2,26E+11   8,70E+08   1,83E+09    6,96E+02   2,98E-15
# 760 2,93E+11    1,07E+10   1,36E+06    5,00E+03    1,96E-01    2,20E+11   6,21E+08   1,70E+09    6,96E+02   2,61E-15
# 780 2,63E+11    7,28E+09   7,06E+05    2,37E+03    7,75E-02    2,14E+11   4,45E+08   1,59E+09    6,96E+02   2,31E-15
# 800 2,37E+11    4,97E+09   3,68E+05    1,13E+03    3,09E-02    2,08E+11   3,20E+08   1,48E+09    6,96E+02   2,06E-15
# 820 2,13E+11    3,40E+09   1,93E+05    5,41E+02    1,24E-02    2,02E+11   2,30E+08   1,38E+09    6,96E+02   1,85E-15
# 840 1,92E+11    2,33E+09   1,02E+05    2,60E+02    4,99E-03    1,97E+11   1,66E+08   1,28E+09    6,96E+02   1,67E-15
# 860 1,73E+11    1,61E+09   5,36E+04    1,26E+02    2,02E-03    1,91E+11   1,20E+08   1,19E+09    6,96E+02   1,51E-15
# 880 1,57E+11    1,11E+09   2,85E+04    6,09E+01    8,25E-04    1,86E+11   8,68E+07   1,11E+09    6,96E+02   1,38E-15
# 900 1,41E+11    7,67E+08   1,52E+04    2,97E+01    3,38E-04    1,81E+11   6,30E+07   1,03E+09    6,96E+02   1,26E-15


Table G-2: Altitude profiles of the atmosphere constituents N2, O, O2, He, Ar, H, N and anomalous O
  for mean solar and geomagnetic activities (NRLMSISE-00 model - F10.7 = F10.7avg = 140, Ap = 15)
  H                                                                                     nAnomal O                 ρ
(km)   nHE (m-3)   nO (m-3)   nN2 (m-3)   nO2 (m-3)   nAR (m-3)   nH (m-3)   nN (m-3)     (m-3)       T(K)     (kg.m-3)
# 0 1,26E+20    0,00E+00   1,88E+25    5,04E+24    2,25E+23    0,00E+00   0,00E+00   0,00E+00    3,00E+02   1,16E+00
# 20 1,02E+19    0,00E+00   1,52E+24    4,09E+23    1,82E+22    0,00E+00   0,00E+00   0,00E+00    2,06E+02   9,37E-02
# 40 4,38E+17    0,00E+00   6,53E+22    1,75E+22    7,81E+20    0,00E+00   0,00E+00   0,00E+00    2,57E+02   4,02E-03
# 60 3,55E+16    0,00E+00   5,29E+21    1,42E+21    6,33E+19    0,00E+00   0,00E+00   0,00E+00    2,45E+02   3,26E-04
# 80 2,07E+15    3,71E+15   3,00E+20    7,66E+19    3,56E+18    2,53E+13   8,61E+10   8,53E-51    1,98E+02   1,83E-05
# 100 1,16E+14    5,22E+17   9,60E+18    2,00E+18    9,71E+16    1,89E+13   3,76E+11   7,28E-37    1,88E+02   5,73E-07
# 120 3,08E+13    9,27E+16   3,36E+17    3,95E+16    1,49E+15    3,47E+12   1,77E+12   5,52E-27    3,65E+02   2,03E-08
# 140 1,83E+13    2,73E+16   5,38E+16    3,84E+15    1,26E+14    8,82E+11   9,45E+12   8,98E-19    6,10E+02   3,44E-09
# 160 1,39E+13    1,31E+16   1,72E+16    9,29E+14    2,64E+13    3,46E+11   2,73E+13   4,12E-12    7,59E+02   1,20E-09
# 180 1,16E+13    7,47E+15   7,08E+15    3,22E+14    7,67E+12    2,01E+11   4,18E+13   5,33E-07    8,53E+02   5,46E-10
# 200 1,00E+13    4,67E+15   3,27E+15    1,31E+14    2,61E+12    1,53E+11   4,31E+13   4,43E-03    9,11E+02   2,84E-10
# 220 8,91E+12    3,06E+15   1,62E+15    5,81E+13    9,73E+11    1,33E+11   3,64E+13   4,48E+00    9,49E+02   1,61E-10
# 240 8,00E+12    2,07E+15   8,36E+14    2,71E+13    3,84E+11    1,23E+11   2,82E+13   8,94E+02    9,73E+02   9,60E-11
# 260 7,24E+12    1,43E+15   4,44E+14    1,31E+13    1,58E+11    1,17E+11   2,10E+13   5,14E+04    9,88E+02   5,97E-11
# 280 6,59E+12    9,94E+14   2,40E+14    6,48E+12    6,69E+10    1,13E+11   1,56E+13   1,14E+06    9,98E+02   3,83E-11
# 300 6,01E+12    7,00E+14   1,32E+14    3,27E+12    2,90E+10    1,10E+11   1,15E+13   1,20E+07    1,00E+03   2,52E-11
# 320 5,50E+12    4,96E+14   7,35E+13    1,67E+12    1,28E+10    1,07E+11   8,60E+12   7,22E+07    1,01E+03   1,69E-11
# 340 5,04E+12    3,54E+14   4,13E+13    8,66E+11    5,75E+09    1,05E+11   6,45E+12   2,81E+08    1,01E+03   1,16E-11
# 360 4,62E+12    2,54E+14   2,35E+13    4,54E+11    2,61E+09    1,02E+11   4,86E+12   7,85E+08    1,01E+03   7,99E-12
# 380 4,24E+12    1,83E+14   1,34E+13    2,40E+11    1,20E+09    1,00E+11   3,68E+12   1,69E+09    1,01E+03   5,60E-12
# 400 3,90E+12    1,32E+14   7,74E+12    1,28E+11    5,61E+08    9,79E+10   2,79E+12   3,00E+09    1,02E+03   3,96E-12
# 420 3,59E+12    9,56E+13   4,50E+12    6,90E+10    2,64E+08    9,59E+10   2,13E+12   4,57E+09    1,02E+03   2,83E-12
# 440 3,30E+12    6,96E+13   2,63E+12    3,74E+10    1,25E+08    9,38E+10   1,63E+12   6,21E+09    1,02E+03   2,03E-12
# 460 3,04E+12    5,08E+13   1,55E+12    2,05E+10    6,00E+07    9,19E+10   1,25E+12   7,70E+09    1,02E+03   1,47E-12
# 480 2,80E+12    3,72E+13   9,15E+11    1,13E+10    2,90E+07    9,00E+10   9,59E+11   8,92E+09    1,02E+03   1,07E-12
# 500 2,58E+12    2,73E+13   5,44E+11    6,24E+09    1,41E+07    8,81E+10   7,39E+11   9,81E+09    1,02E+03   7,85E-13
# 520 2,38E+12    2,01E+13   3,26E+11    3,48E+09    6,90E+06    8,64E+10   5,71E+11   1,04E+10    1,02E+03   5,78E-13
# 540 2,20E+12    1,48E+13   1,96E+11    1,95E+09    3,40E+06    8,46E+10   4,42E+11   1,06E+10    1,02E+03   4,29E-13
# 560 2,03E+12    1,10E+13   1,18E+11    1,10E+09    1,69E+06    8,29E+10   3,43E+11   1,06E+10    1,02E+03   3,19E-13
# 580 1,88E+12    8,17E+12   7,19E+10    6,24E+08    8,42E+05    8,12E+10   2,67E+11   1,04E+10    1,02E+03   2,39E-13
# 600 1,74E+12    6,08E+12   4,38E+10    3,55E+08    4,23E+05    7,96E+10   2,08E+11   1,01E+10    1,02E+03   1,80E-13
# 620 1,61E+12    4,54E+12   2,68E+10    2,04E+08    2,13E+05    7,81E+10   1,62E+11   9,69E+09    1,02E+03   1,36E-13
# 640 1,49E+12    3,40E+12   1,65E+10    1,17E+08    1,08E+05    7,65E+10   1,27E+11   9,22E+09    1,02E+03   1,04E-13
# 660 1,38E+12    2,55E+12   1,02E+10    6,78E+07    5,52E+04    7,50E+10   9,91E+10   8,72E+09    1,02E+03   7,98E-14
# 680 1,28E+12    1,92E+12   6,33E+09    3,94E+07    2,83E+04    7,36E+10   7,78E+10   8,20E+09    1,02E+03   6,16E-14
# 700 1,18E+12    1,45E+12   3,94E+09    2,30E+07    1,46E+04    7,22E+10   6,11E+10   7,70E+09    1,02E+03   4,80E-14
# 720 1,10E+12    1,09E+12   2,46E+09    1,34E+07    7,54E+03    7,08E+10   4,81E+10   7,20E+09    1,02E+03   3,76E-14
# 740 1,02E+12    8,27E+11   1,54E+09    7,91E+06    3,92E+03    6,94E+10   3,80E+10   6,73E+09    1,02E+03   2,98E-14
# 760 9,45E+11    6,28E+11   9,72E+08    4,67E+06    2,05E+03    6,81E+10   3,00E+10   6,28E+09    1,02E+03   2,38E-14
# 780 8,78E+11    4,78E+11   6,14E+08    2,77E+06    1,07E+03    6,68E+10   2,37E+10   5,85E+09    1,02E+03   1,92E-14
# 800 8,16E+11    3,64E+11   3,89E+08    1,65E+06    5,65E+02    6,56E+10   1,88E+10   5,45E+09    1,02E+03   1,57E-14
# 820 7,58E+11    2,78E+11   2,47E+08    9,83E+05    2,99E+02    6,44E+10   1,49E+10   5,07E+09    1,02E+03   1,29E-14
# 840 7,05E+11    2,13E+11   1,58E+08    5,89E+05    1,59E+02    6,32E+10   1,19E+10   4,72E+09    1,02E+03   1,07E-14
# 860 6,56E+11    1,63E+11   1,01E+08    3,54E+05    8,47E+01    6,20E+10   9,45E+09   4,40E+09    1,02E+03   9,03E-15
# 880 6,11E+11    1,26E+11   6,47E+07    2,14E+05    4,53E+01    6,09E+10   7,54E+09   4,09E+09    1,02E+03   7,67E-15
# 900 5,69E+11    9,68E+10   4,16E+07    1,29E+05    2,44E+01    5,98E+10   6,02E+09   3,81E+09    1,02E+03   6,59E-15


Table G-3: Altitude profiles of the atmosphere constituents N2, O, O2, He, Ar, H, N and anomalous O for
 high long term solar and geomagnetic activities (NRLMSISE-00 model - F10.7 = F10.7avg = 250, Ap = 45)
     H                                                                                     nAnomal O                 ρ
   (km)   nHE (m-3)   nO (m-3)   nN2 (m-3)   nO2 (m-3)   nAR (m-3)   nH (m-3)   nN (m-3)     (m-3)       T(K)      (kg.m-3)
# 0 1,41E+20    0,00E+00   2,10E+25    5,65E+24    2,52E+23    0,00E+00   0,00E+00   0,00E+00    3,00E+02   1,29E+00
# 20 1,14E+19    0,00E+00   1,71E+24    4,57E+23    2,04E+22    0,00E+00   0,00E+00   0,00E+00    2,06E+02   1,05E-01
# 40 4,90E+17    0,00E+00   7,31E+22    1,96E+22    8,74E+20    0,00E+00   0,00E+00   0,00E+00    2,57E+02   4,49E-03
# 60 3,98E+16    0,00E+00   5,92E+21    1,59E+21    7,09E+19    0,00E+00   0,00E+00   0,00E+00    2,45E+02   3,64E-04
# 80 2,34E+15    4,36E+15   3,39E+20    8,15E+19    4,02E+18    2,51E+13   1,23E+11   2,04E-50    1,93E+02   2,03E-05
# 100 1,21E+14    5,70E+17   9,71E+18    1,72E+18    9,73E+16    1,43E+13   5,38E+11   1,57E-36    2,02E+02   5,64E-07
# 120 3,61E+13    1,15E+17   3,72E+17    3,37E+16    1,62E+15    2,13E+12   3,08E+12   1,36E-26    3,80E+02   2,22E-08
# 140 2,09E+13    3,51E+16   6,07E+16    3,02E+15    1,43E+14    3,93E+11   1,76E+13   2,12E-18    7,10E+02   3,93E-09
# 160 1,59E+13    1,86E+16   2,17E+16    6,80E+14    3,51E+13    1,24E+11   5,84E+13   9,74E-12    9,16E+02   1,54E-09
# 180 1,34E+13    1,15E+16   1,00E+16    2,29E+14    1,21E+13    6,34E+10   1,02E+14   1,26E-06    1,05E+03   7,87E-10
# 200 1,17E+13    7,72E+15   5,24E+15    9,68E+13    4,91E+12    4,52E+10   1,18E+14   1,05E-02    1,14E+03   4,57E-10
# 220 1,05E+13    5,42E+15   2,93E+15    4,65E+13    2,18E+12    3,83E+10   1,09E+14   1,06E+01    1,19E+03   2,86E-10
# 240 9,62E+12    3,93E+15   1,71E+15    2,42E+13    1,03E+12    3,51E+10   9,18E+13   2,11E+03    1,23E+03   1,87E-10
# 260 8,85E+12    2,90E+15   1,03E+15    1,32E+13    5,02E+11    3,34E+10   7,39E+13   1,22E+05    1,25E+03   1,27E-10
# 280 8,19E+12    2,17E+15   6,30E+14    7,43E+12    2,52E+11    3,23E+10   5,87E+13   2,68E+06    1,27E+03   8,87E-11
# 300 7,60E+12    1,64E+15   3,91E+14    4,28E+12    1,30E+11    3,15E+10   4,65E+13   2,84E+07    1,28E+03   6,31E-11
# 320 7,07E+12    1,25E+15   2,46E+14    2,51E+12    6,77E+10    3,08E+10   3,70E+13   1,71E+08    1,29E+03   4,56E-11
# 340 6,59E+12    9,53E+14   1,56E+14    1,49E+12    3,59E+10    3,02E+10   2,95E+13   6,65E+08    1,30E+03   3,34E-11
# 360 6,16E+12    7,32E+14   1,00E+14    8,94E+11    1,93E+10    2,97E+10   2,36E+13   1,85E+09    1,30E+03   2,47E-11
# 380 5,75E+12    5,65E+14   6,44E+13    5,41E+11    1,05E+10    2,91E+10   1,90E+13   4,00E+09    1,30E+03   1,85E-11
# 400 5,38E+12    4,37E+14   4,18E+13    3,30E+11    5,75E+09    2,86E+10   1,54E+13   7,10E+09    1,30E+03   1,40E-11
# 420 5,04E+12    3,39E+14   2,73E+13    2,03E+11    3,18E+09    2,82E+10   1,24E+13   1,08E+10    1,30E+03   1,06E-11
# 440 4,72E+12    2,64E+14   1,79E+13    1,26E+11    1,78E+09    2,77E+10   1,01E+13   1,47E+10    1,31E+03   8,13E-12
# 460 4,42E+12    2,06E+14   1,18E+13    7,84E+10    1,00E+09    2,72E+10   8,21E+12   1,82E+10    1,31E+03   6,26E-12
# 480 4,14E+12    1,62E+14   7,85E+12    4,91E+10    5,66E+08    2,68E+10   6,69E+12   2,11E+10    1,31E+03   4,84E-12
# 500 3,89E+12    1,27E+14   5,23E+12    3,10E+10    3,23E+08    2,64E+10   5,47E+12   2,32E+10    1,31E+03   3,76E-12
# 520 3,65E+12    9,97E+13   3,50E+12    1,96E+10    1,85E+08    2,60E+10   4,48E+12   2,45E+10    1,31E+03   2,94E-12
# 540 3,43E+12    7,86E+13   2,36E+12    1,25E+10    1,07E+08    2,55E+10   3,67E+12   2,51E+10    1,31E+03   2,31E-12
# 560 3,22E+12    6,21E+13   1,59E+12    8,01E+09    6,21E+07    2,51E+10   3,02E+12   2,51E+10    1,31E+03   1,82E-12
# 580 3,02E+12    4,92E+13   1,08E+12    5,15E+09    3,62E+07    2,48E+10   2,48E+12   2,47E+10    1,31E+03   1,43E-12
# 600 2,84E+12    3,91E+13   7,34E+11    3,33E+09    2,13E+07    2,44E+10   2,04E+12   2,39E+10    1,31E+03   1,14E-12
# 620 2,67E+12    3,11E+13   5,02E+11    2,16E+09    1,25E+07    2,40E+10   1,69E+12   2,29E+10    1,31E+03   9,06E-13
# 640 2,52E+12    2,48E+13   3,44E+11    1,41E+09    7,41E+06    2,36E+10   1,39E+12   2,18E+10    1,31E+03   7,23E-13
# 660 2,37E+12    1,98E+13   2,37E+11    9,19E+08    4,41E+06    2,33E+10   1,15E+12   2,06E+10    1,31E+03   5,79E-13
# 680 2,23E+12    1,58E+13   1,63E+11    6,03E+08    2,63E+06    2,29E+10   9,57E+11   1,94E+10    1,31E+03   4,65E-13
# 700 2,10E+12    1,27E+13   1,13E+11    3,97E+08    1,58E+06    2,26E+10   7,94E+11   1,82E+10    1,31E+03   3,75E-13
# 720 1,98E+12    1,02E+13   7,86E+10    2,63E+08    9,50E+05    2,22E+10   6,60E+11   1,70E+10    1,31E+03   3,03E-13
# 740 1,87E+12    8,21E+12   5,48E+10    1,74E+08    5,74E+05    2,19E+10   5,50E+11   1,59E+10    1,31E+03   2,46E-13
# 760 1,76E+12    6,62E+12   3,83E+10    1,16E+08    3,48E+05    2,16E+10   4,58E+11   1,48E+10    1,31E+03   2,00E-13
# 780 1,66E+12    5,35E+12   2,68E+10    7,74E+07    2,12E+05    2,13E+10   3,82E+11   1,38E+10    1,31E+03   1,63E-13
# 800 1,57E+12    4,33E+12   1,88E+10    5,19E+07    1,29E+05    2,10E+10   3,20E+11   1,29E+10    1,31E+03   1,34E-13
# 820 1,48E+12    3,51E+12   1,33E+10    3,48E+07    7,93E+04    2,07E+10   2,67E+11   1,20E+10    1,31E+03   1,10E-13
# 840 1,40E+12    2,85E+12   9,39E+09    2,35E+07    4,87E+04    2,04E+10   2,24E+11   1,12E+10    1,31E+03   9,06E-14
# 860 1,32E+12    2,32E+12   6,65E+09    1,59E+07    3,01E+04    2,01E+10   1,88E+11   1,04E+10    1,31E+03   7,50E-14
# 880 1,25E+12    1,89E+12   4,72E+09    1,07E+07    1,86E+04    1,98E+10   1,58E+11   9,67E+09    1,31E+03   6,23E-14
# 900 1,18E+12    1,54E+12   3,36E+09    7,30E+06    1,16E+04    1,95E+10   1,33E+11   9,01E+09    1,31E+03   6,00E-14


  Table G-4: Altitude profiles of total density ρ [kg m-3] for low, moderate, high
   long and high short term solar and geomagnetic activities (JB-2006 model)
                                   (Part 1 of 2)
                  Low         Moderate             High activity      High activity
H (km)          activity       activity            (long term)         (short term)
100 5,31E-07        5,47E-07             5,44E-07            5,43E-07
120 2,18E-08        2,40E-08             2,45E-08            2,46E-08
140 3,12E-09        3,98E-09             4,32E-09            4,45E-09
160 9,17E-10        1,36E-09             1,54E-09            1,60E-09
180 3,45E-10        6,15E-10             7,40E-10            7,77E-10
200 1,47E-10        3,17E-10             4,10E-10            4,38E-10
220 6,96E-11        1,77E-10             2,46E-10            2,70E-10
240 3,54E-11        1,05E-10             1,56E-10            1,77E-10
260 1,88E-11        6,47E-11             1,04E-10            1,21E-10
280 1,03E-11        4,12E-11             7,12E-11            8,57E-11
300 5,86E-12        2,69E-11             5,00E-11            6,22E-11
320 3,40E-12        1,80E-11             3,59E-11            4,60E-11
340 2,02E-12        1,23E-11             2,61E-11            3,45E-11
360 1,22E-12        8,48E-12             1,93E-11            2,63E-11
380 7,46E-13        5,95E-12             1,44E-11            2,02E-11
400 4,63E-13        4,22E-12             1,09E-11            1,57E-11
420 2,92E-13        3,02E-12             8,32E-12            1,23E-11
440 1,87E-13        2,18E-12             6,40E-12            9,69E-12
460 1,21E-13        1,59E-12             4,96E-12            7,70E-12
480 8,04E-14        1,17E-12             3,87E-12            6,16E-12
500 5,44E-14        8,60E-13             3,04E-12            4,95E-12
520 3,77E-14        6,39E-13             2,40E-12            4,01E-12
540 2,68E-14        4,77E-13             1,91E-12            3,25E-12
560 1,96E-14        3,58E-13             1,52E-12            2,66E-12
580 1,47E-14        2,71E-13             1,22E-12            2,18E-12
600 1,14E-14        2,06E-13             9,82E-13            1,79E-12
620 9,10E-15        1,57E-13             7,93E-13            1,48E-12
640 7,41E-15        1,20E-13             6,43E-13            1,23E-12
660 6,16E-15        9,28E-14             5,22E-13            1,02E-12
680 5,22E-15        7,19E-14             4,25E-13            8,49E-13
700 4,50E-15        5,60E-14             3,47E-13            7,09E-13
720 3,93E-15        4,40E-14             2,84E-13            5,94E-13


 Table G-4: Altitude profiles of total density ρ [kg m-3] for low, moderate, high long and
            high short term solar and geomagnetic activities (JB-2006 model)
                                                       (Part 2 of 2)
# 740 3,48E-15            3,48E-14               2,34E-13                      4,98E-13
# 760 3,10E-15            2,79E-14               1,92E-13                      4,19E-13
# 780 2,79E-15            2,26E-14               1,59E-13                      3,54E-13
# 800 2,53E-15            1,85E-14               1,32E-13                      2,99E-13
# 820 2,30E-15            1,53E-14               1,10E-13                      2,54E-13
# 840 2,11E-15            1,28E-14               9,21E-14                      2,16E-13
# 860 1,94E-15            1,08E-14               7,72E-14                      1,84E-13
# 880 1,78E-15            9,27E-15               6,50E-14                      1,57E-13
# 900 1,65E-15            8,01E-15               5,49E-14                      1,35E-13
  NOTE: Low, moderate, high long term and high short term solar and geomagenetic activities have the following
        meanings:
        low (F10.7 = F10.7avg = 65, S10.7 = S10.7avg = 60, M10.7 = M10.7avg = 60, Ap = 0)
        moderate (F10.7 = F10.7avg = 140, S10.7 = S10.7avg = 125, M10.7 = M10.7avg = 125, Ap = 15),
        high long term (F10.7 = F10.7avg = 250, S10.7 = S10.7avg = 220, M10.7 = M10.7avg = 220, Ap = 45)
        high short term (F10.7 = 300, F10.7avg = 250, S10.7 = 235, S10.7avg = 220, M10.7 = 240, M10.7avg = 220, Ap = 240)


G.10 Figures


                        Figure G-1: Temperature profile of the Earth’s atmosphere


                                1.00E-06
                                                                                        High (short term)
                                1.00E-07
                                                                                        High (long term)
                                1.00E-08                                                Moderate
                                                                                        Low
         Mass density (kg/m3)


                                1.00E-09

                                1.00E-10

                                1.00E-11

                                1.00E-12

                                1.00E-13

                                1.00E-14

                                1.00E-15
0 100   200   300   400      500    600   700      800        900
                                                                 Altitude (km)


   Low, moderate, high long term and high short term solar and geomagenetic activities have the following meanings:
   low (F10.7 = F10.7avg = 65, S10.7 = S10.7avg = 60, M10.7 = M10.7avg = 60, Ap = 0)
   moderate (F10.7 = F10.7avg = 140, S10.7 = S10.7avg = 125, M10.7 = M10.7avg = 125, Ap = 15)
   high long term (F10.7 = F10.7avg = 250, S10.7 = S10.7avg = 220, M10.7 = M10.7avg = 220, Ap = 45)
   high short term (F10.7 = 300, F10.7avg = 250, S10.7 = 235, S10.7avg = 220, M10.7 = 240, M10.7avg = 220, Ap = 240)

Figure G-2: Variation of the JB-2006 mean air density with altitude for low, moderate, high long
                     and high short term solar and geomagnetic activities


                           1.00E+18
                                                                                  High Activity
                           1.00E+17
                                                                                  Moderate Activity
                           1.00E+16                                               Low Activity

                           1.00E+15
         O density (m-3)


                           1.00E+14

                           1.00E+13

                           1.00E+12

                           1.00E+11

                           1.00E+10

                           1.00E+09

                           1.00E+08
0 100   200   300   400      500    600    700      800       900
                                                            Altitude (km)


       Low, moderate, and high long term solar and geomagenetic activities have the following meanings:
       low (F10.7 = F10.7avg = 65, Ap = 0)
       moderate (F10.7 = F10.7avg = 140, Ap = 15)
       high long term (F10.7 = F10.7avg = 250, Ap = 45)

Figure G-3: Variation of the NRLMSISE­00 mean atomic oxygen with altitude for low, moderate
                         and high long solar and geomagnetic activities


1E+18                                                                                                        1E+18
                                                                    nHe (/m3)         nAr (/m3)
1E+17                                                                                                        1E+17
                                                                    nN2 (/m3)         nH (/m3)
1E+16                                                                                                        1E+16
                                                                    nN (/m3)          nAnomalous O (/m3)
1E+15                                                                                                        1E+15
                           N2                                       nO (/m3)          nO2 (/m3)
1E+14                                                                                                        1E+14
                                                 O
1E+13                                                                                                        1E+13

1E+12                                                                  He                                    1E+12
                     H
1E+11                                                                                                        1E+11

1E+10                                                                                                        1E+10
                                      Ar                                                   N
1E+09                                                          O2                                            1E+09

1E+08                                                                                                        1E+08

1E+07                                                                                                        1E+07
                           Anomalous O
1E+06                                                                                                        1E+06

1E+05                                                                                                        1E+05

1E+04                                                                                                        1E+04
# 0 100      200        300        400           500           600      700        800             900
                                             Altitude (km)


Figure G-4: Variation of the NRLMSISE­00 mean concentration profile of the atmosphere
constituents N2, O, O2, He, Ar, H, N and anomalous O with altitude for moderate solar and
                   geomagnetic activities (F10.7 = F10.7avg = 140, Ap = 15)


                                                      Annex H (informative)
                                                                   Plasmas

H.1   Identification of plasma regions
             Some typical examples of plasma regimes to be considered are given in Table H-2.


H.2   Plasma effects on spacecraft
             The principal spacecraft engineering concerns caused by space plasmas in different regions
             are outlined in Table H-3. Some of the most significant effects are listed below.
             Because of their higher mobility, electrons preferentially accumulate on exposed spacecraft
             surfaces, causing them to charge negatively. In hot plasmas in the 10 keV range charging
             can reach hundreds or thousands of volt. Charging is however greatly mitigated by
             secondary electron emission and photoemission. In cold plasma (e.g. ionosphere) charging
             levels are generally very low, however, the high velocity of an orbiting spacecraft relative
             to ion velocity in this region leads to a plasma void in its wake. This can permit high-
             voltage surface charging to occur on wake surfaces during auroral crossings.
             High plasma densities (such as found in the ionosphere) cause reflection of radio beams
             below a critical frequency, as well as refraction and scintillation. Hence this acts as a barrier
             to satellite­ground communications and complicates satellite radar altimetry, satellite
             navigation systems and the radio tracking of satellites.
             For high potential surfaces, in dense plasmas, ions and electrons are drawn to negative and
             positive regions respectively, allowing a current to flow through the plasma. This acts as a
             current drain on high voltage systems, such as solar arrays and can affects the spacecraft
             floating potential.
             Ion impacts due to flowing plasma (such as the solar wind) can result in sputtering from
             surface materials. Although solar wind plasma is cold, the ions carry considerable kinetic
             energy, typically ~1 keV for protons and ~4 keV for He++.
             Neutral spacecraft-generated atoms can be ionized by sunlight or charge­exchange with
             other ions, to create a low­energy (<10 eV) ion population. These ions can be drawn to
             negatively charged surfaces and can cause surface contamination.
             Further details on spacecraft-plasma interactions can be found in the ECSS-E-ST-20-06
             (Spacecraft Charging) standard.


H.3   Reference data

             H.3.1        Introduction
             This section provides further information about the different space plasma regimes. This
             does not form part of the requirements but can help the user by describing typical data
             derived from the standard models or models that have not yet been defined as standards.


H.3.2        Ionosphere

H.3.2.1.     IRI-2016
IRI-2016 contains a number of options suitable for different applications. Recommended
choices are indicated when the code is run. The accuracy of the IRI electron density model
is typically
- 50-80 % at heights from 65 km to 95 km
- 5-15 % at heights from 100 km to 200 km during daytime
- 15-30 % at heights from 100 km to 200 km during night-time
- 15-25 % at heights from 200 km to 1 000 km at low and middle dip latitudes (< 60°)
- 50-80 % at heights from 200 km to 1 000 km at high dip latitudes (> 60°)
Table H-4 shows a typical altitude profile of electron density. This has been calculated from
IRI-2016, at 0° longitude and latitude, on 1st January 2016, for a real-time smoothed sunspot
number Rz12 of 39,2, at 0 h and 12 h local time, using otherwise default options.
The IRI model homepage at http://irimodel.org/ provides information and references about
the IRI project, lets users download the IRI Fortran source code, and lets them also compute
and plot IRI parameters.


H.3.2.2.     Auroral charging environment
The auroral charging environment in section 8.2.3 is expressed in terms of distribution
function but charging simulations often require input spectra in terms of flux.
Flux in cm-2s-1sr-1keV-1 can be found from the distribution function as follows:

                  Flux( E keV ) = 2000 × E keV e 2 f (v) / me2                     (H-1)


             where
             EkeV is energy in keV


H.3.3        Plasmasphere
Typical ion and electron temperatures, throughout the plasmasphere are of the order of
0,5 eV. The electron temperature is thus far too low to produce hazardous charging effects.
The CGPM code [RN.8] has been widely distributed by the Marshall Space Flight Center
and can generally be obtained directly from them.
A representative profile though the ionosphere and plasmasphere is shown in Table A-1.
The density profile is dependent on geomagnetic activity as indicated in Figure H-1.
There are various other plasma sphere models which can also be useful and which are
generally available directly from the authors. A selection is mentioned below:
- IMAGE/RPI model [RD.157]. There is also new function in IRI that makes a smooth
      transition between IRI and the RPI model [RD.158]. This is one of 4 models named
      in ISO TS 16457.
- IZMIRAN/IRI-Plas [RN.32]. This is also one of 4 ISO TS 16457 models.


- Global Plasma Ionosphere Density Model (GPID), [RD.159]. This is also an ISO TS
16457 model.
- IPM Ionosphere - Plasmasphere Model [RD.160]. This can be run in ESWP
      (www.spaceweather.eu) and on NASA: ccmc.gsfc.nasa.gov


H.3.4        Outer magnetosphere
NASA has defined a severe charging environment [RD.53] based on the 90th percentile of
severe environments. However, this is not the one adopted as the ECSS Standard.
Requirement 9.2.1.3a is based on a 2-Maxwellian fit to a severe charging event when the
Scatha spacecraft charged in sunlight. An improved fit using 3 Maxwellians has been made
to the same event [RD.167]. It is given in Table H-1.

                   Table H-1: Worst­case 3­Maxwellian environment
                        Electron      Electron           Ion density         Ion
                      density (cm ) temperature
                                 -3                         (cm-3)       temperature
                                       (keV)                                (keV)
    Population 1            0,2                 0,1            1                3
    Population 2             2                  10             1               20
    Population 3            0,01                50           0,05              40


This study also investigated alternative definitions of a ‘worst-case’ event using data from
LANL spacecraft -- highest flux above 10 keV, highest flux at all energies, lowest flux at
high energy and mean spectrum producing charging over 5 kV. These are all severe spectra
that can be used in further analysis of possible charging levels.
Table H-6 gives typical plasma parameters for the geostationary environment for quiet and
substorm periods.
The outer boundary of the magnetosphere, the magnetopause, is controlled by the balance
between the pressure of the magnetic field and that of the solar wind. Along the Earth­Sun
line, the magnetopause is closest to the Earth and its position can be expressed
approximately [RD.54] as:

                                                1/ 6
                                  B02 
                           Lm =           
# 2 
                                                                                (H-2)
                                  µ 0 nmV 

             where
             Lm    is the distance from the centre of the Earth to the magnetopause, at
                   the subsolar point, in Earth­radii;
             B0    is the strength of the terrestrial internal magnetic field, at surface of
                   the Earth, on the equator = 3 ×104 nT;
             µo    is the permeability of free space;
             n     is the density of the solar wind;
             m     is the mass of the proton;
             V     is the velocity of the solar wind.


Lm is typically 10 Earth­radii away from the subsolar point. The magnetopause flares out
on the flanks and is effectively infinite in length in the anti­solar direction. This boundary
is described in more detail in clause 5.


H.3.5         Magnetosheath
Magnetosheath plasma parameters differ according to the latitude and local time of the
observation. The highest density and temperature and the steepest velocity drop are
observed at the subsolar point i.e. zero degrees latitude at local noon. Typical values for
this region are given in Table H-7.


H.3.6         Magnetotail and distant magnetosheath
Typical plasma parameters that can be encountered in the magnetotail and distant
magnetosheath around the L2 point are given in Table H-8.


H.3.7         Planetary environments
For charging investigations around Jupiter and Saturn, a description of the plasma
environment has been described by Garrett and Hoffman [RD.11]. This describes the
environments as either a Maxwellian distribution or a Kappa distribution or a sum of the
two, as follows
Maxwellian:


              f (v ) =
                         [N (m )
0 e
                                            3/ 2
                                                                          ]
                                                   exp{- ( E - E 0 ) / kT0 }
                                                                             m-6s3             (H-3)
                                                   (2πkT0 ) 3 / 2

  Kappa:


           f (v ) =
                    [N (m ) ]
0 e
                                     3/ 2
                                                       Γ(κ + 1)
                                                                              m-6s3            (H-4)
                   (2πκkT0 )          3/ 2
                                             Γ(κ - 1 / 2)(1 + E / κkT0 ) κ +1

              where
              Γ    is the Gamma Function.
[RD.11] lists appropriate parameters for various regions in the magnetospheres of Jupiter
and Saturn.
Worst-case plasma parameters, i.e. corresponding to the highest calculated charging level
in eclipse in [RD.11], are given in Table H-9.


H.3.8        Induced environments

H.3.8.1.     Photo­ and secondary electrons
The electron flux at the spacecraft surface can be determined from the incident UV and
primary electron fluxes, multiplied by the yield for the surface in question. Away from the
emitting surface the density can be calculated from the following [RD.115]:

                                                 -2
                            N     z 
                               = 1+                                            (H-5)
                            N 0   2λ0 

             where
             N     is the density (cm-3);
             N0    is the density at emitter (cm-3);
             z     is the distance from surface;
             λ0 is the shielding distance, calculated as the Debye length due to the
             emitted electrons.
Table H-10 gives typical photoelectron sheath parameters [RD.55].


H.3.8.2.     Ionization of contaminant gasses
Once neutral gas is released into space by whatever mechanism, it becomes subject to
photoionization and dissociation by solar UV and ionization by charge exchange with solar
wind ions. Production of new ions can be calculated from the appropriate photoionization
rates and charge exchange cross­sections (from [RD.57]).

                          Q = N i (v + σ n SW v SW )                           (H-6)


             where
             Q     is the production rate, ions s-1;
             Ni    is the ion density;
             ν     is the photoionization rate coefficient;
             nsw   is the solar wind density;
             vsw   is the solar wind velocity;
             σ     is the charge exchange coefficient.
Photoionization rates depend on the atom or molecule concerned, and UV intensity and
spectrum. Huebner and Giguere [RD.56] have tabulated a number of rate coefficients for
different species, for sunlight at 1 AU. As an example, some photoionization rates for
common gasses are listed in Table H-11.
For H2O, where the charge exchange coefficient is around 2,1 ×10-19 m-2 [RD.57],
photoionization and charge exchange are comparable processes. However, all species and
dissociation products need to be considered to calculate the total production of emitted
ions.


H.4        Tables
                         Table H-2: Regions encountered by different mission types
      Orbit                                        Regions encountered
      Low inclination LEO (<50°)                   Ionosphere
      High-inclination LEO e.g. Polar orbit        Ionosphere, Auroral zone
      Geostationary orbit                          Outer magnetosphere, Plasmasphere, Magnetosheath
                                                   (occasionally)
      MEO circular orbit e.g. Galileo              Outer magnetosphere, Plasmasphere, Magnetosheath
                                                   (possibly at high latitude)
      Geostationary transfer orbit                 Ionosphere, Plasmasphere, Outer magnetosphere,
                                                   Magnetosheath (occasionally)
      High apogee elliptical orbit                 All regions can be encountered, depending on orbit.
      L1, L4, L5 Lagrangian points                 Solar wind
      L2                                           Solar wind, magnetotail and distant magnetosheath
      Interplanetary cruise                        Solar wind
      Planetary orbit / encounter                  Planetary environment


                         Table H-3: Main engineering concerns due to space plasmas
 Scenario                               Problem
 Outer magnetosphere                    Surface charging - possibly harmful electrostatic discharges.
 High­voltage systems in the            Power leakage, possible discharges, high spacecraft ground potential,
 ionosphere                             sputtering.
 Large spacecraft in the ionosphere Spacecraft wake creation.
 Auroral zone crossings                 Surface charging - sputtering and possible electrostatic discharges.
 All spacecraft                         Ionospheric barrier to ground­space communications below a
                                        threshold frequency.
                                        Perturbation of signals at higher frequencies.
 Radar/navigation                       Ionospheric propagation delays to beams.
 Electric propulsion                    Interactions between generated plasma, ambient plasma, and the
                                        spacecraft.
 Scientific spacecraft                  Low level charging and photoelectrons which interfere with plasma
                                        measurements.
                                        Plasma entry into sensitive detectors.


     Table H-4: Ionospheric electron density profiles derived from IRI-2016 for
                          date 01/01/2016, lat=0, long=0.
          Height         Midnight electron density         Noon electron density
           (km)                   (cm-3)                          (cm-3)
100 2158                            129695
200 5391                            311762
300 401021                           849210
400 353819                           1032826
500 171281                           510255
600 86533                           236362
700 49193                           125124
800 31014                            75084
900 21192                            49611
1000 15404                            35235
1100 11744                            26433
1200 9296                             20684
1300 7581                             16730
1400 6334                             13894
1500 5398                             11788
1600 4676                             10179
1700 4107                             8918
1800 3649                             7909
1900 3275                             7087
2000 2964                             6408
    NOTE: Sunspot number Rz12=112,1 for this date


Table H-5: Profile of densities for solar magnetic local time = 18 hr, solar magnetic
                 latitude=0, Kp = 5,0 from the GCPM for 1/1/1999
          RE          Electron        Proton          Helium Ion       Oxygen Ion
                      Density         Density          Density          Density
                       (cm-3 )          (cm-3 )          (cm-3 )             (cm-3 )
    1,3            5,31E+03       4,73E+03           5,46E+02        3,24E+01
    1,35           4,98E+03       4,44E+03           5,22E+02        2,69E+01
    1,4            4,68E+03       4,16E+03           4,91E+02        2,42E+01
    1,5            4,12E+03       3,68E+03           4,25E+02        2,08E+01
    1,75           3,00E+03       2,70E+03           2,85E+02        1,50E+01
    2,0            2,19E+03       1,99E+03           1,90E+02        1,09E+01
    2,5            1,16E+03       1,07E+03           8,35E+01        5,81E+00
    3,0            6,17E+02       5,77E+02           3,67E+01        3,08E+00


       RE           Electron               Proton              Helium Ion              Oxygen Ion
                    Density                Density              Density                 Density
                     (cm-3 )                 (cm-3 )              (cm-3 )                   (cm-3 )
 3,5            3,27E+02              3,10E+02               1,61E+01             1,64E+00
 4,0            1,74E+02              1,66E+02               7,04E+00             8,69E-01
 NOTE: Distance in Earth radii (RE) is measured from the centre of the Earth.


               Table H-6: Typical plasma parameters at geostationary orbit
                                 Density           Ion               Electron
                                  (cm-3)        temperature        temperature                λD(m)
 Quiet                      10                 1 eV-1 keV         1 eV-1 keV            50
 Substorm                   1                  10 keV             10 keV                500


                   Table H-7: Typical magnetosheath plasma parameters
   Local time           Speed (km s-1)              Tp (K)              Te (K)         Density (cm-3)
# 12 noon              50                     2 ×106             2 ×106                35
# 06 hours             350                    1×106              1 ×106                20
  NOTE From [RD.116]


                      Table H-8: Typical plasma parameters around L2
                                           n cm-3       Ti eV           Te eV          V km s-1
            Magnetosheath              1,0             80          26             312
            Lobe                       0,1             540         180            60
            Plasma sheet               0,15            610         145            72
            NOTE: Ttaken from 50% cumulative probability measurement from Geotail [RD.6])


Table H-9: Worst-case environments for eclipse charging near Jupiter and Saturn
                                              Jupiter                    Saturn
                                              Electrons      Protons     Electrons      Protons
             -                                104            7,2×105                    7,4×105
             -                                1,0            0,028                      0,026
# 104 -              1,11×105                   3,0×103
             1,0                              -              0,458                      30,8
             2,0                              -              1,7                        8,5
             Co-rotation velocity km s-1      -              250         -              80


                                         Table H-10: Photoelectron sheath parameters
                           Temperature (eV)                Photoelectron           Surface electron
                                                           current (A m-2)          density (m-3)
3 1 ×10-5                  1 ×108


                               Table H-11: Some solar UV photoionization rates at 1 AU
                                             Species        Photoionization rate (s-1)
                                             H2O            3,34 ×10-7
                                             O2             5,13 ×10-7
                                             N2             3,52 ×10-7
                                             NOTE: From [RD.56]


H.5   Figures

                                                           Electron density CGPM

                           1,0E+04
                                                                                         KP=9
                                                                                         KP=0
                           1,0E+03
            Density cm-3


                           1,0E+02


                           1,0E+01


                           1,0E+00
1 2       3          4          5      6        7        8
                                                                   Earth Radii


  Figure H-1: Profile of electron density for solar magnetic local time = 18 hr, solar magnetic
                     latitude=0, Kp =0 and 9 from the GCPM for 1/1/1999.


                                             Annex I (informative)
                                        Energetic particle radiation

I.1   Trapped radiation belts

             I.1.1        Basic data
             Trapped radiation belt charged energetic particles gyrate in the geomagnetic field with a
             gyration period:

                                                      2πm
                                               tc =                                            (I-1)
                                                       eB

             and a radius of gyration of :

                                                      mv
                                               Rc =                                            (I-2)
                                                      eB

             Table I-2 gives typical characteristics of energetic particles.


             I.1.2        Tailoring guidelines: orbital and mission regimes
             In the following sections, attention is drawn to special considerations for various orbit
             types.


             I.1.2.1.     Geostationary orbit
             Geostationary orbit is a circular orbit usually encountering an environment dominated by
             energetic electrons. This environment is characterized by strong time variations with many
             extended quiet periods of low radiation levels and many episodes of intense injections of
             energetic electrons which increase e.g. dose, sensor interference and electrostatic charging.
             Solar protons and cosmic rays have unrestricted access to this orbit. Solar particles make
             short­lived but important contributions to the total dose, interference and single event
             effects. They do not directly participate in charging processes. Cosmic rays provide a
             continuous source of single­event effects and sensor interference.


             I.1.2.2.     Between LEO and GEO
             Orbits between LEO and GEO encounter the electron­dominated environment mentioned
             above, but in addition can encounter the inner, proton radiation belt. In these orbits,
             single­event effects from protons and proton non­ionizing damage need to be considered.
             These orbits often encounter more severe electron environments, near the peak of the
             electron belt (the location of which is also variable) than geostationary orbit and so
             electrostatic charging can be a more serious threat.


I.1.2.3.     LEO
Currently manned activities are limited to low (< 550 km) and medium­inclination (<57.1°)
orbits, however, this is going to change in the future. We refer to these orbital regimes as
LEO. Missions in these orbits encounter the inner edge of the radiation belt. This region is
dominated by the South Atlantic anomaly. Also important is the asymmetry in energetic
proton fluxes from East and West. The low­altitude environment is characterized by
high­energy radiation­belt trapped protons. The deflection of charged particles from
outside the magnetosphere by the Earth magnetic field (geomagnetic shielding) reduces
the fluxes of cosmic rays and solar energetic particles, but the shielding is not total. Like
polar orbits, LEO orbits also encounter outer­belt trapped electrons at high­latitudes.
There is a low-flux population of low energy protons near the geomagnetic equator at low
altitude, created by double charge-exchange: energetic neutral atoms from the ring current
subsequently charge exchange in the upper atmosphere [RD.162]. This population is
important to consider in cases of specific sensitivity such as on low altitude low inclination
astrophysics missions.


I.1.2.4.     Polar
Polar orbits are generally of less than 1 500 km altitude with inclinations above 80°. They
encounter the inner proton and electron belts in the form of the South Atlantic anomaly
and also the outer electron belt where the geomagnetic field lines bring it to low altitudes
at “auroral” latitudes above about 50°. On the high­latitude parts of the orbit a spacecraft
is exposed to almost unattenuated fluxes of cosmic rays and solar energetic particles. At
low latitudes, geomagnetic shielding considerably reduces these fluxes.


I.1.3        Existing trapped radiation models

I.1.3.1.     Overview
For trapped radiation and all earth orbits, the best known and most widely used models of
radiation belt energetic particles are the AE-8 and AP-8 models for electrons [RN.10] and
protons [RN.11], respectively. They were developed at Aerospace Corporation for the
NSSDC at NASA/GSFC based on data from satellites flown in the 1960s and early 1970s.
The models give omni­directional fluxes as functions of idealized geomagnetic dipole
coordinates B/B0 and L. The user defines an orbit, generates a trajectory, transforms it to
geomagnetic coordinates and access the radiation belt models to compute flux spectra,
using the same geomagnetic field as used to develop the model. Apart from separate
versions for solar maximum and solar minimum, there is no description of the temporal
behaviour of fluxes. At high altitudes in particular (e.g. around geostationary orbit) fluxes
vary by orders of magnitude over short times and exhibit significant diurnal variations;
the models do not describe these. In addition, the models do not contain any explicit flux
directionality.
At low altitudes, on the inner edge of the radiation belts, particle fluxes rise very steeply
with altitude and small errors in computing locations can give rise to large errors in particle
fluxes. This is a problem since the geomagnetic field is shifting and decaying so that the
situation is no longer the same as when the model data were acquired. Use of a
geomagnetic field model other than the one used in generating the model can result in
large flux errors at low altitude.


Although use of an old field model and epoch can reduce errors in the magnitudes of
fluxes, it does not model the spatial locations of radiation­belt features (e.g. the position of
the South Atlantic anomaly), or particle fluxes, as they are today.
The AP-8 model for protons gives proton fluxes from 0,1 to 400 MeV while the AE-8 model
for electrons covers electrons from 0,04 to 7 MeV. Figure I-1 shows contour plots of AE-8
and AP-8 model omnidirectional, integral fluxes for energies above 1 MeV and 10 MeV,
respectively, in idealized dipole space.
Figure I-2 shows values of energetic electron and proton particle fluxes as stored in these
models, for positions on the geomagnetic equator (B=B0), as functions of L for both solar
maximum and solar minimum. This shows that as far as the models are concerned, the
solar activity only affects electron fluxes in the mid­L range and protons at low altitude
where the higher neutral atmospheric density at solar maximum leads to reduced proton
fluxes because of enhanced loss. Solar cycle effects on electrons appear to differ from this
behaviour in reality [RD.58].


I.1.3.2.     Uncertainties in trapped particle models
The accuracy of the predicted fluxes is within a factor of 2 for AP8 and within a factor
depending on the location and incident electron energy for AE8. In [RN.10], a reasonable
limit of the error on AE8 is a factor of 2, however, in some regions (L=3) this can increase
to a factor of 4.5 and is energy dependent, the error is higher for the higher energies. In
other regions, such as geostationary orbits, the AE8 models are pessimistic.
For short term estimates the models can underpredict by a considerable amount --
instantaneous fluxes measured at specific locations in the electron belts have been
measured to be several orders of magnitude higher than the long term model fluxes.


I.1.3.3.     Specific orbits
For electron fluxes in geostationary orbit a great number of measurements exist. The
standard model IGE-2006 (International GEO Electron model version 2006) developed by
ONERA & LANL [RN.12], is a statistical model based on more than 2 solar cycles of
electron flux data from radiation monitors on-board different international GEO satellites
(mainly US and Japan) see Figure I-4. This model is available in the SPENVIS [RD.59] or
OMERE [RD.60] space environment tools.
The accuracy of IGE-2006 is included in the model as the upper case takes into account
uncertainties in the measurements, in the duration and strength of the solar cycle.
For MEO altitude, the electron environment is very hard, intense and dynamic. The model
developed at ONERA [RN.13] and given in Table B-5 and Table B-6, is based on GPS data
acquired from Los Alamos, covering from the early nineties to 2007. Data have been
analysed in terms of saturation, contamination and global coherence to ensure high
fidelity. This MEO model provides energetic electrons fluxes in the energy spectral range
0,28 MeV--2,24 MeV and gives three spectra: an average case, a lower case and an upper
case. The accuracy of MEO-V2 is included in the model as the upper case takes into account
uncertainties in the measurements, in the duration and the strength of the solar cycle.
The electron fluxes obtained in the mean case of MEO model are very close to electron
fluxes deduced from NASA/AE8 model over a full solar cycle (7 years MAX and 4 years
MIN for AE8), see Figure I-5. Similarly, the electron fluxes from the MEO mean model
propagated to near geostationary orbit are in agreement with electron fluxes deduced from
IGE-2006 model.


I.1.3.4.      Other trapped radiation models
Other trapped radiation models exist. Amongst them, the main known are:
Those based on CRRES data :
CRRESELE: The Combined Radiation and Release Effects Satellite (CRRES) electron flux
model specifies the location and intensity of electron omni-directional flux over the energy
range 0,5-6,6 MeV for a range of geomagnetic activity levels [RD.61].
CRRESPRO: The Combined Radiation and Release Effects Satellite (CRRES) proton flux
model specifies the location and intensity of proton omni-directional flux over the energy
range 1-100 MeV for quiet, average, or active geophysical conditions [RD.62].
TPM1 (Trapped Proton model) [RD.25] which provides a solar-cycle dependent low-
altitude extension to the CRRESPRO trapped energetic proton model based on
NOAA/TIROS data from 1,5 to 81 MeV (but it is ITAR restricted).
These       models    are     available    in     the     AF-GEOSPACE          tool,    see:
http://www.kirtland.af.mil/library/factsheets/factsheet.asp?id=7899
Other models are also listed and available in http://modelweb.gsfc.nasa.gov/


I.1.4         The South Atlantic Anomaly

I.1.4.1.      Overview
The South Atlantic Anomaly (see clause 9.2.1) produces an “island” of radiation and
provides the only significant radiation encountered on low Earth orbits with altitudes
below about 800 km and inclinations below about 40°. Figure I-3 shows the South Atlantic
Anomaly at 400 km.


I.1.4.2.      Anisotropy

I.1.4.2.1     The “East-West effect”
Because of the inclination of geomagnetic field­lines with respect to the atmosphere here,
particles reaching a point from the West have gyrated from higher altitude while those
arriving from the East have gyrated from lower altitude. There are fewer coming from
below because of atmospheric absorption and an asymmetry in the fluxes results. This can
be important in certain cases, including the International Space Station. The current
standard AP-8 model does not treat this effect but models have been developed by NASA
[RD.63] and BIRA [RD.64]. The ratio of the East and West peak fluxes is about 4,6 for 100
MeV protons in an ISS type orbit. Measurements from MIR are also available which are
consistent with this ratio [RD.65].

I.1.4.2.2     Pitch-angle distribution
The directional distribution of trapped particles at low altitude is peaked perpendicular to
the magnetic field direction. This is due to atmospheric absorption of particles with a
significant parallel component that gyrate to lower altitiudes. Radiation belt models where
particle fluxes are described according to geomagnetic coordinates can be readily used to
derive the directional distribution (“pitch angle distribution”) through transformations
[RD.161].


I.1.4.3.     Location of the South Atlantic Anomaly
The slow movement of the South Atlantic Anomaly as a result of shifts in the geomagnetic
field has been clearly observed. This shift is essentially westward at a rate of 0,3°yr-1 (~10°
since the models were created) and account is taken of this figure for low Earth orbits when
planning operations which involve a sensitivity to radiation (payload radiation
background, astronaut EVA). Models including this shift capability are available [RD.14].


I.1.4.4.     Equatorial soft protons
As mentioned in Annex I.1.2.3, there is a low-flux population of low energy protons near
the geomagnetic equator. A model for this population was created by Petrov et al. [RD.162].


I.1.5        Dynamics of the outer radiation belt
The dynamic nature of the outer electron radiation belt, together with its diurnal variations
mean that unless one is interested in long­term averages (such as provided by AE-8), some
statistical description is desirable. This is especially true when deep dielectric charging and
radiation background are of concern. No standard models for the variability are yet
available, but for engineering purposes the CRRESELE model has been developed [RD.61].
An older version of the AE-8 electron model, AE-4 [RD.26], included a statistical model
giving standard deviations of the logarithm of electron fluxes (assumed to be
normally­distributed). It also included a model for local time flux modulation. This was a
sinusoidal model providing amplitudes of the variation, with a fixed maximum at 11:00
hours local time. These have been extended and applied to the AE-8 model [RD.66],
although this extension is unvalidated.


I.1.6        Internal charging
The FLUMIC (Flux Model for Internal Charging) model used for internal charging
assessments is integral to the DICTAT internal charging tool but can be applied separately.
FLUMIC describes the electron flux, which has an exponential dependence on energy E
and varies with L, time of year and phase of the solar cycle. FLUMIC version 1 and 2
covered L-shells above 2,8, i.e. the outer belt only. The exponential spectrum can a priori
be extrapolated down to lower energy (say a few 100 keV), although for more dynamics in
the lower energy environment more sophisticated models are available. Version 3 of
FLUMIC is broadly similar to FLUMIC version 2 in the outer belt because here it is based
on the same data. However, it also models electron fluxes in the inner belt (see Annex B.4).
The FLUMIC v3 model, presented in Annex B.4, has been evaluated with in-flight data and
shown to provide electron fluxes between 0,8 MeV and 2,8 MeV that exceed 95-98% of the
data for L-Shells above 4 Earth Radii. For the Geostationary orbit, the models provided
electron fluences that exceeded 95% of the data points [RD.67].
The MOBE-DIC (Model for Outer Belt Electrons for Dielectric Internal Charging), as
presented in Annex B.9, is based on Giove-A/Merlin-SURF data at MEO and on GOES data
at GEO. The model provides electron fluxes during enhanced periods as a function of
confidence level and location within the magnetosphere.


I.2   Solar particle event models

             I.2.1         Overview
             During energetic events on the Sun, large fluxes of energetic protons are produced which
             can reach the Earth. Solar particle events, because of their unpredictability and large
             variability in magnitude, duration and spectral characteristics, are treated statistically.
             Current models make the assumption that large events are confined to a 7­year period
             defined as solar maximum. Although large events are absent during the remaining 4 solar
             minimum years of the 11­year solar cycle (see clause 6) the occasional small event can still
             occur.
             An inherent input to probablistic models is the use of a “confidence level”. As a result:
             - the risks of encountering environments can be more severe than the one predicted,
                     and
             - margins are implicitly assumed by applying high confidence levels.
             Two main approaches are currently described in the literature to specify the mission
             integrated fluence: the ESP model approach and the JPL model approach.


             I.2.2         ESP model
             The ESP model approach is based on the observation that a good fit to the distribution of
             the yearly accumulated fluence from the solar maximum periods of the solar cycles 20, 21
             and 22 is obtained with a log-normal distribution. It is deduced from this observation that
             the distribution of the logarithm of the n-year accumulated fluence should also have a
             gaussian distribution with a mean and a relative variance that can be expressed as a
             function of the 1-year distribution mean and variance as follows:

                                   Φ RV (n ⋅ years) = Φ RV (1 year ) / n                          (I-3)

             and

                                   Φ mean (n ⋅ years)= n ⋅ Φ mean (1 year )                       (I-4)


             I.2.3         JPL models
             The approach used in JPL models, JPL85 and JPL91 [RD.68] [RD.69], is based on a
             combined consideration of:
             - the distribution of fluences seen in SEP events and
             - the probability of occurrence of an event (irrespective of magnitude) over a given
                     period.
             A normal probability distribution function, f, is employed to describe the log10 of individual
             event fluences, F,
# 1 (I-5)
                                f ( F ) = (1 / 2π σ ) exp- [( F - µ ) / σ ] 2
                           where
                           μ     is the mean of the distribution of the log10 of fluence values
                           σ     is the standard deviation


The probability p of n events occurring in time τ is given by a Poisson distribution such
that

                          p (n, wτ ) = e - wτ ( wτ ) n / n!                          (I-6)

             where
             w      is the average number of events occurring per active year

The probability, P, of exceeding a selected fluence level, F, during a mission lifetime, τ can
be expressed analytically as,
                                      ∞
                       P(> F ,τ ) = ∑ p (n, wτ )Q( F , n)                            (I-7)
                                     n =1

             where
             Q(F, n)        is the probability that the sum of all fluences due to n (n = [1, ∞])
                            events will exceed 10F


The derivation of P requires an estimate of the parameters w, μ and σ to perform computer
based Monte Carlo simulations to derive Q(F, n).
JPL-91 has been a de-facto standard for many years. However, it was recently shown that
the values of the parameters μ, σ and w derived from the data for JPL-91 lead to an
underestimation of the fluence [RD.70]. Updated values of these parameters have been
proposed for the fluence specification in the energy ranges >10 MeV and >30 MeV [RD.70],
[RD.71]. The values of the parameters μ, σ and w of the model that are recommended to be
used are given in Table I-3.
The complete calculation of P(> F ,τ ) has been coded in IDLTM and the source code can be
found in [RD.70].


I.2.4        Spectrum of individual events

I.2.4.1.     Overview
Solar proton event spectra are variable, the worst­case event at one energy is not
necessarily worst­case at another. The August 1972 event yield worst­case doses at most
typical spacecraft shielding (1-10 mm) where particles of energy 10-70 MeV are most
important. The October 1989 flare is apparently more severe at lower and higher energies.
Lower energies are important for surface material and solar cell effects and the higher
energies more important for deep shielding (e.g. for heavy spacecraft, manned missions
and planetary atmospheres) and for nuclear interactions giving rise to certain types of
background and SEUs. Hence the term “worst­case” is application dependent.


I.2.4.2.     August 1972 event
The August 1972 event produced a peak flux near the Earth in excess of 106 protons cm-2s-1
above 10 MeV energy. A fluence spectrum which is often used to represent a worst case
flare, classified as “anomalously large” is based on the very large August 1972 event
[RD.72]:

                                                30 - E 
                        J ( E ) = 7,9 × 109 exp                                (I-8)
                                                26,5 

with energy E in MeV and fluence J in protons cm-2.


I.2.4.3.     October 1989 event
The October 1989 event was the largest seen since August 1972 but had lower fluences at
the medium energies. The events of 19, 22 and 24 October 1989 have been fitted to Weibull
spectral forms as suggested by Xapsos et al [RD.73]. Account has been taken of ground
level neutron monitors in addition to spacecraft data as suggested by Dyer et al [RD.74] in
order to get the correct spectra at higher energies. The differential flux spectrum is given
by the form:


                                                   (
                     J ( E ) = A κ α E (α -1) exp - κE α     )                   (I-9)


With energy E in MeV and the flux J in protons cm-2 s-1 sr-1 MeV-1. The parameters for the
peak fluxes during these events are given in Table I-5.


I.2.4.4.     Worst case
It has been proposed that a truncated power law can provide a good fit to the distribution
of the log of the intensity of the solar proton events [RD.12]. Such a model predicts
therefore a worst case event which is found to be 1,3E+10 cm-2 for proton with energy above
# 30 MeV. Consideration on the statistical uncertainty leads to estimate that an actual worst
case is about 3E+10 cm-2.
The JPL approach is based on a good fit of the distribution of the log of the intensity of
events through a Gaussian function. With the parameters given in Table I-3 above for the
range > 30 MeV, a fluence of 3E+10 cm-2 is likely to not be exceeded by 99,5% of the events.


I.2.5        Event probabilities
The probability p of n events occurring in time τ is given by a Poisson distribution such
that

                         p (n, wτ ) = e - wτ ( wτ ) n / n!                      (I-10)


             where
             w    is the average number of events occurring per active year
The value of w depends of the definition of an event. Values of w given in Table I-3 can be
used for the relevant energy range.


            I.2.6        Other SEP models
            Other model are under development. These developments relate to alternative statistical
            approaches and models for peak fluxes.
            The Nymmik proton model ([RD.75] and [RD.76]) is in the process to be considered as an
            ISO standard (ISO TS 15391).
            The PSYCHIC solar particle model [RD.105] includes heavy ions and extends the energy
            range of solar protons to 300 MeV.


I.3   Cosmic ray environment and effects models
            Cosmic ray environment and effects models were originally created by Adams and
            co­workers at the U.S. Naval Research Laboratory [RD.77], under the name CREME. They
            provided a comprehensive set of cosmic ray and flare ion LET and energy spectra,
            including treatment of geomagnetic shielding and material shielding. CREME has been
            superseded by CREME96 [RD.78]. The major differences to the environment specification
            are in the inclusion of a model of the cosmic ray environment and its solar­cycle
            modulation due to Nymmik et al. [RD.79], improved geomagnetic shielding calculation,
            and more realistic Solar Energetic Particle event (SEP) ion environments (see clause 9.2.3).
            The cosmic ray fluxes are anti­correlated with solar activity so the highest cosmic ray fluxes
            occur at solar minimum.


I.4   Geomagnetic shielding
            The Earth’s magnetic field partially shields near­Earth space from solar energetic particles
            and cosmic rays, an effect known as geomagnetic shielding. However, these particles can
            easily reach polar regions and high altitudes such as the geostationary orbit. Geomagnetic
            shielding of protons is computed on the basis of the trajectory in geomagnetic B, L space
            (see Clause 5).
            Stassinopoulos and King [RD.80] developed a model which has total cut­off at L = 5. It
            assumes that no protons can penetrate to lower values. It can be shown that this model
            corresponds to a quiet magnetosphere vertical cut­off model excluding protons of E < 200
            MeV from L < 5 Earth­radii. This model is adequate for most cases. However, in reality
            protons of lower energy can penetrate below L = 5 with non­vertical arrival directions,
            especially in a disturbed magnetosphere where the geomagnetic shielding is weakened.
            For westward arrival at the L = 5 geomagnetic equator in a disturbed magnetosphere, the
            energy cut­off can be as low 30 MeV.
            For engineering purposes, geomagnetic cut­off is usually not applied to orbits spending
            more than 50 % of the orbit period above L = 5. Geomagnetic cut­off is usually applied to
            orbits spending more than 75 % of their time below L = 5.


I.5I.6   Planetary environments

            I.6.1         Overview
            As giant planets (Neptune, Jupiter, Saturn) have large magnetospheres, spacecrafts
            orbiting close to them encounter intense trapped radiation environments inducing direct
            radiation effects and internal charging. As information is very limited, no models are
            defined as normative in this standard but an environment needs to be specified for each
            mission on a case-by-case basis, along with appropriate margins.
            Note that operating close to moons or rings of large planets induces important changes to
            the radiation environment that are important to consider.


            I.6.2         Existing models

            I.6.2.1.      Jupiter
            Three models are currently available, see Figure I-8:
            - The Divine and Garett model which is constructed using data from Pioneer 10 and
# 11 and which extends to 10 jovian radii RJ for protons and more than 100 RJ for
                    electrons [RD.20].
            - GIRE (Galileo Interim Electron Environment) based on Galileo and Pioneer electron
                    data between 8 to 16 RJ [RD.83] and developed at ONERA [RN.17] using a physical
                    model. This model has been validated by comparing calculated synchroton radiation
                    with that measured from the ground by the VLA telescope and extends to 10 RJ.
            - JOSE (Jovian Specification Environment) developed at ONERA based on Galileo
                    data and validated with all relevant data measured by spacecraft having flown by
                    or orbited Jupiter, in order to obtain an easy-to-use engineering model for Jupiter’s
                    environment. This model has been developed for protons and electrons from several
                    tens of keV to several hundreds of MeV [RD.163].
            However, the main data used for modelling are from a NASA Galileo Energetic Particle
            Detector instrument that had broad energy channels, was not tailored for provision of high
            energy data, and was not calibrated. As a consequence, the reliability of the data and
            therefore models are uncertain and careful consideration has to be given to margins.
            During the development of the JUICE mission, shortcomings of the models were identified
            that necessitated custom adaptations of the models. The JUICE Environment Specfication
            [RD.164] reflects these changes, including improved data interpretation, improved
            magnetic coordinate system and the effects of the presence of Ganymede and its magnetic
            field.


            I.6.2.2.      Internal charging
            For internal charging see [RD.19].


            I.6.2.3.     Mars
            For Mars the orbital environment is very similar to an interplanetary environment -- as the
            planet has no significant magnetic field that can neither support trapped radiation, nor
            provide adequate geomagnetic shielding. The only significant deviation from the
            interplanetary environment is the solid angle subtended by the planet that can provide
            some shielding - particularly for low altitude orbits. The radiation environment on the
            surface of Mars largely derives from the secondary particles produced by cosmic rays and
            solar protons in the atmosphere and regolith. For manned missions to the planet the
            dominant particle species of concern is the neutron. Several software packages have been
            developed to calculate the ambient environment at Mars due to atmospheric interactions
            [RD.84],[RD.85],[RD.86]. Residual crustal magnetic fields do exists that can provide some
            form of magnetic shielding, the effectiveness of which can be evaluated using the
            PLANETOCOSMICS software [RD.86].


I.7   Atmospheric albedo neutron models
            MAIRE (Models for Atmospheric Ionising Radiation Effects) [RN.34] is a successor to the
            QARM [RN.35] , and uses a combination of the Geant4-based MAGNETOCOSMICS code
            to calculate particle rigidities, and tables of FLUKA-based response functions for particle
            fluxes as a function of depth from monoenergetic ions incident upon the atmosphere. The
            key features of the model are:
            - The GCR environment can be based on either the ISO-15390 or Badhwar O’Neill
                  (2011) models at the used-defined epoch
            - The user can select from a list of example SEP events, or define own SEP spectra
            - The outputs include the effective dose and H*(10) dose based on ICRP74 and
                  Pelliccioni (2000) coefficients
            - Instead of just calculating fluence or flux or radiological dose, MAIRE can be used
                  to calculate SEE rates based on user-supplied device cross-section parameters
            - MAIRE is web-based, allowing user-friendly operation of the model.
            It can be applied to give the upward (albedo) neutron flux at 100 km altitude and this can
            then be scaled to any spacecraft altitude using the inverse square law:

                                                      ( Re + 100) 2
                                  ϕ (h) = ϕ (100) ×                                        (I-11)
                                                        ( Re + h) 2
                         where
                         ϕ    is the particle flux,
                         h    is the altitude in km and
                         Re   is the earth’s radius in km
            Results for three cut-off rigidities are given for solar minimum and maximum respectively
            in Figure I-6 and Figure I-7.
            Claret et al. [RD.151] and Combier et al. [RD.152] have recently modelled production of
            neutrons from particles up to 1 TeV with the FLUKA code, and provided the following
            table as example of the outputs, for 450km altitude.


       Table I-1: Example albedo neutron environment at 450 km altitude [RD.151]
                                                 Mean              Max                Min
          GCR solar min n flux                 0,42 /cm2/s      1,25 /cm2/s        0,07 /cm2/s

          GCR solar max n flux                 0,23 /cm2/s      0,54 /cm2/s        0,06 /cm2/s

          SEP Jan 2005 event n fluence       1,53E+07 /cm2     5,22E+07 /cm2      4,25E+06 /cm2

          SEP Oct 2003 event n fluence       1,32E+08 /cm2     2,78E+08 /cm2      6,28E+07 /cm2


I.8   Interplanetary environments
              The interplanetary environment is characterized by cosmic rays and occasional solar
              energetic particle events. For mission analysis, it is important to take into account the
              variations in particle intensities with heliocentric radius and solar cycle modulation as
              specified in 9.2.2.
              Science missions also take place at the Lagrangian points of the Sun­Earth system or
              Earth­Moon system, locations which are usually considered interplanetary from the point
              of view of the radiation environment.
              The interplanetary charged particle environment also contains penetrating electrons
              (roughly >200 keV) which are accelerated in solar flares and CMEs and in the radiation
              belts of Jupiter. To assess the interplanetary electron environment the Interplanetary
              Electron Model (IEM) [RD.150] can be used. This gives solar electron cumulative fluence
              and peak spectra in the range 0,31 MeV to 4,13 MeV and Jovian electron fluxes for positions
              as a function of their magnetic connection to Jupiter.


I.9   Tables
                  Table I-2: Characteristics of typical radiation belt particles
                                                                                       Particle
1 MeV Electron 10 MeV Proton
      Range in aluminium (mm)                                                  2                    0,4

      Peak equatorial omni­directional flux (cm-2s-1)*                      4 × 106               3,4 × 105

      Radial location (L) of peak flux (Earth­radii)*                         4,4                   1,7

      Radius of gyration (km)
              @ 500 km                                                        0,6                    50
              @ 20 000 km                                                     10                    880
      Gyration period (s)
              @ 500 km                                                        10-5                7 × 10-3
              @ 20 000 km                                                   2 × 10-4                0,13
      Bounce period (s)
              @ 500 km                                                        0,1                   0,65
              @ 20 000 km                                                     0,3                   1,7
      Longitudinal drift period (min)
              @ 500 km                                                        10                     3
              @ 20 000 km                                                     3,5                   1,1
      * derived from the models of clause 9.3.1


         Table I-3: Recommended updated values of the parameters of the JPL model
                         Parameter            >10MeV            >30MeV
                                 µ                 8,07              7,42
                                Σ                  1,10               1,2
                                W                  6,15              5,40
                         NOTE: Taken from [RD.70] (>10MeV) and [RD.71] (>30MeV)


Table I-4: Proton fluence levels for energy, mission duration and confidence levels from the ESP
                       model with the NASA parameters from Table B-8.
                          Probability                                                                7 years
           Energy                            1 year        2 years       3 years       5 years
                         (confidence)
           (MeV)                             (cm2)          (cm2)         (cm2)         (cm2)         (cm2)
                           level (%)
              >1              50            6,37E+10      1,46E+11      2,32E+11      4,07E+11       5,83E+11
              >1              75            1,10E+11      2,23E+11      3,30E+11      5,39E+11       7,41E+11
              >1              90            1,81E+11      3,24E+11      4,54E+11      6,93E+11       9,20E+11
              >1              95            2,43E+11      4,06E+11      5,48E+11      8,06E+11       1,05E+12
              >1              99            4,23E+11      6,20E+11      7,83E+11      1,07E+12       1,33E+12


             >10              50            2,60E+09      7,07E+09      1,25E+10      2,52E+10       3,94E+10
             >10              75            7,55E+09      1,79E+10      2,90E+10      5,24E+10       7,63E+10
             >10              90            1,97E+10      4,11E+10      6,19E+10      1,01E+11       1,38E+11
             >10              95            3,51E+10      6,78E+10      9,75E+10      1,50E+11       1,97E+11
             >10              99            1,03E+11      1,73E+11      2,28E+11      3,15E+11       3,84E+11


             >30              50            3,26E+08      9,11E+08      1,65E+09      3,47E+09       5,62E+09
             >30              75            1,19E+09      2,93E+09      4,92E+09      9,33E+09       1,41E+10
             >30              90            3,79E+09      8,36E+09      1,31E+10      2,27E+10       3,23E+10
             >30              95            7,59E+09      1,57E+10      2,36E+10      3,87E+10       5,29E+10
             >30              99            2,80E+10      5,10E+10      7,10E+10      1,05E+11       1,34E+11


             >100             50            1,98E+07      5,58E+07      1,02E+08      2,18E+08       3,57E+08
             >100             75            8,59E+07      2,17E+08      3,70E+08      7,21E+08       1,11E+09
             >100             90            3,22E+08      7,34E+08      1,18E+09      2,12E+09       3,09E+09
             >100             95            7,09E+08      1,53E+09      2,36E+09      4,04E+09       5,71E+09
             >100             99            3,12E+09      6,01E+09      8,69E+09      1,36E+10       1,80E+10


        Table I-5: Parameters for the fit to the peak fluxes from the October 1989 events.
          Event              A                           Κ                            α
                             [cm-2s-1sr-1MeV-1]
# 19 Oct. 1989       214                         0,526                        0,366
# 22 Oct 1989        429                         0,458                        0,3908
# 24 Oct 1989        54 900                      2,38                         0,23
          NOTE      Some of the parameters in the reference [RD.74] Table I are incorrect and the verified
                    values are presented in Table I-5.


I.10    Figures


   NOTE: Omnidirectional fluxes are for particles >10 MeV and >1 MeV respectively for protons and electrons. The data
   are derived from the AP-8 and AE-8 models, respectively, and are shown in an idealised dipole representation of the
   Earth’s magnetic field.

                 Figure I-1: Contour plots of the proton and electron radiation belts


    (a) Electron

                1,E+08
Omnidirectional                                                                     0,5 MeV
flux > E                                                                            1 MeV
                1,E+07
 (/cm2/s)                                                                           2 MeV
3 MeV
                   1,E+06
4 MeV
5 MeV
                   1,E+05

                   1,E+04

                   1,E+03

                   1,E+02

                   1,E+01

                   1,E+00
1 2   3    4     5     6     7     8       9      10      11      12
                                                          Geomagnetic L value (Earth-radii)


   (b) Proton

                   1,E+08
Omnidirectional                                                             > Energy: 1. MeV
flux > E                                                                    > Energy: 10 MeV
                   1,E+07
 (/cm2/s)                                                                   > Energy: 30 MeV
                                                                            > Energy: 100 MeV
                   1,E+06

                   1,E+05

                   1,E+04

                   1,E+03

                   1,E+02

                   1,E+01

                   1,E+00
1 2           3           4           5                6
                                                                 Geomagnetic L value (Earth-radii)


  Figure I-2: Electron (a) and proton (b) omnidirectional fluxes, integral in energy, on the
                     geomagnetic equator for various energy thresholds


Figure I-3: Integral omnidirectional fluxes of protons (>10 MeV) and electrons (>10 MeV) at 400 km
altitude showing the inner radiation belt’s “South Atlantic anomaly” and, in the case of electrons,
                       the outer radiation belt encountered at high latitudes


Figure I-4: Comparison of POLE with AE8 (flux vs. Energy) for 15 year mission (with worst case
                                  and best case included)


                                             Energy (MeV)

Figure I-5: Comparison of ONERA/GNSS model from 0,28 MeV up to 1,12 MeV (best case, mean
 case and worst case) with AE8 (flux vs. Energy) for 15 yr mission (with worst case & best case)


                                                  1,0E+04                                                                          1,60
                                                  1,0E+03
                                                  1,0E+02                                                                          1,40
        Differential Flux (neutrons/cm 2/MeV/s)


                                                  1,0E+01
                                                                                                                                   1,20


                                                                                                                                          Integral Flux (neutrons/cm 2/s)
                                                  1,0E+00
                                                                 RC = 0 GV, Dif
                                                  1,0E-01                                                                          1,00
                                                                 RC = 5 GV, Dif
                                                  1,0E-02        RC = 16,6 GV, Dif

                                                  1,0E-03        RC= 0 GV, Int                                                     0,80
                                                                 RC = 5GV, Int
                                                  1,0E-04        RC = 16,6 GV, Int
                                                  1,0E-05                                                                          0,60

                                                  1,0E-06
                                                                                                                                   0,40
                                                  1,0E-07
                                                  1,0E-08                                                                          0,20
                                                  1,0E-09
                                                  1,0E-10                                                                          0,00
                                                        1,E-06 1,E-05 1,E-04 1,E-03 1,E-02 1,E-01 1,E+00 1,E+01 1,E+02 1,E+03 1,E+04
                                                                                     Neutron Energy (MeV)


                                                  Figure I-6: Albedo neutron spectra at 100 km altitude at solar maximum


                                                  1,0E+04                                                                         2,50
                                                  1,0E+03
                                                  1,0E+02
Differential Flux (neutrons/cm 2/MeV/s)


                                                  1,0E+01                                                                         2,00

                                                  1,0E+00                                                                                      Integral Flux (neutrons/cm 2/s)
                                                  1,0E-01        RC = 0 GV, Dif
                                                                 RC = 5 GV, Dif                                                   1,50
                                                  1,0E-02
                                                                 RC = 16,6 GV, Dif
                                                  1,0E-03        RC= 0 GV, Int
                                                  1,0E-04        RC = 5GV, Int
                                                                 RC = 16,6 GV, Int                                                1,00
                                                  1,0E-05
                                                  1,0E-06
                                                  1,0E-07                                                                         0,50
                                                  1,0E-08
                                                  1,0E-09
                                                  1,0E-10                                                                         0,00
                                                        1,E-06 1,E-05 1,E-04 1,E-03 1,E-02 1,E-01 1,E+00 1,E+01 1,E+02 1,E+03 1,E+04
                                                                                     Neutron Energy (MeV)


                                                  Figure I-7: Albedo neutron spectra at 100 km altitude at solar minimum


Figure I-8: Jupiter environment model (proton & electron versions)


                                        Annex J (informative)
                                 Space debris and meteoroids

J.1   Reference data

            J.1.1        Trackable space debris
            The given information on the catalogued space debris population was obtained from the
            DISCOS [RD.87] database. The figures show the situation in May 2018.
            The time evolution of the number of trackable objects in orbit is shown in Figure J-1.
            The altitude dependence for the lower altitudes is given in Figure J-2.
            The object distribution as function of their inclination is plotted in Figure J-3. A
            concentration at certain inclinations is clearly visible.


            J.1.2        Reference flux data for space debris and meteoroids
            Cumulative meteoroid and space debris fluxes (i.e. fluxes of particles of given size or
            larger) can be obtained directly from the flux models. Figure J-2 to Table J-5 give results
            from the models specified in the normative part of the document for specific orbits.
            Figure J-2 gives the number of impacts m-2 yr-1 to a randomly tumbling plate for a range of
            minimum particle sizes. The MASTER-8 model was used for the debris and meteoroid
            fluxes. The results are for an altitude h = 400 km, inclination i = 51,6°, and the epoch May
            1st, 2005. Table J-3 gives the same results for a polar reference orbit (h = 800 km, i = 98°, all
            other parameters are as for Table J-2).
            Table J-4 gives the number of impacts at the geostationary altitude (h = 35 786 km).
            Table J-5 gives the number of impacts m-2 yr-1 to a randomly tumbling plate for a range of
            minimum particle sizes/masses. The meteoroid model from 10.2.4.1 was used. A position
            outside the Earth’s influence on the meteoroid flux was selected (i.e. no shielding and no
            gravitational focusing was considered), e.g. the Earth Lagrange points.
            Table J-6 gives flux enhancement and shielding factors for sporadic meteoroid fluxes
            encountered by spacecraft in typical Earth orbits. The procedure described in C.1 was used.
            For various distances from Earth, Figure J-4 gives the meteoroid velocity distributions and
            average velocities as modified by the gravitational attraction of Earth according to the
            procedure described in C.1.2.


J.2   Additional information on flux models

             J.2.1        Meteoroids

             J.2.1.1.     Meteoroids directionality
             The meteoroid flux model given in 10.2.2.2a assumes an isotropic flux with respect to the
             Earth surface. For an orbiting spacecraft the Earth shielding and the spacecraft motion both
             introduce a directional dependence.
             The directionality caused by the spacecraft motion leads to increased fluxes on forward
             facing surfaces and to reduced fluxes on trailing surfaces.
             Combining the two factors approximate flux ratios for meteoroids are found for 400 km
             and 800 km altitudes, given in Table J-1.
             As resulting effects such as penetration depth or impact plasma generation also depend on
             parameters such as impact velocity and angle, the directional ratios for these effects can be
             considerably different from those given in Table J-1.


             J.2.1.2.     Mass density of meteoroids
             The mass density of meteoroids varies widely from about 0,15 g cm-3 to 8 g cm-3.
             According to reference [RD.21] the average density of micrometeoroids larger than 0,01 g
             is assumed to be 0,5 g cm-3. Meteoroids smaller than 10-6 g are thought to have a higher
             mean density of 2 g cm-3. The recommended value for masses between 10-6 g and 0,01 g is
1 g cm-3.
             The reference meteoroid model given in 10.2.2.2a is based on a mass density of 2,5 g cm-3.
             However, there is still a considerable uncertainty about these densities.


             J.2.1.3.     Flux enhancement from gravitational attraction
             The method described in C.1.5 to account for a modified velocity distribution and
             enhanced fluxes due to Earth’s gravitational attraction modifies the range and width of
             each velocity bin given in Table C-1. It is acceptable to account for this re-binning by simply
             oversampling the original velocity distribution, e.g. using 0,1 km s-1 steps in velocity
             instead of 1 km s-1 steps, and ignoring the changes in bin width but simply adding the
             contribution to the appropriate velocity bin. This gives approximately the same result. For
             example, the n(v∞) velocity distribution at 13,5 km s-1 is 4,8E-02 (from Table C-1) where this
             value represents the contribution from 13 to 14 km s-1. We can oversample n(v∞) by a factor
             of 10 such that we can assign 4,8E-03 to 10 bins between 13 and 14 km s-1. (alternatively,
             interpolate the n(v∞) values to produce a new 0.1 km s-1 step distribution, and renormalize
             it). So for example, a value of n(v∞) (or rather, nk) at 13,95 km s-1 (i.e. representing values
             between 13,90 to 14,00 km s-1) is 4,8E-03. Using expression (J-4), a value of v∞ = 13,95 km s-1
             becomes v = 17,64 km s-1 (assuming vesc = 10,8 km s-1 which is true for LEO). Thus our n(v∞)
             value of 4,83E-03 gets added to the 17,6 to 17,7 km s-1 bin. Once all values of n(v∞) have
             been considered, the 0,1 step distribution can be converted to the final 1 km s-1 step
             distribution (i.e. this is then n'k).


J.2.1.4.     Meteoroid streams
At peak activity stream fluxes can exceed the sporadic background fluxes by a factor five
or more. Occasionally, very high fluxes (meteoroid storms, the visible meteor background
flux can be exceeded by a factor 10 000 or more) can be encountered for short periods (1-2
hours). Examples of such storms are the Leonid streams in 1998, 1999 and 2001.
Meteoroid streams consist of relative large particles only (mass > 10-8 g) with low density
(0,5-1,0 g cm-3).


J.2.1.5.     Interplanetary meteoroid model
New interplanetary meteoroid flux models were presented in [RD.106], [RD.110] and
[RD.108]. These models are based on different types of meteoroid populations whose
relative contributions depend on the particle size range and the distance from the Sun.
The models include directional distributions of the populations.
For Earth orbits the meteoroid models predict similar total fluxes as the reference model in
clause 10.2.4. In addition they include directional effects.
The interplanetary meteoroid models are still in the development stage. At present no
specific reference model is defined as standard.


J.2.2        Space debris flux models

J.2.2.1.     MASTER-8 space debris model

J.2.2.1.1    Overview
MASTER-8 uses a semi­deterministic approach which represents the debris environment
by modelling its history from the beginning of spaceflight to present [RD.88]. It considers
all known source terms for the debris population, and follows the orbital evolutions of the
resulting particles. The source terms are launch and mission related objects, break-ups,
solid rocket motor firings, release of reactor coolant during reactor core ejection by
RORSAT satellites, as well as leakage observed for two TOPAZ reactors, paint flakes, ejecta
and multi-layer insulation fragments. MASTER-8 implements both the Grün and the
Divine-Staubach meteoroid model [RD.108] and the seasonal meteoroid stream models
from Jenniskens-McBride (see Annex C) and Cour-Palais.
The space debris population at the reference epoch May 1st, 2016 is derived from 258 on-
orbit break-ups, 16 RORSAT reactor core ejections, 2 TOPAZ reactor leakages and 2438
solid rocket motor firings.
MASTER-8 covers impactor sizes larger than 1μm for Earth-bound target orbits up to lunar
altitudes and in Lagrange points at 1 AU. An analysis application allows interrogating the
spatial debris distribution to determine collision fluxes for an arbitrary target orbit passing
through the control volume. Flux results can be analysed with respect to collision velocity
magnitude, its direction (azimuth and elevation), the orbit location, and the 3D position
where the flux was encountered.
MASTER-8 is provided via the Space Debris User Portal (J.2.2.1.2) containing the flux
database together with the analysis software and runs on Windows, MacOS as well as
Linux operating systems.


J.2.2.1.2     Access points
The MASTER-8 software, documentation and patches can be obtained online upon
registration from:
https://sdup.esoc.esa.int

J.2.2.1.3     Impact velocity for space debris
Impact velocities can range from 0 to about 15,5 km s-1 with an average velocity of 10 km s-
1for low inclination and of 13 km s-1 for high inclination orbits.

J.2.2.1.4     Mass density of space debris objects
The mass density of space debris objects is a function of the object diameter and the space
debris sources considered. Different sources release particles of different materials the
density of which can vary between 0,01 -- 4,7 g cm-3. Since different source terms dominate
in different size regimes, the cumulative density averaged over all objects varies
significantly with the limiting diameter. For example, objects larger than 1cm are mainly
explosion fragments so that the average density of debris is close to that of aluminium (2,7
g cm-3). Objects larger than 1 μm are dominated by solid rocket motor dust (aluminium
oxide, 3,5 g cm-3).


J.2.2.2.      Other space debris models

J.2.2.2.1     Overview
Several additional space debris models exist for various ranges of applicability and
different purpose. Only a subset of these is publicly available and thus of interest for this
standard.
For some international space programmes specific models have been defined as applicable.
For the International Space Station, additional to the ORDEM3.0 model, also the space
debris models NASA-90 [RD.21] or ORDEM-2000 [RD.107] are still applied.

J.2.2.2.2     ORDEM-2000
ORDEM 2000 was developed by the NASA Orbital Debris Program Office at JSC [RD.107].
It uses careful empirical estimates of the orbit populations derived from measurements,
incorporating a large set of observational data with the US Space Command Catalog, the
Haystack Radar, and the Long Duration Exposure Facility spacecraft returned surfaces
being the three primary sources. By this, the model covers an object size range from 10 µm
to 10 m and employs a new analytical technique utilizing a maximum likelihood estimator
to convert observations into debris population probability distribution functions.
The model describes the orbital debris environment in the low Earth orbit region between
200 and 2,000 km altitude.

J.2.2.2.3     NASA-90 model
From about 1990 until 1996 the NASA space debris engineering model defined in [RD.21]
has been most widely used for design applications. This model is given in terms of simple
analytical expressions. It is relatively easy to use and widely distributed. However, it has
some known shortcomings of which the assumption of spherical orbits for all debris
particles is probably the most severe. The user should be aware of its shortcomings.


            J.2.3        Model uncertainties

            J.2.3.1.     General
            The meteoroid and space debris environment flux models given in 10 and Annex C contain
            several known approximations and other uncertainties.


            J.2.3.2.     Meteoroids
            According to [RD.21] uncertainties in the meteoroid models mainly result from
            uncertainties in particle densities and masses. Fluxes for meteoroids larger than 10-6 g are
            well defined, but the associated masses are quite uncertain. The mass density of meteoroids
            spans a wide range, from about 0,15 g cm-3 to values as large as 8 g cm-3. For meteoroids
            flux uncertainties at a given mass are estimated to be at least a factor of 0,33 to 3.


            J.2.3.3.     Space debris
            The space debris flux models were developed as a best estimate rather than a conservative
            one. In [RD.89] the spatial density distributions as predicted by various space debris
            models are compared. Model predictions are not always consistent, in particular in terms
            of quantity and for lower debris sizes. Significant modelling related deviations can also
            occur between model versions.
            Fluxes of sub-mm size objects in orbits below 1 000 km have short lifetimes of weeks or
            months. Their population depends heavily on individual generation events and can vary
            by an order of magnitude.
            Other uncertainties of debris models are the debris density and shape.
            A more detailed discussion of model uncertainties is given in [RD.21] and [RD.90].
            Flux uncertainties for space debris are assessed via the model validation in MASTER-8.
            The large object population (d > 1 cm) is validated against radar and passive optical
            measurement campaigns whereas the small object population (d < 1 cm) is validated
            against impact measurements of returned surfaces. The uncertainty quantification is based
            on statistical evaluation of the validation data where any deviation from measurements is
            considered. A 1-sigma confidence interval is provided in MASTER-8 for every diameter
            decade for the total population.


J.3   Impact risk assessment

            J.3.1        Impact risk analysis procedure
            For a given surface area and exposure duration the total number of impacts N is obtained
            from the impact flux by multiplication with the total exposed surface area and exposure
            duration.
            From the number of impacts, N, the probability of exactly n impacts occurring in the
            corresponding time interval is determined by Poisson statistics:

                                                N n  -N
                                          Pn =     e                                     (J-1)
                                                 n! 


The probability for no impacts, P0 is given by:

                                  P0 = e - N                                       (J-2)

For values of N << 1, the probability Q for at least one impact (Q = 1 - P0) is nearly equal to
N:

                       Q = 1 - e - N ≈ 1 - (1 - N ) = N                            (J-3)


J.3.2J.3.3        Damage assessment
Here a brief general overview of damage assessment criteria and procedures is given. A
more detailed and extensive description can be found in [RD.91]
For each individual project the damage assessment is tailored according to the specific
conditions and requirements (e.g. orbit, shielding, damage criteria, and required
reliability).
Any damage assessment depends to a large extend on the relevant failure criteria. Possible
failure criteria include:
- cratering (sensor degradation, window blinding, surface erosion);
- larger craters (sealing problems, short circuits on solar arrays);
- impact generated plasma (interference, discharge triggering);
- impulse transfer (attitude problems);
- spallation from inner wall (equipment damage, crew injury);
- wall penetration (damage, injury, loss of liquid or air);
- burst, rupture (pressurized parts);
- structural damage.
For a quantitative damage and risk assessment so called damage or design equations for
the given shielding configuration are needed. They give critical particle diameters,
shielding thresholds or hole sizes for given impact parameters and failure modes.
Examples of single and double wall damage equations taken from are provided in J.3.3.1
and J.3.3.2 respectively. Further damage equations can be found in [RD.91].
Sometimes scaled effective thicknesses in combination with known damage equations can
be used for a first assessment.
For impact damage and risk assessments secondary ejecta can be important as well. The
total mass of the ejected particles can exceed the mass of the primary impactor by orders
of magnitude. Secondary particles are typically ejected within a cone around the impact
direction. Their velocities are typically below 2 km s-1.


J.3.3.1.        Single wall damage equation
The critical diameter for projectiles to cause a failure is given by:

                                                  tt                                             (J-4)
                       Dc = (                                            )1 / λ
                                K f ⋅ K1 ⋅ ρ p ⋅ v γ ⋅ (cos α ) ξ ⋅ ρ tκ
                                               β


where:
           Dc                     Critical diameter
           tt                     Target thickness
           Kf                     Failure factor
           K1                     Material factor
           ρp ρt                  Density of projectile and target
           v                      Impact velocity
           α                      Incidence angle (to surface normal)


A typical set for equation parameters is provided by the thick plate model with following
parameters:
                   α                 β                  γ                   ξ         Κ
                1,056             0,519                2/3                 2/3        0

The failure factor can vary from 1,8 to 3, where following failures are assumed:
           Kf ≥ 3                Crater generation without spall
           2,2 ≤ Kf < 3          Spallation of target
           1,8 ≤ Kf < 2,2        Spall breaks away
           Kf < 1,8              Perforation
This factor can be interpreted as the fraction of target thickness not affected by the
generated crater, i.e. Kf = 3 corresponds to one third of the target thickness unaffected by
the crater. Note that for pressurized vessels a Kf factor of 4 is typically applied [RD.91]
The K1 factor reflects the target material properties. Typical values are K1 = 0,33 for
aluminium and K1 = 0,2 for stainless steel.


J.3.3.2.        Double wall damage equation
Double wall damage equations are used to quantify the shielding provided by two wall
shielding configurations with an additional protecting layers, the so-called bumber. The
critical diameter required to penetrate the shielding structure is given by:

                                                   tt                                            (J-5)
                       Dc = (                                             )1 / λ
                                K1 ⋅ ρ pβ ⋅ v χ ⋅ (cos α ) ξ ⋅ ρ tκ ⋅ S δ

where:
           Dc               Critical diameter
           tt               Target thickness (second impacted wall)


                        Kf          Failure factor
                        ρp ρt       Density of projectile and target (second impacted wall)
                        v           Impact velocity
                        α           Incidence angle (to surface normal)
                        S           Spacing between the two layers
             Note that unlike the example provided here, double or multi-wall equations are in general
             defined in several velocity regimes.
             The increased efficiency in shielding is achieved by the fragmentation of the projectile in
             the bumper and the spread of the fragmentation cloud before impacting the second surface.
             Thus, for the applicability of the equations it is relevant if the bumber layer can fragment
             the projectile and if the spacing in between the layers allows for a sufficient spread of
             fragments. An engineering practice is to assume that the following has to be met in order
             to be able to apply double wall equations for the considered shielding geometry:
                      tb > Dc/6
                      S > 15 Dc
             where:
                        Dc          Critical diameter
                        tb          Bumper thickness (first impacted wall)
                        S           Spacing between the two layers
             Note that the applicability of double wall equations for shielding configurations is
             environment dependent as impact parameters like incidence angle, velocity and projectile
             density can vary.


J.4   Analysis tools

             J.4.1           General
             Several numerical tools have been developed to perform impact and impact risk analyses.
             The following tools are mentioned for information only.


             J.4.2           Deterministic analysis
             For information and analysis of the deterministic, trackable space objects, the DISCOS
             database was developed [RD.87]. DISCOS (ESA’s Database and Information System
             Characterising Objects in Space) is a catalogue on Earth orbiting space objects and debris.
             DISCOS can be used to extract detailed data on all the tracked objects. DISCOS is
             implemented at and maintained by ESA/ESOC. It is accessible via
             https://discosweb.esoc.esa.int for registered users only.


J.4.3        Statistical analysis

J.4.3.1.     Overview
Some tools to perform a statistical microparticle risk assessment are listed below. In
general, the user specifies the mission, spacecraft geometry, attitude and shielding as well
as the particle type, size and velocity range to be analysed. The computed output includes:
- the average number of impacts;
- the resulting number of damaging impacts taking into account the spacecraft
      shielding and damage assessment equations;
- the mean particle impact velocity (amplitude and direction);
- the numbers of craters of specified size;
- the probability of no failure.


J.4.3.2.     ESABASE
A statistical tool, ESABASE2/DEBRIS, was developed for a detailed impact risk assessment
of smaller, non­trackable particles [RD.30]. ESABASE2/DEBRIS is a fully three dimensional
numerical analysis tool including directional and geometrical effects and spacecraft
shielding considerations. It is based on environment and particle-wall interaction models
and includes several meteoroid and space debris flux models.
ESABASE2/DEBRIS is applicable for earth orbits and allows the optional use of several
meteoroid and debris flux models. The tool includes the MASTER-2005 model and the
sporadic and stream meteoroid models given in Annex C.1, including the altitude
dependent velocity distribution.


J.4.3.3.     Systema Debris
Systema-Debris [RD.170] is a 3D geometrical analysis tool for the computation of space
debris and micrometeoroids impacts on spacecraft. This tool computes the probability that
a MMOD (micrometeoroids or orbital debris) penetrates a spacecraft surface or equipment.
The MMOD environment is defined in a STENVI (Standard Environment Interface) that
can be computed by standard environment models like MASTER.
This tool accounts for the 3D geometry, the surface material characteristics (MLI,
honeycomb, equipment walls…), computes the number of impacts or penetrations on a
meshed surface, the Probability of No-Penetration of the selected elements and the area of
craters induced by impacting debris. To compute the impacts, the user can choose among
several classical Ballistic Limit Equations: single wall, multiple walls, SRL.
Systema-Debris computation relies on an advanced ray-tracing algorithm, which can
handle complex geometry including CAD shapes and shadowing effects. The results
(impacting and penetrating flux) can be displayed on the 3D geometry.


J.4.3.4.     DRAMA (MIDAS)
The Impact Flux and Damage Assessment Software of DRAMA (MIDAS) is based on the
MASTER model. The capabilities of the MIDAS software comprise:
- debris and meteoroid collision flux and damage analysis for any user-defined target
      orbit and particle size range.


               - collision flux and damage analysis for a user-defined time interval, using realistic
                     population snapshots for each time step.
               - debris and meteoroid flux analysis for a spherical target or a randomly tumbling
                     plate.
               - debris and meteoroid flux and damage analysis for up to ten oriented planar
                     surfaces, where the plate orientation can be selected from three fixed modes (Earth
                     oriented, Sun oriented or inertially fixed).
               The user can select different damage equations per surface from four fixed equations and
               input up to 20 user-defined equations.


               J.4.3.5.     PIRAT
               PIRAT [RD.171] was developed by Fraunhofer EMI. It has been specifically designed for
               the risk assessment of unmanned missions. It provides an intuitive, reliable, fast, thorough,
               and resource-effective analysis of a spacecraft for a given set of mission parameters. In
               particular, it provides improvement on the traditional risk assessment methods by looking
               beyond structural penetration and additionally investigates impact effects at the level of
               internal components.
               PIRAT provides an interface to ESA’s MASTER and NASA’s ORDEM space debris models.
               Geometrical information is directly derived from the 3D satellite model, which can be
               constructed within PIRAT using geometric primitives.


               J.4.3.6.     BUMPER
               The Bumper code has been developed by NASA and contractors to perform meteoroid and
               debris risk assessments since 1990. Bumper 3 is a refactored version of Bumper II. The core
               consists of common code necessary to process the MMOD environment models, assess
               shadowing and calculate MMOD risk. The library of target response subroutines includes
               a board range of different types of MMOD shield ballistic limit equations as well as
               equations describing damage to various spacecraft subsystems or hardware (thermal
               protection materials, windows, radiators, solar arrays, cables, etc.).


J.5   Tables
                          Table J-1: Approximate flux ratios for meteoroids for 400
                                         km and 800 km altitudes
400 km 800 km
                                        Front/random     ≈ 2,1      ≈ 2,1
                                        Front/rear       ≈ 7,7      ≈ 7,2
                                        Space face /     ≈ 12,0     ≈ 5,5
                                        Earth face


Table J-2: Cumulative number of impacts, N, to a randomly tumbling plate for a range of
            minimum particle sizes using the MASTER-8 model (version 8.0.0)
          Diameter (cm)         Ndeb (m-2yr-1)        Nmet (m-2yr-1)          Ntot (m-2yr-1)
    0,0001                         3,13E+01              8,42E+02                8,73E+02
    0,0002                         3,12E+01              4,23E+02                4,54E+02
    0,0003                         2,94E+01              2,.62E+02               2,91E+02
    0,0005                         2,39E+01              1,36E+02                1,60E+02
    0,0007                         1,45E+01              9,68E+01                1,11E+02
    0,001                          4,87E+00              7,47E+01                7,96E+01
    0,002                          1,81E+00              4,02E+01                4,20E+01
    0,003                          1,71E+00              2,07E+01                2,24E+01
    0,005                          1,58E+00              6,11E+00                7,69E+00
    0,007                          1,49E+00              3,08E+00                4,57E+00
    0,01                           1,32E+00              1,28E+00                2,61E+00
    0,02                           6,17E-02              1,21E-01                1,83E-01
    0,03                           1,93E-02              3,33E-02                5,26E-02
    0,05                           3,66E-03              5,69E-03                9,35E-03
    0,07                           3,14E-04              1,72E-03                2,03E-03
    0,1                            1,42E-04              4,54E-04                5,96E-04
    0,2                            5,30E-05              2,41E-05                7,71E-05
    0,3                            2,88E-05              5,22E-06                3,40E-05
    0,5                            1,17E-05              7,01E-07                1,24E-05
    0,7                            6,55E-06              1,85E-07                6,73E-06
    1,0                            3,54E-06              4,50E-08                3,58E-06
    2,0                            9,28E-07              2,60E-09-               9,31E-07
    3,0                            4,80E-07              3,70E-10-               4,81E-07
    5,0                            3,60E-07                  -                   3,60E-07
    10,0                           2,59E-07                  -                   2,59E-07
    NOTE: The results are for an altitude h = 400 km, inclination i = 51,6°, and the epoch
          November 1st, 2016. For meteoroids the Grün model with constant velocity of 20 km/s was
          used.


Table J-3: Cumulative number of impacts, N, to a randomly tumbling plate for a range of
            minimum particle sizes using the MASTER-8 model (version 8.0.0)
           Diameter (cm)             Ndeb (m-2yr-1)         Nmet (m-2yr-1)          Ntot (m-2yr-1)
     0,0001                             2,02E+02               9,03E+02               1,10E+03
     0,0002                             2,02E+02               4,54E+02               6,56E+02
     0,0003                             1,95E+02               2,81E+02               4,76E+02
     0,0005                             1,80E+02               1,46E+02               3,26E+02
     0,0007                             1,52E+02               1,04E+02               2,55E+02
     0,001                              1,28E+02               8,02E+01               2,08E+02
     0,002                              5,58E+01               4,31E+01               9,89E+01
     0,003                              4,45E+01               2,22E+01               6,66E+01
     0,005                              3,03E+01               6,55E+00               3,68E+01
     0,007                              2,23E+01               3,30E+00               2,56E+01
     0,01                               1,68E+01               1,37E+00               1,81E+01
     0,02                               2,24E+00               1,30E-01               2,37E+00
     0,03                               6,86E-01               3,57E-02               7,22E-01
     0,05                               5,05E-02               6,12E-03               5,67E-02
     0,07                               7,22E-03               1,84E-03               9,06E-03
     0,1                                2,37E-03               4,85E-04               2,86E-03
     0,2                                8,28E-04               2,58E-05                8,54E-04
     0,3                                4,68E-04               5,60E-06               4,74E-04
     0,5                                2,11E-04               7,52E-07               2,12E-04
     0,7                                1,37E-04               1,99E-07               1,37E-04
     1,0                                8,41E-05               4,84E-08               8,42E-05
     2,0                                2,99E-05               2,88E-09               2,99E-05
     3,0                                1,79E-05               4,30E-10               1,79E-05
     5,0                                1,01E-05                    -                 1,01E-05
     10,0                               5,07E-06                    -                 5,07E-06
     NOTE: The results are for an altitude h = 800 km, inclination i = 98°, and the epoch November 1st,
           2016. For meteoroids the Grün model with constant velocity of 20 km/s was used.


Table J-4: Cumulative number of impacts, N, to a randomly tumbling plate for a range of
            minimum particle sizes using the MASTER-8 model (version 8.0.0)
      Diameter (cm)             Ndeb (m-2yr-1)           Nmet (m-2yr-1)              Ntot (m-2yr-1)
   0,0001                          6,80E+01                 1,01E+03                    1,08E+03
   0,0002                          6,79E+01                 5,07E+02                    5,75E+02
   0,0003                          6,09E+01                 3,14E+02                    3,75E+02
   0,0005                          2,,64E+01                1,63E+02                    1,89E+02
   0,0007                          6,,15E+00                1,16E+02                    1,22E+02
   0,001                           1,,30E+00                8,95E+01                    9,08E+01
   0,002                           3,,91E-01                4,81E+01                    4,85E+01
   0,003                           2,,52E-01                2,48E+01                    2,50E+01
   0,005                           2,27E-01                 7,32E+00                    7,54E+00
   0,007                           1,91E-01                 3,69E+00                    3,88E+00
   0,01                            1,24E-01                 1,54E+00                    1,66E+00
   0,02                            2,59E-02                  1,45E-01                   1,71E-01
   0,03                            7,29E-03                  3,99E-02                   4,71E-02
   0,05                            8,42E-04                  6,84E-03                   7,68E-03
   0,07                            1,21E-04                  2,05E-03                   2,17E-03
   0,1                             1,17E-05                  5,44E-04                   5,56E-04
   0,2                             1,93E-06                  2,88E-05                   3,08E-05
   0,3                             7,39E-07                  6,25E-06                   6,99E-06
   0,5                             2,00E-07                  8,39E-07                   1,04E-06
   0,7                             9,49E-08                  2,22E-07                   3,17E-07
   1,0                             4,84E-08                  5,39E-08                   1,02E-07
   2,0                             1,32E-08                  3,18E-09                   1,63E-08
   3,0                             7,66E-09                  4,89E-10                   8,15E-09
   5,0                             4,86E-09                      -                      4,86E-09
   10,0                            3,30E-09                      -                      3,30E-09
   NOTE: The results are for an altitude h = 35 786 km, inclination i = 0,5°, and the epoch November 1st,
         2016. For meteoroids the Grün model with constant velocity of 20 km/s was used.


Table J-5: Cumulative number of impacts, N, to a randomly tumbling plate for a range of
                             minimum particle masses
                        Mass (g)              Diameter (cm)             Nmet (m-2yr-1)
             1,00E-12                       9,14E-5                1,09E+3
             5,00E-12                       1,56E-4                6,11E+2
             1,00E-11                       1,97E-4                4,71E+2
             5,00E-11                       3,37E-4                2,57E+2
             1,00E-10                       4,24E-4                2,02E+2
             5,00E-10                       7,26E-4                1,20E+2
             1,00E-9                        9,14E-4                9,51E+1
             5,00E-9                        1,56E-3                5,15E+1
             1,00E-8                        1,97E-3                3,74E+1
             5,00E-8                        3,37E-3                1,51E+1
             1,00E-7                        4,24E-3                9,54E+0
             5,00E-7                        7,26E-3                2,75E+0
             1,00E-6                        9,14E-3                1,49E+0
             5,00E-6                        1,56E-2                3,07E-1
             1,00E-5                        1,97E-2                1,47E-1
             5,00E-5                        3,37E-2                2,36E-2
             1,00E-4                        4,24E-2                1,04E-2
             5,00E-4                        7,26E-2                1,43E-3
             1,00E-3                        9,14E-2                5,97E-4
             5,00E-3                        1,56E-1                7,57E-5
             1,00E-2                        1,97E-1                3,07E-5
             5,00E-2                        3,37E-1                3,72E-6
             1,00E-1                        4,24E-1                1,49E-6
             5,00E-1                        7,26E-1                1,77E-7
             1,00E+0                        9,14E-1                7,02E-8
             5,00E+0                        1,56E+0                8,22E-9
             1,00E+1                        1,97E+0                3,26E-9
             5,00E+1                        3,37E+0                3,79E-10
             1,00E+2                        4,24E+0                1,50E-10
             5,00E+2                        7,26E+0                1,74E-11
             NOTE 1: The meteoroid model specified in 10.2.4.1 was used.
             NOTE 2: The results are for an object located outside the Earth’s influence (no
                    gravitational focusing and no shielding, e.g. Earth Lagrange Points).
             NOTE 3: A density of ρ = 2,5 g cm-3 was used to convert masses to diameters


Table J-6: Parameters (appearing in Eq. ) to account for modified meteoroid fluxes encountered by
                       spacecraft in circular Earth orbits at various altitudes
          Altitude [km]                     G                          sf                        K
100 2,04                      0,50                       1,09
200 2,03                      0,58                       1,09
400 2,00                      0,63                       1,09
800 1,94                      0,70                       1,08
# 1 000                      1,92                      0,72                       1,08
# 2 000                      1,81                      0,79                       1,08
# 4 000                      1,65                      0,87                       1,07
# 10 000                      1,41                      0,95                       1,05
# 20 000                      1,26                      0,98                       1,04
# 35 790 (GEO)                    1,16                      0,99                       1,03
# 100 000                      1,06                      1,00                       1,01
              At 1 AU                      1,00                      1,00                       1,00
       NOTE: G is the weighted mean gravitational enhancement factor for the velocity distribution of Table
             C-1. The factor sf accounts for the geometrical shielding of Earth. K gives the flux enhancement
             for a randomly tumbling plate that result from the spacecraft motion itself.


J.6    Figures


 Figure J-1: Time evolution of the number of trackable objects in orbit (as of May 2018). Regular
           updates available online: https://discosweb.esoc.esa.int/web/guest/statistics


   Figure J-2: Semi-major axis distribution of trackable objects in LEO orbits (as of May 2018)


      Figure J-3: Distribution of trackable objects as function of their inclination (as
                                        of May 2018)


 NOTE: The gravitational attraction of Earth shifts the distribution to lower velocities. Average
 velocities are: 19,7 km/s at 400 km, 19,4 km/s at 1 500 km, 18,6 km/s at 5 000 km, 17,8 km/s at 36 000
 km and 17,2 km/s outside of the influence of Earth

Figure J-4: The HRMP velocity distribution for different altitudes from the Earth surface


Annex K(informative)

# Bibliography

                     requirements
                     requirements
                     radiation received and its effects and a policy for design
                     margins
                     control


   [RD.1]      Montenbruck, O., Gill, E.; Satellite Orbits Models, Methods, Applications;
               Springer, Berlin-Heidelberg-New York, 2000
   [RD.2]ASTM E 490 -- 00a, Standard Solar Constant and Zero Air Mass
               Solar Spectral Irradiance Tables, © ASTM, 100 Barr Harbor Drive, West
               Conshohocken, PA 19428-2959 (2000).
   [RD.3]      ISO 21348 “Space System - Space environment -- Solar irradiance
               determinations,” 2007.
   [RD.4]Solar Cycle 24 Prediction Panel (at NOAA Space Environment
               Center (SEC) http://www.swpc.noaa.gov/SolarCycle/SC24/
   [RD.5]      K.W. Ogilvie and M.A. Coplan , Solar wind composition, U.S. National Report
               to IUGG, 1991-1994, Rev. Geophys. Vol. 33 Suppl., AGU, 1995,
               http://www.agu.org/revgeophys/ogilvi00/ogilvi00.html
   [RD.6]      S.W.Evans (editor), Natural Environment near the Sun/Earth-Moon L2 libration
               point,   MSFC       http://snap.lbl.gov/pub/nj_bscw.cgi/d84104/SNAP-TECH-
               03009.pdf
   [RD.7]      “Space Environment for USAF Space Vehicles”, MIL-STD-1809 (USAF), 15
               Feb 1991.
   [RD.8]      Yeh H.­C. and M.S. Gussenhoven, “The statistical Electron Environment for
               Defense Meteorological Satellite Program Eclipse Charging”, J. Geophys. Res.,
               pp.7705-7715, 1987.
   [RD.9]      Gussenhoven M.S, D.A. Hardy, F. Rich, W.J. Burke and H.­C. Yeh, “High­Level
               Spacecraft Charging in the Low­Altitude Polar Auroral Environment”, J.
               Geophys. Res., pp.11009-11023, 1985.
   [RD.10]     Solar Wind Radial and Latitudinal Variations From Pole-to-Pole Ulysses Radio
               measurements, K. Issautier, N. Meyer-Vernet, S. Hoang, M. Moncuquet
   [RD.11]     H.B. Garrett and A .R. Hoffman , ‘Comparison of Spacecraft Charging
               Environments at the Earth, Jupiter, and Saturn’, IEEE Trans. Plasma Science,
               Vol.28, No.6, p.2048, 2000
   [RD.12]     Hess W.N., “The Radiation Belt and Magnetosphere”, Blaisdell Publ. Co.,1968.
   [RD.13]     ICRP, “1990 Recommendations of the International Commission on
               Radiological Protection”, ICRP Publication 60, Annals of the ICRP 21, 1-3
               ISBN: 0-08-041144-4, Pergamon Press, NY and Oxford, 1991.
   [RD.14]     Lemaire J., A.D. Johnstone, D. Heynderickx, D.J. Rodgers, S. Szita and V.
               Pierrard, “Trapped Radiation Environment Model Development (TREND­2)”
               Final Report of ESA Contr. 9828, Aeronomica Acta 393-1995, Institut


          d’Aeronomie Spatiale de Belgique/Belgisch Institut voor Ruimte­Aeornomie,
          ISSN 0065-3713, 1995.
[RD.15]   P. Nieminen, “On the energy spectra and occurrence rate of solar electron
          events”, Proc. of Space Radiation workshop, DERA, Nov. 1999.
[RD.16]   J.I. Minow, L. N.Parker, R.L. Altstatt, W.C. Blackwell, Jr, A. Diekmann,
          “Radiation and internal charging environments for thin dielectrics in
          interplanetary space”, Proc. of 9th Spacecraft Charging Technology Conf.,
          Tsukuba, 2005.
[RD.17]F Lei, S Clucas, C Dyer, P Truscott, An atmospheric radiation
          model based on response matrices generated by detailed Monte Carlo simulations
          of cosmic ray interactions, IEEE Transactions in Nuclear Science, Vol 51, No 6,
          pp 3442-3451, Dec 2004.
[RD.18]F Lei, A Hands, C Dyer, P Truscott, Improvements to and
          Validations of the QinetiQ Atmospheric Radiation Model (QARM), IEEE
          Transactions on Nuclear Science Vol. 53, No. 4, pp 1851-1858, Aug. 2006.
[RD.19]   Evans R.W, and H.B.Garrett, Modeling Jupiter’s Internal Electrostatic Discharge
          Environment, J.Spacecraft&Rockets, Vol.39, No.6, p.926, 2002
[RD.20]   Divine, N. and H. Garrett, Charged particle distribution in Jupiter's
          magnetosphere. J. Geophys. Res. 88, 6889-6903 (1983)
[RD.21]   Anderson B.J., “Natural Orbital Environment Guidelines for Use in Aerospace
          Vehicle Development”, by:, editor and R.E. Smith, compiler; NASA TM 4527,
          chapter 7, June 1994.
[RD.22]   Grün E., H.A. Zook, H. Fechtig and R.H. Giese, “Collisional Balance of the
          Meteoritic Complex”, Icarus, Vol. 62, p.244, 1985.
[RD.23]ECSS-Q-ST-70-02, Space product assurance: Thermal vacuum
          outgassing test for the screening of space materials.
[RD.24]ASTM E-595, Method for Total Mass Loss and Collected Volatile
          Condensable Materials from outgassing in a vacuum environment.
[RD.25]   S.L. Huston*, Space Environments and Effects: Trapped Proton Model,
          NASA/CR-2002-211784, 2002
[RD.26]   Singley G.W. and I. Vette J.I., “The AE-4 Model of the Outer Radiation Zone
          Electron Environment”, NSSDC/WDC-A-R&S 72-06, NASA-GSFC, 1972.
[RD.27]   Taylor, A.D. The Harvard Radio Meteor Project meteor velocity distribution
          reappraised, Icarus, 116: 154-158, 1995
[RD.28]   McBride, N., “The importance of the annual meteoroid streams to spacecraft and
          their detectors”, Adv. In Space Research, Vol. 20, pp 1513 --1516, 1997.
[RD.29]   Jenniskens P., “Meteor Stream Activity”, Astron. Astrophys. Vol. 287, pp 990-
          1013, 1994.
[RD.30]   Eta_max space, “ESABASE2/DEBRIS,                Technical    Description”,   ref.
          r040_rep025_02_00_01, July 2006.
[RD.31]   Kaula, W.M.; 1966 Theory of Satellite Geodesy, Waltham & Blaisdell
[RD.32]   Sibeck, D. G., R. E. Lopez, and E. C. Roelof (1991), Solar wind control of the
          magnetopause shape, location and motion, J. Geophys. Res, 96, 5489.
[RD.33]   E 490 -- 00a, Standard Solar Constant and Zero Air Mass Solar Spectral
          Irradiance Tables, © ASTM, 100 Barr Harbor Drive, West Conshohocken, PA
          19428-2959 (2000).
[RD.34]   Knocke, P.C.; Ries, J.C.; Tapley, B.D., Earth Radiation Pressure Effects on
          Satellites, AIAA-1988-4292, AIAA/AAS Astrodynamics Conference,
          Minneapolis/MN, Aug 15-17, 1988
[RD.35]   a) Hedin, A. E., Salah, J.E.., Evans, J.V., Reber, C. A., Newton, G. P., Spencer,
          N. W., Kayser, D.C., Alcayde, D., Bauer, P., Cogger, L., and McClure, J.P., “A


          Global Thermospheric Model Based on Mass Spectrometer and Incoherent
          Scatter Data: MSIS 1. N2 density and temperature. ”, J. Geophys. Res., Vol. 82,
          pp. 2139-2147, 1977. b)Hedin, A. E., Reber, C. A., Newton, G. P., Spencer, N.
          W., Brinton, H. C., Mayr, H. G., and Potter, W. E., “A Global Thermospheric
          Model Based on Mass Spectrometer and Incoherent Scatter Data: MSIS 2.
          Composition”, J. Geophys. Res., Vol. 82, pp. 2148-2156, 1977.
[RD.36]   Hedin, H.E., Reber, C. A., Spencer, N. W., Brinton, H. C. and Kayser, D. C.,
          "Global Model of Longitude/UT Variations in Thermospheric Composition and
          Temperature Based on Mass Spectrometer Data”, J. Geophys. Res., Vol. 84,
1979 p.1.
[RD.37]   Hedin, A. E., “A Revised Thermospheric Model Based on Mass Spectrometer
          and Incoherent Scatter Data: MSIS-83,” J. Geophys. Res., Vol. 88, 1983, p.,
          10170.
[RD.38]   Hedin, A. E., “MSIS-86 Thermospheric Model,” J. Geophys. Res., Vol. 92, 1987,
          p. 4649.
[RD.39]   Hedin, A. E., “Extension of the MSIS Thermosphere Model into the Middle and
          Lower Atmosphere,” J. Geophys. Res., Vol. 96, 1991, p. 1159.
[RD.40]   Bowman, B. R., Marcos, F. A. and Kendra, M. J., “A Method for Computing
          Accurate Daily Atmospheric Density Values from Satellite Drag Data”, AAS-
          04-173, AAS/AIAA Flight Mechanics Meeting, Maui, HI, 2004.
[RD.41]   Angelatsi Coll, M., et al., The first Mars thermospheric general circulation
          model: The Martian atmosphere from the ground to 240 km, Geophysical
          Research Letters, Volume 32, Issue 4, CiteID L04201, 2005.
[RD.42]   Hedin, A. E., N. W. Spencer, and T. L. Killeen, Empirical Global Model of Upper
          Thermosphere Winds Based on Atmosphere and Dynamics Explorer Satellite
          Data, J. Geophys. Res., 93, 9959- 9978, 1988.
[RD.43]   Flasar, F.M. et al, An intense stratospheric jet on Jupiter, Nature, 427,132-135,
          2004.
[RD.44]   Bagenal F., T. Dowling and W. McKinnon Ed., Jupiter, Cambridge University
          Press, Cambridge, 2004.
[RD.45]   Friedson A.J., New observations and modelling of a QBO-like oscillation in
          Jupiter’s stratosphere, Icarus, 137, 34-55, 1999.
[RD.46]   Young L., et al., Gravity waves in Jupiter’s stratosphere, as measured by the
          Galileo ASI experiment, Icarus, 173,185-199,2005.
[RD.47]   Kliore A.J., V.I Moroz and G.M. Keating Ed., The Venus International
          Reference atmosphere, Advances in Space Research, 5, 11, 1985.
[RD.48]   Mars transportation environment définition document, M. Alexander Ed.,
          NASA/TM-2001-210935.
[RD.49]   Justus, C.G. and Johnson, D.L., Mars Global Reference Atmospheric Model
2001 Version (Mars-GRAM 2001) Users Guide, NASA/TM-2001-210961,
          April, 2001.
[RD.50]   Justus, C.G., et al. Mars-GRAM 2000: A Mars Atmospheric Model for
          Engineering Applications, Advances in Space Research, Vol. 29, 193-202, 2002.
[RD.51]   Forget, F., F. Hourdin, R. Fournier, C. Hourdin, O. Talagrand, M. Collins, S. R.
          Lewis, P.L. Read, J-P Huot, Improved General Circulation Models of the Martian
          Atmosphere from the Surface to Above 80 km, J. Geophys. Res. Vol. 104, No.
          E10, p. 24,155-24,176, 1999.
[RD.52]   Justus, C.G., Duvall, A.L., and Johnson, D.L., Engineering-Level Model
          Atmospheres for Titan and Neptune, AIAA-2003-4803, 39th AIAA/ASME/
          SAE/ASEE Joint Propulsion Conference, Huntsville, Alabama, July 20-23,
          2003.


[RD.53]   Purvis C.K, H.B. Garrett, A.C. Whittlesey and N.J. Stevens, “Design Guidelines
          for Assessing and Controlling Spacecraft Charging Effects”, NASA TP-2361,
          1984.
[RD.54]   Burke W.J., D.A. Hardy and R.P. Vancour, “Magnetospheric and High Latitude
          Ionospheric Electrodynamics”, Chapter 8 of “Handbook of Geophysics and the
          Space Environment”, Ed. A. Uram, USAF, 1985.
[RD.55]   Scialdone J.J., “An Estimate of the Outgassing of Space Payloads and Its
          Gaseous Influence on the Environment”, J. Spacecraft and Rockets, 23, p.373,
          1986.
[RD.56]   Huebner W.F. and P.T. Giguere, “A Model of Comet Comae II. Effects of Solar
          Photodissociative Ionization”, Astrophys. J., 238, p.753, 1980.
[RD.57]   Huddleston D.E., A.D. Johnstone and A.J. Coates, “Determination of Comet
          Halley Gas Emission Characteristics from Mass Loading of the Solar Wind”, J.
          Geophys. Res., 95, p.21, 1990.
[RD.58]   Belian, R.D., T.E. Cayton, R.A. Christensen, J.C. Ingraham, M.M. Meier, G.D.
          Reeves and A.J. Lazarus, “Relativistic electrons in the outer­zone: An 11­year
          cycle; their relation to the solar wind”, Proceedings of the Taos Workshop on the
          Earth’s Trapped Particle Environment, Ed, G.D. Reeves, AIP Conference
          Proceedings 383, 13-18, ISBN 1-56396-540-2, 1986.
[RD.59]   SPENVIS: http://www.spenvis.oma.be/spenvis/
[RD.60]   OMERE: http://www.trad.fr/
[RD.61]   Brautigam, D. H., and J. T. Bell, CRRESELE Documentation, PL-TR-95-2128,
          Environmental Research Papers, 1178, Phillips Laboratory, 1995.
[RD.62]   Meffert, J. D., and M. S. Gussenhoven, CRRESPRO Documentation, PL-TR-94-
          2218, Environmental Research Papers, 1158, Phillips Laboratory, 1994.
[RD.63]   Watts J.W., T.A. Parnell and H.H. Heckman, “Approximate Angular
          Distribution and Spectra for Geomagnetically Trapped Protons in Low­Earth
          Orbit”, in “High­Energy Radiation Background in Space”, AIP Conference
          Proceedings 186, AIP, NewYork, 1989.
[RD.64]   Kruglanski M. and J. Lemaire, “Trapped Proton Anisotropy at Low Altitude”,
          Technical Note 6, ESA/ESTEC/WMA Contr. 10725, Institut d’Aeronomie
          Spatiale de Belgique, 1996.
[RD.65]   Bühler P., A. Zehnder, E. Daly and L. Adams, “REM Measurements on­Board
          MIR in 1995”, Advances in Space Research 21, 1645 (1998)
[RD.66]   Tranquille C, “Extension to AE-4 Local Time and Statistical Models for
          Application to AE-8”, ESTEC/WMA Internal Memorandum, 1986.
[RD.67]   Evans, H.D.R., D.J Rodgers, E.J. Daly, P. Nieminen, A. Mohammadzadeh, P.
          Buehler, W. Hajdas, “Energetic electron results from the ESA Monitors and
          Comparison with Existing Radiation Belt Internal Charging Models”, Spacecraft
          Charging Technology Conference 2007 proceedings.
[RD.68]   Feynman J., T. Armstrong, L. Dao- Givner, S. Silverman, “New Interplanetary
          Proton Fluence Model”, J. Spacecraft, Vol 27, No. 4, July-Aug. 1990.
[RD.69]   Feynman J., G. Spitale, J. Wang and S. Gabriel, “Interplanetary Proton Fluence
          Model: JPL 1991”, J. Geophys. Res. 98, A8, 13 281-13 294, 1993.
[RD.70]   Rosenqvist, L., A. Hilgers, H. Evans, E. Daly, M. Hapgood, R. Stamper, R.
          Zwickl, S. Bourdarie and D. Bosher, A toolkit for updating interplanetary proton
          cumulated fluence models, J. Spacecraft and Rockets, Vol. 42, Number 6, Nov-
          Dec 2005.
[RD.71]   Glover, A., A. Hilgers, L. Rosenqvist, S. Bourdarie, Interplanetary Proton
          Cumulated Fluence Model Update, Advances in Space Research, 2007


[RD.72]   King, J.H., “Solar Proton Fluences for 1977-1983 Space Missions”, J.
          Spacecrafts and Rockets, 11, 401, 1974.
[RD.73]   Xapsos, M.A., R J Walters, G P Summers, J L Barth, E G Stassinopoulos, S R
          Messenger, E A Burke,"Characterizing solar proton energy spectra for radiation
          effects applications," IEEE Trans. on Nucl. Sci , vol. 47, no. 6, pp 2218-2223,
          Dec. 2000.
[RD.74]   C. S Dyer, F.Lei, S.N. Clucas, D. F. Smart, M.A. Shea, “Solar particle
          enhancements of single event effect rates at aircraft altitudes,” IEEE Trans. Nucl.
          Sci. , vol.50, no. 6, pp. 2038-2045, Dec. 2003.
[RD.75]   Nymmik, R.A. Probabilistic model for fluences and peak fluxes of solar particles.
          Ra-diat. Meas. 30, 287-296, 1999
[RD.76]   Nymmik R., Initial conditions for radiation analysis : Models of galactic cosmic
          rays and solar particle events, Advances in Space Research, 38 issue 6, pp 1182-
          1190, 2006
[RD.77]   Adams, J.H., “Cosmic Ray Effects on MicroElectronics, Part IV”, NRL
          Memorandum Report 5901, Naval Research Laboratory, Washington DC 20375-
          5000, USA, 1986.
[RD.78]   Tylka, A.J., et al., “CREME96: A Revision of the Cosmic Ray Effects on Micro-
          Electronics Code”, IEEE Trans. Nucl. Sci. NS-44, 2 150-2 160, 1997.
[RD.79]   Nymmik, R.A., M.I. Panasyuk, T. I. Pervaja, and A.A. Suslov, “A Model of
          Galactic Cosmic Ray Fluxes”, by, Nucl. Tracks & Radiat. Meas, 20, 427-429,
          1992.
[RD.80]   Stassinopoulos E.G. and J.H. King, “Empirical Solar Proton Model For Orbiting
          Spacecraft Applications”, IEEE Trans. on Aerosp. and Elect. Systems AES-10,
          442, 1973.
[RD.81]F Ait-Ouamer, A D Zych, R S White, “Atmospheric neutrons at 8.5
          GV Cutoff in the Southern hemisphere,” J. Geophys. Res., Vol. 93, No. A4, pp.
          2499-2510, April 1988.
[RD.82]D J Morris, H Aarts, K Bennett, J A Lockwood, M L McConnell, J
          M Ryan, V sconfelder, H Steinle, X Peng,” Neutron measurements in near-earth
          orbit with COMPTEL,” J. Geophys. Res., Vol. 100, No. A7, pp. 12243-12249,
          July 1995.
[RD.83]   I. Jun, H.B. Garrett and R. W. Evans, High-energy trapped particle environments
          at Jupiter: an update IEEE Trans. Nuc. Science, V52, 2281, December 2005
[RD.84]   G. De Angelis , M. S. Clowdsley, R. C. Singleterry and J. W. Wilson, A new
          Mars radiation environment model with visualization, Advances in Space
          Research, 34 Issue 6, pp 1328-1332, 2004
[RD.85]   Keating, A, A. Mohammadzadeh, P. Nieminen, D. Maia, S. Coutinho, H. Evans,
          M. Pimenta, J-P. Huot, E. Daly, “A Model for Mars Radiation Environment
          Characterisation”, IEEE Trans. Nucl Sci, Vol 52, No 6. Dec 2005.
[RD.86]   Desorgher, L, E. O. Flückiger, M. Gurtner, “The PLANETOCOSMICS Geant4
          application”, 36th COSPAR Scientific Assembly. Held 16 - 23 July 2006, in
          Beijing, China. Meeting abstract from the CDROM, #2361
[RD.87]   Hernandez de la Torre C., F. P. Caballero, N. Sanchez Ortiz, H. Sdunnus, H.
          Klinkrad, “DISCOS Database and Web Interface, Proceedings of the Third
          European Conference on Space Debris, ESOC, Darmstadt, ESA SP-473, 19-21
          March 2001.
[RD.88]   Oswald, M., Stabroth, S., Wiedemann, C., Klinkrad, H., Vörsmann, P,
          MASTER-2005 - The Debris Risk Assessment Tool for the Space Industry, paper
          AIAA-2006-7219, AIAA Space 2006 Conference, San Jose, CA, USA, 2006.


[RD.89]    Fukushige S., Akahoshi Y., Kitzawa Y., “Comparison of Debris Environment
           Models; ORDEM2000, MASTER2001 and MASTER2005”, IHI Engineering
           Review, Vol. 40 No.1 February 2007
[RD.90]    Kessler D.J., J. Zhang, M.J. Matney, P. Eichler, R.C. Reynolds, P.D.
           Anz­Meador and E.G. Stansbery, “A Computer Based Orbital Debris
           Environment Model for Spacecraft Design and Observations in Low Earth
           Orbit”; NASA TM 104825, November 1996.
[RD.91]    Inter-Agency Space Debris Coordination Committee, ‘Protection Manual’,
           IADC-WD-00-03, Version 3.3, April 2004.
[RD.92]Van Eesbeek M. and A. Zwaal, “Outgassing and contamination
           model based on residence time”, ESA SP232, Proc. of the 3rd European Symp.
           on spacecraft materials in a space environment, Noordwijk, The Netherlands, 1-
4 Oct 1985.
[RD.93]Scialdone J., “Characterisation of the outgassing of spacecraft
           materials”, SPIE Vol. 287 Shuttle Optical Environment, 1981.
[RD.94]Trinks H., “Exhaust Plume Databook Update Version No. 3 /
           ESA/ESTEC Contract 7590/87/NL/TP”.
[RD.95]Simons G.A., “Effect of Nozzle Boundary Layers on Rocket
           Exhaust Plumes”, AIAA Journal, Tech. Notes, vol. 10, No. 11, pp. 1534-1535,
           1972.
[RD.96]Trinks H., Exhaust Plume Data Handbook (EPDH IV), Progress
           Report IV, ESA Contract No 7510/87/NL/PP, Sept. 1991a.
[RD.97]Guernsey C. S., McGregor R. D., Bipropellant rocket exhaust plume
           analysis on the Galileo spacecraft, AIAA paper No 86­1488,
           AIAA/ASME/SAE/ASEE 22nd Joint Propulsion Conference, Huntsville, AL,
           June 16­18, 1986.b.
[RD.98]    Tsyganenko, N. A. (2002), A model of the near magnetosphere with a dawn-dusk
           asymmetry 1. Mathematical structure J. Geophys. Res., v.107(A8),
           doi:10.1029/2001JA000219
[RD.99]    Tsyganenko, N. A., and M. I. Sitnov (2005), Modeling the dynamics of the inner
           magnetosphere during strong geomagnetic storms, J. Geophys. Res., v. 110 (A3),
           A03208, doi: 10.1029/2004JA010798.
[RD.100]   Menvielle M. and A. Berthelier, “The K­derived Planetary Indices: Description
           and Availability”, Rev. Geophys., 29, 3, pp 415-432, August 1991.
[RD.101]   Hess W.N., The Radiation Belt and the Magnetosphere, Blaisdell Publ. Co., New
           York, 1968.
[RD.102]   McIlwain C.E., Co-ordinates for Mapping the Distribution of Geomagnetically
           Trapped Particles, J. Geophys. Res., 66, 3681, 1961.
[RD.103]   Hilton H.H., L Parameter -- A New Approximation, J. Geophys. Res., 76, 6952,
           1971. (Note that this paper contains a typographical error in its expression for a3
           of Eq. 5.3).
[RD.104]Xapsos M.A., Summers G.P., Barth J.L., et al.. Probability model
           for worst case solar proton event fluences, IEEE Trans. on Nuclear Science, 46
           (6), 1481-1485, 1999
[RD.105]   Xapsos M.A., Stauffer C., Jordan T., Barth J.L. and Mewaldt A., Model for
           Cumulative Solar Heavy Ion Energy and Linear Energy Transfer Spectra, IEEE
           Transactionson Nucl Science, Vol. 54, No. 6, 2007.
[RD.106]   Dikarev V., E. Grün, M. Landgraf and R. Jehn, “Update of the ESA Meteoroid
           Model”, Proc. of 4th European Conf. on Space Debris, ESOC, 18-20 April 2005,
           ESA-SP-587, pp 271---276, 2005.


[RD.107]   Liou J.-C., M. J. Matney, P. D. Anz-Meador, D. Kessler, M. Jansen, J. R. Theall
           “The New NASA Orbital Debris Engineering Model ORDEM2000”, NASA/TP-
           2002-210780, May 2002.
[RD.108]   Staubach P., E. Grün and R. Jehn, “The meteoroid environment of the Earth”,
           31th COSPAR Sci. Assembly, Birmingham/UK, July, 1996.
[RD.109]ASTM E-1559, Method               for    contamination    outgassing
           characteristics of space materials.
[RD.110]   Jones J. “Meteoroid Engineering Model -- Final Report”, SEE/CR-2004-400,
           NASA/MSFC, June 2004.
[RD.111]   Tsyganenko, N.N., “A Magnetospheric Magnetic Field Model with a Warped
           Tail Current Sheet”, Planet. Space Sci. 37, 5-20, 1989.
[RD.112]   Tsyganenko, N.A. (1995), Modeling the Earth's magnetospheric magnetic field
           confined within a realistic magnetopause, J.Geophys.Res., v.100, pp.5599-5612
[RD.113]   ISO Standard “Space Systems- Model of Earth’s magnetospheric magnetic field,
           ISO DIS 22009, 2007.
[RD.114]   Gussenhoven, M.S. and E.G. Mullen, “Geosynchronuos environment for severe
           spacecraft charging”, J. Spacecraft and Rockets 20, p. 26, 1988.
[RD.115]   Grard R.J.L. and J.K.E. Tunaley, “Photo Electron Sheath Near a planar Probe in
           Interplanetary Space”, J. Geophys. Res., 76, p.2498, 1971.
[RD.116]   Feynman, J., “Solar Wind”, Chapter 3 of “Handbook of Geophysics and the
           Space Environment”, Ed. A. Juram, USAF, 1985.
[RD.117]   Christon, S.P., T.E. Eastman, T. Doke, L.A. Frank, G. Gloeckler, H. Kojima, S.
           Kokubun, A.T.Y. Lui, H. Matsumoto, R.W. McEntire, T. Mukai, S.R. Nylund,
           W.R. Paterson, E.C. Roelof, Y. Saito, T. Sotirelis, K. Tsuruda, D.J. Williams,
           and T. Yamamoto, "Magnetospheric Plasma Regimes Identified Using Geotail
           Measurements         2.     Statistics,     Spatial     Distribution,      and
           GeomagneticDependence,"J. Geophys. Res., 103, 23521 -- 23542, 1998.
[RD.118]   Heynderickx, D., J. Lemaire, and E. J. Daly, “Historical Review of the Different
           Procedures Used to Compute the L-Parameter”, Radiat. Meas. 26, 325-331, 1996
[RD.119]Roederer J.G, “Dynamics of Geomagnetically Trapped Radiation”,
           Springer, Berlin, 1970
[RD.120]   Cabrera and Lemaire, Space             Weather,     Vol.   5    S04007,     doi:
           10.1029/2006SW000263, 2007.
[RD.121]   Öpik, E.J., “Collision probabilities with the planets and the distribution of
           interplanetary matter”, Proc. R.I.A., 54, pp. 165-199, 1951.
[RD.122]   Tobiska, W.K., S.D. Bouwer, and B.R. Bowman, “The development of new solar
           indices for use in thermospheric density modelling”, J. Atm. Solar Terr. Phys.,
           70, pp803-819, 2008
[RD.123]   National Aeronautics and Space Administration, U.S. Air Force, and U.S.
           Weather Bureau, “U.S. Standard Atmosphere 1962”, U.S. Government Printing
           Office, Washington, DC, 1962.
[RD.124]   U.S. Standard Atmosphere Supplements 1966, ESSA, NASA and U.S. Air Force,
           Dec. 1966.
[RD.125]   National Oceanic and Atmospheric Administration, National Aeronautics and
           Space Administration, U.S. Air Force, “U.S. Standard Atmosphere 1976”, U.S.
           Government Printing Office, Washington, DC, 1976.
[RD.126]   ISO International Standard 2533-1975, “Standard Atmosphere First Edition”,
           Corrigendum 1 1978, ISO, Geneva, Switzerland.
[RD.127]   ISO International Standard 5878-1982, Reference Atmospheres for Aerospace
           Use, First Edition-1982-04-14, Technical Committee ISO/TC 20, Aircraft and
           Space Vehicles.


[RD.128]   a) Rees, D., Editor, (1988): "COSPAR International Reference Atmosphere
           1986, Part l. Thermospheric Models", Advances in Space Research, Vol. 8, No.
           5/6Pergamon Press, Oxford and NY. b) Rees, D., J. J. Barnett, and K. Labitzke,
           editors (1990): "CIRA 1986, COSPAR International Reference Atmosphere, Part
           II: Middle Atmosphere Models," Advances in Space Research, Vol. 10, No. 12,
           Pergamon Press, Oxford and NY. c) Keating, G. M., editor (1996): “COSPAR
           International Reference Atmosphere (CIRA), Part III: Trace Constituent
           Reference Models," Advances in Space Research, Vol. 18, No. 9/10, Pergamon
           Press, Oxford and NY.
[RD.129]   CIRA 1961, H. Kallmann-Bijl, R.L.F. Boyd, H. Lagow, S.M. Poloskov, and W.
           Priester (eds.), North-Holland Publishing Company, Amsterdam, 1961.
[RD.130]   CIRA 1965, North-Holland Publishing Company, Amsterdam, 1965.
[RD.131]   COSPAR International Reference Atmosphere 1972, Compiled by the members
           of COSPAR Working Group 4, Akademie-Verlag, Berlin, 1972.
[RD.132]   Justus C.G., F.N. Alyea, D.M. Cunnold, and D.L. Johnson (1986), GRAM-86,
           “Improvements in the Global Atmospheric Model”, NASA MSFC Report ED-5-
           15-86.
[RD.133]   Justus C.G., F.N. Alyea, D.M. Cunnold, R.S. Blocker, and D.L. Johnson (1988),
           GRAM-88, “Improvements to the Perturbation Simulation of the Global
           Reference Atmospheric Model”, NASA MSFC Memorandum ES-44-11-9-88.
[RD.134]   Justus C.G., F.N. Alyea, D.M. Cunnold, W.R. Jefferies III, and D.L. Johnson
           (1991), “The NASA/MSFC Global Reference Atmospheric Model -- 1990
           Version (GRAM-90), Part 1: Technical/Users Manual”. NASA TM-4268, Grant
           NAG8-078.
[RD.135]   Justus C.G., W.R. Jefferies III, S.P. Yung, and D.L. Johnson (1995), “The
           NASA/MSFC Global Reference Atmospheric Model -- 1995 Version (GRAM-
           95)”, NASA TM-4715.
[RD.136]   Justus C.G., and D.L. Johnson (1999), “The NASA/MSFC Global Reference
           Atmospheric Model -- 1999 Version (GRAM-99)”, NASA TM-1999-209630.
[RD.137]   Picone, J. M., A. E. Hedin, K. P. Drob, and J. Lean, NRLMSISE-00 Empirical
           Atmospheric Model: Comparisons to Data and Standard Models. Advances in
           the Astronautical Sciences, Vol. 109 II//Pages 1385-1387, AAS/AIAA
           Astrodynamics Conference, July 30-August 2, 2001, Quebec City, Que., ISSN
           0065-3438.
[RD.138]   Olsen N., H.Lühr,T.J.Sabaka, M.Mandea, M.Rother, L.Tøffner-Clausen and
           S.Choi , CHAOS---a model of the Earth’s magnetic field derived from CHAMP,
           Ørsted, and SAC-C magnetic satellite data, Geophys. J. Int. 166, 67--75 (2006)
[RD.139]   Maus S., H.Lühr2, G.Balasis, M.Rother and M.Mandea, Third generation of the
           Potsdam Magnetic Model of the Earth (POMME), Geochemistry Geophysics
           Geosystems, 7, Q07008, 2006
[RD.140]   Sabaka T.J., Olsen, N., and M.E. Purucker, Extending comprehensive models of
           the Earth's magnetic field with Oersted and Champ data, Geophys. J.
           Int.,159,521-547, (2004)
[RD.141]   Mead, G. D. and Fairfield, D. H., A quantitative magnetospheric model derived
           from spacecraft magnetometer data, J.Geophys. Res., 80, 523-534, (1975)
[RD.142]   Olsen, W.P. and Pfitzer, K.A., A dynamic model of the magnetospheric magnetic
           and electric fields for July 29, 1977, J. Geophys. Res., 87, 5943-5948, (1977)
[RD.143]   Hilmer, R. V. (1989), A magnetospheric magnetic field model with flexible
           internal current systems, PhD thesis, 156pp., Rice Univ., Houston, Texas.
[RD.144]   Voight, G.-H. (1981), A mathematical magnetospheric field model with
           independent physical parameters, Planet. Space Sci., 29(10), 1-20.


[RD.145]   Jordan, C. E., Empirical Models of the Magnetospheric Magnetic Field, Rev.
           Geophys., 32, 2, 139-157, (1994)
[RD.146]   Xapsos M. A., J.L. Barth, E.G. Stassinopoulos, E.A. Burke, and G.B. Gee, Space
           Environment Effects: Model for Emission of Solar Protons (ESP) -- Cumulative
           and Worst-Case Event Fluences, NASA/TP-1999-209763, 1999..
[RD.147]   Liu RY, Smith PA and King JW, ‘A new solar index which leads to improved
           foF2 predictions using the CCIR ATLAS’,Telecommunication Journal, 1983,
           Volume 50 (8), pages 408-414.
[RD.148]   Kaspi et al., The eﬀect of diﬀerential rotation on Jupiter’s low-degree even
           gravity moments”, Geophys. Res. Lett., Volume 44, Issue 12, 28 June 2017,
           https://doi.org/10.1002/2017GL073629
[RD.149]   Kopp, G., Lean, J., "A new, lower value of total solar irradiance: Evidence and
           climate significance", GEOPHYSICAL RESEARCH LETTERS, VOL. 38,
           L01706, doi:10.1029/2010GL045777, 2011
[RD.150]   B. Taylor et al. , "The Interplanetary Electron Model (IEM)", Nuclear Science,
           IEEE         Transactions,      Volume         58     Issue     6,      2011,
           https://doi.org/10.1109/TNS.2011.2171718
[RD.151]   Claret A., et al., FLUKA Calculation of the Neutron Albedo Encountered at Low
           Earth Orbits, IEEE Trans. Nucl. Sci. 61, no. 6, p. 3363, Dec. 2014
[RD.152]   Combier N., A. Claret, P. Laurent, V. Maget, D. Boscher, Improvements of
           FLUKA Calculation of the Neutron Albedo, IEEE Trans. Nucl. Sci. NS-64, 1,
           614, January 2017
[RD.153]   Structure of the Venus middle atmosphere (VIRA II model), Zasova,Ludmila;
           Limaye,Sanjay; Ignatiev,Nikolay; Khatuntsev,Igor; Gorinov,Dmitry, 40th
           COSPAR Scientific Assembly. Held 2-10 August 2014, in Moscow, Russia,
           Abstract C4.3-1-14.
[RD.154]   I.C.F. Muller-Wodarg, M. Mendillo, R.V. Yelle, A.D. Aylward, “A global
           circulation model of Saturn’s thermosphere”, Icarus 180 (2006) 147-160.
[RD.155]   A. Spiga et al, “High-resolution Global Climate Modelling of Saturn’s and
           Jupiter’s tropospheric and stratospheric circulations”, EPSC Abstracts, Vol. 11,
           EPSC2017-195-1, 2017.
[RD.156]   P. Rannou, S. Lebonnois, F. Hourdin, D. Luz, “Titan atmosphere database”,
           Advances in Space Research, Vol. 36 Issue 11, 2005, P. 2194-2198.
[RD.157]   Huang, X., Reinisch, B., Song, P., Green, J., Gallagher, “Developing an
           empirical density model of the plasmasphere using IMAGE/RPI observations”,
           doi: 10.1016/j.asr.2003.07.007, 2004.
[RD.158]   B.W. Reinisch et al. , “Modeling the F2 topside and plasmasphere for IRI using
           IMAGE/RPI and ISIS data”, Advances in Space Research 39, 2007.
[RD.159]   P.A. Webb and E.A. Essex, “A dynamic global model of the plasmasphere”,
           Journal of Atmospheric and Solar-Terrestrial Physics, 66, 2004.
[RD.160]   Pierrard, V., and K. Stegen, “A three dimensional dynamic kinetic model of the
           plasmasphere”, J. Geophys. Res. 113, doi:10.1029/2008JA013060, 2008.
[RD.161]   Badhwar, Gautam D.; Konradi, Andrei, "Conversion of omnidirectional proton
           fluxes into a pitch angle distribution", Journal of Spacecraft and Rockets (ISSN
           0022-4650), vol. 27, May-June 1990, p. 350-352.
[RD.162]   A.N. Petrov, O.R. Grigoryan, M.I. Panasyuk Energy spectrum of proton flux
           near geomagnetic equator at low altitudes / Advances in Space Research 41
           (2008) 1269--1273.
[RD.163]   A. Sicard-Piet et al., “JOSE: A new Jovian Specification Environment model”,
           IEEE Transactions on Nuclear Science, Vol. 58, No. 3, June 2011.


[RD.164]   JUICE team, “JUICE Envirinment Specification”, JS-14-09 v5.5, 24/02/20171,
           http://space-env.esa.int/Reports/ECSS/JS-14-
           09_i5.5_JUICE_Environment_spec.pdf
[RD.165]   A. Hands, K. Ryden, C. Underwood, D. Rodgers and H. Evans, "A New Model
           of Outer Belt Electrons for Dielectric Internal Charging (MOBE-DIC)," in IEEE
           Transactions on Nuclear Science, vol. 62, no. 6, pp. 2767-2775, Dec. 2015
[RD.166]   U. Sezen, T. L. Gulyaeva and F. Arikan, "Online international reference
           ionosphere extended to plasmasphere (IRI-Plas) model," 2017 XXXIInd General
           Assembly and Scientific Symposium of the International Union of Radio Science
           (URSI GASS), Montreal, QC, 2017, pp. 1-4.
[RD.167]   D. Payan, A. Sicard-Piet, J.C. Mateo-Velez, D.Lazaro, S. Bourdarie, et al., Worst
           case of Geostationary charging environment spectrum based on LANL flight
           data. Spacecraft Charging Technology Conference 2014
[RD.168]   Förste, Christoph; Bruinsma, Sean.L.; Abrikosov, Oleg; Lemoine, Jean-Michel;
           Marty, Jean Charles; Flechtner, Frank; Balmino, G.; Barthelmes, F.; Biancale, R.
           (2014): EIGEN-6C4 The latest combined global gravity field model including
           GOCE data up to degree and order 2190 of GFZ Potsdam and GRGS Toulouse.
           GFZ Data Services. http://doi.org/10.5880/icgem.2015.1
[RD.169]   J.T. Emmert et al, DWM07 Global empirical model of upper thermospheric
           storm induced disturbances winds, Journal of Geophysical Research:Space
           Physics, Vol, 113, Issue A11, 2008, DOI: 10.1029/2008JA013668
[RD.170]   C. Theroude, G. Chanteperdrix, A. Merle, A new satellite system-level m/od
           impact risk assessment tool, ISMSE-13, 22-26 June 2015
[RD.171]   Max Gulde, Scott Kempf, Frank Schäfer, Fast and Flexible Space Debris Risk
           Assessment for Satellites, Journal of Space Safety Engineering, Volume 3, Issue
           3, December 2016, Pages 111-113


