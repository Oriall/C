#include <stdio.h>

int main() {
    int N = 10, i, j;

    // Nửa trên: 3 dòng vòm đôi
    // indent(i) = 3-i, stars(i) = 2i+3, gap(i) = 8-2i
    for (i = 1; i <= 3; i++) {
        int indent = 3 - i;
        int stars  = 2*i + 3;
        int gap    = 8 - 2*i;
        for (j = 0; j < indent; j++) printf(" ");
        for (j = 0; j < stars; j++)  printf("*");
        for (j = 0; j < gap; j++)    printf(" ");
        for (j = 0; j < stars; j++)  printf("*");
        printf("\n");
    }

    // Dòng giữa
    printf("*****DHBK-HaNoi*****\n");

    // Nửa dưới: 19 sao → 1 sao
    for (i = N*2-1; i >= 1; i -= 2) {
        int indent = (N*2 - 1 - i) / 2 + 1;
        for (j = 0; j < indent; j++) printf(" ");
        for (j = 0; j < i; j++) printf("*");
        printf("\n");
    }

    return 0;
}