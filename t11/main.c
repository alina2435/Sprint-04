#include <stdio.h>
#include "mx_count_substr.c"  // Подключаем реализацию функции mx_count_substr

int main(void) {
    const char *str = "yo, yo, yo Neo";
    const char *sub = "yo";
    
    int result = mx_count_substr(str, sub);
    printf("Count of substrings: %d\n", result);  // Ожидаемый результат: 3
    
    return 0;
}

