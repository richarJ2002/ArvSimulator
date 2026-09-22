/*!
 * @file            ParserTest_runYamlTest.c
 * @brief           Run GParserYaml test and output results to CSV.
 * @date            22/09/2026
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Module Includes */
#include "ParserTest_PublicFunctions.h"

/* Generic Libraries */
#include "GConst/GConst.h"
#include "GLog/GLog.h"
#include "GParserYaml/GParserYaml.h"
#include "GArchive/GArchive.h"
#include "GZero/GZero.h"

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
int ParserTest_runYamlTest(const char *p_yamlFilePath_in, const char *p_outputDir_in)
{
    GParserYaml_State state;
    GArchive archive;
    int status;
    int i;

    (void)p_outputDir_in;

    GLog("Loading YAML file: %s", p_yamlFilePath_in);

    /* Initialize state */
    GZero(&state, GParserYaml_State);

    /* Load parameters */
    status = GParserYaml_loadParams(&state, p_yamlFilePath_in);
    if (status != GCONST_TRUE)
    {
        GError("Failed to load YAML file: %s", p_yamlFilePath_in);
        return GCONST_FALSE;
    }

    GLog("YAML file loaded successfully");

    /* Initialize archive for CSV output */
    status = GArchive_init(&archive, "Archive/ParserTest", "YamlTestResults.csv");
    if (status != GCONST_TRUE)
    {
        GError("Failed to initialize archive for YAML test");
        return GCONST_FALSE;
    }

    /* Add columns */
    status = GArchive_addCol(&archive, "Value", 1, 1);
    if (status != GCONST_TRUE)
    {
        return GCONST_FALSE;
    }
    status = GArchive_addCol(&archive, "Type", 1, 1);
    if (status != GCONST_TRUE)
    {
        return GCONST_FALSE;
    }

    /* Write header */
    status = GArchive_writeHeader(&archive);
    if (status != GCONST_TRUE)
    {
        return GCONST_FALSE;
    }

    /* Write root object children */
    if (state.p_root != NULL)
    {
        for (i = 0; i < state.p_root->numChildren; i++)
        {
            status = ParserTest_writeYamlValueToCsv(&archive,
                                                    &state.p_root->p_children[i],
                                                    state.p_root->p_children[i].key);
            if (status != GCONST_TRUE)
            {
                GError("Failed to write YAML value to CSV");
                GArchive_close(&archive);
                GParserYaml_closeParams(&state);
                return GCONST_FALSE;
            }
        }
    }

    GArchive_close(&archive);

    /* Close and free */
    status = GParserYaml_closeParams(&state);
    if (status != GCONST_TRUE)
    {
        GError("Failed to close YAML params");
        return GCONST_FALSE;
    }

    return GCONST_TRUE;
}

/*!
 * @brief           Recursively write YAML value to CSV.
 *
 * @param[in]       p_archive_inout
 *                  Pointer to GArchive struct.
 * @param[in]       p_value_in
 *                  Pointer to YAML value.
 * @param[in]       p_keyPath_in
 *                  Key path string (e.g., "TestSection1.int_val").
 *
 * @retval          GCONST_TRUE on success.
 * @retval          GCONST_FALSE on error.
 */
int ParserTest_writeYamlValueToCsv(GArchive *p_archive_inout,
                                   const GParserYaml_Value *p_value_in,
                                   const char *p_keyPath_in)
{
    int status;
    int i;
    char childKeyPath[256];

    if (p_value_in == NULL)
    {
        return GCONST_TRUE;
    }

    switch (p_value_in->type)
    {
        case GPARSERYAML_VALUE_TYPE_STRING:
            status = GArchive_addVal(p_archive_inout, 0.0); /* String value as double */
            if (status != GCONST_TRUE)
            {
                return GCONST_FALSE;
            }
            status = GArchive_addVal(p_archive_inout, 1.0); /* Type: string */
            if (status != GCONST_TRUE)
            {
                return GCONST_FALSE;
            }
            return GArchive_writeLine(p_archive_inout);

        case GPARSERYAML_VALUE_TYPE_NUMBER:
            status = GArchive_addVal(p_archive_inout, p_value_in->numberValue);
            if (status != GCONST_TRUE)
            {
                return GCONST_FALSE;
            }
            status = GArchive_addVal(p_archive_inout, 2.0); /* Type: number */
            if (status != GCONST_TRUE)
            {
                return GCONST_FALSE;
            }
            return GArchive_writeLine(p_archive_inout);

        case GPARSERYAML_VALUE_TYPE_BOOL:
            status = GArchive_addVal(p_archive_inout, (double)p_value_in->boolValue);
            if (status != GCONST_TRUE)
            {
                return GCONST_FALSE;
            }
            status = GArchive_addVal(p_archive_inout, 3.0); /* Type: bool */
            if (status != GCONST_TRUE)
            {
                return GCONST_FALSE;
            }
            return GArchive_writeLine(p_archive_inout);

        case GPARSERYAML_VALUE_TYPE_SEQUENCE:
            for (i = 0; i < p_value_in->numChildren; i++)
            {
                snprintf(childKeyPath, sizeof(childKeyPath), "%s[%d]", p_keyPath_in, i);
                status = ParserTest_writeYamlValueToCsv(p_archive_inout, &p_value_in->p_children[i], childKeyPath);
                if (status != GCONST_TRUE)
                {
                    return GCONST_FALSE;
                }
            }
            return GCONST_TRUE;

        case GPARSERYAML_VALUE_TYPE_MAPPING:
            for (i = 0; i < p_value_in->numChildren; i++)
            {
                snprintf(childKeyPath, sizeof(childKeyPath), "%s.%s", p_keyPath_in, p_value_in->p_children[i].key);
                status = ParserTest_writeYamlValueToCsv(p_archive_inout, &p_value_in->p_children[i], childKeyPath);
                if (status != GCONST_TRUE)
                {
                    return GCONST_FALSE;
                }
            }
            return GCONST_TRUE;

        default:
            return GCONST_TRUE;
    }
}