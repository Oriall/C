#include <stdio.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

int isLeapYear(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

int isValidDate(Date d) {
    if (d.year <= 0) return 0;
    if (d.month < 1 || d.month > 12) return 0;

    int daysInMonth = 0;
    if (d.month == 1 || d.month == 3 || d.month == 5 || d.month == 7 ||
        d.month == 8 || d.month == 10 || d.month == 12) {
        daysInMonth = 31;
    } else if (d.month == 4 || d.month == 6 || d.month == 9 || d.month == 11) {
        daysInMonth = 30;
    } else if (d.month == 2) {
        daysInMonth = isLeapYear(d.year) ? 29 : 28;
    }

    return (d.day >= 1 && d.day <= daysInMonth);
}

int main() {
    Date d;
    scanf("%d %d %d", &d.day, &d.month, &d.year);

    if (isValidDate(d)) {
        printf("CORRECT\n");
    } else {
        printf("INCORRECT\n");
    }

    return 0;
}
