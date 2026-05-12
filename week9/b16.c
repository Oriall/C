#include <stdio.h>
#include <math.h>
float myArcsin(float x, int M) {
    float eps = pow(10, -M), term = x, res = x;
    int n = 0;
    while (fabs(term) > eps) {
        n++;
        term = term * x * x * (2 * n - 1) * (2 * n - 1) / (2 * n * (2 * n + 1));
        res += term;
    }
    return res;
}
int main() {
    printf("PI approx: %f", 6 * myArcsin(0.5, 6));
    return 0;
}