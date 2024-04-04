void mx_arr_rotate(int *arr, int size, int shift) {
    if (shift < 0) {
        shift += size;
    }
    for (int m = 0; m < shift; m++) {
        int last = arr[size - 1];
        int n;
        for (n = size - 1; n > 0; n--) {
            arr[n] = arr[n - 1];
        }
        arr[n] = last;
    }
}

