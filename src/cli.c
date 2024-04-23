#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "cli.h"
#include "version.h"

cli* parse(int count, char* args[]) {
    cli* cmd = malloc(sizeof(cli));

    if ((count == 2) && (strcmp(&args[1], "-v") || strcmp(&args[1], "--version"))) {
        printf("%s", MD_TO_HTML_VERSION_INFO);
    }

    if ((count == 2) && (strcmp(&args[1], "-h") || strcmp(&args[1], "--help"))) {
        printf("%s", USAGE_INFO);
    }

    return cmd;
}