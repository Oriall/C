#include <stdio.h>

// Hàm tìm ước số chung lớn nhất sử dụng thuật toán Euclid
int highestCommonFactor(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int n1, n2;
    
    // Nhập dữ liệu thử nghiệm (Ví dụ: 24 và 28)
    printf("Nhap hai so nguyen duong: ");
    scanf("%d %d", &n1, &n2);
    
    // Gọi hàm và in kết quả
    int result = highestCommonFactor(n1, n2);
    printf("Uoc so chung lon nhat cua %d va %d la: %d\n", n1, n2, result);
    
    return 0;
}