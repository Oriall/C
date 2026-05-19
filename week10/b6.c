#include <stdio.h>

int calc_sum(int arr[], int size) {
    int i;
    int sum = 0;
    for (i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[100];
    int n, i;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", calc_sum(arr, n));

    return 0;
}