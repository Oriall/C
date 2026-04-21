#include <stdio.h>

int main() {
    char ch1, ch2, ch3;
    char alpha_first;

    scanf(" %c %c %c", &ch1, &ch2, &ch3);

    alpha_first = ch1;

    if (ch2 < alpha_first) {
        alpha_first = ch2;
    }
    if (ch3 < alpha_first) {
        alpha_first = ch3;
    }

    printf("%c", alpha_first);

    return 0;
}