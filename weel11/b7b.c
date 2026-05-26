#include <stdio.h>

void count(int n, int *nb) {
    int c = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            c++;
        }
    }
    *nb = c;
}

int main() {
    int n, res;
    scanf("%d", &n);

    count(n, &res);
    printf("%d\n", res);

    return 0;
}