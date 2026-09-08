/*
 *    @File:         Atmosphere_PublicFunctions.h
 *
 *    @Brief:        Header file which contains the public functions for
 *                   Atmosphere module.
 *
 *    @Date:         10/07/2025
 *
 */

#ifndef H_ATMOSPHERE_PUBLICFUNCTIONS_H
#define H_ATMOSPHERE_PUBLICFUNCTIONS_H

#ifdef __cplusplus
extern "C" {
#endif

/* Function Includes */
/* None */

/* Structure Include */
#include "Atmosphere/DataStructs/Atmosphere_StateStruct.h"

/* Data include */
#include "Atmosphere/ConstantDefs/Atmosphere_TypeEnum.h"

/* Generic Libraries */
/* None */

/*!
 * @brief         Function which finds the atmospheric proeprties based on the
 *                inputted geometrical height and the atmosphere model being
 *                used.
 *
 *                Function call should be in the pre step phase, as the
 *                state of the atmosphere is based on the current altitude
 *                within the current time step. Then, the atmospehre information
 *                will be used in further calculations.
 *
 * @param[out]    p_atmosphere_state_out
 *                Pointer to address of an atmosphere state struct which will
 *                be filled with information about the atmosphere.
 *
 * @param[in]     geometricAltitude_m_in
 *                Geometric altitude above reference surface of atmosphere.
 *
 *                NOTE: Reference surface will depend on what body is being
 *                      used.
 *
 * @param[in]     atmopshereType_in
 *                Enum element which indiactes what atmopshere to use.
 *
 * @return        Returns a GCONST_TRUE upon a successful completion of the
 *                function.
 */
extern int Atmosphere_preStep(Atmosphere_State *p_atmosphere_state_out,
                              double            geometricAltitude_m_in,
                              Atmosphere_Type   atmopshereType_in);

#ifdef __cplusplus
}
#endif
#endif /* H_ATMOSPHERE_PUBLICFUNCTIONS_H */