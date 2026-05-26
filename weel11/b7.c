#include <stdio.h>

void incomeplus(long *current, int year) {
    if (year > 3) {
        *current += 3000000;
    }
}

int main() {
    long salary;
    int year;
    scanf("%ld %d", &salary, &year);

    incomeplus(&salary, year);
    printf("%ld\n", salary);

    return 0;
}