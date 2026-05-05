#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);

    // Chuong trinh 20a
    printf("20a:\n");
    for (i = 1; i <= n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", i + j);
        }
        printf("\n");
    }

    // Chuong trinh 20b
    printf("\n20b:\n");
    for (i = 1; i <= n; i++) {
        // In phan tang dan tu i den n
        for (j = i; j <= n; j++) {
            printf("%d ", j);
        }
        // In phan giam dan nguoc lai
        for (j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}