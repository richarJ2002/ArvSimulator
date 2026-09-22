/*!
 * @file            ParserTest_runIniTest.c
 * @brief           Run GParserIni test and output results to CSV.
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
#include "GParserIni/GParserIni.h"
#include "GArchive/GArchive.h"
#include "GZero/GZero.h"

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
int ParserTest_runIniTest(const char *p_iniFilePath_in, const char *p_outputDir_in)
{
    GParserIni_State state;
    dictionary *p_dic = NULL;
    int status;

    (void)p_outputDir_in; /* Unused for now, archive handles directory */

    GLog("Loading INI file: %s", p_iniFilePath_in);

    /* Initialize state */
    GZero(&state, GParserIni_State);

    /* Load parameters */
    p_dic = GParserIni_loadParams(&state, p_iniFilePath_in);
    if (p_dic == NULL)
    {
        GError("Failed to load INI file: %s", p_iniFilePath_in);
        return GCONST_FALSE;
    }

    GLog("INI file loaded successfully. Sections: %d", state.maxNumberSection);

    /* Write results to CSV */
    status = ParserTest_writeIniResultsToCsv(p_dic, state.maxNumberSection, "IniTestResults.csv");
    if (status != GCONST_TRUE)
    {
        GError("Failed to write INI test results to CSV");
        GParserIni_closeParams(&state, p_dic);
        return GCONST_FALSE;
    }

    /* Close and free */
    status = GParserIni_closeParams(&state, p_dic);
    if (status != GCONST_TRUE)
    {
        GError("Failed to close INI params");
        return GCONST_FALSE;
    }

    return GCONST_TRUE;
}

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
                                   const char *p_outputFilePath_in)
{
    GArchive archive;
    int status;
    int sectionIdx;
    int keyIdx;

    /* Initialize archive */
    status = GArchive_init(&archive, "Archive/ParserTest", "IniTestResults.csv");
    if (status != GCONST_TRUE)
    {
        return GCONST_FALSE;
    }

    /* Add columns */
    status = GArchive_addCol(&archive, "Section", 1, 1);
    if (status != GCONST_TRUE)
    {
        return GCONST_FALSE;
    }
    status = GArchive_addCol(&archive, "Key", 1, 1);
    if (status != GCONST_TRUE)
    {
        return GCONST_FALSE;
    }
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

    /* Write each section's key-value pairs */
    for (sectionIdx = 0; sectionIdx < numSections_in; sectionIdx++)
    {
        const dictionary *p_section = &p_dic_in[sectionIdx];

        for (keyIdx = 0; keyIdx < p_section->nKeys; keyIdx++)
        {
            status = GArchive_addVal(&archive, (double)sectionIdx);
            if (status != GCONST_TRUE)
            {
                return GCONST_FALSE;
            }

            status = GArchive_addVal(&archive, (double)keyIdx);
            if (status != GCONST_TRUE)
            {
                return GCONST_FALSE;
            }

            status = GArchive_addVal(&archive, atof(p_section->value[keyIdx]));
            if (status != GCONST_TRUE)
            {
                return GCONST_FALSE;
            }

            status = GArchive_addVal(&archive, 0.0); /* Type placeholder */
            if (status != GCONST_TRUE)
            {
                return GCONST_FALSE;
            }

            status = GArchive_writeLine(&archive);
            if (status != GCONST_TRUE)
            {
                return GCONST_FALSE;
            }
        }
    }

    GArchive_close(&archive);
    return GCONST_TRUE;
}