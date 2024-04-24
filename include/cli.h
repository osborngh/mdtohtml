#ifndef _CLI_H_
#define _CLI_H_

#define USAGE_INFO \
"Usage: mdtohtml [OPTIONS] INPUT \n\
\n\
Options: \n\
  -v, --version\t\tDisplay current version. \n\
  -h, --help\t\tDisplay this information. \n\
  -o <file>\t\tOutput the resolved HTML into <file>. \n\
  --dumptokens <file>\tOutput the resolved tokens into <file>. \n\
\n\
"

typedef struct {
    char* output_file;
    char* input_file;
    char* tokdump_file;
} cli;

cli* parse(int count, char* args[]);

#endif // _CLI_H_