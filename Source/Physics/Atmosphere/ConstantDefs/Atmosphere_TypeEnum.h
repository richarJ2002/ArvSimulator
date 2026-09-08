/*
 *    @File:         Atmosphere_TypeEnum.h
 *
 *    @Brief:        Header file which contains an enumerator for different
 *                   body types within the atmosphere.
 *
 *    @Date:         09/07/2025
 *
 */

#ifndef H_ATMOSPHERE_BODIESENUM_H
#define H_ATMOSPHERE_BODIESENUM_H

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

typedef enum Atmosphere_TypeEnum
{
  /*!
   * @brief       Steady state atmosphere of Mercury.
   */
  ATMOSPHERE_MERCURY_STEADY_STATE = 10,

  /*!
   * @brief       Steady state atmosphere of Venus.
   */
  ATMOSPHERE_VENUS_STEADY_STATE = 20,

  /*!
   * @brief       Steady state atmosphere of Earth.
   */
  ATMOSPHERE_EARTH_STEADY_STATE = 30,

  /*!
   * @brief       Steady state atmosphere of Mars.
   */
  ATMOSPHERE_MARS_STEADY_STATE = 40,

  /*!
   * @brief       Steady state atmosphere of Jupiter.
   */
  ATMOSPHERE_JUPITER_STEADY_STATE = 50,

  /*!
   * @brief       Steady state atmosphere of Saturn.
   */
  ATMOSPHERE_SATURN_STEADY_STATE = 60,

  /*!
   * @brief       Steady state atmosphere of Uranus.
   */
  ATMOSPHERE_URANUS_STEADY_STATE = 70,

  /*!
   * @brief       Steady state atmosphere of Neptune.
   */
  ATMOSPHERE_NEPTUNE_STEADY_STATE = 80,

} Atmosphere_Type;

#ifdef __cplusplus
}
#endif
#endif /* H_ATMOSPHERE_BODIESENUM_H */