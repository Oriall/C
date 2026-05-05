#include <stdio.h>

int main() {
    long long n, m, a, b, temp, ucln, bcnn;
    
    if (scanf("%lld %lld", &n, &m) != 2) return 0;
    
    a = n;
    b = m;
    
    while (b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    }
    
    ucln = a;
    bcnn = (n * m) / ucln;
    
    printf("UCLN: %lld\n", ucln);
    printf("BCNN: %lld\n", bcnn);
    
    return 0;
}