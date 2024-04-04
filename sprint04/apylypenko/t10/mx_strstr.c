#include <stdlib.h>

char *mx_strchr(const char *s, int c);
int mx_strncmp(const char *s1, const char *s2, int n);
int mx_strlen(const char *s);

char *mx_strstr(const char *s1, const char *s2) {
    char *temps1 = (char *)s1;
    char *temps2 = (char *)s2;

    if ((!s1) || (!s2)) {
        return NULL;
    }
    if (!mx_strlen(s2)) {
        return temps1;
    }
    for (; *temps1; temps1++) {
        if (!mx_strncmp(temps1, temps2, mx_strlen(temps2))){
            return temps1;
        }

    }
    return NULL;
}

