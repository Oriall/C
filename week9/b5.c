#include <stdio.h>

int a = 3, b = 5;

void goodSwap() {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    printf("Truoc: %d %d\n", a, b);
    goodSwap();
    printf("Sau: %d %d\n", a, b);
    return 0;
}