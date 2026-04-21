#include <stdio.h>

int main() {
    int kwh;
    scanf("%d", &kwh);

    double tien = 0;

    if (kwh <= 50)
        tien = kwh * 1678;
    else if (kwh <= 100)
        tien = 50 * 1678 + (kwh - 50) * 1734;
    else if (kwh <= 200)
        tien = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
    else if (kwh <= 300)
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200) * 2536;
    else if (kwh <= 400)
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kwh - 300) * 2834;
    else
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kwh - 400) * 2927;

    tien *= 1.08; // VAT 8%

    printf("%d\n", (int)tien);

    return 0;
}