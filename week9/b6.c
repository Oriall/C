#include <stdio.h>

// Dinh nghia bien toan cuc
int i = 10;

// Khai bao cac ham nam o file khac
void f();
void g();

int main() {
    printf("Gia tri ban dau: %d\n", i);
    
    f();
    printf("Sau khi goi f(): %d\n", i);
    
    g();
    printf("Sau khi goi g(): %d\n", i);
    
    return 0;
}