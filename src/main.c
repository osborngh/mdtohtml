// Markdown To HTML Converter
// Copyright 2024 Vinci

/*
Usage: mdtohtml input.md -o output.html
*/

#include <stdlib.h>
#include <stdio.h>

#include "token.h"
#include "cli.h"
#include "parser.h"
#include "utils.h"

int main(int argc, char* argv[]) {
	cli* cmd = cli_parse(argc, argv);

	char* input_string = read_file(cmd->input_file);
	char* parser = parser_parse(input_string);

	free(cmd);
	return 0;
}
