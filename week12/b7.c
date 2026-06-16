#include <stdio.h>

double* maximum(double* a, int size) {
    if (size <= 0) return NULL;
    int i;
    double* max_ptr = a;
    for (i = 1; i < size; i++) {
        if (*(a + i) > *max_ptr) {
            max_ptr = (a + i);
        }
    }
    return max_ptr;
}

int main() {
    int N, i;
    scanf("%d", &N);

    double X[N];
    for (i = 0; i < N; i++) {
        scanf("%lf", &X[i]);
    }

    double* pS = maximum(X, N);
    if (pS != NULL) {
        printf("%p\n", (void*)pS);
        printf("%.2lf\n", *pS);
    }
    return 0;
}