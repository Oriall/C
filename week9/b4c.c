#include <stdio.h>

int i = 1; // Biến toàn cục

int addOne() {
    i = i + 1;
    return i;
}

int main() {
    int i = 3; // Biến cục bộ "che" biến toàn cục
    printf("%d\n", addOne()); // In ra 2 (tăng biến toàn cục 1 -> 2)
    printf("%d\n", i);        // In ra 3 (vẫn là biến cục bộ trong main)
    return 0;
}