#include <stdio.h>

int main() {
    int N, i;
    long long num, start, end, temp, sum, digit, p;

    printf("Nhap N: ");
    scanf("%d", &N);

    start = 1;
    for (i = 1; i < N; i++) start *= 10;
    end = start * 10 - 1;

    printf("Cac so Armstrong co %d chu so:\n", N);
    for (num = start; num <= end; num++) {
        temp = num;
        sum = 0;
        while (temp > 0) {
            digit = temp % 10;
            p = 1;
            for (i = 0; i < N; i++) p *= digit;
            sum += p;
            temp /= 10;
        }
        if (sum == num)
            printf("%lld\n", num);
    }
    return 0;
}