#include <stdio.h>

int main() {
    int m, n, a[10][10];
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int row_start = 0, row_end = m - 1;
    int col_start = 0, col_end = n - 1;
    while (row_start <= row_end && col_start <= col_end) {
        for (int i = col_start; i <= col_end; i++) {
            printf("%d ", a[row_start][i]);
        }
        row_start++;
        for (int i = row_start; i <= row_end; i++) {
            printf("%d ", a[i][col_end]);
        }
        col_end--;
        if (row_start <= row_end) {
            for (int i = col_end; i >= col_start; i--) {
                printf("%d ", a[row_end][i]);
            }
            row_end--;
        }
        if (col_start <= col_end) {
            for (int i = row_end; i >= row_start; i--) {
                printf("%d ", a[i][col_start]);
            }
            col_start++;
        }
    }
    printf("\n");
    return 0;
}