#ifndef _CLI_H_
#define _CLI_H_

#define USAGE_INFO \
"Usage: mdtohtml [OPTIONS] INPUT \n\
\n\
Options: \n\
\t-h, --help\t\tDisplay this message \n\
\n\
"

typedef struct {
    // Values: v -> version; t -> transpile; h -> help
    char op;
    char* input;
    char* output;
} cli;

cli* parse(int count, char* args[]);

#endif // _CLI_H_