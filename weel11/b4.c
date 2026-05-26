#include <stdio.h>

void swap(int *px, int *py) {
    int temp = *px;
    *px = *py;
    *py = temp;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    swap(&a, &b);

    printf("%d %d\n", a, b);

    return 0;
}