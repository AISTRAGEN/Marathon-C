
#include <stdlib.h>
#include <stddef.h>

char *mx_strnew(const int size){

if (size < 1){
return NULL;
}

char* result = malloc(size + 1);
char* copy = result;

for (int i = 0; i <= size; i++){

*copy = '\0';
copy++;
}

return result;

}

