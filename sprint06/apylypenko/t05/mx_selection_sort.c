int mx_strlen(const char *s);
int mx_strcmp(const char *s1, const char *s2);

int mx_selection_sort(char **arr, int size) {
    int count = 0;
    for (int m = 0; m < size - 1; m++) {
        int minIndex = m;
        for (int n = m + 1; n < size; n++) {
            if (mx_strlen(arr[minIndex]) > mx_strlen(arr[n]) ||
                (mx_strlen(arr[minIndex]) == mx_strlen(arr[n]) && mx_strcmp(arr[minIndex], arr[n]) > 0)) {
                minIndex = n;
            }
        }
        if (minIndex != m) {
            char *swap = arr[m];
            arr[m] = arr[minIndex];
            arr[minIndex] = swap;
            count++;
        }
    }
    return count;
}

