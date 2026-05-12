#include <stdio.h>
#include <math.h>

float myCosh(float x) {
    float term = 1, res = 1;
    int n = 1;
    while (fabs(term) > 1e-10) {
        term = term * x * x / ((2 * n - 1) * (2 * n));
        res += term;
        n++;
    }
    return res;
}

int main() {
    float x;
    printf("Nhap x: ");
    scanf("%f", &x);
    printf("cosh(%f) = %f", x, myCosh(x));
    return 0;
}