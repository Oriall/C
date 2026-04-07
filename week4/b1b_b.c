#include <stdio.h>
#define MAX_LENGTH 40

int main() {
    char str[MAX_LENGTH];
    int n;

    scanf("%d", &n);
    fgets(str, MAX_LENGTH, stdin);

    printf("%s\n", str);
    printf("%d\n", n);
    return 0;
}
