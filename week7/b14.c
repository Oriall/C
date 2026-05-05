#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            // Nếu tổng chỉ số hàng và cột là chẵn thì in 1, ngược lại in 0
            if ((i + j) % 2 == 0) {
                printf("1");
            } else {
                printf("0");
            }
            
            if (j < i) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}