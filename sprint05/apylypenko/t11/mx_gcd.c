int mx_gcd(int a, int b) {

    if (a == 0 && b == 0) {
        return 0;
    }
    if (b != 0) {
        return mx_gcd(b, a % b);
    }
    else {
        return a;
    }
}

