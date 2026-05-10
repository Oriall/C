#include <stdio.h>
int main() {
    long long n;
    int dec = 0, i = 0;
    scanf("%lld", &n);
    while (n != 0) {
        dec += (n % 10) * (1 << i);
        n /= 10;
        i++;
    }
    printf("%d\n", dec);
    return 0;
}