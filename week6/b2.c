#include <stdio.h>

int main() {
    int tuoi;
    scanf("%d", &tuoi);
    
    if (tuoi < 18) {
        printf("TRE EM\n");
    } else if (tuoi < 65) {
        printf("TRUONG THANH\n");
    } else {
        printf("NGUOI GIA\n");
    }
    
    return 0;
}