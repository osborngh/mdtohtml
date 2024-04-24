// Markdown To HTML Converter
// Copyright 2024 Vinci

/*
Usage: mdtohtml input.md -o output.html
*/

#include <stdlib.h>
#include <stdio.h>

#include "cli.h"
#include "token.h"

int main(int argc, char* argv[]) {
	cli* cmd = parse(argc, argv);

	free(cmd);
	return 0;
}
