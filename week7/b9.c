#include <stdio.h>

int main() {
    int N, i, j, sum;

    printf("Nhap N: ");
    scanf("%d", &N);

    printf("Cac so hoan hao tu 1 den %d:\n", N);
    for (i = 1; i <= N; i++) {
        sum = 0;
        for (j = 1; j <= i / 2; j++) {
            if (i % j == 0)
                sum += j;
        }
        if (sum == i)
            printf("%d\n", i);
    }

    return 0;
}