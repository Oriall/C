#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int lowestCommonMultiple(int a, int b) {
    if (a == 0 || b == 0) return 0;
    return (a * b) / gcd(a, b);
}

int main() {
    int a = 15, b = 20;
    printf("BCNN cua %d va %d la: %d", a, b, lowestCommonMultiple(a, b));
    return 0;
}