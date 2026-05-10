#include <stdio.h>

int main() {
    int counter = 1;
    do {
        printf("%d ", counter);
    } while (++counter <= 10);
    printf("\ncounter: %d\n", counter);

    counter = 1;
    do {
        printf("%d ", counter);
    } while (counter++ <= 10);
    printf("\ncounter: %d\n", counter);
    return 0;
}