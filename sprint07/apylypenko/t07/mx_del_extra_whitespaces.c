#include <stdlib.h>
#include <stdbool.h>

int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strcpy(char *dst, const char *src);
char *mx_strtrim(const char *str);
bool mx_is_space(char c);
void mx_strdel(char **str);

char *mx_del_extra_whitespaces(const char *str) {
    char *memory = NULL;
    char *temp = NULL;
    int len = 0;
    int j = 0;

    if (!str) {
        return NULL;
    }
    else {
        len = mx_strlen(str);
        memory = mx_strnew(len);
        for (int i = 0; str[i]; ++i) {
            if (!(mx_is_space(str[i]))) {
                memory[j] = str[i];
                j++;
            }
            if (!(mx_is_space(str[i])) && mx_is_space(str[i + 1])) {
                memory[j] = ' ';
                j++;
            }
        }
        temp = mx_strtrim(memory);
        mx_strdel(&memory);
        return temp;
    }
}

