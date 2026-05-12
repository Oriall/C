#include <stdio.h>

long sumcube(int n) {
    long sum = 0;
    for (int i = 1; i <= n; i++) sum += (long)i * i * i;
    return sum;
}

void printsubmultiples(int n) {
    printf("Cac uoc cua %d la: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) printf("%d ", i);
    }
    printf("\n");
}

void printsquares(int n) {
    printf("%d so binh phuong dau tien la: ", n);
    for (int i = 1; i <= n; i++) printf("%d ", i * i);
    printf("\n");
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Tong lap phuong: %ld\n", sumcube(n));
    printsubmultiples(n);
    printsquares(n);
    return 0;
}