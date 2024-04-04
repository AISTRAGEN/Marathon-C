#include <stdlib.h>
#include "nbr_to_hex.h"

char *mx_nbr_to_hex(unsigned long nbr) {
    if(nbr == 0) {
        char *result = mx_strnew(1);
        result[0] = '0';
        return result;
    }

    int length = 0;
    unsigned long temp = nbr;
    for (; temp > 0; temp /= 16) {
        length++;
    }

    char *result = malloc(length + 1);
    result[length] = '\0';

    char *hex_digits = "0123456789abcdef";
    for (; nbr > 0; nbr /= 16) {
        result[--length] = hex_digits[nbr % 16];
    }

    return result;
}

