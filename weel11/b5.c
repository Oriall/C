#include <stdio.h>

void swap3(int *a, int *b, int *c) {
    int temp = *c;
    *c = *b;
    *b = *a;
    *a = temp;
}

int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    printf("%d %d %d\n", x, y, z);
    swap3(&x, &y, &z);
    printf("%d %d %d\n", x, y, z);

    return 0;
}