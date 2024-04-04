
void mx_printchar(char c)

        void mx_str_separate(const char *str, char delim) {
    for (int i = 0; str[i]; i++){
        if (str[i] != delim){
            mx_printchar(str[i]);
        }
        else{
            mx_printchar('\n');
            for (int j = i + 1; str[j] == delim; j++){
                i++;
            }
        }
    }
    mx_printchar('\n');
}

