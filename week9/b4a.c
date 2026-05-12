#include <stdio.h>

int addOne(int i) {
    i = i + 1;
    return i;
}

int main() {
    int i = 3;
    printf("%d\n", addOne(i)); // In ra 4
    printf("%d\n", i);        // In ra 3 (biến i trong main không đổi)
    return 0;
}