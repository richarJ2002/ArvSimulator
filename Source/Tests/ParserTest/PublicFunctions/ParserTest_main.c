/*
 *    @File:         ParserTest_main.c
 *
 *    @Brief:        Main entry point for parser test executable.
 *                   Tests GParserIni, GParserJson, and GParserYaml libraries.
 *
 *    @Date:         22/09/2026
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Module Includes */
#include "ParserTest_PublicFunctions.h"

/* Generic Libraries */
#include "GConst/GConst.h"
#include "GLog/GLog.h"

int main(int argc, char *argv[])
{
    int status = 0;
    const char *iniFile = "Parameters/ParserTestParameters.ini";
    const char *jsonFile = "Parameters/ParserTestParameters.json";
    const char *yamlFile = "Parameters/ParserTestParameters.yaml";
    const char *outputDir = "Archive/ParserTest";

    GLog("Starting Parser Test Suite");
    GLog("==========================");

    /* Test GParserIni */
    GLog("Testing GParserIni...");
    status = ParserTest_runIniTest(iniFile, outputDir);
    if (status != GCONST_TRUE)
    {
        GError("GParserIni test failed");
        return 1;
    }
    GLog("GParserIni test passed");

    /* Test GParserJson */
    GLog("Testing GParserJson...");
    status = ParserTest_runJsonTest(jsonFile, outputDir);
    if (status != GCONST_TRUE)
    {
        GError("GParserJson test failed");
        return 1;
    }
    GLog("GParserJson test passed");

    /* Test GParserYaml */
    GLog("Testing GParserYaml...");
    status = ParserTest_runYamlTest(yamlFile, outputDir);
    if (status != GCONST_TRUE)
    {
        GError("GParserYaml test failed");
        return 1;
    }
    GLog("GParserYaml test passed");

    GLog("==========================");
    GLog("All parser tests passed!");

    return 0;
}