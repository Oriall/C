#include <stdio.h>
#include <math.h>

float mySinh(float x) {
    float term = x, res = x;
    int n = 1;
    while (fabs(term) > 1e-10) {
        term = term * x * x / ((2 * n) * (2 * n + 1));
        res += term;
        n++;
    }
    return res;
}

int main() {
    float x;
    printf("Nhap x: ");
    scanf("%f", &x);
    printf("sinh(%f) = %f", x, mySinh(x));
    return 0;
}