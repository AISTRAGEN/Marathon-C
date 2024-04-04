int mx_popular_int(const int *arr, int size){
    int maxRepeats = 0;
    int mostRepeted = arr[0];
    for (int i = 0; i < size; ++i) {
        int count = 1;
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] == arr[j]){
                ++count;
            }
        }
        if (count > maxRepeats) {
            maxRepeats = count;
            mostRepeted = arr[i];
        }
    }
    return mostRepeted;
}

