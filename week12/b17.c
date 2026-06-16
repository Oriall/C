#include <stdio.h>

int main() {
    int i, N = 5;
    float X = 3.5;
    char A[4] = {'a', 'b', 'c', 'd'};
    void *pi, *pf, *pc = A;
    
    pi = &N; 
    pf = &X;
    printf("%p\n%p\n", pi, pf);
    
    for (i = 0; i < 4; i++) {
        printf("%c", *( (char*)pc ++ ) );
    }
    printf("\n");
    return 0;
}