/*
 *    @File:         Atmosphere_PrivateFunctions.h
 *
 *    @Brief:        Header file containing the private functions for
 *                   atmosphere.
 *
 *    @Date:         09/07/2025
 *
 */

#ifndef H_ATMOSPHERE_PRIVATEFUNCTIONS_H
#define H_ATMOSPHERE_PRIVATEFUNCTIONS_H

#ifdef __cplusplus
extern "C" {
#endif

/* Function Includes */
/* None */

/* Structure Include */
#include "Atmosphere/DataStructs/Atmosphere_StateStruct.h"

/* Data include */
/* None */

/* Generic Libraries */
/* None */

/*!
 * @brief         Function which finds the atmospheric properties based on the
 *                geometric altitude which is loaded in the atmospheric state
 *                struct.
 *
 * @param[in,out] p_atmosphere_state_out
 *                Pointer to atmospher state struct which should have the
 *                geometric height member already loaded. The rest of the
 *                members will be filled accordingly based around this.
 *
 * @return        Returns a GCONST_TRUE upon a successful completion of the
 *                function.
 */
extern int
    Atmosphere_earthSteadyState(Atmosphere_State *p_atmosphere_state_inout);

/*!
 * @brief         Function which finds the geopotential altitude from the
 *                geometric altitude and the body radius of the body containing
 *                the atmosphere.
 *
 *                The geopotential altitude is an altitude which compentsates
 *                for the assumption of constant gravitational acceleration
 *                during the integration of the hydraustatic equation.
 *
 * @param[out]    p_geopotentialAltitude_m_out
 *                Pointer to double where geopotential altitude value will be
 *                stored.
 *
 * @param[in]     geometricAltitude_m_in
 *                Geometric altitude point which will be converted to the
 *                geopotential altitude.
 *
 * @param[in]     atmosphericBodyRadius_m_in
 *                Radius of the body which contains the atmosphere.
 *
 * @return        Returns a GCONST_TRUE upon a successful completion of the
 *                function.
 */
extern int
    Atmosphere_findGeopotentialAltitude(double *p_geopotentialAltitude_m_out,
                                        double  geometricAltitude_m_in,
                                        double  atmosphericBodyRadius_m_in);

#ifdef __cplusplus
}
#endif
#endif /* H_ATMOSPHERE_PRIVATEFUNCTIONS_H */