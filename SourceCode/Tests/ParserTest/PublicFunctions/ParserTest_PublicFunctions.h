/*!
 * @file            ParserTest_PublicFunctions.h
 * @brief           Public function declarations for the ParserTest module.
 * @date            22/09/2026
 */

#ifndef PARSERTEST_PUBLIC_FUNCTIONS_H
#define PARSERTEST_PUBLIC_FUNCTIONS_H

#ifdef __cplusplus
extern "C" {
#endif

/* Standard Library Includes */
/* None */

/* External Library Includes */
/* None */

/* Module Includes */
/* None */

/* Object Includes */
/* None */

/* Generic Libraries */
#include "GConst/GConst.h"

/*!
 * @brief           Run GParserIni test with given INI file.
 *
 * @param[in]       p_iniFilePath_in
 *                  Path to the INI test file.
 * @param[in]       p_outputDir_in
 *                  Output directory for CSV results.
 *
 * @retval          GCONST_TRUE on success.
 * @retval          GCONST_FALSE on error.
 */
extern int ParserTest_runIniTest(const char *p_iniFilePath_in, const char *p_outputDir_in);

/*!
 * @brief           Run GParserJson test with given JSON file.
 *
 * @param[in]       p_jsonFilePath_in
 *                  Path to the JSON test file.
 * @param[in]       p_outputDir_in
 *                  Output directory for CSV results.
 *
 * @retval          GCONST_TRUE on success.
 * @retval          GCONST_FALSE on error.
 */
extern int ParserTest_runJsonTest(const char *p_jsonFilePath_in, const char *p_outputDir_in);

/*!
 * @brief           Run GParserYaml test with given YAML file.
 *
 * @param[in]       p_yamlFilePath_in
 *                  Path to the YAML test file.
 * @param[in]       p_outputDir_in
 *                  Output directory for CSV results.
 *
 * @retval          GCONST_TRUE on success.
 * @retval          GCONST_FALSE on error.
 */
extern int ParserTest_runYamlTest(const char *p_yamlFilePath_in, const char *p_outputDir_in);

#ifdef __cplusplus
}
#endif

#endif /* PARSERTEST_PUBLIC_FUNCTIONS_H */