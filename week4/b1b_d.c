#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 40

int main() {
    char str[MAX_LENGTH];
    int n;

    scanf("%d\n", &n);
    fgets(str, MAX_LENGTH, stdin);
    str[strlen(str) - 1] = '\0'; // loại bỏ ký tự xuống dòng

    printf("%s\n", str);
    printf("%d\n", n);
    return 0;
}
