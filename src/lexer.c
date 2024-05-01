#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "lexer.h"


void lexer_parse(lexer* lex, char* input_string) {
    lex->curr_char = ' ';
    lex->c_pos = 0;
    lex->n_pos = 0;
    lex->tok = MD_ILLEGAL;
    lex->input_str = input_string;
}

void lexer_read_char(lexer* lex) {
    if (lex->n_pos >= strlen(lex->input_str)) {
        lex->curr_char = 0;
    } else {
        lex->curr_char = lex->input_str[lex->n_pos];
    }
    lex->c_pos = lex->n_pos;
    lex->n_pos++;
}

void lexer_skip_whitespace(lexer* lex) {
    if (lex->curr_char == ' ' || lex->curr_char == '\t' || lex->curr_char == '\r' || lex->curr_char == '\n') {
        lexer_read_char(lex);
    }
}

void lexer_next_token(lexer* lex) {
    lexer_skip_whitespace(lex);

    if (lex->curr_char == ' ') {

    }
}