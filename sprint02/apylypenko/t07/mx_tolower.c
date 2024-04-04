#include <stdio.h>

 int mx_tolower(int c) {
    if ('A' <= c && c <= 'Z'){
        return (c + 32);
    }
    else{
        return c;
    }
} 
