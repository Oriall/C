#include <stdio.h>

int main() {
    int i, x[3], sum = 0;

    printf("Enter 3 numbers: ");
    for(i = 0; i < 3; ++i) {
        scanf("%d", x + i);
        sum += *(x + i);
    }

    printf("Sum = %d\n", sum);
    return 0;
}