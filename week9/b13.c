#include <stdio.h>
int DigitAllSame(int n) {
    int last = n % 10;
    int isEven = last % 2 == 0;
    n /= 10;
    while (n > 0) {
        if ((n % 10 % 2 == 0) != isEven) return 0;
        n /= 10;
    }
    return 1;
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", DigitAllSame(n));
    return 0;
}