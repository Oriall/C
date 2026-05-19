#include <stdio.h>

void reverse(float a[], int size) {
    for (int i = 0; i < size / 2; i++) {
        float tmp = a[i];
        a[i] = a[size - 1 - i];
        a[size - 1 - i] = tmp;
    }
}

int main() {
    int n;
    float a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    reverse(a, n);
    for (int i = 0; i < n; i++) {
        printf("%.2f ", a[i]);
    }
    printf("\n");
    return 0;
}