#include <stdio.h>

int main() {
    int diem;
    scanf("%d", &diem);

    switch (diem) {
        case 10: case 9:
            printf("loai gioi"); break;
        case 8: case 7:
            printf("loai kha"); break;
        case 6: case 5:
            printf("loai trung binh"); break;
        default:
            printf("loai kem"); break;
    }
    return 0;
}