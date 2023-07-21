 #include <stdio.h>

int gcd(int m, int n) {
    if (n == 0) {
        return m;
    }
    return gcd(n, m % n);
}

int lcm(int m, int n) {
    static int common = 1;
    if (common % m == 0 && common % n == 0) {
        return common;
    }
    common++;
    return lcm(m, n);
}

int main() {
    int m, n, g, l;

    printf("Enter two numbers: ");
    scanf("%d%d", &m, &n);

    g = gcd(m, n);
    l = lcm(m, n);

    printf("GCD of %d and %d is %d\n", m, n, g);
    printf("LCM of %d and %d is %d\n", m, n, l);

    return 0;
}

