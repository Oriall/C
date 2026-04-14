#define pi 3.14159265358979323846
#include <stdio.h>
#include <math.h>

int main() {
    double R;
    scanf("%lf", &R);

    double chu_vi = 2 * pi * R;
    double dien_tich_tron = pi * R * R;
    double dien_tich_cau = 4 * pi * R * R;
    double the_tich_cau = (4.0 / 3.0) * pi * R * R * R;

    printf("%.2f\n", chu_vi);
    printf("%.2f\n", dien_tich_tron);
    printf("%.2f\n", dien_tich_cau);
    printf("%.2f\n", the_tich_cau);

    return 0;
}