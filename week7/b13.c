#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    long long s = 0;
    long long term = 0;

    for (int i = 1; i <= n; i++) {
        term = term * 10 + 9;
        s += term;
    }

    printf("%lld\n", s);

    return 0;
}