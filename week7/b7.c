#include <stdio.h>
#include <math.h>

int main() {
    int i, j;
    double sq;
    printf("%d\n", 2);
    for (i = 3; i <= 100; i = i + 2) {
        sq = sqrt(i);
        for (j = 3; j <= sq; j = j + 2) {
            if (i % j == 0)
                break;
        }
        if (j > sq) {
            printf("%d\n", i);
        }
    }
    return 0;
}