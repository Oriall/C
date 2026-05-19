#include <stdio.h>

int compare_arrays(const int arr1[], const int arr2[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        if (arr1[i] != arr2[i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int arr1[100], arr2[100];
    int n, i;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    for (i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    if (compare_arrays(arr1, arr2, n)) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}