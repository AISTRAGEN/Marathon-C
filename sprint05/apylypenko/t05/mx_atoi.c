int mx_atoi(const char *str) {
    int result = 0;
    int minus = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '-') {
            minus = 1;
            continue;
        }

        if (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + str[i] - '0';
        } else {
            break;
        }

    }

    if (minus) {
        result = -result;
    }

    return result;
}

