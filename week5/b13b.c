#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846
int main() {
    double mu, sigma, x1, x2, fx1, fx2;

    printf("Nhap mu: "); scanf("%lf", &mu);
    printf("Nhap sigma: "); scanf("%lf", &sigma);

    x1 = mu + sigma;
    x2 = mu + 2 * sigma;

    fx1 = (1.0 / (sigma * sqrt(2 * M_PI))) * exp(-0.5 * pow((x1 - mu) / sigma, 2));
    fx2 = (1.0 / (sigma * sqrt(2 * M_PI))) * exp(-0.5 * pow((x2 - mu) / sigma, 2));

    printf("f(x1) = %.4f\n", fx1);
    printf("f(x2) = %.4f\n", fx2);
    printf("Tong f(x1) + f(x2) = %.4f\n", fx1 + fx2);

    return 0;
}