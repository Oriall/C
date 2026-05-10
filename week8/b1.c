#include <stdio.h>
#define PERIOD '.'

int main() {
    char ch;
    while ((ch = getchar()) != PERIOD) {
        putchar(ch);
    }
    printf("Good Bye.\n");
    return 0;
}