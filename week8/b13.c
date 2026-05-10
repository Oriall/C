#include <stdio.h>

int main() {
    long long oct;
    scanf("%lld", &oct);

    long long bin = 0;
    long long p = 1;

    while (oct > 0) {
        int digit = oct % 10;
        int value = 0;
        int base = 1;

        while (digit > 0) {
            value += (digit % 2) * base;
            digit /= 2;
            base *= 10;
        }

        bin += value * p;
        p *= 1000;
        oct /= 10;
    }

    printf("%lld\n", bin);
    return 0;
}
