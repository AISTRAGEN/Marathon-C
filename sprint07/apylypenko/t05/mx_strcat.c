int mx_strlen(const char *s);
char *mx_strcat(char *s1, const char *s2) {
    char *ptr = s1 + mx_strlen(s1);
    for (int i = 0; s2[i] != '\0'; i++) {

        *ptr++ = s2[i];
    }
    *ptr = '\0';

    return s1;
}

