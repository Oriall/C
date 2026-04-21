#include <stdio.h>

int main() {
    double diem;
    scanf("%lf", &diem);

    if (diem >= 9.5)
        printf("A+\n");
    else if (diem >= 8.5)
        printf("A\n");
    else if (diem >= 8.0)
        printf("B+\n");
    else if (diem >= 7.0)
        printf("B\n");
    else if (diem >= 6.5)
        printf("C+\n");
    else if (diem >= 5.5)
        printf("C\n");
    else if (diem >= 5.0)
        printf("D+\n");
    else if (diem >= 4.0)
        printf("D\n");
    else
        printf("F\n");

    return 0;
}