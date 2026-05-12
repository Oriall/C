#include <stdio.h>

int i = 1;

int addOne() {
    i = i + 1;
    return i;
}

int main() {
    printf("%d\n", addOne()); // In ra 2
    printf("%d\n", i);        // In ra 2 (biến toàn cục đã bị thay đổi)
    return 0;
}