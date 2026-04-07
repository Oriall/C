#include <stdio.h>
int main() {
    char hoTen[100];
    long long maSV;
    char lop[100];

    fgets(hoTen, sizeof(hoTen), stdin);
    scanf("%lld\n", &maSV);
    fgets(lop, sizeof(lop), stdin);

    // Xóa ký tự newline nếu có
    for (int i = 0; hoTen[i]; i++)
        if (hoTen[i] == '\n') { hoTen[i] = '\0'; break; }
    for (int i = 0; lop[i]; i++)
        if (lop[i] == '\n') { lop[i] = '\0'; break; }

    printf("%s\n", hoTen);
    printf("%lld\n", maSV);
    printf("%s\n", lop);

    return 0;
}