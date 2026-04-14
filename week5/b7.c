#include <stdio.h>

int main() {
    int n, m;

    // Tinh gia tri tuyet doi
    printf("Enter a positive or negative integer: ");
    scanf("%i", &n);
    printf("Its absolute value is %i.\n", (n < 0 ? -n : n));

    // So sanh hai so
    printf("\nEnter two integers (e.g. 1 2): ");
    scanf("%i %i", &n, &m);
    printf("%i is the larger value.\n", (n > m ? n : m));

    return 0;
}