int mx_strlen(const char *s);

int mx_insertion_sort(char **arr, int size) {
    int count = 0;
    for (int m = 0; m < size; m++) {
        char *element = arr[m];
        int n;
        for (n = m - 1; (n >= 0
                         && mx_strlen(arr[n]) > mx_strlen(element));
             n--) {
            arr[n + 1] = arr[n];
            count++;
        }
        arr[n + 1] = element;
    }
    return count;
}

