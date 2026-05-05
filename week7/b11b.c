#include <stdio.h>
int main() {
    int N, i, j;
    printf("Nhap N: ");
    scanf("%d", &N);
    for (i = 1; i <= N; i++) {
        for (j = 0; j < N - i; j++) printf(" ");
        for (j = 1; j <= 2 * i - 1; j++) printf("*");
        printf("\n");
    }
    for (i = N - 1; i >= 1; i--) {
        for (j = 0; j < N - i; j++) printf(" ");
        for (j = 1; j <= 2 * i - 1; j++) printf("*");
        printf("\n");
    }
    return 0;
}