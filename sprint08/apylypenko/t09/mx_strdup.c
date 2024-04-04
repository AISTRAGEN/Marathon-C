
char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strncpy(char *dst, const char *src, int len);

char *mx_strdup(const char *str) {
    int size = mx_strlen(str) - 1;
    char *copied = mx_strnew(size);
    mx_strncpy(copied, str, size);
    return copied;
}

