#include <stdio.h>
#define MAX_LENGTH 40

int main() {
    char str[MAX_LENGTH];
    int n;

    scanf("%d", &n);
    scanf("%s", str);

    printf("%s\n", str);
    printf("%d\n", n);
    return 0;
}
