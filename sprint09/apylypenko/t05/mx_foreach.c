#include <stdlib.h>

void mx_foreach(const int *arr, int size, void (*f)(int)) {
    if (arr == NULL || f == NULL || size < 1) {
        return;
    }

    for (int i = 0; i < size; i++){
        f(arr[i]);
    }
}

