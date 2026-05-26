#include <stdio.h>

int* findLarger(int *n1, int *n2, int *n3) {
    int *max = n1;
    if (*n2 > *max) max = n2;
    if (*n3 > *max) max = n3;
    return max;
}

int main() {
    int a = 12, b = 45, c = 23;
    int *pMax = findLarger(&a, &b, &c);
    printf("%d\n", *pMax);
    return 0;
}