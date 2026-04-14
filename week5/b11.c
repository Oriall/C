#include <stdio.h>
#include <math.h>

int main() {
    int a = 10, b = 7, e = 8;
    float c = 15.75, d = 4, f = 5.6;
    float z;

    z = a/b + c*d - fmod(e, f);
    printf("Bieu thuc 1: z = %.2f\n", z);

    z = a/b + c*d - e*f;
    printf("Bieu thuc 2: z = %.2f\n", z);

    return 0;
}