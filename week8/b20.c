#include <stdio.h>
#include <math.h>

int main() {
    double x, term, sum;
    int n = 1;
    scanf("%lf", &x);
    term = x;
    sum = x;
    while (fabs(term) > 1e-10) {
        term = -term * x * x / ((2 * n) * (2 * n + 1));
        sum += term;
        n++;
    }
    printf("%lf\n", sum);
    return 0;
}