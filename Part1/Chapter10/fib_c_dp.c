#define MAXN 92 /* largest n for which F(n) fits in a long */
#define UNKNOWN -1 /* contents denote an empty cell */

long f[MAXN+1]; /* array for caching fib values */

long fib_c(int n) {
    if (f[n] == UNKNOWN) {
        f[n] = fib_c(n-1) + fib_c(n-2);
    }

    return f[n];
}

long fib_c_driver(int n) {
    int i; /* counter */

    f[0] = 0;
    f[1] = 1;

    for (i = 2; i <= n; ++i) {
        f[i] = UNKNOWN;
    }

    return (fib_c(n));
}

long fib_dp(int n) {
    int i;
    long f[MAXN+1];

    f[0] = 0;
    f[1] = 1;

    for (i = 2; i <= n ; ++i) {
        f[i] = f[i-1] + f[i-2];
    }

    return (f[n]);
}
