#include <stdio.h>
#include <stdlib.h>

#define nmax 1000005
int b[nmax] = {0};

int compare(const void *a, const void *b) {
    long long arg1 = *(const long long *)a;
    long long arg2 = *(const long long *)b;
    if (arg1 < arg2) return -1;
    if (arg1 > arg2) return 1;
    return 0;
}

int main() {
    long long n;
    if (scanf("%lld", &n) != 1) return 0;

    long long a[n];
    int count_zero = 0;
    int max_len = 0;
    int current_len = 0;

    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
        if (a[i] == 0) {
            count_zero++;
            current_len++;
            if (current_len > max_len) {
                max_len = current_len;
            }
        } else {
            current_len = 0;
        }
        if (a[i] < nmax) {
            b[a[i]]++;
        }
    }

    printf("%d\n", count_zero);
    printf("%d\n", max_len);

    qsort(a, n, sizeof(long long), compare);

    for (int i = 0; i < n; i++) {
        if (a[i] < nmax && b[a[i]] > 0) {
            printf("%lld %d\n", a[i], b[a[i]]);
            b[a[i]] = 0;
        }
    }

    return 0;
}