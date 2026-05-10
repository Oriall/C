#include <stdio.h>
int main() {
    float score, sum = 0;
    int count = 0;
    while (scanf("%f", &score) && score >= 0) {
        sum += score;
        count++;
    }
    if (count > 0) printf("%.2f\n", sum / count);
    return 0;
}