#include <stdio.h>

int main() {
    int product = 2;
    while (product <= 1000) {
        product = 2 * product;
    }
    printf("product: %d\n", product);
    return 0;
}