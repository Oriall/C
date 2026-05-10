#include <stdio.h>
#include <math.h>

int main() {
    double x, term, sum;
    int n = 1;
    
    // Nhap gia tri x tu ban phim
    if (scanf("%lf", &x) != 1) return 1;

    term = 1;  // So hang dau tien n=0: x^0 / 0! = 1
    sum = 1;
    
    // Lap den khi so hang nho hon do chinh xac 1e-10
    while (fabs(term) > 1e-10) {
        // Cong thuc truy hoi: term_moi = term_cu * x^2 / ((2n-1)*(2n))
        term = term * (x * x) / ((2 * n - 1) * (2 * n));
        sum += term;
        n++;
    }

    printf("Gia tri cosh(%.2f) xap xi la: %.2lf\n", x, sum);
    return 0;
}