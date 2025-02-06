int mx_count_words(const char *str, char delimiter) {
    if (!str) return -1; // Проверка на NULL

    int count = 0;
    int in_word = 0; // Флаг внутри слова

    while (*str) {
        if (*str != delimiter) {
            if (!in_word) {
                count++; // Начало нового слова
                in_word = 1;
            }
        } else {
            in_word = 0; // Выходим из слова
        }
        str++;
    }

    return count;
}

