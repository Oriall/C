#include <stdio.h>
#include <math.h>

double my_arctan(double x) {
    double term = x;        
    double result = x;      
    double x2 = x * x;      
    int n = 1;
    
    do {
        term *= -x2 * (2*n - 1) / (2*n + 1);
        result += term;
        n++;
    } while (fabs(term) >= 1e-10);
    
    return result;
}

int main() {
    double x;
    scanf("%lf", &x);
    double ket_qua = my_arctan(x);
    double chuan = atan(x);
    
    printf("arctan(%g) = %.10f\n", x, ket_qua);
    
    return 0;
}