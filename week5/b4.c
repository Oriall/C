#include <stdio.h>

int main() {
    unsigned char a = 10; // Binary: 0000 1010
    unsigned char b = 15; // Binary: 0000 1111

    printf("Phep toan\tHe 10 (%%d)\tHe 16 (%%x)\n");
    printf("------------------------------------------\n");
    
    printf("10 & 15 \t %d \t\t 0x%x\n", a & b, a & b);
    printf("10 | 15 \t %d \t\t 0x%x\n", a | b, a | b);
    printf("10 ^ 15 \t %d \t\t 0x%x\n", a ^ b, a ^ b);
    printf("~10     \t %d \t\t 0x%x\n", (unsigned char)~a, (unsigned char)~a);
    printf("10 << 2 \t %d \t\t 0x%x\n", a << 2, a << 2);
    printf("10 >> 2 \t %d \t\t 0x%x\n", a >> 2, a >> 2);

    return 0;
}