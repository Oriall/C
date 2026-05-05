#include <stdio.h>

int main() {
    int i;
    int x = 0;
    for (i = 1; i <= 100; i++) {
        x += i;
        if ((x % i) == 0) { i--; }
        printf("\nx = %d ", x);
        printf("i = %d", i);
    }
    printf("\n Ket qua sau khi thuc hien vong lap");
    printf("\n x = %d", x);
    printf("\n i = %d", i);
    return 0;
}