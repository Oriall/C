#include <stdio.h>

#define ARRAY_SIZE 10

int main() {
    int s[ARRAY_SIZE];
    int i;

    for (i = 0; i < ARRAY_SIZE; i++) {
        s[i] = 2 + 2 * i;
    }

    printf("Element\tValue\n");
    for (i = 0; i < ARRAY_SIZE; i++) {
        printf("%d\t%d\n", i, s[i]);
    }

    return 0;
}