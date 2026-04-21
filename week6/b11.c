#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, d, e, f;
    scanf("%lf %lf %lf", &a, &b, &c);
    scanf("%lf %lf %lf", &d, &e, &f);

    double D  = a*e - b*d;
    double Dx = c*e - b*f;
    double Dy = a*f - c*d;

    if (D != 0) {
        printf("x = %.2f\n", Dx / D);
        printf("y = %.2f\n", Dy / D);
    } else {
        if (Dx == 0 && Dy == 0)
            printf("VO SO NGHIEM\n");
        else
            printf("VO NGHIEM\n");
    }

    return 0;
}