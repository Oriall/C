#include <stdio.h>

int main() {
    int a;

    // --- THỬ NGHIỆM TRƯỜNG HỢP 1: Dùng toán tử gán (=) ---
    a = 2; // Khởi tạo ban đầu
    printf("Truong hop 1 (a = 1):\n");
    if (a = 1) { 
        printf("  -> Ket qua: vao nhanh if (a = 1)\n");
    } else {
        printf("  -> Ket qua: vao nhanh else\n");
    }
    printf("  -> Gia tri cua a hien tai: %d\n\n", a);

    // --- THỬ NGHIỆM TRƯỜNG HỢP 2: Dùng toán tử so sánh (==) ---
    a = 2; // Khởi tạo lại ban đầu
    printf("Truong hop 2 (a == 1):\n");
    if (a == 1) {
        printf("  -> Ket qua: vao nhanh if (a == 1)\n");
    } else {
        printf("  -> Ket qua: vao nhanh else (a khac 1)\n");
    }
    printf("  -> Gia tri cua a hien tai: %d\n", a);

    return 0;
}