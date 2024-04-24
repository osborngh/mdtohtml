#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "utils.h"

// Reads file and returns a c-string or "NULL".
char* read_file(char* filename) {
    char* result = NULL;
    FILE* file_ptr = NULL;

    file_ptr = fopen(filename, "r");
    if (file_ptr == NULL) {
        return "NULL";
    }

    char curr_ch = 'A';
    while (!feof(file_ptr)) {
        curr_ch = fgetc(file_ptr);
        strncat(result, &curr_ch, 1);
    }
    fclose(file_ptr);
    return result;
}

// Returns 0 if the file exists.
int file_exists(char* filename) {
    FILE* file_ptr = NULL;

    file_ptr = fopen(filename, "r");
    if (file_ptr == NULL) {
        return 1;
    }
    fclose(file_ptr);
    return 0;
}