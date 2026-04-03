#include <stdio.h>

// Ham in duong ngang
void inDuongNgang(char trai, char giua1, char giua2, char giua3, char phai, char ngang) {
    printf("%c", trai);
    for (int i = 0; i < 12; i++) printf("%c", ngang);
    printf("%c", giua1);
    for (int i = 0; i < 32; i++) printf("%c", ngang);
    printf("%c", giua2);
    for (int i = 0; i < 9; i++) printf("%c", ngang);
    printf("%c", giua3);
    for (int i = 0; i < 32; i++) printf("%c", ngang);
    printf("%c\n", phai);
}

int main() {
    // Dong tren cung
    inDuongNgang('\xda', '\xc2', '\xc2', '\xc2', '\xbf', '\xc4');

    // Tieu de cot
    printf("\xb3 %-10s \xb3 %-30s \xb3 %-7s \xb3 %-30s \xb3\n",
           "Ma HP", "Ten hoc phan", "Tin chi", "Diem TP");

    // Ngan cach sau tieu de
    inDuongNgang('\xc3', '\xc5', '\xc5', '\xc5', '\xb4', '\xc4');

    // Du lieu tung mon
    printf("\xb3 %-10s \xb3 %-30s \xb3 %-7d \xb3 QT:%-4.1f CK:%-4.1f TN:%-4.1f    \xb3\n",
           "IT2000", "Nhap mon CNTT va TT", 3, 10.0, 9.0, 10.0);

    inDuongNgang('\xc3', '\xc5', '\xc5', '\xc5', '\xb4', '\xc4');

    printf("\xb3 %-10s \xb3 %-30s \xb3 %-7d \xb3 QT:%-4.1f CK:%-4.1f              \xb3\n",
           "JP1110", "Tieng Nhat 1", 5, 8.5, 8.5);

    inDuongNgang('\xc3', '\xc5', '\xc5', '\xc5', '\xb4', '\xc4');

    printf("\xb3 %-10s \xb3 %-30s \xb3 %-7d \xb3 QT:%-4.1f CK:%-4.1f              \xb3\n",
           "MI1114", "Giai tich I", 3, 8.5, 5.0);

    inDuongNgang('\xc3', '\xc5', '\xc5', '\xc5', '\xb4', '\xc4');

    printf("\xb3 %-10s \xb3 %-30s \xb3 %-7d \xb3 QT:%-4.1f CK:%-4.1f              \xb3\n",
           "MI1144", "Dai so tuyen tinh", 3, 8.5, 6.5);

    inDuongNgang('\xc3', '\xc5', '\xc5', '\xc5', '\xb4', '\xc4');

    printf("\xb3 %-10s \xb3 %-30s \xb3 %-7d \xb3 CK:%-4.1f                        \xb3\n",
           "PE1014", "Ly luan TDTT", 0, 7.0);

    inDuongNgang('\xc3', '\xc5', '\xc5', '\xc5', '\xb4', '\xc4');

    printf("\xb3 %-10s \xb3 %-30s \xb3 %-7d \xb3 QT:%-4.1f CK:%-4.1f              \xb3\n",
           "SSH1111", "Triet hoc Mac-Lenin", 3, 9.0, 4.0);

    // Dong duoi cung
    inDuongNgang('\xc0', '\xc1', '\xc1', '\xc1', '\xd9', '\xc4');

    return 0;
}