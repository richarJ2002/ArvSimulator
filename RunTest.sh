#!/bin/bash
#
#    @File:         RunTest.sh
#
#    @Brief:        Run a simulation test or unit test and archive results.
#
#    @Description:  This script creates a timestamped test run directory,
#                   copies the selected executable and parameters,
#                   runs the test, and optionally appends a
#                   user-provided name to the test run directory.
#                   Supports multiple test types: ArvSimulator, ParserTest, etc.
#
#    @Date:         22/09/2026
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
}

usage () {
  echo "Usage: $0 [OPTIONS]"
  echo ""
  echo "Options:"
  echo "  -t, --test <test_name>    Test to run (ArvSimulator, ParserTest). Default: ArvSimulator"
  echo "  -e, --executable <path>   Path to executable (overrides --test)"
  echo "  -n, --name <name>         Name for this test run (skips interactive prompt)"
  echo "  -h, --help                Show this help message"
  echo ""
  echo "Examples:"
  echo "  $0                           # Run ArvSimulator (default)"
  echo "  $0 -t ParserTest             # Run ParserTest"
  echo "  $0 -t ArvSimulator -n my_run # Run ArvSimulator with name 'my_run'"
  echo "  $0 -e ./BuildEnvironment/Tests/ParserTest  # Run custom executable"
}

# ---------------------------------------------------------------------------- #
# PARSE ARGUMENTS
# ---------------------------------------------------------------------------- #

TEST_TYPE="ArvSimulator"
EXECUTABLE_PATH=""
TEST_NAME=""

while [[ $# -gt 0 ]]; do
  case $1 in
    -t|--test)
      TEST_TYPE="$2"
      shift 2
      ;;
    -e|--executable)
      EXECUTABLE_PATH="$2"
      shift 2
      ;;
    -n|--name)
      TEST_NAME="$2"
      shift 2
      ;;
    -h|--help)
      usage
      exit 0
      ;;
    *)
      err "Unknown option: $1"
      usage
      exit 1
      ;;
  esac
done

# ---------------------------------------------------------------------------- #
# MAIN EXECUTION
# ---------------------------------------------------------------------------- #

# Get the project root directory (where this script is located)
PROJECT_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

# Source and build directories
SOURCE_DIR="${PROJECT_ROOT}/SourceCode"
BUILD_DIR="${PROJECT_ROOT}/BuildEnvironment"

# Determine executable path based on test type or explicit path
if [[ -n "${EXECUTABLE_PATH}" ]]; then
  EXECUTABLE="${EXECUTABLE_PATH}"
  msg "Using custom executable: ${EXECUTABLE}"
else
  # Search for executable in build directory matching test name
  EXECUTABLE=""
  msg "Searching for executable matching test type: ${TEST_TYPE} in ${BUILD_DIR}..."

  # Search for executables matching the test name
  TEST_EXECUTABLE=$(find "${BUILD_DIR}" -maxdepth 3 -type f -name "*${TEST_TYPE}*" 2>/dev/null | head -1)

  if [[ -n "${TEST_EXECUTABLE}" ]]; then
    EXECUTABLE="${TEST_EXECUTABLE}"
    msg "Found executable: ${EXECUTABLE}"
  else
    # Try exact path construction as fallback
    case "${TEST_TYPE}" in
      ArvSimulator)
        EXACT_PATH="${BUILD_DIR}/Simulation/ArvSimulator"
        if [[ -f "${EXACT_PATH}" ]]; then
          EXECUTABLE="${EXACT_PATH}"
        fi
        ;;
      ParserTest)
        EXACT_PATH="${BUILD_DIR}/Tests/ParserTest"
        if [[ -f "${EXACT_PATH}" ]]; then
          EXECUTABLE="${EXACT_PATH}"
        fi
        ;;
      *)
        err "Unknown test type: ${TEST_TYPE}"
        err "Supported types: ArvSimulator, ParserTest"
        exit 1
        ;;
    esac

    if [[ -z "${EXECUTABLE}" ]]; then
      err "Executable not found for test type: ${TEST_TYPE}"
      err "Searched ${BUILD_DIR} for *${TEST_TYPE}*, but no matching executable found."
      err "Please run BuildTest.sh first to build the project,"
      err "or specify the executable path with -e/--executable."
      exit 1
    fi
  fi

  msg "Test type: ${TEST_TYPE}"
  msg "Executable: ${EXECUTABLE}"
fi

# Check if executable exists
if [[ ! -f "${EXECUTABLE}" ]]; then
  err "Executable not found at ${EXECUTABLE}"
  err "Please run BuildTest.sh first to build the project."
  exit 1
fi

# Create timestamp for test run directory
TIMESTAMP=$(date +"%Y-%m-%d-%H-%M-%S")
TEST_RUNS_DIR="${PROJECT_ROOT}/TestRuns"
TEST_RUN_DIR="${TEST_RUNS_DIR}/${TIMESTAMP}"

# Create test run directory structure
msg "Creating test run directory: ${TEST_RUN_DIR}"
mkdir -pv "${TEST_RUN_DIR}/Parameters"
mkdir -pv "${TEST_RUN_DIR}/Archive"
mkdir -pv "${TEST_RUN_DIR}/Logs"
mkdir -pv "${TEST_RUN_DIR}/PostProcessing"

# Copy executable
msg "Copying executable to test run directory..."
cp "${EXECUTABLE}" "${TEST_RUN_DIR}/$(basename "${EXECUTABLE}")"

# Copy parameter files if they exist
PARAM_SOURCE_DIR="${PROJECT_ROOT}/Parameters"
if [[ -d "${PARAM_SOURCE_DIR}" ]]; then
  msg "Copying parameters from ${PARAM_SOURCE_DIR}..."
  cp -r "${PARAM_SOURCE_DIR}"/* "${TEST_RUN_DIR}/Parameters/"
else
  wrn "No Parameters directory found at ${PARAM_SOURCE_DIR}"
  wrn "Creating empty Parameters directory for future use."
fi

# Also copy test-specific parameters if the executable is in the Tests directory
# e.g., BuildEnvironment/Tests/ParserTest/ParserTest → SourceCode/Tests/ParserTest/Parameters
TEST_PARAM_SOURCE_DIR=""
if [[ "${EXECUTABLE}" == *"/Tests/"* ]]; then
  # Extract the test directory name from the executable path
  TEST_DIR_NAME=$(echo "${EXECUTABLE}" | sed 's|.*/Tests/||' | cut -d'/' -f1)
  TEST_PARAM_SOURCE_DIR="${PROJECT_ROOT}/SourceCode/Tests/${TEST_DIR_NAME}/Parameters"
  if [[ -d "${TEST_PARAM_SOURCE_DIR}" ]]; then
    msg "Copying test parameters from ${TEST_PARAM_SOURCE_DIR}..."
    cp -r "${TEST_PARAM_SOURCE_DIR}"/* "${TEST_RUN_DIR}/Parameters/"
  else
    wrn "No test parameters found at ${TEST_PARAM_SOURCE_DIR}"
  fi
else
  # Fallback: check hardcoded ParserTest path for backward compatibility
  TEST_PARAM_SOURCE_DIR="${PROJECT_ROOT}/SourceCode/Tests/ParserTest/Parameters"
  if [[ -d "${TEST_PARAM_SOURCE_DIR}" ]]; then
    msg "Copying test parameters from ${TEST_PARAM_SOURCE_DIR}..."
    cp -r "${TEST_PARAM_SOURCE_DIR}"/* "${TEST_RUN_DIR}/Parameters/"
  fi
fi

# Change to test run directory and run test
msg "Running ${TEST_TYPE} from ${TEST_RUN_DIR}..."
cd "${TEST_RUN_DIR}"

# Run the test, redirecting output to log file AND terminal
LOG_FILE="${TEST_RUN_DIR}/Logs/simulation.log"
msg "Test output will be logged to ${LOG_FILE} and displayed in terminal"

msg ""
msg " Running ${TEST_TYPE}"
msg ""

EXECUTABLE_NAME=$(basename "${EXECUTABLE}")
if ./"${EXECUTABLE_NAME}" 2>&1 | tee "${LOG_FILE}"; then
  msg "Test completed successfully."
else
  err "Test failed. Check ${LOG_FILE} for details."
  exit 1
fi

msg ""
msg " ${TEST_TYPE} Finished"
msg ""

# Handle test run naming
if [[ -n "${TEST_NAME}" ]]; then
  # Sanitize the name (replace spaces with underscores, remove special chars)
  SAFE_NAME=$(echo "${TEST_NAME}" | sed 's/[^a-zA-Z0-9._-]/_/g' | sed 's/__*/_/g' | sed 's/^_\|_$//g')
  NEW_DIR_NAME="${TIMESTAMP}-${SAFE_NAME}"
  NEW_DIR_PATH="${TEST_RUNS_DIR}/${NEW_DIR_NAME}"

  msg "Renaming test run directory to: ${NEW_DIR_NAME}"
  mv "${TEST_RUN_DIR}" "${NEW_DIR_PATH}"
  msg "Test run saved to: ${NEW_DIR_PATH}"
else
  # Interactive prompt if no name provided
  echo ""
  read -p "Enter a name for this test run (press Enter to skip): " INTERACTIVE_NAME

  if [[ -n "${INTERACTIVE_NAME}" ]]; then
    SAFE_NAME=$(echo "${INTERACTIVE_NAME}" | sed 's/[^a-zA-Z0-9._-]/_/g' | sed 's/__*/_/g' | sed 's/^_\|_$//g')
    NEW_DIR_NAME="${TIMESTAMP}-${SAFE_NAME}"
    NEW_DIR_PATH="${TEST_RUNS_DIR}/${NEW_DIR_NAME}"

    msg "Renaming test run directory to: ${NEW_DIR_NAME}"
    mv "${TEST_RUN_DIR}" "${NEW_DIR_PATH}"
    msg "Test run saved to: ${NEW_DIR_PATH}"
  else
    msg "Test run saved to: ${TEST_RUN_DIR}"
  fi
fi

msg "Test run complete."