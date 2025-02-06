// mx.h

#ifndef MX_H
#define MX_H

int mx_count_substr(const char *str, const char *sub);
const char *mx_strstr(const char *str, const char *sub);
int mx_strlen(const char *s);
int mx_strncmp(const char *s1, const char *s2, int n);
const char *mx_strchr(const char *s, int c);

#endif

