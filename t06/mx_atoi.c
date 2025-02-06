int mx_isspace(char c);
int mx_isdigit(char c);

int mx_atoi(const char *src) {
    if (!src) return 0;

    int sign = 1;
    int result = 0;
    
    // Пропускаем пробельные символы
    while (mx_isspace(*src))
        src++;
    
    // Обрабатываем знак числа
    if (*src == '-') {
        sign = -1;
        src++;
    } else if (*src == '+') {
        src++;
    }
    
    // Преобразуем символы в число
    while (mx_isdigit(*src)) {
        int digit = *src - '0';
        
        // Проверка на переполнение
        if (result > (2147483647 - digit) / 10) {
            return (sign == 1) ? 2147483647 : -2147483648;
        }
        
        result = result * 10 + digit;
        src++;
    }

    return result * sign;
}

