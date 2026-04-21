#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    // Phương trình bậc 1: bx + c = 0
    if (a == 0) {
        if (b == 0) {
            if (c == 0)
                printf("VO SO NGHIEM\n");
            else
                printf("VO NGHIEM\n");
        } else {
            printf("%.2f\n", -c / b);
        }
        return 0;
    }

    // Phương trình bậc 2
    double delta = b * b - 4 * a * c;

    if (delta < 0) {
        // Hai nghiệm phức
        double thuc = -b / (2 * a);
        double ao   = sqrt(-delta) / (2 * a);
        if (ao < 0) ao = -ao;
        printf("%.2f + j%.2f\n", thuc, ao);
        printf("%.2f - j%.2f\n", thuc, ao);
    } else if (delta == 0) {
        // Nghiệm kép
        printf("%.2f\n", -b / (2 * a));
    } else {
        // Hai nghiệm thực phân biệt
        double x1 = (-b - sqrt(delta)) / (2 * a);
        double x2 = (-b + sqrt(delta)) / (2 * a);
        if (x1 > x2) {
            double tmp = x1; x1 = x2; x2 = tmp;
        }
        printf("%.2f\n", x1);
        printf("%.2f\n", x2);
    }

    return 0;
}