int mx_count_words(const char *str, char delimiter)
{
    if (!str)
        return -1;
    int count = 0;
    int in_word = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != delimiter && !in_word)
        {
            in_word = 1;
            count++;
        }
        else if (str[i] == delimiter)
        {
            in_word = 0;
        }
    }
    return count;
}
