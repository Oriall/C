#include <stdio.h>
#include <math.h>
int main() {
    double x, eps = 1e-10, term = 1, sum = 1;
    int n = 1;
    scanf("%lf", &x);
    while (fabs(term) > eps) {
        term *= x / n;
        sum += term;
        n++;
    }
    printf("%.2lf", sum);
    return 0;
}