#ifndef _PARSER_H_
#define _PARSER_H_

typedef struct {
    // Current character
    char ch;
    // Next character
    char n_ch;
} parser;

char* parser_parse(char* input_string);

#endif // _PARSER_H_