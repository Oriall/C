#include <stdio.h>

int main() {
    int gioThem;
    const int gioDinhMuc = 40;
    const int luongGioDinhMuc = 25000;
    const int luongGioThem = 40000;

    printf("Nhap so gio lam them: ");
    scanf("%d", &gioThem);

    int luongCoBan = gioDinhMuc * luongGioDinhMuc;
    int luongThem = gioThem * luongGioThem;
    int tongLuong = luongCoBan + luongThem;

    printf("\nLuong co ban: %d VND\n", luongCoBan);
    printf("Luong lam them: %d VND\n", luongThem);
    printf("Tong luong: %d VND\n", tongLuong);

    return 0;
}
