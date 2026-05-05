#include <stdio.h>
#include <math.h>

int main() {
    double x;
    int n;
    
    if (scanf("%lf %d", &x, &n) != 2) return 0;

    double s = 0;
    double term = 1; 

    for (int i = 0; i < n; i++) {
        s += term;
        // Tính số hạng tiếp theo dựa trên số hạng hiện tại để tránh tính lại giai thừa và lũy thừa lớn
        // term_(i+1) = term_i * (-x^2) / ((2i+1) * (2i+2))
        term = term * (-1.0 * x * x) / ((2 * i + 1) * (2 * i + 2));
    }

    printf("%.2f\n", s);

    return 0;
}