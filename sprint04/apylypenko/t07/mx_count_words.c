int mx_count_words(const char* str, char delimiter) {
    int words = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] != delimiter && (i == 0 || str[i - 1] == delimiter)) {
            words++;
        }
    }
    return words;
}

