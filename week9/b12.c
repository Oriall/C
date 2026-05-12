#include <stdio.h>

double celsius(double f) {
    return (5.0 / 9.0) * (f - 32);
}

int main() {
    printf("Bang chuyen doi tu do F sang do C:\n");
    printf("%-10s %-10s\n", "Do F", "Do C");
    for (int i = 1; i <= 20; i++) {
        printf("%-10d %-10.2f\n", i, celsius((double)i));
    }
    return 0;
}