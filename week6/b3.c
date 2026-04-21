#include <stdio.h>

int main() {
    int tuoi;

    scanf("%d", &tuoi);
    int phan_loai = (tuoi < 18) ? 1 : (tuoi < 65 ? 2 : 3);

    switch (phan_loai) {
        case 1:
            printf("tre em");
            break;
        case 2:
            printf("truong thanh");
            break;
        case 3:
            printf("nguoi gia");
            break;
    }

    return 0;
}