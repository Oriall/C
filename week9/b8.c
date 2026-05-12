#include <stdio.h>
#include <math.h>

int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    printf("Nhap N: ");
    scanf("%d", &n);
    printf("Cac so nguyen to tu 2 den %d la: ", n);
    for (int i = 2; i <= n; i++) {
        if (is_prime(i)) printf("%d ", i);
    }
    return 0;
}