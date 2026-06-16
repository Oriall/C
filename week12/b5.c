#include <stdio.h>

int addNumbers(int *fiveNumbers) {
    int i, sum = 0;
    for(i = 0; i < 5; i++, fiveNumbers++) {
        sum += *fiveNumbers;
    }
    return sum;
}

int main() {
    int X[5];
    int i, S;

    for(i = 0; i < 5; i++) {
        scanf("%d", &X[i]);
    }

    S = addNumbers(X);
    printf("%d\n", S);

    return 0;
}