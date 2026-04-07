#include <stdio.h>
#include <string.h>

int main() {
    int num;
    char str[20];
    char result[30];
    int len, pos = 0;
    
    printf("Nhap so nguyen (1-1000000): ");
    scanf("%d", &num);
    
    sprintf(str, "%d", num);
    len = strlen(str);
    
    // Duyệt từ phải sang trái
    for (int i = len - 1; i >= 0; i--) {
        if ((len - i - 1) > 0 && (len - i - 1) % 3 == 0) {
            result[pos++] = ',';
        }
        result[pos++] = str[i];
    }
    result[pos] = '\0';
    
    // Đảo ngược kết quả
    for (int i = 0; i < pos / 2; i++) {
        char temp = result[i];
        result[i] = result[pos - 1 - i];
        result[pos - 1 - i] = temp;
    }
    
    printf("Ket qua: %s\n", result);

    return 0;
}