#ifndef _LEXER_H_
#define _LEXER_H_

typedef struct {
    char* input_str;
    char* curr_char;
    int curr_pos;
} lexer;

#endif // _LEXER_H_