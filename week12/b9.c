#include <stdio.h>

int main() {
    int* ptrarray[4];
    int w = 100, x = 200, y = 300, z = 400;

    ptrarray[0] = &w;
    ptrarray[1] = &x;
    ptrarray[2] = &y;
    ptrarray[3] = &z;

    for (int i = 0; i < 4; i++) {
        printf("The value %d has the adddress %p\n", *ptrarray[i], (void*)ptrarray[i]);
    }
    return 0;
}