#include <stdio.h>

void getSales(double *sales, int quarters) {
    int i;
    for (i = 0; i < quarters; i++) {
        scanf("%lf", sales + i);
    }
}

double totalSales(double *sales, int quarters) {
    int i;
    double total = 0;
    for (i = 0; i < quarters; i++) {
        total += *(sales + i);
    }
    return total;
}

int main() {
    double quarterly_sales[4];
    getSales(quarterly_sales, 4);
    printf("%.2lf\n", totalSales(quarterly_sales, 4));
    return 0;
}