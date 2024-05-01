#include <stdio.h>
#include <string.h>
#include "log.h"

void log_err_sarg(char* msg, char* arg) {
    if (arg == NULL) {
        printf("[ERROR] %s: [NULL_FILE]\n", msg);
        return;
    }
    printf("[ERROR] %s: %s\n", msg, arg);
}

void log_err_arg(char* msg) {
    printf("[ERROR] %s\n", msg);
}