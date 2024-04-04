#include <stdbool.h>

bool mx_is_prime(int num) {
    int j = num / 2;
    for (int i = 2; i <= j; i++) {
        if(num%i==0) {
            return false;
        }
    }
    return true;
}