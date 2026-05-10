#include <stdio.h>
int main() {
    int n, f0 = 0, f1 = 1, fn = 1;
    scanf("%d", &n);
    while (f1 + f0 < n) {
        fn = f1 + f0;
        f0 = f1;
        f1 = fn;
    }
    printf("%d", fn);
    return 0;
}