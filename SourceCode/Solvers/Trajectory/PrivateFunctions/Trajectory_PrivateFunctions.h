/*
 *    @File:         Trajectory_PrivateFunctions.h
 *
 *    @Brief:        Header file which contains the private functions for the
 *                   trajectory solver.
 *
 *    @Date:         26/06/2025
 *
 */

#ifndef H_TRAJECTORY_PRIVATEFUNCTIONS_H
#define H_TRAJECTORY_PRIVATEFUNCTIONS_H

#ifdef __cplusplus
extern "C" {
#endif

/* Function Includes */
/* None */

/* Structure Include */
#include "Trajectory/DataStructs/Trajectory_ParamsStruct.h"
#include "Trajectory/DataStructs/Trajectory_StateStruct.h"

/* Data include */
/* None */

/* Generic Libraries */
/* None */

/*!
 * @brief         Function which finds the aerodynamic coefficients experienced
 *                by the projectile.
 *
 * @param[out]    p_trajectory_state_out
 *                Pointer to trajectory state struct which will have the
 *                aerodynamic coefficients of the projectile calculated.
 *
 * @param[in]     p_trajectory_params_in
 *                Pointer to trajectory params struct which will have the
 *                coefficient parameters loaded into their respective members.
 *
 * @return        Returns a GCONST_TRUE upon a successful completion of the
 *                function, with a GCONST_FALSE on an unsuccessful return of the
 *                fucntion.
 */
extern int Trajectory_findAerodynamicCoefficients(
    Trajectory_State  *p_trajectory_state_out,
    Trajectory_Params *p_trajectory_params_in);

/*!
 * @brief         Function which finds the aerodynamic forces experienced
 *                by the projectile.
 *
 * @param[out]    p_trajectory_state_out
 *                Pointer to trajectory state struct which the aerodynamic
 *                forces will be loaded into.
 *
 * @param[in]     p_trajectory_params_in
 *                Pointer to trajectory params struct which will have the
 *                geometry parameters of the projectile loaded.
 *
 * @return        Returns a GCONST_TRUE upon a successful completion of the
 *                function, with a GCONST_FALSE on an unsuccessful return of the
 *                fucntion.
 */
extern int
    Trajectory_findAerodynamicForces(Trajectory_State  *p_trajectory_state_out,
                                     Trajectory_Params *p_trajectory_params_in);

/*!
 * @brief         Function which finds the atmospheric density of the
 *                projectile.
 *
 * @param[out]    p_trajectory_state_out
 *                Pointer to trajectory state struct which will have the
 *                atmospheric density of the freestream found.
 *
 * @param[in]     p_trajectory_params_in
 *                Pointer to trajectory params struct which will have the
 *                atmoshphe params struct loaded into their respective member.
 *
 * @return        Returns a GCONST_TRUE upon a successful completion of the
 *                function, with a GCONST_FALSE on an unsuccessful return of the
 *                fucntion.
 */
extern int Trajectory_findAtmosphericDensity(
    Trajectory_State  *p_trajectory_state_out,
    Trajectory_Params *p_trajectory_params_in);

/*!
 * @brief         Function which finds the rate derivitive of the flight path
 *                angle.
 *
 * @param[in,out] p_trajectory_state_inout
 *                Pointer to trajectory state which the flight path
 *                derivitive member will store the result.
 *
 * @return        Returns a GCONST_TRUE upon a successful completion of the
 *                function, with a GCONST_FALSE on an unsuccessful return of the
 *                fucntion.
 * @return
 */
extern int Trajectory_findFlightPathAngleRate(
    Trajectory_State *p_trajectory_state_inout);

/*!
 * @brief         Function which finds the acceleration due to gravity of the
 *                projectile.
 *
 * @param[out]    p_trajectory_state_out
 *                Pointer to trajectory state struct which will have the gravity
 *                acceleration member updated with the acceleration due to
 *                gravity expected at z position of the projectile.
 *
 * @param[in]     p_trajectory_params_in
 *                Pointer to trajectory params struct which will have the
 *                reference altitudes and gravity acceleration loaded into their
 *                respective members.
 *
 * @return        Returns a GCONST_TRUE upon a successful completion of the
 *                function, with a GCONST_FALSE on an unsuccessful return of the
 *                fucntion.
 */
extern int Trajectory_findGravityAcceleration(
    Trajectory_State  *p_trajectory_state_out,
    Trajectory_Params *p_trajectory_params_in);

/*!
 * @brief         Function which finds the velocity magnitude rate of the
 *                projectile.
 *
 * @param[out]    p_trajectory_state_out
 *                Pointer to trajectory state which the velocity magnitude
 *                derivitive member will store the result.
 *
 * @return        Returns a GCONST_TRUE upon a successful completion of the
 *                function, with a GCONST_FALSE on an unsuccessful return of the
 *                fucntion.
 */
extern int
    Trajectory_findVelocityRate(Trajectory_State *p_trajectory_state_out);

#ifdef __cplusplus
}
#endif
#endif /* H_TRAJECTORY_PRIVATEFUNCTIONS_H */