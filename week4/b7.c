#include <stdio.h>

int main() {
    char str[50];

    printf("Nhap chuoi: ");
    scanf("%[aeiou]", str);

    printf("Cac ky tu nguyen am la: %s\n", str);

    return 0;
}
