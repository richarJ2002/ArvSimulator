/*
 *    @File:         Trajectory_StateStruct.h
 *
 *    @Brief:        Header file which contains the trajcetory state struct.
 *
 *    @Date:         26/06/2025
 *
 */

#ifndef H_TRAJECTORY_STATESTRUCT_H
#define H_TRAJECTORY_STATESTRUCT_H

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

typedef struct Trajectory_StateStruct
{
  /*!
   * @brief     Z position of projectile in the fixed frame. This can be
   *            refered to as the height of the projectile above sea level.
   *
   * @frame     Fixed Frame
   * @units     Meters
   */
  double zPosition_Fix_m;

  /*!
   * @brief     X position of projectile in the fixed frame. This can be
   *            refered to as the height of the projectile above sea level.
   *
   * @frame     Fixed Frame
   * @units     Meters
   */
  double xPosition_Fix_m;

  /*!
   * @brief     Rate of change of the z position in the fixed frame.
   *
   * @frame     Fixed Frame
   * @units     Meters
   */
  double zPositionRate_Fix_m;

  /*!
   * @brief     Rate of change of the x position in the fixed frame.
   *
   * @frame     Fixed Frame
   * @units     Meters
   */
  double xPositionRate_Fix_m;

  /*!
   * @brief     Magnitude of the velocity vector.
   *
   * @frame     N/A
   * @units     Meters
   */
  double velocityMag_mps;

  /*!
   * @brief     Rate of change of the magnitude of the velocity vector.
   *
   * @frame     N/A
   * @units     Meters
   */
  double velocityMagRate_mps;

  /*!
   * @brief     Flight path angle of the projectile between the velocity vector
   *            and the x axis of the fixed frame.
   *
   *            NOTE: It is assumed that in the analysis the y component of the
   *                  velocity vector is equal to 0, and hence the analysis is
   *                  constrained to the plane of trajectory for simplicity.
   *
   * @frame     Fixed Frame x-axis to Velocity vector
   * @units     Radians
   */
  double flightPathAngle_FixToVel_rad;

  /*!
   * @brief     Rate of change of the flight path angle.
   *
   *            NOTE: It is assumed that in the analysis the y component of the
   *                  velocity vector is equal to 0, and hence the analysis is
   *                  constrained to the plane of trajectory for simplicity.
   *
   * @frame     Fixed Frame x-axis to Velocity vector rate of change
   * @units     Radians Per Second
   */
  double flightPathAngleRate_FixToVel_radps;

  /*!
   * @brief     Acceleration which is due to gravity in the fixed frame. It is
   *            assumed that the acceleration acts in the -z direction.
   *
   * @frame     Fixed Frame
   * @units     Meters
   */
  double accelerationDueToGravity_Fix_mps2;

  /*!
   * @brief     Atmospheric density of the free stream atmosphere around the
   *            projectile.
   *
   * @frame     N/A
   * @units     Kilograms Per Meters Cubed
   */
  double atmosphericDensity_kgpm3;

  /*!
   * @brief     Lift coefficient experienced by the projectile.
   *
   * @frame     N/A
   * @units     Meters
   */
  double liftCoefficient;

  /*!
   * @brief     Drag coefficient experienced by the projectile.
   *
   * @frame     N/A
   * @units     Meters
   */
  double dragCoefficient;

  /*!
   * @brief     Lift force experienced by the projectile.
   *
   * @frame     N/A
   * @units     Meters
   */
  double liftForce_N;

  /*!
   * @brief     Drag force experienced by the projectile.
   *
   * @frame     N/A
   * @units     Meters
   */
  double dragForce_N;

  /*!
   * @brief     Mass of the projectile. This is included in the state as it can
   *            be modelled that the mass changes of the projectile due to
   *            evaporation of material.
   *
   * @frame     N/A
   * @units     Meters
   */
  double mass_kg;

  /*!
   * @brief     Mass rate of the projectile. Is expected to always be negative
   *            as mass can only be lost on rentry.
   *
   * @frame     N/A
   * @units     Meters
   */
  double massRate_kgps;

} Trajectory_State;

#ifdef __cplusplus
}
#endif
#endif /* H_TRAJECTORY_STATESTRUCT_H */