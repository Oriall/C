#include <stdio.h>
#include <math.h>

int main() {
    double x, S, term;
    int n;

    scanf("%lf", &x);

    S = x;
    term = x;
    n = 1;

    while (1) {
        n++;
        term = -term * x * x;
        double next = term / (2 * n - 1);
        if (fabs(next) < 1e-10)
            break;
        S += next;
    }

    printf("%.10f\n", S);

    return 0;
}