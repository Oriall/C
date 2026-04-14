#include <stdio.h>

int main() {
    float luong_cb, DA, HRA = 150, TA = 120, khac = 450;
    float PF, IT, luong_thuc_nhan;

    printf("Nhap luong co ban: ");
    scanf("%f", &luong_cb);

    DA = 0.12 * luong_cb;
    PF = 0.14 * luong_cb;
    IT = 0.15 * luong_cb;

    luong_thuc_nhan = luong_cb + DA + HRA + TA + khac - (PF + IT);

    printf("DA: %.2f\n", DA);
    printf("HRA: %.2f\n", HRA);
    printf("TA: %.2f\n", TA);
    printf("Cac muc khac: %.2f\n", khac);
    printf("PF: %.2f\n", PF);
    printf("IT: %.2f\n", IT);
    printf("Luong thuc nhan: %.2f\n", luong_thuc_nhan);

    return 0;
}