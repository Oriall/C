#include <stdio.h>
#include <math.h>

int main() {
    double x, y;
    int n;

    printf("Nhap x: "); scanf("%lf", &x);
    printf("Nhap y: "); scanf("%lf", &y);
    printf("Nhap n: "); scanf("%d", &n);

    double tu = 1 + sin(x);
    double mau = cos(n * x) + sqrt(2 + fabs(n));
    double T = sqrt(pow(x, 5) + exp(log(fabs(y)) + 1)) + tu / mau;

    printf("T = %.4f\n", T);
    return 0;
}