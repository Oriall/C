#include <stdio.h>

int countEven(int* arr, int size) {
    int i;
    int count = 0;
    for (i = 0; i < size; i++) {
        if (*(arr + i) % 2 == 0) count++;
    }
    return count;
}

int main() {
    int N, i, S;
    scanf("%d", &N);

    int X[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &X[i]);
    }

    S = countEven(X, N);
    printf("%d\n", S);

    return 0;
}