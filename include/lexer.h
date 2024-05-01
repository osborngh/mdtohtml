#include "token.h"

#ifndef _LEXER_H_
#define _LEXER_H_

typedef struct {
    char* input_str;
    char curr_char;
    int c_pos;
    int n_pos;
    token tok;
} lexer;

void lexer_parse(lexer* lex, char* input_string);
void lexer_next_token(lexer* lex);
void lexer_read_char(lexer* lex);
void lexer_skip_whitespace(lexer* lex);


#endif // _LEXER_H_