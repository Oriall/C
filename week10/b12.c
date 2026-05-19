#include <stdio.h>

int main() {
    int A[20];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);

    int tong = 0;
    for (int i = 1; i <= n - 2; i++)
        if (A[i] > A[i-1] && A[i] > A[i+1])
            tong += A[i];

    printf("%d\n", tong);
    return 0;
}