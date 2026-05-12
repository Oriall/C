#include <stdio.h>
#include <math.h>
float mySin(float x, int M) {
    float epsilon = pow(10, -M), term = x, s = x;
    int n = 1;
    while (fabs(term) > epsilon) {
        term = -term * x * x / ((2 * n) * (2 * n + 1));
        s += term;
        n++;
    }
    return s;
}
int main() {
    float x; int M;
    scanf("%f %d", &x, &M);
    printf("%.6f", mySin(x, M));
    return 0;
}