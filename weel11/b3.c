#include <stdio.h>

int main() {
    int x = 25, y = 50, z = 75;
    int *ptr;

    ptr = &x;
    *ptr += 100;

    ptr = &y;
    *ptr += 100;

    ptr = &z;
    *ptr += 100;

    printf("x = %d, y = %d, z = %d\n", x, y, z);

    return 0;
}