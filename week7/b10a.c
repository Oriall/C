#include <stdio.h>

int main() {
    int N, i, j, num = 1;

    printf("Nhap N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        for (j = 1; j <= i; j++) {
            if (j > 1) printf(" ");
            printf("%d", num++);
        }
        printf("\n");
    }

    return 0;
}