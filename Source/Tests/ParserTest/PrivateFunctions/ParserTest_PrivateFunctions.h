/*!
 * @file            ParserTest_PrivateFunctions.h
 * @brief           Private function declarations for the ParserTest module.
 * @date            22/09/2026
 */

#ifndef PARSERTEST_PRIVATE_FUNCTIONS_H
#define PARSERTEST_PRIVATE_FUNCTIONS_H

#ifdef __cplusplus
extern "C" {
#endif

/*!
 * @brief           Write dictionary array to CSV file.
 *
 * @param[in]       p_dic_in
 *                  Pointer to dictionary array.
 * @param[in]       numSections_in
 *                  Number of sections in dictionary array.
 * @param[in]       p_outputFilePath_in
 *                  Path to output CSV file.
 *
 * @retval          GCONST_TRUE on success.
 */
int ParserTest_writeIniResultsToCsv(const dictionary *p_dic_in,
                                   int numSections_in,
                                   const char *p_outputFilePath_in);

/*!
 * @brief           Recursively write JSON value to CSV.
 *
 * @param[in]       p_archive_inout
 *                  Pointer to GArchive struct.
 * @param[in]       p_value_in
 *                  Pointer to JSON value.
 * @param[in]       p_keyPath_in
 *                  Key path string.
 *
 * @retval          GCONST_TRUE on success.
 */
int ParserTest_writeJsonValueToCsv(GArchive *p_archive_inout,
                                   const GParserJson_Value *p_value_in,
                                   const char *p_keyPath_in);

/*!
 * @brief           Recursively write YAML value to CSV.
 *
 * @param[in]       p_archive_inout
 *                  Pointer to GArchive struct.
 * @param[in]       p_value_in
 *                  Pointer to YAML value.
 * @param[in]       p_keyPath_in
 *                  Key path string.
 *
 * @retval          GCONST_TRUE on success.
 */
int ParserTest_writeYamlValueToCsv(GArchive *p_archive_inout,
                                   const GParserYaml_Value *p_value_in,
                                   const char *p_keyPath_in);

#ifdef __cplusplus
}
#endif

#endif /* PARSERTEST_PRIVATE_FUNCTIONS_H */