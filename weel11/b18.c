#include <stdio.h>
#include <math.h>

int gptb2(float a, float b, float c, float *x1, float *x2) {
    if (a == 0) return 3;
    float delta = b * b - 4 * a * c;
    if (delta < 0) return 2;
    if (delta == 0) {
        *x1 = *x2 = -b / (2 * a);
        return 0;
    }
    *x1 = (-b + sqrt(delta)) / (2 * a);
    *x2 = (-b - sqrt(delta)) / (2 * a);
    return 1;
}

int main() {
    float a = 1.0, b = -3.0, c = 2.0, r1, r2;
    int code = gptb2(a, b, c, &r1, &r2);
    if (code == 1 || code == 0) {
        printf("%.2f %.2f\n", r1, r2);
    } else {
        printf("%d\n", code);
    }
    return 0;
}