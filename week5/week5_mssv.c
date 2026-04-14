#include <stdio.h>
#include <limits.h>
#include <math.h>  
// --- Khai bao ham (Function Declarations) ---
// ============================================
void b1() {
    int num1, num2;

    printf("Enter two integers, and I will tell you\n");
    printf("the relationships they satisfy: ");
    
    scanf("%d%d", &num1, &num2);

    printf("Values entered: %d and %d\n", num1, num2);

    if (num1 == num2) printf("%d is equal to %d\n", num1, num2);
    if (num1 != num2) printf("%d is not equal to %d\n", num1, num2);
    if (num1 < num2)  printf("%d is less than %d\n", num1, num2);
    if (num1 > num2)  printf("%d is greater than %d\n", num1, num2);
    if (num1 <= num2) printf("%d is less than or equal to %d\n", num1, num2);
    if (num1 >= num2) printf("%d is greater than or equal to %d\n", num1, num2);
}

// ============================================
void b2() {
    int a;

    a = 2;
    printf("Truong hop 1 (a = 1):\n");
    if (a = 1) printf("  -> Ket qua: vao nhanh if (a = 1)\n");
    else       printf("  -> Ket qua: vao nhanh else\n");
    printf("  -> Gia tri cua a hien tai: %d\n\n", a);

    a = 2;
    printf("Truong hop 2 (a == 1):\n");
    if (a == 1) printf("  -> Ket qua: vao nhanh if (a == 1)\n");
    else        printf("  -> Ket qua: vao nhanh else (a khac 1)\n");
    printf("  -> Gia tri cua a hien tai: %d\n", a);
}

// ============================================
void b3() {
    float score;
    printf("Nhap diem: ");
    scanf("%f", &score);

    printf("Test cach viet loi: ");
    if (6.5 <= score <= 6.9) printf("C+ ");
    if (7.0 <= score <= 7.9) printf("B");
    printf("\n");

    printf("Ket qua cach viet dung: ");
    if (6.5 <= score && score <= 6.9) printf("C+ ");
    if (7.0 <= score && score <= 7.9) printf("B");
    printf("\n");
}

// ============================================
void b4() {
    unsigned char a = 10;
    unsigned char b = 15;

    printf("Phep toan\tHe 10 (%%d)\tHe 16 (%%x)\n");
    printf("------------------------------------------\n");
    printf("10 & 15 \t %d \t\t 0x%x\n", a & b, a & b);
    printf("10 | 15 \t %d \t\t 0x%x\n", a | b, a | b);
    printf("10 ^ 15 \t %d \t\t 0x%x\n", a ^ b, a ^ b);
    printf("~10     \t %d \t\t 0x%x\n", (unsigned char)~a, (unsigned char)~a);
    printf("10 << 2 \t %d \t\t 0x%x\n", a << 2, a << 2);
    printf("10 >> 2 \t %d \t\t 0x%x\n", a >> 2, a >> 2);
}

// ============================================
void b5() {
    int x, y;

    x = 4;
    y = x++ + 5;
    printf("Ket qua TH1 (x++): x = %d, y = %d\n", x, y);

    x = 4;
    y = ++x + 5;
    printf("Ket qua TH2 (++x): x = %d, y = %d\n", x, y);
}
// ============================================
void b6() {
    int a = 5, b = 10, c = 5;

    printf("TH1 - Bieu thuc logic (b - a == b - c):\n");
    if (b - a == b - c) {
        printf("  -> Ket qua: Dieu kien dung\n");
    } else {
        printf("  -> Ket qua: Dieu kien sai\n");
    }
    printf("  -> Gia tri a = %d\n\n", a);

    printf("TH2 - Bieu thuc dieu kien (a = b - c):\n");
    if (a = b - c) {
        printf("  -> Ket qua: Bieu thuc co gia tri khac 0 (True)\n");
    } else {
        printf("  -> Ket qua: Bieu thuc co gia tri bang 0 (False)\n");
    }
    printf("  -> Gia tri a moi = %d\n", a);
}

// ============================================
void b7() {
    int n, m;

    printf("Enter a positive or negative integer: ");
    scanf("%i", &n);
    printf("Its absolute value is %i.\n", (n < 0 ? -n : n));

    printf("\nEnter two integers (e.g. 1 2): ");
    scanf("%i %i", &n, &m);
    printf("%i is the larger value.\n", (n > m ? n : m));
}

// ============================================
void b8() {
    unsigned int x = UINT_MAX - 1;
    signed int y = INT_MAX - 1;

    printf("x is an unsigned int, occupying %i bytes.\n", sizeof(x));
    printf("The initial value of x is %u\n", x);
    x++; printf("Add 1; the new value of x is %u\n", x);
    x++; printf("Add 1; the new value of x is %u\n", x);
    x++; printf("Add 1; the new value of x is %u\n", x);

    printf("\ny is a signed int, occupying %i bytes.\n", sizeof(y));
    printf("The initial value of y is %i\n", y);
    y++; printf("Add 1; the new value of y is %i\n", y);
    y++; printf("Add 1; the new value of y is %i\n", y);
    y++; printf("Add 1; the new value of y is %i\n", y);
}

// ============================================
void b9() {
    double a, b;

    scanf("%lf", &a);
    scanf("%lf", &b);

    (a != 0) ? printf("%.2f\n", -b / a) : (b != 0) ? printf("VO NGHIEM\n") : printf("VO SO NGHIEM\n");
}

// ============================================
void b10() {
    printf("%d\n", 7 + 5 && 4 < 2 + 3 - 2 / 3 || 5 > 2 + 1);
}
// ============================================
void b11() {
    int a = 10, b = 7, e = 8;
    float c = 15.75, d = 4, f = 5.6;
    float z;

    z = a/b + c*d - fmod(e, f);
    printf("Bieu thuc 1: z = %.2f\n", z);

    z = a/b + c*d - e*f;
    printf("Bieu thuc 2: z = %.2f\n", z);
}

// ============================================
void b12() {
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
}

// ============================================
void b13() {
    double x, y;
    int n;

    printf("Nhap x: "); scanf("%lf", &x);
    printf("Nhap y: "); scanf("%lf", &y);
    printf("Nhap n: "); scanf("%d", &n);

    double tu = 1 + sin(x);
    double mau = cos(n * x) + sqrt(2 + fabs(n));
    double T = sqrt(pow(x, 5) + exp(log(fabs(y)) + 1)) + tu / mau;

    printf("T = %.4f\n", T);
}

// ============================================
void b14() {
    int n, m, k;

    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &k);

    int max = (n > m) ? ((n > k) ? n : k) : ((m > k) ? m : k);

    printf("%d\n", max);
}

// ============================================
void b15() {
    int totalSeconds, hours, minutes, seconds;

    printf("Nhap tong so giay: ");
    scanf("%d", &totalSeconds);

    hours   = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    printf("H:M:S - %d:%d:%d\n", hours, minutes, seconds);
}
// ============================================
void b16() {
    // Ham in duong ngang (lambda-style voi macro)
    #define NGANG(trai, g1, g2, g3, phai, ngang) \
        printf("%c", trai); \
        for (int i = 0; i < 12; i++) printf("%c", ngang); \
        printf("%c", g1); \
        for (int i = 0; i < 32; i++) printf("%c", ngang); \
        printf("%c", g2); \
        for (int i = 0; i < 9; i++) printf("%c", ngang); \
        printf("%c", g3); \
        for (int i = 0; i < 32; i++) printf("%c", ngang); \
        printf("%c\n", phai);

    NGANG('\xda', '\xc2', '\xc2', '\xc2', '\xbf', '\xc4');

    printf("\xb3 %-10s \xb3 %-30s \xb3 %-7s \xb3 %-30s \xb3\n",
           "Ma HP", "Ten hoc phan", "Tin chi", "Diem TP");

    NGANG('\xc3', '\xc5', '\xc5', '\xc5', '\xb4', '\xc4');
    printf("\xb3 %-10s \xb3 %-30s \xb3 %-7d \xb3 QT:%-4.1f CK:%-4.1f TN:%-4.1f    \xb3\n",
           "IT2000", "Nhap mon CNTT va TT", 3, 10.0, 9.0, 10.0);

    NGANG('\xc3', '\xc5', '\xc5', '\xc5', '\xb4', '\xc4');
    printf("\xb3 %-10s \xb3 %-30s \xb3 %-7d \xb3 QT:%-4.1f CK:%-4.1f              \xb3\n",
           "JP1110", "Tieng Nhat 1", 5, 8.5, 8.5);

    NGANG('\xc3', '\xc5', '\xc5', '\xc5', '\xb4', '\xc4');
    printf("\xb3 %-10s \xb3 %-30s \xb3 %-7d \xb3 QT:%-4.1f CK:%-4.1f              \xb3\n",
           "MI1114", "Giai tich I", 3, 8.5, 5.0);

    NGANG('\xc3', '\xc5', '\xc5', '\xc5', '\xb4', '\xc4');
    printf("\xb3 %-10s \xb3 %-30s \xb3 %-7d \xb3 QT:%-4.1f CK:%-4.1f              \xb3\n",
           "MI1144", "Dai so tuyen tinh", 3, 8.5, 6.5);

    NGANG('\xc3', '\xc5', '\xc5', '\xc5', '\xb4', '\xc4');
    printf("\xb3 %-10s \xb3 %-30s \xb3 %-7d \xb3 CK:%-4.1f                        \xb3\n",
           "PE1014", "Ly luan TDTT", 0, 7.0);

    NGANG('\xc3', '\xc5', '\xc5', '\xc5', '\xb4', '\xc4');
    printf("\xb3 %-10s \xb3 %-30s \xb3 %-7d \xb3 QT:%-4.1f CK:%-4.1f              \xb3\n",
           "SSH1111", "Triet hoc Mac-Lenin", 3, 9.0, 4.0);

    NGANG('\xc0', '\xc1', '\xc1', '\xc1', '\xd9', '\xc4');

    #undef NGANG
}

int main() {
    b1();
    // b2();
    // b3();
    // b4();
    // b5();
    return 0;
}

