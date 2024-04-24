#include <stdio.h>
#include <string.h>
#include "log.h"

void log_err_sarg(char* msg, char* arg) {
    printf("[ERROR] %s: %s\n", msg, arg);
}