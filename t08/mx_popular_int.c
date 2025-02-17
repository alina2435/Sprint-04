int mx_popular_int(const int *arr, int size)
{
    int n = arr[0];
    int max_count = 0;
    for (int i = 0; i < size; i++)
    {
        int count = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > max_count)
        {
            max_count = count;
            n = arr[i];
        }
    }
    return n;
}
