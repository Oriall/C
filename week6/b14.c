#include <stdio.h>

int main() {
    int m3;
    scanf("%d", &m3);

    double tien = 0;

    if (m3 <= 10)
        tien = m3 * 5973;
    else if (m3 <= 20)
        tien = 10*5973 + (m3-10)*7052;
    else if (m3 <= 30)
        tien = 10*5973 + 10*7052 + (m3-20)*8669;
    else
        tien = 10*5973 + 10*7052 + 10*8669 + (m3-30)*15929;

    tien = tien * 1.05 + tien * 0.10;

    printf("%d\n", (int)tien);

    return 0;
}