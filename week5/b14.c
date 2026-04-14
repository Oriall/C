#include <stdio.h>

int main() {
    int n, m, k;

    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &k);

    int max = (n > m) ? ((n > k) ? n : k) : ((m > k) ? m : k);

    printf("%d\n", max);

    return 0;
}