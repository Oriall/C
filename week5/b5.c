#include <stdio.h>

int main() {
    int x, y;

    // Truong hop 1: Toan tu tang sau (x++)
    x = 4;
    y = x++ + 5;
    printf("Ket qua TH1 (x++): x = %d, y = %d\n", x, y);

    // Truong hop 2: Toan tu tang truoc (++x)
    x = 4;
    y = ++x + 5;
    printf("Ket qua TH2 (++x): x = %d, y = %d\n", x, y);

    return 0;
}