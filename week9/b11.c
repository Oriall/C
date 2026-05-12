#include <stdio.h>

void printnchars(int ch, int n) {
    for (int i = 0; i < n; i++) {
        printf("%c", ch);
    }
    printf("\n");
}

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        printnchars('*', i);
    }
    return 0;
}