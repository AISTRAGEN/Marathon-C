#include "file_to_str.h"

char *mx_file_to_str(const char *filename) {
    if (!filename) {
        return NULL;
    }
    int fd = open(filename, O_RDONLY);
    if (fd < 0) {
        return NULL;
    }
    int length = 0;
    char element;
    while (read(fd, &element, 1) != 0) {
        length++;
    }
    if (close(fd) < 0) {
        return NULL;
    }
    int fileDesc = open(filename, O_RDONLY);
    if (fileDesc < 0) {
        return NULL;
    }
    char *str = mx_strnew(length);
    for (int i = 0; read(fileDesc, &element, 1); i++) {
        str[i] = element;
    }
    if (close(fileDesc) < 0) {
        return NULL;
    }
    return str;
}

