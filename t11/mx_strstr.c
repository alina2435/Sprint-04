#include "mx.h"

const char *mx_strstr(const char *str, const char *sub) {
    if (*sub == '\0') return str;
    
    for (; *str != '\0'; str++) {
        const char *s = str;
        const char *p = sub;
        while (*s && *p && *s == *p) {
            s++;
            p++;
        }
        if (*p == '\0') return str;
    }
    return NULL;
}

