#include <stdbool.h>

bool mx_isdigit(int c);
int mx_atoi(const char *str);
bool mx_isspace(char c);
void mx_printchar(char c);
void mx_printint(int n);

int main(int count, char *size[]) {
    if (count < 2) {
        return 0;
    }

    int sum = 0;
    for (int i = 1; i < count; i++) {
        bool skip = false;

        for (int j = 0; size[i][j]; j++) {
            if ((!mx_isdigit(size[i][j])) && size[i][j] != '+' && size[i][j] != '-') {
                skip = true;
                break;
            }
        }

        if (skip) {
            continue;
        }

        int current = mx_atoi(size[i]);
        sum += current;
    }

    mx_printint(sum);
    mx_printchar('\n');

    return 0;
}

