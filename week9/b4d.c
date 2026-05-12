#include <stdio.h>

int i = 1;

int addOne(int i) {
    i = i + 1; // Tác động lên tham số i (bản sao), không phải biến toàn cục
    return i;
}

int main() {
    int i = 3;
    printf("%d\n", addOne(i)); // In ra 4 (3 + 1)
    printf("%d\n", i);        // In ra 3 (biến trong main không đổi)
    return 0;
}