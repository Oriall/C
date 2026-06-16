#include <stdio.h>

int main(void) {
    int a[3] = {17, 289, 4913};
    int *p, *q;

    p = a;
    q = p + 2;

    printf("a is %p\n", (void*)a);
    printf("p is %p, q is %p\n", (void*)p, (void*)q);
    printf("p points to %d and q points to %d\n", *p, *q);
    printf("The pointer distance between p and q is %ld\n", q - p);
    printf("The integer distance between p and q is %ld\n", (long int)q - (long int)p);

    return 0;
}