#include "get_address.h"
#include <stdlib.h>

char *mx_get_address(void *p) {
    long long address = (long long)p;
    char *hex_address = mx_nbr_to_hex(address);
    char *result = mx_strnew(mx_strlen(hex_address) + 2);
    mx_strcpy(result, "0x");
    mx_strcpy(result + 2, hex_address);
    free(hex_address);
    return result;
}

