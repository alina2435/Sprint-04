#include "mx_functions.h"

int mx_strncmp(const char *s1, const char *s2, int n) {
    if (!s1 || !s2 || n <= 0) return 0;

    for (int i = 0; i < n; i++) {
        if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0') {
            return (unsigned char)s1[i] - (unsigned char)s2[i];
        }
    }
    return 0;
}
