#include <string.h>

int mx_strlen(const char *s);
void mx_printchar(char);
void mx_printstr(const char*);
int mx_strcmp(const char*, const char*);

int main(int arr, char *size[]) {
    char *temp = NULL;
    if (arr <= 1) {
        return 0;
    }
    else {
        for (int i = 1; i < arr - 1; i++) {
            for (int j = i + 1; j < arr; j++) {
                if (mx_strcmp(size[i], size[j]) > 0) {
                    temp = size[i];
                    size[i] = size[j];
                    size[j] = temp;
                }
            }
        }
        for (int i = 1; i < arr; i++) {
            mx_printstr(size[i]);
            mx_printchar('\n');
        }
    }
    return 0;
}

