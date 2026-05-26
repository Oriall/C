#include <stdio.h>

int main() {
    char ch;
    char *pCh;
    pCh = &ch;
    for (ch = 'A'; ch <= 'Z'; ch++) {
        printf("%c ", *pCh);
    }
    return 0;
}