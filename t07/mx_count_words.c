int mx_count_words(const char *str, char delimiter) {
    if (!str) return -1; 

    int count = 0;
    int in_word = 0; 

    while (*str) {
        if (*str != delimiter) {
            if (!in_word) {
                count++; 
                in_word = 1;
            }
        } else {
            in_word = 0; 
        }
        str++;
    }

    return count;
}

