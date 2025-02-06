int mx_popular_int(const int *arr, int size) {
    if (!arr || size <= 0) return 0; // Проверка на пустой массив

    int max_count = 0;
    int popular = arr[0];

    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > max_count) {
            max_count = count;
            popular = arr[i];
        }
    }

    return popular;
}

