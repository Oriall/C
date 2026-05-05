#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    int count = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", count++);
            if (j < i) {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}