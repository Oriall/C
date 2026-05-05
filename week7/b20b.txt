#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {

        // phần tăng: từ i -> n
        for (int j = i; j <= n; j++) {
            printf("%2d", j);
        }

        // phần còn lại
        if (i == 1) {
            for (int j = 1; j < i; j++) {
                printf("%2d", j);
            }
        }
        else if (i == 2) {
            for (int j = 1; j < i; j++) {
                printf("%2d", j);
            }
        }
        else {
            for (int j = i - 1; j >= 1; j--) {
                printf("%2d", j);
            }
        }

        printf("\n");
    }

    return 0;
}