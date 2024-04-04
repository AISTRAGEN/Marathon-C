#include <stdlib.h>

int mx_strlen(const char *s);
char *mx_strcat(char *s1, const char *s2);
char *mx_strnew(const int size);
char *mx_strcpy(char *dst, const char *src);
char *mx_strdup(const char *str);

char *mx_strjoin(const char *s1, const char *s2) {
    if (s1 == NULL && s2 == NULL){
        return NULL;
    }
    else if (s1 == NULL){
        return mx_strdup(s2);
    }
    else if (s2 == NULL){
        return mx_strdup(s1);
    }
    else {
        int ns1 = mx_strlen(s1), ns2 = mx_strlen(s2);
        char *new_str = mx_strnew(ns1 + ns2 + 1);

        if (new_str == NULL){
            return NULL;
        }

        mx_strcpy(new_str, s1); // Копіюємо s1 в новий рядок
        mx_strcat(new_str, s2); // Об'єднуємо s2 з новим рядком
        return new_str;
    }
}

