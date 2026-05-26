#include <stdio.h>

int gptb1(float a, float b, float *x) {
    if (a == 0) {
        if (b == 0) return 1;
        else return 2;
    }
    *x = -b / a;
    return 0;
}

int main() {
    float a = 2.0, b = -4.0, res;
    int code = gptb1(a, b, &res);
    if (code == 0) {
        printf("%.2f\n", res);
    } else {
        printf("%d\n", code);
    }
    return 0;
}