#include <stdio.h>

long salary(int hours) {
    if (hours < 10 || hours > 65) {
        return -1; 
    }
    if (hours <= 40) {
        return (long)hours * 150000;
    } else {
        int extra_hours = hours - 40;
        return (long)(40 * 150000) + (extra_hours * 150000 * 1.5);
    }
}

int main() {
    int h;
    printf("Nhap so gio lam viec: ");
    scanf("%d", &h);
    long ketqua = salary(h);
    if (ketqua == -1) {
        printf("So gio khong hop le (phai tu 10 den 65 gio).\n");
    } else {
        printf("Luong cong nhan: %ld VND\n", ketqua);
    }
    return 0;
}