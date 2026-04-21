#include <stdio.h>

int main() {
    int n1, n2, n3, n4, n5, n6;
    int ngayNghi, khuHoi;

    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    scanf("%d", &n4);
    scanf("%d", &n5);
    scanf("%d", &n6);
    scanf("%d", &ngayNghi);
    scanf("%d", &khuHoi);

    double tong = n1*895000 + n2*1111000 + n3*1279000
                + n4*1417000 + n5*1452000 + n6*1566000;

    if (ngayNghi) tong *= 1.15;
    if (khuHoi)   tong *= 0.90;

    printf("%d\n", (int)tong);

    return 0;
}