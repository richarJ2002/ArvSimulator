# ParserTest executable - Tests for GParserIni, GParserJson, GParserYaml
add_executable(ParserTest
  PublicFunctions/ParserTest_main.c
  PrivateFunctions/ParserTest_runIniTest.c
  PrivateFunctions/ParserTest_runJsonTest.c
  PrivateFunctions/ParserTest_runYamlTest.c
)

target_include_directories(ParserTest PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}/PublicFunctions
  ${CMAKE_CURRENT_SOURCE_DIR}/PrivateFunctions
  ${CMAKE_CURRENT_SOURCE_DIR}/Parameters
  ${GENERIC_PATH}/GParserIni
  ${GENERIC_PATH}/GParserJson
  ${GENERIC_PATH}/GParserYaml
  ${GENERIC_PATH}/GArchive
  ${GENERIC_PATH}/GLog
  ${GENERIC_PATH}/GZero
  ${GENERIC_PATH}/GConst
)

target_link_libraries(ParserTest
  PRIVATE GParserIni GParserJson GParserYaml GArchive
)