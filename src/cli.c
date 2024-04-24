#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "cli.h"
#include "version.h"
#include "log.h"
#include "utils.h"

cli* parse(int count, char* args[]) {
    cli* cmd = malloc(sizeof(cli));

    for (int i = 0; i < count; i++) {
        if ((strcmp(args[i], "-v") == 0) || (strcmp(args[i], "--version") == 0)) {
            printf("%s", MD_TO_HTML_VERSION_INFO);
        }
        else if ((strcmp(args[i], "-h") == 0) || (strcmp(args[i], "--help") == 0)) {
            printf("%s", USAGE_INFO);
        }
        else if (strcmp(args[i], "-o") == 0) {
            // pass in file name which is the next arg
            if (file_exists(args[i+1]) != 0) {
                log_err_sarg("Invalid Output File", args[i+1]);
                return 0;
            }
            cmd->output_file = args[i+1];
        }
        else if (strcmp(args[i], "--dumptokens") == 0) {
            if (file_exists(args[i+1]) != 0) {
                log_err_sarg("Invalid Token Dump Filepath", args[i+1]);
                return 0;
            }
            cmd->tokdump_file = args[i+1];
        }
        // Input file
        // The arg that does not have a hyphen and a letter (-v) or hyphen and word
        // before it is the input file.
        // Example: mdtohtml -o out.html in.md
        // out.html comes before in.md and does not have a -
        else {
            char* p = strstr(args[i], "-");
            // Skip the first arg (this file) and a bounds check.
            if (i >= 1 && i+1 < count) {
                if (!p) {
                    if (file_exists(args[i+1]) != 0) {
                        log_err_sarg("Invalid Input File", args[i+1]);
                        return 0;
                    } else {
                        cmd->input_file = args[i+1];
                    }
                } else {
                    log_err_sarg("Invalid Option", args[i+1]);
                }
            }
        }
    }
    return cmd;
}
