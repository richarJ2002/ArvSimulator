#!/bin/bash
#
# @File:         BuildEnvironment.sh
#
# @Brief:        Build ARV environment
#
# @Date:         08/09/2026
#

set -euo pipefail

# ---------------------------------------------------------------------------- #
# HELPER FUNCTIONS
# ---------------------------------------------------------------------------- #

msg () {
  echo "[MSG] ${1}"
}

wrn () {
  echo "[WRN] ${1}"
}

err () {
  echo "[ERR] ${1}"
  exit 1
}

# ---------------------------------------------------------------------------- #
# PARSE ARGUMENTS
# ---------------------------------------------------------------------------- #

# Flag passed to cmake which will indicate if debug should be active
debug_argument=""

for input in $@; do
  case ${input} in
    -d|--debug*)   debug_argument="-DCMAKE_BUILD_TYPE=Debug"
    ;;

    *)        err " Unknown input: ${input}"
  esac
done

# Find the name of the operating system
operating_system="$(uname -s)"
msg "${operating_system} operating system was detected"

# ---------------------------------------------------------------------------- #
# EXECUTE BuildEnvironment.sh
# ---------------------------------------------------------------------------- #

msg "Configuring ARV environment"
msg "Source Directory: Source"
msg "Build Directory: Build"

# Run cmake depending on the system being run on
case "${operating_system}" in
  Linux*)   cmake -S Source -B Build ${debug_argument} -G "Unix Makefiles"
  ;;

  MINGW*)   cmake -S Source -B Build ${debug_argument} -G "MinGW Makefiles"
  ;;

  *)        wrn "Could not recognize operating system"
            err "operating_system_argument: ${operating_system_argument}"
esac

msg "Building Environment"

cmake --build Build
