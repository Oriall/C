#include <stdio.h>

int main() {
    int loai, dem, ngayNghi;
    scanf("%d", &loai);
    scanf("%d", &dem);
    scanf("%d", &ngayNghi);

    double donGia;
    switch (loai) {
        case 1: donGia = 500000;  break;
        case 2: donGia = 900000;  break;
        case 3: donGia = 1500000; break;
    }

    double tong = donGia * dem;

    if (ngayNghi) tong *= 1.20;
    if (dem >= 5) tong *= 0.85;

    printf("%d\n", (int)tong);

    return 0;
}