/*
 *    @File:         Atmosphere_Const.h
 *
 *    @Brief:        Header file which contains the constants for Atmosphere
 *                   module.
 *
 *    @Date:         09/07/2025
 *
 */

#ifndef H_ATMOSPHERE_CONST_H
#define H_ATMOSPHERE_CONST_H

#ifdef __cplusplus
extern "C" {
#endif

/* Function Includes */
/* None */

/* Structure Include */
/* None */

/* Data include */
/* None */

/* Generic Libraries */
/* None */

/* ------------------------------------------------------------------------ *
 * EARTH ATMOSPHERIC CONSTANTS
 * ------------------------------------------------------------------------ */

/*!
 * @brief         Radius of earth at the equator. This corresponds to sea level
 *                at the equator which is considered the reference surface for
 *                earth.
 *
 *                [Ref:https://web.archive.org/web/20161224174302/http://asa.usno.navy.mil/static/files/2016/Astronomical_Constants_2016.pdf]
 *
 * @frame         N/A (Magnitude value, hence no frame)
 * @units         Meters
 */
#define ATMOSPHERE_EARTH_RADIUS_M                                  (6378136.6)

/*!
 * @brief         Acceleration due to gravity at sea level.
 *
 *                [Ref:https://physics.nist.gov/cgi-bin/cuu/Value?gn]
 *
 * @frame         N/A (Magnitude value, hence no frame)
 * @units         Meters Per Second^2
 */
#define ATMOSPHERE_EARTH_SEA_LEVEL_GRAVITATIONAL_ACCELERATION_MPS2 (9.80665)

/*!
 * @brief         Gas Constant R for dry air.
 *
 *                [Ref:https://www.engineeringtoolbox.com/individual-universal-gas-constant-d_588.html]
 *
 * @frame         N/A
 * @units         Joules Per Kilogram Kelvin
 */
#define ATMOSPHERE_EARTH_GAS_CONSTANT_R_JPKGK                      (287.05)

#ifdef __cplusplus
}
#endif
#endif /* H_ATMOSPHERE_CONST_H */