'''
@File:      plot_atmosphere.py

@Brief:     Contains script to make plots of atmospheric properties against
            altitude.
'''

# Regular module imports
from plotly import graph_objects as go
from pathlib import Path
from math import exp, pow
import pandas as pd
import argparse
import sys
import yaml

# Find the root of PythonTools with respect to the file
pythonToolsRoot = Path(__file__).absolute().parents[3] / 'PythonTools'

# Check that PythonTools is on the python path and if not append it to
if pythonToolsRoot.as_posix() not in sys.path:
  sys.path.append(pythonToolsRoot.as_posix())

# Custom file imports
from PyGenericLibraries import PyLog
from PyGenericLibraries import PyPlotly


def plot_atmosphere(dataFile: Path,
                    referenceAirDensity_kgpm3,
                    gasConstant_JpkgK,
                    gravitationalAcceleration_mps2,
                    altitudeIncriment_km) -> bool:
  '''
  @brief    Function which will create the plots of the atmospehre. This serves
            as the top level function which all subsequent plots are made.

  @Arg      dataFile
            Path to csv file which will contain the data to be plotted. The data
            should include headers, in order:
                - height_m
                - temperature_k
                - TODO: Complete

  @Return   bool
            True boolean operater is returned, indicating a successful
            return.
  '''

  # If the data file input is not a path object then convert to one.
  if type(dataFile) is not Path:
    dataFile = Path(dataFile)

  # Open csv file with data
  atmosphereData = pd.read_csv(dataFile)
  PyLog.Log.info('Data loaded correctly')

  # Create dataframe of standard atmosphere
  standardAtmosphereDf = create_standard_atmosphere_dataframe(
    atmosphereData,
    referenceAirDensity_kgpm3,
    gasConstant_JpkgK,
    gravitationalAcceleration_mps2,
    altitudeIncriment_km)

  # Extract modelled density array
  densityArray = standardAtmosphereDf[['density_kgpm3',
                                       'altitude_km']].to_numpy()
  temperatureArray = standardAtmosphereDf[['temperature_K',
                                           'altitude_km']].to_numpy()

  # Create figures
  densityFig = PyPlotly.plot_2d_line(densityArray)
  temperatureFig = PyPlotly.plot_2d_line(temperatureArray)

  # Apply the classical format to the plot
  densityFig = PyPlotly.classical(densityFig,
                                  'Atmospheric Density',
                                  'Atmospheric Density, &#961; (kgm<sup>-1</sup>)',
                                  'Altitude, h (km)'
                                  )
  temperatureFig = PyPlotly.classical(temperatureFig,
                                      'Atmospheric Temperature',
                                      'Atmospheric Temperature, T<sub>&#8734;</sub> (K)',
                                      'Altitude, h (km)')

  # Find the path to save the plots
  outptuDir = dataFile.parent / 'Output'

  # Check if directory exists
  if outptuDir.is_dir() is not True:
    outptuDir.mkdir()

  # Make directory for HTML outputs
  if (outptuDir / 'Html').is_dir() is not True:
    (outptuDir / 'Html').mkdir()

  # Make directory for PNG outputs
  if (outptuDir / 'Png').is_dir() is not True:
    (outptuDir / 'Png').mkdir()

  # Save figures to html
  PyPlotly.export_to_html(densityFig, outptuDir / 'Html' / 'density.html')
  PyPlotly.export_to_html(temperatureFig, outptuDir /
                          'Html' / 'temperature.html')
  PyLog.Log.info('Html plots saved to output folder')

  # # Save figures to png
  # PyPlotly.export_to_png(densityFig, outptuDir / 'Png' / 'density.png')
  # PyPlotly.export_to_png(temperatureFig, outptuDir /
  #                        'Png' / 'temperature.png')
  # PyLog.Log.info('Png plots saved to output folder')

  # Save the csv data
  standardAtmosphereDf.to_csv(outptuDir / 'simulatedStandardAtmosphere.csv',
                              mode='w',
                              index=False)
  PyLog.Log.info('Simulated atmosphere saved as csv file')

  return True


def create_standard_atmosphere_dataframe(data_in: pd.DataFrame,
                                         referenceAirDensity_kgpm3: float,
                                         gasConstantR_JpkgK=287.052874,
                                         gravitationalAcceleration_mps2=9.80665,
                                         altitudeIncriment_km=0.1):
  '''
  @brief    Function which creates a dataframe of the standard atmosphere based
            on the temperature variation with geometric altitude.

  @Args     data_in
            Dataframe containing the atmospheric data. This function will
            extract columns:
             - 'height_km'
             - 'temperature_K'

  @Args     referenceAirDensity_kgpm3
            Reference air density when altitude is equal to '0'. This is then
            used with the gas state equation to find values of air density based
            on temperature.

  @Kwargs   gasConstantR_JpkgK = 287.052874
            Gas constant used to model the atmosphere. Standard value is the
            gas constant for air. Need to input corrcet value for corresponding
            atmosphere.

  @Kwargs   gravitationalAcceleration_mps2 = 9.80665
            Acceleration due to gravity on body. Standard value is set for earth
            gravitational acceleration at sea level. Need to input corrcet value
            for corresponding body.

  @Kwargs   altitudeIncriment_km
            Incirment which to find the air density at. Standard value is set to
            100m but should be changed to give desiered resolution required.

  @Return   data_out
            Data frame with the standard atmosphere, including columns:
              - Geometric Altitude (Meters)
              - Temperature (Kelvin)
              - Density (Kg per meter cubed)
  '''

  # Find reference altitude temperature
  referenceTemperature_K = data_in.loc[0, 'temperature_K']

  # Find the reference altitude
  referenceAltitude_m = find_geopoential_altitude(
    data_in.loc[0, 'height_km'] * 1000)

  # Find min and max height
  minHeight_km = data_in.loc[0, 'height_km']
  maxHeight_km = data_in.loc[data_in.index[-1], 'height_km']

  # Set current altitude index to 1
  currentAltitudeIndex = 1

  # Find first boundary gradient term
  temperatureGradient_Kpm = ((data_in.loc[currentAltitudeIndex, 'temperature_K'] -
                             data_in.loc[currentAltitudeIndex - 1, 'temperature_K']) /
                             ((data_in.loc[currentAltitudeIndex, 'height_km'] -
                               data_in.loc[currentAltitudeIndex - 1, 'height_km']) *
                             1000))

  # Initiate list
  altitudeList_km = []
  temperatureList_K = []
  densityList_kgpm3 = []

  for i in range(0, int((maxHeight_km - minHeight_km) / altitudeIncriment_km)):
    # Find the height
    geometricHeight_m = (minHeight_km + i * altitudeIncriment_km) * 1000

    # Find the geopotential altitude
    geopotentialAltitude_m = find_geopoential_altitude(geometricHeight_m)

    # Check that the current simulated height has not gone outside the boundary.
    if data_in.loc[currentAltitudeIndex, 'height_km'] * 1000 <= geometricHeight_m:
      # Incriment altitude index
      currentAltitudeIndex += 1

      # Update the reference temperature
      referenceTemperature_K = data_in.loc[currentAltitudeIndex - 1,
                                           'temperature_K']

      # Find reference altitude
      referenceAltitude_m = find_geopoential_altitude(
          data_in.loc[currentAltitudeIndex - 1,
                      'height_km'] * 1000)

      # Update the reference atmospheric density
      referenceAirDensity_kgpm3 = atmosphereDensity_kgpm3

      # Update boundary gradient term
      temperatureGradient_Kpm = ((data_in.loc[currentAltitudeIndex, 'temperature_K'] -
                                  data_in.loc[currentAltitudeIndex - 1, 'temperature_K']) /
                                 (find_geopoential_altitude(data_in.loc[currentAltitudeIndex, 'height_km'] * 1000) -
                                  find_geopoential_altitude(data_in.loc[currentAltitudeIndex - 1, 'height_km'] * 1000)))

    # If atmosphere is greater than the final altitude, break for loop
    if data_in.loc[data_in.index[-1], 'height_km'] * 1000 < geometricHeight_m:
      break

    # Find change in height from reference altitude
    heightDifference_m = geopotentialAltitude_m - referenceAltitude_m

    # Find the Temperature at corresponding height
    altitudeTemperature_K = (referenceTemperature_K +
                             temperatureGradient_Kpm *
                             heightDifference_m)

    # Find atmospheric density based on if the boundary is in the isothermal
    # region or the temperature gradient region.
    if temperatureGradient_Kpm == 0.0:
      # Isothermal Region
      atmosphereDensity_kgpm3 = (referenceAirDensity_kgpm3 *
                                 exp(
                                   (-gravitationalAcceleration_mps2 /
                                    gasConstantR_JpkgK /
                                    referenceTemperature_K) *
                                     (heightDifference_m)
                                 ))
    else:
      # Temperature Gradient Region
      atmosphereDensity_kgpm3 = (referenceAirDensity_kgpm3 *
                                 pow(altitudeTemperature_K / referenceTemperature_K,
                                     -(gravitationalAcceleration_mps2 /
                                       temperatureGradient_Kpm /
                                       gasConstantR_JpkgK + 1)))

    # Append to lists
    altitudeList_km.append(geometricHeight_m / 1000)
    temperatureList_K.append(altitudeTemperature_K)
    densityList_kgpm3.append(atmosphereDensity_kgpm3)

  # Create a dataframe of the standard atmosphere
  data_out = pd.DataFrame({
    'altitude_km': altitudeList_km,
    'temperature_K': temperatureList_K,
    'density_kgpm3': densityList_kgpm3
  })

  return data_out


def find_geopoential_altitude(altitude_m: float,
                              bodyRadius_m: float = 6378136.6) -> float:
  '''
  @brief    Function which finds the geopotential altitude, based on the radius
            of the body. The geopotential altitude comes about due to the
            assumption that acceleration due to gravity is constant in the
            integration of the equation:

              dp = -rho*g*dh

  @Args     altitude_m
            Input altitude of atmospheric control volume.

  @Kwargs   bodyRadius_m =  6378136.6
            Radius of the body which the atmosphere is present on. Standard
            value is earths radius.

  @Return   geopotentialAltitude_m
            Float which represents the geopotential altitude.
  '''

  # Find the geopotential altitude
  geopotentialAltitude_m = ((bodyRadius_m * altitude_m) /
                            (bodyRadius_m + altitude_m))

  return geopotentialAltitude_m


if __name__ == '__main__':
  parser = argparse.ArgumentParser(
    prog='plot_atmosphere',
    description=('Function which will produce plots of atmospheric properties '
                 'based on the temperature with altitude. The algorithm is '
                 'based around the standard atmosphere. By providing a '
                 'temperature table with altitude, the atmospheric density '
                 'and pressure can be calculated and put into a graph format.')
  )

  parser.add_argument('temperaturePointsFile',
                      help=('Path to csv file which contains the temperature '
                            'points for the atmosphere with corresponding '
                            'altitudes. It is assumed that the temperature '
                            'varies linearly between points.'),
                      type=Path,
                      )

  parser.add_argument('atmosphericConfigurationYmlFile',
                      help=('Path to yml file which contains the constants '
                            'relating to the gaseous properties of the '
                            'atmosphere of the body.'),
                      type=Path,
                      )

  parser.add_argument('--altitudeIncriment_km', '-i',
                      help=('Incriment which the atmosphere is evaluated at. '
                            'The outputed results will have rows incrimenting '
                            'by this value. Default value is 0.1 km'),
                      type=float,
                      required=False,
                      const=0.1,
                      default=0.1,
                      nargs='?'
                      )

  # Parse arguments
  args = parser.parse_args()

  # Open yaml file
  with open(args.atmosphericConfigurationYmlFile, 'r') as file:
    atmosphericConstants = yaml.safe_load(file)

  plot_atmosphere(args.temperaturePointsFile,
                  atmosphericConstants['PhysicalProperties']['surfaceAirDensity_kgpm3'],
                  atmosphericConstants['PhysicalProperties']['gasConstant_JpkgK'],
                  atmosphericConstants['PhysicalProperties']['surfaceGravitationalAcceleration_mps2'],
                  args.altitudeIncriment_km
                  )
