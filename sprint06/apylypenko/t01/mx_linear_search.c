#include <stdio.h>
int mx_strcmp (const char *s1, const char *s2);

int mx_linear_search(char **arr, const char *s) {
    if (s == NULL) {
        return -1;
    }
    for (int counter = 0; arr[counter] != NULL; counter++) {
        if (mx_strcmp(arr[counter], s) == 0) {
            return counter;
        }
    }
    return -1;

}

