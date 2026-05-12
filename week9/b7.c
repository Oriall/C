#include <stdio.h>

float kineticEnergy(float m, float v) {
    return (m * v * v) / 2;
}

int main() {
    float m, v;
    printf("Nhap khoi luong (kg): ");
    scanf("%f", &m);
    printf("Nhap van toc (m/s): ");
    scanf("%f", &v);
    printf("Dong nang cua vat la: %.2f J\n", kineticEnergy(m, v));
    return 0;
}