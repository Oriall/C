#include <stdio.h>
int main()
{
    printf("|%3d|\n", 42);        // số nguyên, căn phải trong 3 ký tự
    printf("|%-3d|\n", 42);       // số nguyên, căn trái trong 3 ký tự
    printf("|%3c|\n", 'z');       // ký tự, căn phải trong 3 ký tự
    printf("|%-3c|\n", 'z');      // ký tự, căn trái trong 3 ký tự
    printf("|%10.5f|\n", 2.71828);// số thực, rộng 10 ký tự, 5 chữ số thập phân
    printf("|%6.2f|\n", 2.71828); // số thực, rộng 6 ký tự, 2 chữ số thập phân
    printf("|%-6.2f|\n", 2.71828);// số thực, rộng 6 ký tự, căn trái
    printf("|%f|\n", 2.718);      // số thực mặc định 6 chữ số thập phân
    printf("|%e|\n", 2.71828);    // số thực dạng khoa học
    printf("|%s|\n", "printf");   // chuỗi ký tự
    printf("|%7s|\n", "printf");  // chuỗi rộng 7 ký tự, căn phải
    return 0;
}