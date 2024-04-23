#ifndef _CLI_H_
#define _CLI_H_

#define USAGE_INFO \
""

typedef struct {
    // Values: v -> version; t -> transpile; h -> help
    char op;
    char* input;
    char* output;
} cli;

cli* parse(int count, char* args[]);

#endif // _CLI_H_