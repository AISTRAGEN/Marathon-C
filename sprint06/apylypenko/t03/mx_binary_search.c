int mx_strcmp(const char *s1, const char *s2);

int mx_binary_search(char **arr, int size, const char *s, int *count) {
    int rightElement = 0;
    int leftElement = size - 1;

    for (; leftElement >= rightElement; (*count)++) {
        int middle = rightElement + (leftElement - rightElement) / 2;

        if (mx_strcmp(arr[middle], s) == 0) {
            return middle;
        }
        else if (mx_strcmp(arr[middle], s) > 0) {
            leftElement = middle - 1;
        }
        else {
            rightElement = middle + 1;
        }
    }

    *count = 0;
    return -1;
}

