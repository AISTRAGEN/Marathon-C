#include "../inc/header.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        mx_printerr("usage: ./read_file [file_path]\n");
        return -1;
    }
    int fileDesc = open(argv[1], O_RDONLY);
    if (fileDesc == -1) {
        mx_printerr("error\n");
        return -1;
    }
    char element;
    while (read(fileDesc, &element, 1) != 0) {
        write(1, &element, 1);
    }
    if (close(fileDesc) == -1) {
        mx_printerr("error\n");
        return -1;
    }
    return 0;
}
