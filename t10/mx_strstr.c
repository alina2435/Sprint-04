#include "mx_functions.h"

char *mx_strstr(const char *s1, const char *s2) {
    if (!s1 || !s2) return 0;

    int len2 = mx_strlen(s2);
    if (len2 == 0) return (char *)s1;

    while (*s1) {
        if (mx_strncmp(s1, s2, len2) == 0) {
            return (char *)s1;
        }
        s1++;
    }

    return 0;
}

