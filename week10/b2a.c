#include <stdio.h>

#define MONTHS 12

int main() {
    int RainFall[MONTHS];
    int i;

    for (i = 0; i < MONTHS; i++) {
        scanf("%d", &RainFall[i]);
    }

    printf("month\trainfall (in mm)\n");
    for (i = 0; i < MONTHS; i++) {
        printf("%d\t%d\n", i + 1, RainFall[i]);
    }

    return 0;
}