#include <stdlib.h>

int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);
void mx_strdel(char **str);
char *mx_strdup(const char *str);
char *mx_strjoin(const char *s1, const char *s2);
char *mx_strcat(char *s1, const char *s2);
char *mx_strnew(const int size);
char *mx_concat_words(char **words);

char *mx_concat_words(char **words) {
    if (words == NULL || *words == NULL){
        return NULL;
    }


    int len = 0;
    for (int i = 0; words[i] != NULL; i++){
        len += mx_strlen(words[i]) + 1;
    }

    char *result = mx_strnew(len);
    if (result == NULL){
        return NULL;
    }

    for (int i = 0; words[i] != NULL; i++) {
        mx_strcat(result, words[i]);
        if (words[i + 1] != NULL){
            mx_strcat(result, " ");
        }
    }

    mx_strdel(words);
    return result;
}

