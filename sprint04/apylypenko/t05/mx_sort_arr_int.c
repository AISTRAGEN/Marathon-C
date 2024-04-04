void mx_sort_arr_int(int *arr, int size) {
    for (int m = 1; m < size; m++) {
        int curr = arr[m];
        int n = m - 1;
        while (n >= 0 && arr[n] > curr) {
            arr[n + 1] = arr[n];
            n--;
        }
        arr[n + 1] = curr;
    }
}

