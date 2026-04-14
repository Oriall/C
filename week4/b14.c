#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Nhap mot ky tu: ");
    scanf("%c", &ch);

    // Chuyen ky tu ve chu thuong
    ch = tolower(ch);

    if (ch >= 'a' && ch <= 'z') {
        int position = ch - 'a' + 1;
        printf("Ky tu '%c' nam o vi tri %d trong bang chu cai.\n", ch, position);
    } else {
        printf("Ky tu '%c' khong nam trong bang chu cai.\n", ch);
    }

    return 0;
}
