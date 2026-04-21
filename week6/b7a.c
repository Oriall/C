#include <stdio.h>

int main() {
    int thang;
    scanf("%d", &thang);

    if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
        printf("30 ngay");
    } else if (thang == 2) {
        printf("28 hoac 29 ngay");
    } else {
        printf("31 ngay");
    }

    return 0;
}