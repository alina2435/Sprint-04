#include "mx_print.h"
#include <unistd.h>

void mx_printchar(char c) {
    write(1, &c, 1);
}

