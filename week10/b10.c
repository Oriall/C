#include <stdio.h>

int main() {
    int matrix[10][10];
    int i, j;
    int m, n;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            matrix[i][j] = (i + 1) * (j + 1);
        }
    }

    scanf("%d %d", &m, &n);
    printf("%d\n", matrix[m - 1][n - 1]);

    return 0;
}