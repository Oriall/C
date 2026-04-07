#include <stdio.h>

int main() {
    int soNguyen;
    float soThuc;

    printf("Nhap mot so nguyen: ");
    scanf("%d", &soNguyen);

    printf("Nhap mot so thuc: ");
    scanf("%f", &soThuc);

    printf("\nGia tri vua nhap:\n");
    printf("So nguyen: %d\n", soNguyen);
    printf("So thuc: %.2f\n", soThuc);

    return 0;
}
