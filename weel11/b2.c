#include <stdio.h>

int main() {
    int x, y, z;
    int *px = &x;
    int *py = &y;
    int *pz = &z;

    scanf("%d %d %d", px, py, pz);

    printf("x = %d, y = %d, z = %d\n", *px, *py, *pz);
    printf("Address: x = %p, y = %p, z = %p\n", px, py, pz);

    return 0;
}