#include <stdio.h>

int* findLargerTwo(int *numa, int *numb) {
    if (*numa > *numb) {
        return numa;
    } else {
        return numb;
    }
}

int main() {
    int numa = 5, numb = 6;
    int *pMax = findLargerTwo(&numa, &numb);
    printf("%d\n", *pMax);
    return 0;
}