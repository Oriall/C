#include <stdio.h>

int main() {
    double a, b;

    scanf("%lf", &a);
    scanf("%lf", &b);

    (a != 0) ? printf("%.2f\n", -b / a) : (b != 0) ? printf("VO NGHIEM\n") : printf("VO SO NGHIEM\n");

    return 0;
}