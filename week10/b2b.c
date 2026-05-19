#include <stdio.h>

#define MONTHS 12

int main() {
    int RainFall[MONTHS] = {40, 45, 95, 130, 220, 210, 185, 135, 80, 40, 45, 30};
    int i;

    printf("month\trainfall (in mm)\n");
    for (i = 0; i < MONTHS; i++) {
        printf("%d\t%d\n", i + 1, RainFall[i]);
    }

    return 0;
}