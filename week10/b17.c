#include <stdio.h>

int main() {
    int m, n, a[100][100], zero = 0;
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            if (a[i][j] == 0) {
                zero++;
            }
        }
    }
    if (zero >= (m * n) / 2.0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}