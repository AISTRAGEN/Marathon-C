int mx_sum_digits(int num) {
    int c = 0;

    if (num < 0) {
        num *= -1;
    }
    for (; num % 10 != 0; num /= 10) {
        c += num % 10;
    }
    return c;
}
