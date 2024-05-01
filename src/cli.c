#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "cli.h"
#include "version.h"
#include "log.h"
#include "utils.h"

const char* VALID_ARGS = "-v --version -h --help -o -d --dumptokens";

cli* cli_parse(int count, char* args[]) {
    cli* cmd = malloc(sizeof(cli));

    // Might be inefficient but does the job;
    for (int i = 0; i < count; i++) {
        if ((strcmp(args[i], "-v") == 0) || (strcmp(args[i], "--version") == 0)) {
            printf("%s", MD_TO_HTML_VERSION_INFO);
        }
        else if ((strcmp(args[i], "-h") == 0) || (strcmp(args[i], "--help") == 0)) {
            printf("%s", USAGE_INFO);
        }
        else if (strcmp(args[i], "-o") == 0) {
            // [not_set] used to check if its set later on
            cmd->output_file = "[NOT_SET]";

            // pass in file name which is the next arg
            if (file_exists(args[i+1]) != 0) {
                log_err_sarg("Invalid Output File", args[i+1]);
                return 0;
            }
            cmd->output_file = args[i+1];
        }
        else if ((strcmp(args[i], "-d") == 0) || (strcmp(args[i], "--dumptokens") == 0)) {
            // [not_set] used to check if its set later on
            cmd->tokdump_file = "[NOT_SET]";
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
            // Start checking from the first arg instead of filename
            char* p = strstr(args[i+1], "-");

            // Start from 0 because work with the next item: so from the first arg
            if (i >= 0 && i+1 < count) {
                // If the args don't have a hyphen treat them as files
                if (!p) {
                    // [NOT_SET] used to check if its set later on
                    cmd->input_file = "[NOT_SET]";
                    if (file_exists(args[i+1]) != 0) {
                        log_err_sarg("Invalid Input File", args[i+1]);

                        return 0;
                    } else {
                        cmd->input_file = args[i+1];
                    }
                } else {
                    // Somehow the checks above don't stop this from printing when its a valid option so just a safe guard.
                    if (strstr(VALID_ARGS, args[i+1])) {
                        continue;
                    }
                    log_err_sarg("Invalid Option", args[i+1]);
                }
            }
        }
    }
    return cmd;
}
