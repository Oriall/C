#include <stdio.h>
#include <math.h>

void bth1();
void bth2();
void bth3();
void bth4();
void bth5a();
void bth5b();
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
int  menu();

int main() {
    int tuy_chon = 0;
    tuy_chon = menu();

    switch (tuy_chon) {
        case 1:  bth1();  break;
        case 2:  bth2();  break;
        case 3:  bth3();  break;
        case 4:  bth4();  break;
        case 5:  bth5a(); break;
        case 6:  bth5b(); break;
        case 7:  bth6();  break;
        case 8:  bth7();  break;
        case 9:  bth8();  break;
        case 10: bth9();  break;
        case 11: bth10(); break;
        case 12: bth11(); break;
        case 13: bth12(); break;
        case 14: bth13(); break;
        case 15: bth14(); break;
        case 16: bth15(); break;
        case 17: bth16(); break;
        case 18: bth17(); break;
        case 19: bth18(); break;
        case 20: bth19(); break;
        case 21: bth20(); break;
        default:
            printf("Lua chon khong hop le!\n");
    }

    return 0;
}

int menu() {
    int tuy_chon = 0;
    printf("\n 1.  Bai 1  - In ky tu cho den dau cham (while + putchar)");
    printf("\n 2.  Bai 2  - Nhan doi so cho den khi vuot 1000 (while)");
    printf("\n 3.  Bai 3  - Tinh tong 1 den 50 (do-while)");
    printf("\n 4.  Bai 4  - Demo pre/post increment trong do-while");
    printf("\n 5.  Bai 5a - Vong for voi continue (bo qua i=5)");
    printf("\n 6.  Bai 5b - Loc ky tu: bo so, dung tai dau cham (break/continue)");
    printf("\n 7.  Bai 6  - Rut gon khoang trang lien tiep (while + EOF)");
    printf("\n 8.  Bai 7  - Hien thi escape sequence ro rang (while + EOF)");
    printf("\n 9.  Bai 8  - Tinh trung binh diem cho den khi nhap am (while + scanf)");
    printf("\n10.  Bai 9  - Tinh tong chuoi cos(x) den do chinh xac 10^-n (do-while)");
    printf("\n11.  Bai 10 - Kiem tra so doi xung (palindrome)");
    printf("\n12.  Bai 11 - Chuyen so nguyen thap phan sang nhi phan");
    printf("\n13.  Bai 12 - Chuyen so nhi phan sang thap phan");
    printf("\n14.  Bai 13 - Chuyen so bat phan sang nhi phan");
    printf("\n15.  Bai 14 - Tim so Fibonacci lon nhat nho hon N");
    printf("\n16.  Bai 15 - Tinh tong chuoi e^x bang cong thuc Taylor");
    printf("\n17.  Bai 16 - Chuyen so nhi phan sang bat phan");
    printf("\n18.  Bai 17 - Tinh sinh(x) bang chuoi Taylor");
    printf("\n19.  Bai 18 - Tinh cosh(x) bang chuoi Taylor");
    printf("\n20.  Bai 19 - Tinh arctan(x) bang chuoi Taylor");
    printf("\n21.  Bai 20 - Tinh sin(x) bang chuoi Taylor");
    printf("\n-------------------------------------------------");
    printf("\nNhap tuy chon: ");
    scanf("%d", &tuy_chon);
    system("cls");
    return tuy_chon;
}

/* ===================== BAI 1 - 10 ===================== */

/* Bai 1: In ky tu duoc nhap cho den khi gap dau cham '.' */
#define PERIOD '.'
void bth1() {
    char ch;
    while ((ch = getchar()) != PERIOD) {
        putchar(ch);
    }
    printf("Good Bye.\n");
}

/* Bai 2: Nhan doi bien product tu 2 cho den khi vuot 1000 */
void bth2() {
    int product = 2;
    while (product <= 1000) {
        product = 2 * product;
    }
    printf("product: %d\n", product);
}

/* Bai 3: Tinh tong 1 + 2 + ... + 50 bang do-while */
void bth3() {
    int i = 1, sum = 0;
    do {
        sum += i;
        i++;
    } while (i <= 50);
    printf("The sum of 1 to 50 is %d\n", sum);
}

/* Bai 4: Demo su khac nhau giua pre-increment va post-increment trong do-while */
void bth4() {
    int counter = 1;
    do {
        printf("%d ", counter);
    } while (++counter <= 10);
    printf("\ncounter: %d\n", counter);

    counter = 1;
    do {
        printf("%d ", counter);
    } while (counter++ <= 10);
    printf("\ncounter: %d\n", counter);
}

/* Bai 5a: Vong for in 1-10, bo qua so 5 bang continue */
void bth5a() {
    int i;
    for (i = 1; i <= 10; i++) {
        if (i == 5) continue;
        printf("%d\n", i);
    }
}

/* Bai 5b: Doc ky tu, bo cac chu so, dung khi gap dau cham */
void bth5b() {
    int c;
    while ((c = getchar()) != -1) {
        if (c == '.') break;
        else if (c >= '0' && c <= '9') continue;
        putchar(c);
    }
    printf("*** Good Bye ***\n");
}

/* Bai 6: Rut gon nhieu khoang trang lien tiep thanh mot khoang trang */
void bth6() {
    int c, inspace = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (inspace == 0) {
                inspace = 1;
                putchar(c);
            }
        } else {
            inspace = 0;
            putchar(c);
        }
    }
}

/* Bai 7: Hien thi cac escape sequence duoi dang chuoi ro rang (\n, \t, ...) */
void bth7() {
    int c, d;
    while ((c = getchar()) != EOF) {
        d = 0;
        if (c == '\\') { putchar('\\'); putchar('\\'); d = 1; }
        if (c == '\t') { putchar('\\'); putchar('t');  d = 1; }
        if (c == '\b') { putchar('\\'); putchar('b');  d = 1; }
        if (c == '\n') { putchar('\\'); putchar('n');  d = 1; }
        if (c == '\r') { putchar('\\'); putchar('r');  d = 1; }
        if (d == 0) putchar(c);
    }
}

/* Bai 8: Nhap diem (>=0) lien tuc, tinh trung binh khi nhap so am */
void bth8() {
    float score, sum = 0;
    int count = 0;
    while (scanf("%f", &score) && score >= 0) {
        sum += score;
        count++;
    }
    if (count > 0) printf("%.2f\n", sum / count);
}

/* Bai 9: Tinh tong chuoi cos(x) ~ 1 - x^2/2! + x^4/4! - ...
          Dung khi |so hang| < 10^(-n) */
typedef long long ll;
ll giaithua(int n) {
    ll tong = 1;
    for (int j = 1; j <= n; j++) {
        tong = tong * j;
    }
    return tong;
}

void bth9() {
    int n;
    float x;
    printf("Nhap x: ");
    scanf("%f", &x);
    printf("Nhap n (do chinh xac 10^-n): ");
    scanf("%d", &n);

    double dk   = pow(10, -n);
    double tong = 1.0, ct = 1.0;
    int i = 1;
    do {
        ct   = pow(-1, i) * pow(x, 2 * i) / giaithua(2 * i);
        tong += ct;
        i++;
    } while (fabs(ct) >= dk);

    printf("cos(%.2f) ~ %.6f\n", x, tong);
}

/* Bai 10: Kiem tra so co phai so doi xung (palindrome) hay khong */
void bth10() {
    int n, rev = 0, rem, orig;
    printf("Nhap so nguyen: ");
    scanf("%d", &n);
    orig = n;
    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    if (orig == rev) printf("YES\n");
    else printf("NO\n");
}

/* ===================== BAI 11 - 20 ===================== */

/* Bai 11: Chuyen so nguyen thap phan sang nhi phan */
void bth11() {
    int n, bin[32], i = 0;
    printf("Nhap so nguyen: ");
    scanf("%d", &n);
    if (n == 0) { printf("0\n"); return; }
    while (n > 0) {
        bin[i++] = n % 2;
        n /= 2;
    }
    for (int j = i - 1; j >= 0; j--) printf("%d", bin[j]);
    printf("\n");
}

/* Bai 12: Chuyen so nhi phan (nhap o dang thap phan) sang thap phan */
void bth12() {
    long long n;
    int dec = 0, i = 0;
    printf("Nhap so nhi phan: ");
    scanf("%lld", &n);
    while (n != 0) {
        dec += (n % 10) * (1 << i);
        n /= 10;
        i++;
    }
    printf("%d\n", dec);
}

/* Bai 13: Chuyen so bat phan sang nhi phan (moi chu so -> 3 bit) */
void bth13() {
    char octal[50];
    int i = 0;
    printf("Nhap so bat phan: ");
    scanf("%s", octal);
    while (octal[i]) {
        switch (octal[i]) {
            case '0': printf("000"); break;
            case '1': printf("001"); break;
            case '2': printf("010"); break;
            case '3': printf("011"); break;
            case '4': printf("100"); break;
            case '5': printf("101"); break;
            case '6': printf("110"); break;
            case '7': printf("111"); break;
            default: break;
        }
        i++;
    }
    printf("\n");
}

/* Bai 14: Tim so Fibonacci lon nhat nho hon N */
void bth14() {
    int n, f0 = 0, f1 = 1, fn = 1;
    printf("Nhap N: ");
    scanf("%d", &n);
    while (f1 + f0 < n) {
        fn = f1 + f0;
        f0 = f1;
        f1 = fn;
    }
    printf("So Fibonacci lon nhat nho hon %d: %d\n", n, fn);
}

/* Bai 15: Tinh e^x bang chuoi Taylor: 1 + x + x^2/2! + x^3/3! + ... */
void bth15() {
    double x, eps = 1e-10, term = 1, sum = 1;
    int n = 1;
    printf("Nhap x: ");
    scanf("%lf", &x);
    while (fabs(term) > eps) {
        term *= x / n;
        sum  += term;
        n++;
    }
    printf("e^(%.2lf) = %.2lf\n", x, sum);
}

/* Bai 16: Chuyen so nhi phan sang bat phan (qua trung gian thap phan) */
void bth16() {
    long long binary;
    int octal = 0, decimal = 0, i = 0;
    printf("Nhap so nhi phan: ");
    scanf("%lld", &binary);
    while (binary != 0) {
        decimal += (binary % 10) * (int)pow(2, i);
        ++i;
        binary /= 10;
    }
    i = 1;
    while (decimal != 0) {
        octal  += (decimal % 8) * i;
        decimal /= 8;
        i *= 10;
    }
    printf("%d\n", octal);
}

/* Bai 17: Tinh sinh(x) = x + x^3/3! + x^5/5! + ...
           Cong thuc truy hoi: term_moi = term_cu * x^2 / ((2n)*(2n+1)) */
void bth17() {
    double x, term, sum;
    int n = 1;
    printf("Nhap x: ");
    if (scanf("%lf", &x) != 1) return;
    term = x;
    sum  = x;
    while (fabs(term) > 1e-10) {
        term = term * (x * x) / ((2 * n) * (2 * n + 1));
        sum += term;
        n++;
    }
    printf("sinh(%.2f) = %lf\n", x, sum);
}

/* Bai 18: Tinh cosh(x) = 1 + x^2/2! + x^4/4! + ...
           Cong thuc truy hoi: term_moi = term_cu * x^2 / ((2n-1)*(2n)) */
void bth18() {
    double x, term, sum;
    int n = 1;
    printf("Nhap x: ");
    if (scanf("%lf", &x) != 1) return;
    term = 1;
    sum  = 1;
    while (fabs(term) > 1e-10) {
        term = term * (x * x) / ((2 * n - 1) * (2 * n));
        sum += term;
        n++;
    }
    printf("cosh(%.2f) = %.2lf\n", x, sum);
}

/* Bai 19: Tinh arctan(x) = x - x^3/3 + x^5/5 - ...
           Dung khi |so hang| < 1e-10 */
void bth19() {
    double x, S, term;
    int n;
    printf("Nhap x: ");
    scanf("%lf", &x);
    S    = x;
    term = x;
    n    = 1;
    while (1) {
        n++;
        term = -term * x * x;
        double next = term / (2 * n - 1);
        if (fabs(next) < 1e-10) break;
        S += next;
    }
    printf("arctan(%.2f) = %.10f\n", x, S);
}

/* Bai 20: Tinh sin(x) = x - x^3/3! + x^5/5! - ...
           Cong thuc truy hoi: term_moi = -term_cu * x^2 / ((2n)*(2n+1)) */
void bth20() {
    double x, term, sum;
    int n = 1;
    printf("Nhap x: ");
    scanf("%lf", &x);
    term = x;
    sum  = x;
    while (fabs(term) > 1e-10) {
        term = -term * x * x / ((2 * n) * (2 * n + 1));
        sum += term;
        n++;
    }
    printf("sin(%.2f) = %lf\n", x, sum);
}