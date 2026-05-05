#include <stdio.h>

int main() {
    char c;
    int count;
    for (count = 0; (c = getchar()) != '.'; count++)
        { }
    printf("Number of characters is %d\n", count);
    return 0;
}