int mx_count_words(const char* str, char delimiter) {
    int wordCount = 0;
    int onWord = 0;

    for (; *str != '\0'; str++) {
        if (*str != delimiter) {
            if (!onWord) {
                onWord = 1;
                wordCount++;
            }
        } else {
            onWord = 0;
        }
    }

    return wordCount;
}

