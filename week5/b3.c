#include <stdio.h>

int main() {
    float score;
    printf("Nhap diem: ");
    scanf("%f", &score);

    // --- TEST CACH VIET LOI ---
    if (6.5 <= score <= 6.9) printf("C+ ");
    if (7.0 <= score <= 7.9) printf("B");
    printf("\n");

    // --- TEST CACH VIET DUNG ---
    printf("Ket qua cach viet dung: ");
    if (6.5 <= score && score <= 6.9) printf("C+ ");
    if (7.0 <= score && score <= 7.9) printf("B");
    printf("\n");
    return 0;
}