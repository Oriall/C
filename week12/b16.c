#include <stdio.h>

int main() {
    char *ptr = "ABCDE";
    printf("%c\n", *&*&*ptr);
    return 0;
}