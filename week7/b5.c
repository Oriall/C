#include <stdio.h>

int main() {
    int N, a, i;
    long long S = 0;

    printf("Nhap N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        printf("Nhap so thu %d: ", i);
        scanf("%d", &a);
        S += (long long)a * a;
    }

    printf("Tong binh phuong: %lld\n", S);
    printf("Trung binh cong: %.2f\n", (double)S / N);

    return 0;
}