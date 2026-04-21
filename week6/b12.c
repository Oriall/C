#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, x3, y3;
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    scanf("%lf %lf", &x3, &y3);

    double a = sqrt((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3));
    double b = sqrt((x1-x3)*(x1-x3) + (y1-y3)*(y1-y3));
    double c = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));

    // Kiểm tra hợp lệ
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("TAM GIAC KHONG HOP LE\n");
        return 0;
    }
    printf("TAM GIAC HOP LE\n");

    double eps = 1e-9;

    // Tam giác đều
    if (fabs(a - b) < eps && fabs(b - c) < eps)
        printf("TAM GIAC DEU\n");
    else
        printf("KHONG PHAI TAM GIAC DEU\n");

    // Tam giác cân
    if (fabs(a - b) < eps || fabs(b - c) < eps || fabs(a - c) < eps)
        printf("TAM GIAC CAN\n");
    else
        printf("KHONG PHAI TAM GIAC CAN\n");

    // Tam giác vuông: a² = b² + c² (hoặc hoán vị)
    double a2 = a*a, b2 = b*b, c2 = c*c;
    if (fabs(a2 - b2 - c2) < eps || fabs(b2 - a2 - c2) < eps || fabs(c2 - a2 - b2) < eps)
        printf("TAM GIAC VUONG\n");
    else
        printf("KHONG PHAI TAM GIAC VUONG\n");

    // Tam giác nhọn: tất cả góc < 90 độ
    if (a2 < b2 + c2 && b2 < a2 + c2 && c2 < a2 + b2)
        printf("TAM GIAC NHON\n");
    else
        printf("KHONG PHAI TAM GIAC NHON\n");

    return 0;
}