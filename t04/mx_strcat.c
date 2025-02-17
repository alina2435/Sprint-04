int mx_strlen(char *s);

char *mx_strcat(char *s1, const char *s2)
{
    int len1 = mx_strlen(s1);
    int i = 0;
    while (s2[i] != '\0')
    {
        s1[len1 + i] = s2[i];
        i++;
    }
    s1[len1 + i] = '\0';

    return s1;
}
