#include <stdio.h>
#define PI 3.141592653589793

int main() {
    double R;
    printf("Nhap ban kinh R: ");
    scanf("%lf", &R);

    // Duong tron
    double dienTichTron = PI * R * R;
    double chuViTron = 2 * PI * R;

    // Hinh cau
    double dienTichCau = 4 * PI * R * R;
    double theTichCau = (4.0 / 3.0) * PI * R * R * R;

    printf("\nDuong tron:\n");
    printf("Dien tich = %.2f\n", dienTichTron);
    printf("Chu vi = %.2f\n", chuViTron);

    printf("\nHinh cau:\n");
    printf("Dien tich = %.2f\n", dienTichCau);
    printf("The tich = %.2f\n", theTichCau);

    return 0;
}
