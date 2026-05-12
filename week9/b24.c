#include <stdio.h>
#include <math.h>

float myArctan(float x) {
    float term = x, res = x;
    int n = 1;
    while (fabs(term) > 1e-10) {
        n++;
        term = -term * x * x * (2 * n - 3) / (2 * n - 1);
        res += term;
    }
    return res;
}

int main() {
    float x;
    printf("Nhap x (|x| <= 1): ");
    scanf("%f", &x);
    if (fabs(x) <= 1)
        printf("arctan(%f) = %f", x, myArctan(x));
    else
        printf("Gia tri x phai nam trong khoang [-1, 1]");
    return 0;
}