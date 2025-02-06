#include "mx.h"

const char *mx_strchr(const char *s, int c) {
    while (*s != '\0') {
        if (*s == (char)c) return s;
        s++;
    }
    return NULL;
}

