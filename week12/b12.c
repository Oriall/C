#include <stdio.h>

void reversearray(int *arr, int size) {
    int i = 0, j = size - 1, tmp;
    while (i < j) {
        tmp = *(arr + i);
        *(arr + i) = *(arr + j);
        *(arr + j) = tmp;
        i++;
        j--;
    }
}

int main() {
    int N, i;
    scanf("%d", &N);

    int a[N];
    for(i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    reversearray(a, N);

    for(i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}