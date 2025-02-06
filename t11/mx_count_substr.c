#include "mx.h"

int mx_count_substr(const char *str, const char *sub) {
    if (sub == NULL || *sub == '\0') return 0;
    
    int count = 0;
    while ((str = mx_strstr(str, sub)) != NULL) {
        count++;
        str++;  // Сдвигаем указатель, чтобы не считать одно и то же вхождение
    }
    return count;
}

