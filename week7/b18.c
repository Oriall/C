#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long a = 1, b = 2, c;

    if (n == 1) {
        printf("1");
        return 0;
    }
    if (n == 2) {
        printf("2");
        return 0;
    }

    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    printf("%lld", b);
    return 0;
}