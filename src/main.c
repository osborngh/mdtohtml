// Markdown To HTML Converter
// Copyright 2024 Vinci

/*
Usage: mdtohtml input.md -o output.html
*/

#include <stdlib.h>
#include <stdio.h>

#include "token.h"
#include "cli.h"
#include "lexer.h"
#include "parser.h"

#include "utils.h"

int main(int argc, char* argv[]) {
	cli* cmd = malloc(sizeof(cli));
	cli_parse(cmd, argc, argv);

	char* in_str = read_file(cmd->input_file);
	
	lexer* lex = malloc(sizeof(lexer));
	lexer_parse(lex, in_str);

	free(cmd);
	free(lex);
	return 0;
}
