#include <stdio.h>

int main() {
    char A[4] = {'a', 'b', 'c', 'd'};
    char *pTmp;
    void *pC = A;
    pTmp = (char*)pC;
    
    for (int i = 0; i < 4; i++) {
        printf("%c ", *(pTmp++));
    }
    printf("\n");
    return 0;
}