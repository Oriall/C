#include <stdio.h>
#include <math.h>

int main() {
    long long x;
    scanf("%lld", &x);
    long long hang = (long long)ceil((sqrt(1 + 8.0 * x) - 1) / 2);
    long long so_dau = hang * (hang - 1) / 2 + 1;
    long long cot = x - so_dau + 1;
    printf("%lld %lld\n", hang, cot);
    return 0;
}
