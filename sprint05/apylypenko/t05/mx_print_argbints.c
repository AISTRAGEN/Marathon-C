void mx_printchar(char c);
int mx_atoi(const char *str);
void mx_printint(int num);

int main(int arg, char *size[]) {
    if (arg <= 1) {
        return 0;
    }

    for (int i = 1; i < arg; i++) {
        int n = mx_atoi(size[i]);
        int binaryNumber[32];

        for (int j = 31; j >= 0; j--) {
            binaryNumber[j] = n & 1;
            n >>= 1;
        }
        for (int j = 0; j < 32; j++) {
            mx_printint(binaryNumber[j]);
        }
        mx_printchar('\n');
    }

    return 0;
}

