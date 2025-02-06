#include <stdio.h>

char *mx_strstr(const char *s1, const char *s2);

int main(void) {
    printf("%s\n", mx_strstr("Hello, Neo!", "Neo")); // "Neo!"
    printf("%s\n", mx_strstr("Follow the white rabbit", "rabbit")); // "rabbit"
    printf("%s\n", mx_strstr("1234567890", "567")); // "567890"
    printf("%s\n", mx_strstr("abcdef", "xyz")); // (null)
    
    return 0;
}

