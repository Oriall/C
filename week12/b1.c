#include <stdio.h>

int main() {
    int x[4];
    int i;

    for(i = 0; i < 4; ++i) {
        printf("&x[%d] = %p\n", i, (void*)&x[i]);
    }

    printf("Address of array x: %p\n", (void*)x);
    return 0;
}