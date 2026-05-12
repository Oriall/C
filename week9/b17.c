#include <stdio.h>
float tinhTong(int n) {
    float s = 0;
    for (int i = 1; i <= n; i++) s += 1.0 / i;
    return s;
}
int main() {
    int n; scanf("%d", &n);
    printf("%f", tinhTong(n));
    return 0;
}