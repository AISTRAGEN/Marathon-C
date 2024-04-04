#include "hex_to_nbr.h"

unsigned long mx_hex_to_nbr(const char *hex) {
    if (!hex) return 0;

    unsigned long result = 0;
    for (; *hex != '\0'; hex++) {
        result *= 16;
        if (*hex >= '0' && *hex <= '9'){
            result += *hex - '0';
        }
        else if (*hex >= 'A' && *hex <= 'F'){
            result += *hex - 'A' + 10;
        }
        else if (*hex >= 'a' && *hex <= 'f') {
            result += *hex - 'a' + 10;
        }
        else {
            return 0;
        }

    }
    return result;
}

