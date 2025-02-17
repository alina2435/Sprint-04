#include <stdio.h>

int mx_strlen(const char *s);
int mx_strncmp(const char *s1, const char *s2, int n);
char *mx_strstr(const char *s1, const char *s2);

int mx_count_substr(const char *str, const char *sub)
{
    const char *ptr = str;
    int count = 0;
    int sub_len = mx_strlen(sub);
    if (sub_len == 0)
        return 0;
    while ((ptr = mx_strstr(ptr, sub)) != NULL)
    {
        count++;
        ptr += sub_len;
    }
    return count;
}
