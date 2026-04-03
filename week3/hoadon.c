#include <stdio.h>

int main() {
    // Khai bao du lieu
    char *maHang[] = {"W066849", "H012196", "E008220"};
    char *tenSP[] = {
        "Tui nilon sieu thi T.Do 5kg 30x50 105 C/kg",
        "Banh ca man Tan Viet 150g/66",
        "Giay rut ngan Fairy Sen 3 lop 270 tho, 5 goi/loc/T12"
    };
    int soLuong[] = {1, 1, 1};
    int donGia[] = {0, 16000, 24000};
    int chietKhau[] = {0, 0, 0};

    int tongSL = 0, tongTien = 0, tongCK = 0;

    // Cac ky tu box-drawing
    // Goc: \xda (┌) \xbf (┐) \xc0 (└) \xd9 (┘)
    // Chu T: \xc2 (┬) \xc1 (┴) \xc3 (├) \xb4 (┤) \xc5 (┼)
    // Duong: \xc4 (─) \xb3 (│)

    // Ham tao duong ngang theo chieu dai
    // In tieu de
    printf("         THANHDO MART\n");
    printf("Ngay ban: 28/03/2026 - Gio: 14:31:38\n");
    printf("Thu ngan: tran thi thanh mai - Quay: Q043\n");

    // Dong tren cung: ┌─...─┬─...─┬─...─┬─...─┬─...─┬─...─┐
    printf("\xda");
    for (int i = 0; i < 10; i++) printf("\xc4");
    printf("\xc2");
    for (int i = 0; i < 67; i++) printf("\xc4");
    printf("\xc2");
    for (int i = 0; i < 5; i++) printf("\xc4");
    printf("\xc2");
    for (int i = 0; i < 10; i++) printf("\xc4");
    printf("\xc2");
    for (int i = 0; i < 5; i++) printf("\xc4");
    printf("\xc2");
    for (int i = 0; i < 12; i++) printf("\xc4");
    printf("\xbf\n");

    // Dong tieu de cot
    printf("\xb3 %-8s \xb3 %-65s \xb3 %3s \xb3 %8s \xb3 %3s \xb3 %10s \xb3\n",
           "Ma hang", "Ten san pham", "SL", "Don gia", "CK", "Thanh tien");

    // Dong ngan cach: ├─...─┼─...─┼─...─┼─...─┼─...─┼─...─┤
    printf("\xc3");
    for (int i = 0; i < 10; i++) printf("\xc4");
    printf("\xc5");
    for (int i = 0; i < 67; i++) printf("\xc4");
    printf("\xc5");
    for (int i = 0; i < 5; i++) printf("\xc4");
    printf("\xc5");
    for (int i = 0; i < 10; i++) printf("\xc4");
    printf("\xc5");
    for (int i = 0; i < 5; i++) printf("\xc4");
    printf("\xc5");
    for (int i = 0; i < 12; i++) printf("\xc4");
    printf("\xb4\n");

    // In tung dong san pham
    for (int i = 0; i < 3; i++) {
        int thanhTien = soLuong[i] * donGia[i] - chietKhau[i];
        printf("\xb3 %-8s \xb3 %-65s \xb3 %3d \xb3 %8d \xb3 %3d \xb3 %10d \xb3\n",
               maHang[i], tenSP[i], soLuong[i], donGia[i], chietKhau[i], thanhTien);
        tongSL += soLuong[i];
        tongTien += thanhTien;
        tongCK += chietKhau[i];
    }

    // Dong duoi cung: └─...─┴─...─┴─...─┴─...─┴─...─┴─...─┘
    printf("\xc0");
    for (int i = 0; i < 10; i++) printf("\xc4");
    printf("\xc1");
    for (int i = 0; i < 67; i++) printf("\xc4");
    printf("\xc1");
    for (int i = 0; i < 5; i++) printf("\xc4");
    printf("\xc1");
    for (int i = 0; i < 10; i++) printf("\xc4");
    printf("\xc1");
    for (int i = 0; i < 5; i++) printf("\xc4");
    printf("\xc1");
    for (int i = 0; i < 12; i++) printf("\xc4");
    printf("\xd9\n");

    // In tong ket
    printf("Tong so luong : %d\n", tongSL);
    printf("Tien hang     : %d\n", tongTien);
    printf("Tien CK       : %d\n", tongCK);
    printf("Tien thanh toan: %d\n", tongTien);
    printf("Tien khach dua : 40000\n");
    printf("Tien tra lai   : %d\n", 40000 - tongTien);
    printf("\nXin chan thanh cam on Quy khach!\n");

    return 0;
}