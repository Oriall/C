#include <stdio.h>

int main() {
    int tien;
    scanf("%d", &tien);

    int menh_gia[] = {500000, 200000, 100000, 50000, 20000, 10000, 5000, 1000};
    int ten[]      = {500, 200, 100, 50, 20, 10, 5, 1};
    int n = 8;

    for (int i = 0; i < n; i++) {
        int so_to = tien / menh_gia[i];
        if (so_to > 0) {
            printf("%3d nghin x %d\n", ten[i], so_to);
            tien -= so_to * menh_gia[i];
        }
    }

    return 0;
}