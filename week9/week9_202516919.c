#include <stdio.h>
#include <math.h>

void bth1();
void bth2();
void bth3();
void bth4();
void bth5();
void bth6();
void bth7();
void bth8();
void bth9();
void bth10();
void bth11();
void bth12();
void bth13();
void bth14();
void bth15();
void bth16();
void bth17();
void bth18();
void bth19();
void bth20();
void bth21();
void bth22();
void bth23();
void bth24();
int  menu();

/* ===================== BIEN TOAN CUC (dung cho bai 4b, 4c, 4d, 5, 6) ===================== */
int i_global = 1; /* Bien toan cuc cho bai 4b/4c/4d */
int a = 3, b = 5; /* Bien toan cuc cho bai 5 */
int i6 = 10;      /* Bien toan cuc cho bai 6 */

int main() {
    int tuy_chon = 0;
    tuy_chon = menu();

    switch (tuy_chon) {
        case 1: bth1(); break;
        case 2: bth2(); break;
        case 3: bth3(); break;
        case 4: bth4(); break;
        case 5: bth5(); break;
        case 6: bth6(); break;
        case 7: bth7(); break;
        case 8: bth8(); break;
        case 9: bth9(); break;
        case 10: bth10(); break;
        case 11: bth11(); break;
        case 12: bth12(); break;
        case 13: bth13(); break;
        case 14: bth14(); break;
        case 15: bth15(); break;
        case 16: bth16(); break;
        case 17: bth17(); break;
        case 18: bth18(); break;
        case 19: bth19(); break;
        case 20: bth20(); break;
        case 21: bth21(); break;
        case 22: bth22(); break;
        case 23: bth23(); break;
        case 24: bth24(); break;
        default:
            printf("Lua chon khong hop le!\n");
    }

    return 0;
}

int menu() {
    int tuy_chon = 0;
    printf("\n 1.  Bai 1 - Ham tinh binh phuong so thuc (square)");
    printf("\n 2.  Bai 2 - Ham in chuoi (sayHello)");
    printf("\n 3.  Bai 3 - Ham tinh giai thua (prototype truoc main)");
    printf("\n 4.  Bai 4 - Demo bien cuc bo / toan cuc (4 truong hop a/b/c/d)");
    printf("\n 5.  Bai 5 - Hoan vi hai bien toan cuc (goodSwap)");
    printf("\n 6.  Bai 6 - Demo extern + bien cuc bo che bien toan cuc (f/g)");
    printf("\n 7.  Bai 7 - Tinh dong nang (kineticEnergy)");
    printf("\n 8.  Bai 8  - Kiem tra so nguyen to, liet ke tu 2 den N");
    printf("\n 9.  Bai 9  - Tong lap phuong, uoc so, binh phuong dau tien");
    printf("\n10.  Bai 10 - Tinh luong cong nhan theo gio lam viec");
    printf("\n11.  Bai 11 - In tam giac sao bang ham printnchars");
    printf("\n12.  Bai 12 - Bang chuyen doi do F sang do C");
    printf("\n13.  Bai 13 - Kiem tra cac chu so cung chan/le (DigitAllSame)");
    printf("\n14.  Bai 14 - Kiem tra nam nhuan (isLeapYear)");
    printf("\n15.  Bai 15 - Tinh sin(x) bang chuoi Taylor (mySin)");
    printf("\n16.  Bai 16 - Tinh arcsin(x) va xap xi PI (myArcsin)");
    printf("\n17.  Bai 17 - Tinh tong 1 + 1/2 + ... + 1/n (tinhTong)");
    printf("\n18.  Bai 18 - Ve hinh thoi sao (printDiamond)");
    printf("\n19.  Bai 19 - Ve kim tu thap chu cai (printPyramid)");
    printf("\n20.  Bai 20 - Tim UCLN bang thuat toan Euclid");
    printf("\n21.  Bai 21 - Tim BCNN qua UCLN");
    printf("\n22.  Bai 22 - Tinh sinh(x) bang chuoi Taylor (mySinh)");
    printf("\n23.  Bai 23 - Tinh cosh(x) bang chuoi Taylor (myCosh)");
    printf("\n24.  Bai 24 - Tinh arctan(x) bang chuoi Taylor (myArctan)");
    printf("\n-------------------------------------------------");
    printf("\nNhap tuy chon: ");
    scanf("%d", &tuy_chon);
    system("cls");
    return tuy_chon;
}

/* ===================== BAI 1 ===================== */

double square(double a) {
    return a * a;
}

/* Bai 1: Ham tinh binh phuong mot so thuc */
void bth1() {
    double num = 0.0, sqr = 0.0;
    printf("Enter a number: ");
    scanf("%lf", &num);
    sqr = square(num);
    printf("Square of %g is %g\n", num, sqr);
}

/* ===================== BAI 2 ===================== */

void sayHello() {
    printf("Hello World!\n");
}

/* Bai 2: Ham in chuoi Hello World */
void bth2() {
    sayHello();
}

/* ===================== BAI 3 ===================== */

int giaithua(int a) {
    int j, gt = 1;
    for (j = 1; j <= a; j++)
        gt = gt * j;
    return gt;
}

/* Bai 3: Ham tinh giai thua, khai bao prototype truoc main */
void bth3() {
    int num;
    printf("Nhap so nguyen: ");
    scanf("%d", &num);
    printf("%d! = %d\n", num, giaithua(num));
}

/* ===================== BAI 4 ===================== */

/* 4a: Truyen tham tri - bien trong main khong thay doi */
int addOne_a(int x) {
    x = x + 1;
    return x;
}

/* 4b/4c: Bien toan cuc i_global bi thay doi */
int addOne_b() {
    i_global = i_global + 1;
    return i_global;
}

/* 4d: Tham so i che bien toan cuc, bien trong main khong doi */
int addOne_d(int x) {
    x = x + 1;
    return x;
}

/* Bai 4: Demo su khac nhau giua bien cuc bo va bien toan cuc */
void bth4() {
    int sub = 0;
    printf("\n  4a. Truyen tham tri (bien main khong doi)");
    printf("\n  4b. Bien toan cuc bi thay doi boi ham");
    printf("\n  4c. Bien cuc bo trong main 'che' bien toan cuc");
    printf("\n  4d. Tham so ham 'che' bien toan cuc va bien main");
    printf("\n  Chon (1=4a, 2=4b, 3=4c, 4=4d): ");
    scanf("%d", &sub);

    if (sub == 1) {
        /* 4a */
        int i = 3;
        printf("%d\n", addOne_a(i)); /* In ra 4 */
        printf("%d\n", i);           /* In ra 3 */
    } else if (sub == 2) {
        /* 4b */
        i_global = 1; /* Reset ve 1 truoc khi chay */
        printf("%d\n", addOne_b()); /* In ra 2 */
        printf("%d\n", i_global);   /* In ra 2 */
    } else if (sub == 3) {
        /* 4c: bien cuc bo i = 3 che bien toan cuc i_global = 1 */
        i_global = 1;
        int i = 3;
        printf("%d\n", addOne_b()); /* In ra 2 (tang bien toan cuc) */
        printf("%d\n", i);           /* In ra 3 (bien cuc bo van la 3) */
    } else if (sub == 4) {
        /* 4d */
        i_global = 1;
        int i = 3;
        printf("%d\n", addOne_d(i)); /* In ra 4 */
        printf("%d\n", i);            /* In ra 3 */
    } else {
        printf("Lua chon khong hop le!\n");
    }
}

/* ===================== BAI 5 ===================== */

void goodSwap() {
    int temp = a;
    a = b;
    b = temp;
}

/* Bai 5: Hoan vi hai bien toan cuc bang ham goodSwap */
void bth5() {
    printf("Truoc: %d %d\n", a, b);
    goodSwap();
    printf("Sau:   %d %d\n", a, b);
}

/* ===================== BAI 6 ===================== */

/* f6: co bien cuc bo i rieng -> KHONG thay doi bien toan cuc i6 */
void f6() {
    int i6 = 0; /* Bien cuc bo che bien toan cuc */
    i6++;        /* Chi tang bien cuc bo, toan cuc giu nguyen */
}

/* g6: dung truc tiep bien toan cuc i6 -> CO thay doi */
void g6() {
    i6++; /* Tang bien toan cuc len 1 */
}

/* Bai 6: Demo extern + bien cuc bo che bien toan cuc
          f() co bien cuc bo nen i toan cuc khong doi
          g() dung bien toan cuc nen i tong cuc tang len 1 */
void bth6() {
    i6 = 10; /* Reset ve 10 truoc khi chay */
    printf("Gia tri ban dau:  i = %d\n", i6);
    f6();
    printf("Sau khi goi f():  i = %d  (khong doi, f dung bien cuc bo)\n", i6);
    g6();
    printf("Sau khi goi g():  i = %d  (tang len 1, g dung bien toan cuc)\n", i6);
}

/* ===================== BAI 7 ===================== */

float kineticEnergy(float m, float v) {
    return (m * v * v) / 2;
}

/* Bai 7: Tinh dong nang cua vat: Ek = m*v^2 / 2 */
void bth7() {
    float m, v;
    printf("Nhap khoi luong (kg): ");
    scanf("%f", &m);
    printf("Nhap van toc (m/s): ");
    scanf("%f", &v);
    printf("Dong nang cua vat la: %.2f J\n", kineticEnergy(m, v));
}

/* ===================== BAI 8 ===================== */

int is_prime(int n) {
    if (n < 2) return 0;
    for (int k = 2; k <= (int)sqrt(n); k++) {
        if (n % k == 0) return 0;
    }
    return 1;
}

/* Bai 8: Kiem tra so nguyen to, liet ke tat ca so nguyen to tu 2 den N */
void bth8() {
    int n;
    printf("Nhap N: ");
    scanf("%d", &n);
    printf("Cac so nguyen to tu 2 den %d: ", n);
    for (int k = 2; k <= n; k++) {
        if (is_prime(k)) printf("%d ", k);
    }
    printf("\n");
}

/* ===================== BAI 9 ===================== */

long sumcube(int n) {
    long sum = 0;
    for (int i = 1; i <= n; i++) sum += (long)i * i * i;
    return sum;
}

void printsubmultiples(int n) {
    printf("Cac uoc cua %d la: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) printf("%d ", i);
    }
    printf("\n");
}

void printsquares(int n) {
    printf("%d so binh phuong dau tien la: ", n);
    for (int i = 1; i <= n; i++) printf("%d ", i * i);
    printf("\n");
}

/* Bai 9: Tong lap phuong, liet ke uoc so, in day binh phuong */
void bth9() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Tong lap phuong 1^3+...+%d^3: %ld\n", n, sumcube(n));
    printsubmultiples(n);
    printsquares(n);
}

/* ===================== BAI 10 ===================== */

long salary(int hours) {
    if (hours < 10 || hours > 65) return -1;
    if (hours <= 40) return (long)hours * 150000;
    int extra = hours - 40;
    return (long)(40 * 150000) + (long)(extra * 150000 * 1.5);
}

/* Bai 10: Tinh luong cong nhan theo so gio lam viec (gio thuong + tang ca) */
void bth10() {
    int h;
    printf("Nhap so gio lam viec: ");
    scanf("%d", &h);
    long ketqua = salary(h);
    if (ketqua == -1)
        printf("So gio khong hop le (phai tu 10 den 65 gio).\n");
    else
        printf("Luong cong nhan: %ld VND\n", ketqua);
}

/* ===================== BAI 11 ===================== */

void printnchars(int ch, int n) {
    for (int i = 0; i < n; i++) printf("%c", ch);
    printf("\n");
}

/* Bai 11: In tam giac sao bang ham printnchars */
void bth11() {
    int n;
    printf("Nhap N: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printnchars('*', i);
    }
}

/* ===================== BAI 12 ===================== */

double celsius(double f) {
    return (5.0 / 9.0) * (f - 32);
}

/* Bai 12: In bang chuyen doi nhiet do tu do F sang do C (1 den 20) */
void bth12() {
    printf("Bang chuyen doi tu do F sang do C:\n");
    printf("%-10s %-10s\n", "Do F", "Do C");
    for (int i = 1; i <= 20; i++) {
        printf("%-10d %-10.2f\n", i, celsius((double)i));
    }
}

/* ===================== BAI 13 ===================== */

int DigitAllSame(int n) {
    int last   = n % 10;
    int isEven = last % 2 == 0;
    n /= 10;
    while (n > 0) {
        if ((n % 10 % 2 == 0) != isEven) return 0;
        n /= 10;
    }
    return 1;
}

/* Bai 13: Kiem tra tat ca chu so cua n deu chan hoac deu le */
void bth13() {
    int n;
    printf("Nhap so nguyen: ");
    scanf("%d", &n);
    if (DigitAllSame(n))
        printf("Tat ca chu so deu cung tinh chan/le.\n");
    else
        printf("Cac chu so KHONG cung tinh chan/le.\n");
}

/* ===================== BAI 14 ===================== */

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) return 1;
    return 0;
}

/* Bai 14: Kiem tra nam nhuan */
void bth14() {
    int y;
    printf("Nhap nam: ");
    scanf("%d", &y);
    if (isLeapYear(y))
        printf("%d la nam nhuan.\n", y);
    else
        printf("%d KHONG phai nam nhuan.\n", y);
}

/* ===================== BAI 15 ===================== */

float mySin(float x, int M) {
    float epsilon = (float)pow(10, -M), term = x, s = x;
    int n = 1;
    while (fabs(term) > epsilon) {
        term = -term * x * x / ((2 * n) * (2 * n + 1));
        s   += term;
        n++;
    }
    return s;
}

/* Bai 15: Tinh sin(x) bang chuoi Taylor voi do chinh xac 10^-M */
void bth15() {
    float x;
    int M;
    printf("Nhap x va M (do chinh xac 10^-M): ");
    scanf("%f %d", &x, &M);
    printf("sin(%.4f) = %.6f\n", x, mySin(x, M));
}

/* ===================== BAI 16 ===================== */

float myArcsin(float x, int M) {
    float eps = (float)pow(10, -M), term = x, res = x;
    int n = 0;
    while (fabs(term) > eps) {
        n++;
        term = term * x * x * (2 * n - 1) * (2 * n - 1) / (2 * n * (2 * n + 1));
        res += term;
    }
    return res;
}

/* Bai 16: Tinh arcsin(x) bang chuoi Taylor, xap xi PI = 6*arcsin(0.5) */
void bth16() {
    printf("PI xap xi: %f\n", 6 * myArcsin(0.5f, 6));
}

/* ===================== BAI 17 ===================== */

float tinhTong(int n) {
    float s = 0;
    for (int i = 1; i <= n; i++) s += 1.0f / i;
    return s;
}

/* Bai 17: Tinh tong chuoi 1 + 1/2 + 1/3 + ... + 1/n */
void bth17() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Tong 1+1/2+...+1/%d = %f\n", n, tinhTong(n));
}

/* ===================== BAI 18 ===================== */

void printDiamond(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++) printf("*");
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++) printf("*");
        printf("\n");
    }
}

/* Bai 18: Ve hinh thoi sao N hang */
void bth18() {
    int n;
    printf("Nhap N: ");
    scanf("%d", &n);
    printDiamond(n);
}

/* ===================== BAI 19 ===================== */

void printPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) printf("  ");
        for (int j = 0; j < i; j++) printf("%c ", 'A' + j);
        for (int j = i - 2; j >= 0; j--) printf("%c ", 'A' + j);
        printf("\n");
    }
}

/* Bai 19: Ve kim tu thap chu cai doi xung */
void bth19() {
    int n;
    printf("Nhap N: ");
    scanf("%d", &n);
    printPyramid(n);
}

/* ===================== BAI 20 ===================== */

int highestCommonFactor(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

/* Bai 20: Tim UCLN cua hai so nguyen duong bang thuat toan Euclid */
void bth20() {
    int n1, n2;
    printf("Nhap hai so nguyen duong: ");
    scanf("%d %d", &n1, &n2);
    printf("UCLN(%d, %d) = %d\n", n1, n2, highestCommonFactor(n1, n2));
}

/* ===================== BAI 21 ===================== */

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int lowestCommonMultiple(int a, int b) {
    if (a == 0 || b == 0) return 0;
    return (a * b) / gcd(a, b);
}

/* Bai 21: Tim BCNN cua hai so nguyen duong qua UCLN */
void bth21() {
    int a, b;
    printf("Nhap hai so nguyen duong: ");
    scanf("%d %d", &a, &b);
    printf("BCNN(%d, %d) = %d\n", a, b, lowestCommonMultiple(a, b));
}

/* ===================== BAI 22 ===================== */

float mySinh(float x) {
    float term = x, res = x;
    int n = 1;
    while (fabs(term) > 1e-10) {
        term = term * x * x / ((2 * n) * (2 * n + 1));
        res += term;
        n++;
    }
    return res;
}

/* Bai 22: Tinh sinh(x) = x + x^3/3! + x^5/5! + ... bang chuoi Taylor */
void bth22() {
    float x;
    printf("Nhap x: ");
    scanf("%f", &x);
    printf("sinh(%f) = %f\n", x, mySinh(x));
}

/* ===================== BAI 23 ===================== */

float myCosh(float x) {
    float term = 1, res = 1;
    int n = 1;
    while (fabs(term) > 1e-10) {
        term = term * x * x / ((2 * n - 1) * (2 * n));
        res += term;
        n++;
    }
    return res;
}

/* Bai 23: Tinh cosh(x) = 1 + x^2/2! + x^4/4! + ... bang chuoi Taylor */
void bth23() {
    float x;
    printf("Nhap x: ");
    scanf("%f", &x);
    printf("cosh(%f) = %f\n", x, myCosh(x));
}

/* ===================== BAI 24 ===================== */

float myArctan(float x) {
    float term = x, res = x;
    int n = 1;
    while (fabs(term) > 1e-10) {
        n++;
        term = -term * x * x * (2 * n - 3) / (2 * n - 1);
        res += term;
    }
    return res;
}

/* Bai 24: Tinh arctan(x) = x - x^3/3 + x^5/5 - ... (|x| <= 1) */
void bth24() {
    float x;
    printf("Nhap x (|x| <= 1): ");
    scanf("%f", &x);
    if (fabs(x) <= 1)
        printf("arctan(%f) = %f\n", x, myArctan(x));
    else
        printf("Gia tri x phai nam trong khoang [-1, 1].\n");
}