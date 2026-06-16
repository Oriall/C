#include <stdio.h>

int main () {
    char str1[ ] = "trytoprogram";
    char str2[ 50 ];
    char *ptr1 = "hello world";
    char *ptr2;

    ptr2 = ptr1;
    ptr1 = "program";

    printf("Xau ptr 1 : %s \t Xau ptr2: %s \n", ptr1, ptr2);
    return 0;
}