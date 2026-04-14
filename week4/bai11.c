#include <stdio.h>

#define VAT_RATE 0.04f

// Ham in dong ngang voi cac ky tu box-drawing
void inDongNgang(char trai, char giua1, char giua2, char giua3, char giua4, char phai, char ngang) {
    printf("%c", trai);
    for (int i = 0; i < 6; i++) printf("%c", ngang);    // Qty
    printf("%c", giua1);
    for (int i = 0; i < 15; i++) printf("%c", ngang);   // ISBN
    printf("%c", giua2);
    for (int i = 0; i < 25; i++) printf("%c", ngang);   // Title
    printf("%c", giua3);
    for (int i = 0; i < 12; i++) printf("%c", ngang);   // Price
    printf("%c", giua4);
    for (int i = 0; i < 14; i++) printf("%c", ngang);   // Total
    printf("%c\n", phai);
}

int main() {
    int qty;
    char isbn[20];
    char title[30];
    float price;

    // Nhap thong tin sach tu nguoi dung
    printf("Nhap thong tin sach:\n");
    printf("  ISBN    : "); scanf("%s", isbn);
    printf("  Tieu de : "); scanf(" %[^\n]", title);
    printf("  Gia     : "); scanf("%f", &price);
    printf("  So luong: "); scanf("%d", &qty);

    // Tinh toan
    float total = price * qty;
    float vat   = total * VAT_RATE;
    float pay   = total + vat;

    // --- In bang ---

    // Dong tren cung
    inDongNgang('\xda', '\xc2', '\xc2', '\xc2', '\xc2', '\xbf', '\xc4');

    // Tieu de cua hang: BK Bookseller (goc trai, chiem toan bo hang)
    printf("\xb3 %-76s \xb3\n", "BK Bookseller");

    // Dong ngan cach sau tieu de
    inDongNgang('\xc3', '\xc5', '\xc5', '\xc5', '\xc5', '\xb4', '\xc4');

    // Header cot
    printf("\xb3 %-4s \xb3 %-13s \xb3 %-23s \xb3 %10s \xb3 %12s \xb3\n",
           "Qty", "ISBN", "Title", "Price", "Total");

    // Dong ngan cach sau header
    inDongNgang('\xc3', '\xc5', '\xc5', '\xc5', '\xc5', '\xb4', '\xc4');

    // Du lieu mot dong sach
    printf("\xb3 %-4d \xb3 %-13s \xb3 %-23s \xb3 %10.2f \xb3 %12.2f \xb3\n",
           qty, isbn, title, price, total);

    // Dong ngan cach truoc VAT / You pay
    inDongNgang('\xc3', '\xc5', '\xc5', '\xc5', '\xc5', '\xb4', '\xc4');

    // VAT
    printf("\xb3 %-4s %71.2f \xb3\n", "VAT", vat);

    // You pay
    printf("\xb3 %-9s %66.2f \xb3\n", "You pay:", pay);

    // Dong duoi cung
    inDongNgang('\xc0', '\xc1', '\xc1', '\xc1', '\xc1', '\xd9', '\xc4');

    return 0;
}