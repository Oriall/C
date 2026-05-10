#include <stdio.h>
#include <math.h>

int main() {
    double x, term, sum;
    int n = 1;
    
    // Nhap gia tri x tu ban phim
    if (scanf("%lf", &x) != 1) return 1;

    term = x;  // So hang dau tien n=1: x^1 / 1!
    sum = x;
    
    // Lap den khi so hang nho hon do chinh xac 1e-10
    while (fabs(term) > 1e-10) {
        // Cong thuc truy hoi: term_moi = term_cu * x^2 / ((2n)*(2n+1))
        term = term * (x * x) / ((2 * n) * (2 * n + 1));
        sum += term;
        n++;
    }

    printf("Gia tri sinh(%.2f) xap xi la: %lf\n", x, sum);
    return 0;
}