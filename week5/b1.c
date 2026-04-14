#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two integers, and I will tell you\n");
    printf("the relationships they satisfy: ");
    
    // Đọc dữ liệu vào
    scanf("%d%d", &num1, &num2);

    // Hiển thị lại kết quả vừa nhập theo yêu cầu
    printf("Values entered: %d and %d\n", num1, num2);

    if (num1 == num2) {
        printf("%d is equal to %d\n", num1, num2);
    }

    if (num1 != num2) {
        printf("%d is not equal to %d\n", num1, num2);
    }

    if (num1 < num2) {
        printf("%d is less than %d\n", num1, num2);
    }

    if (num1 > num2) {
        printf("%d is greater than %d\n", num1, num2);
    }

    if (num1 <= num2) {
        printf("%d is less than or equal to %d\n", num1, num2);
    }

    if (num1 >= num2) {
        printf("%d is greater than or equal to %d\n", num1, num2);
    }

    return 0;
}