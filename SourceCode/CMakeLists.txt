# Set minimum required version of cmake
cmake_minimum_required(VERSION 4.0.0)

# Set project name
project(ArvSim)

# Set C compiler
set(CMAKE_C_COMPILER gcc)

# Set C++ compiler
set(CMAKE_CXX_COMPILER g++)

# Set C standard
set(CMAKE_C_STANDARD 90)

# Set Source Directory
set(SRC_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

# Set relative directories within project
set(GENERIC_PATH ${SRC_DIRECTORY}/GenericLibraries)

# Directories to be included in scripts
include_directories(${GENERIC_PATH})

# ----------- Add subdirectories which contain CMakeLists.txt file ---------- #

# Generic Libraries
add_subdirectory(${GENERIC_PATH}/GArchive)
add_subdirectory(${GENERIC_PATH}/GConversions)
add_subdirectory(${GENERIC_PATH}/GIntegral)
add_subdirectory(${GENERIC_PATH}/GLegPoly)
add_subdirectory(${GENERIC_PATH}/GParser)
add_subdirectory(${GENERIC_PATH}/GRand)
add_subdirectory(${GENERIC_PATH}/GMath)
add_subdirectory(${GENERIC_PATH}/GTime)
add_subdirectory(${GENERIC_PATH}/GUtilities)