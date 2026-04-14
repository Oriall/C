#include <stdio.h>

int main() {
    int a = 5, b = 10, c = 5;

    // --- TRUONG HOP 1: Bieu thuc logic (So sanh) ---
    printf("TH1 - Bieu thuc logic (b - a == b - c):\n");
    if (b - a == b - c) {
        printf("  -> Ket qua: Dieu kien dung\n");
    } else {
        printf("  -> Ket qua: Dieu kien sai\n");
    }
    printf("  -> Gia tri a = %d\n\n", a);

    // --- TRUONG HOP 2: Bieu thuc dieu kien (Gan) ---
    printf("TH2 - Bieu thuc dieu kien (a = b - c):\n");
    if (a = b - c) {
        printf("  -> Ket qua: Bieu thuc co gia tri khac 0 (True)\n");
    } else {
        printf("  -> Ket qua: Bieu thuc co gia tri bang 0 (False)\n");
    }
    printf("  -> Gia tri a moi = %d\n", a);

    return 0;
}