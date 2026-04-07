#include <stdio.h>

int main() {
    char z[50] = {'\0'};

    printf("Enter a string: ");
    scanf("%[^aeiou]", z);

    printf("The input was \"%s\"\n", z);

    return 0;
}
