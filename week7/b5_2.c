#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int x;
    long long sum = 0;

    for (int i = 1; i <= N; i++) {
        scanf("%d", &x);
        sum += x * x;
    }

    printf("%lld", sum);

    return 0;
}