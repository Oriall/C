#include <stdio.h>
#include <stdlib.h>
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
int  menu();

/* ===================== BAI 1 ===================== */
/* In dia chi bo nho cua bien float bang toan tu & */
void bth1() {
    float fl = 3.14;
    printf("fl's address = %p\n", (void *)&fl);
}

/* ===================== BAI 2 ===================== */
/* Khai bao con tro, nhap 3 so nguyen qua con tro, in gia tri va dia chi */
void bth2() {
    int x, y, z;
    int *px = &x;
    int *py = &y;
    int *pz = &z;

    scanf("%d %d %d", px, py, pz);

    printf("x = %d, y = %d, z = %d\n", *px, *py, *pz);
    printf("Address: x = %p, y = %p, z = %p\n", (void *)px, (void *)py, (void *)pz);
}

/* ===================== BAI 3 ===================== */
/* Dung mot con tro de cong 100 vao ba bien khac nhau */
void bth3() {
    int x = 25, y = 50, z = 75;
    int *ptr;

    ptr = &x;
    *ptr += 100;

    ptr = &y;
    *ptr += 100;

    ptr = &z;
    *ptr += 100;

    printf("x = %d, y = %d, z = %d\n", x, y, z);
}

/* ===================== BAI 4 ===================== */
/* Ham swap: hoan doi gia tri 2 bien qua con tro */
void swap(int *px, int *py) {
    int temp = *px;
    *px = *py;
    *py = temp;
}

void bth4() {
    int a, b;
    scanf("%d %d", &a, &b);

    swap(&a, &b);

    printf("%d %d\n", a, b);
}

/* ===================== BAI 5 ===================== */
/* Ham swap3: hoan doi xoay vong 3 bien (a<-c, b<-a, c<-b) */
void swap3(int *a, int *b, int *c) {
    int temp = *c;
    *c = *b;
    *b = *a;
    *a = temp;
}

void bth5() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    printf("%d %d %d\n", x, y, z);
    swap3(&x, &y, &z);
    printf("%d %d %d\n", x, y, z);
}

/* ===================== BAI 6 ===================== */
/* Minh hoa su khac biet giua hoan doi gia tri bien va hoan doi con tro */
void bth6() {
    int x = 10, y = 20, z = 30;
    int *p = &x, *q = &y, *r = &z;

    printf("%d %d %d | %d %d %d\n", x, y, z, *p, *q, *r);

    {
        int temp = z;
        z = y;
        y = x;
        x = temp;
        printf("%d %d %d | %d %d %d\n", x, y, z, *p, *q, *r);
    }

    x = 10; y = 20; z = 30;
    p = &x; q = &y; r = &z;
    {
        int *temp = r;
        r = q;
        q = p;
        p = temp;
        printf("%d %d %d | %d %d %d\n", x, y, z, *p, *q, *r);
    }
}

/* ===================== BAI 7 ===================== */
/* 7a: Tang luong them 3 trieu neu nam lam > 3
   7b: Dem so uoc cua n qua con tro */
void incomeplus(long *current, int year) {
    if (year > 3) {
        *current += 3000000;
    }
}

void count(int n, int *nb) {
    int c = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) c++;
    }
    *nb = c;
}

void bth7() {
    int sub;
    printf("  7a. Tang luong them 3 trieu neu nam lam > 3\n");
    printf("  7b. Dem so uoc cua n qua con tro\n");
    printf("  Chon (1=7a, 2=7b): ");
    scanf("%d", &sub);

    if (sub == 1) {
        long salary;
        int year;
        scanf("%ld %d", &salary, &year);
        incomeplus(&salary, year);
        printf("%ld\n", salary);
    } else {
        int n, res;
        scanf("%d", &n);
        count(n, &res);
        printf("%d\n", res);
    }
}

/* ===================== BAI 8 ===================== */
/* Ham fun nhan con tro va gan gia tri 30 vao bien duoc tro */
void fun(int *ptr) {
    *ptr = 30;
}

void bth8() {
    int y = 20;
    fun(&y);
    printf("%d\n", y);
}

/* ===================== BAI 9 ===================== */
/* Minh hoa cac phep toan tren con tro: gan, cong, tang */
void bth9() {
    int *ptr;
    int x;
    ptr = &x;
    *ptr = 0;
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);
    *ptr += 5;
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);
    (*ptr)++;
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);
}

/* ===================== BAI 10 ===================== */
/* Truy cap tung byte cua bien int qua con tro char */
void bth10() {
    int a;
    char *x;
    x = (char *)&a;
    a = 512;
    x[0] = 1;
    x[1] = 2;
    printf("%d\n", a);
}

/* ===================== BAI 11 ===================== */
/* Phan tich ham f: p=q chi doi huong cuc bo, *p=2 thay doi *q (tuc j) */
int i_b11 = 0, j_b11 = 1;

void f_b11(int *p, int *q) {
    p = q;
    *p = 2;
}

void bth11() {
    f_b11(&i_b11, &j_b11);
    printf("%d %d\n", i_b11, j_b11);
}

/* ===================== BAI 12 ===================== */
/* Ham voi con tro kep (**ppz): minh hoa 2 cap do gian tiep */
int f_b12(int x, int *py, int **ppz) {
    int y, z;
    **ppz += 1;
    z = **ppz;
    *py += 2;
    y = *py;
    x += 3;
    return x + y + z;
}

void bth12() {
    int c, *b, **a;
    c = 4;
    b = &c;
    a = &b;
    printf("%d\n", f_b12(c, b, a));
}

/* ===================== BAI 13 ===================== */
/* Phan tich bien x toan cuc vs bien x cuc bo trong ham P */
int x_b13;

void Q(int z) {
    z += x_b13;
    printf("%d ", z);
}

void P(int *y) {
    int x = *y + 2;
    Q(x);
    *y = x - 1;
    printf("%d ", x);
}

void bth13() {
    x_b13 = 5;
    P(&x_b13);
    printf("%d\n", x_b13);
}

/* ===================== BAI 14 ===================== */
/* Ham f: m truyen theo gia tri (khong doi ben ngoai), *p truyen theo con tro (thay doi) */
void f_b14(int *p, int m) {
    m = m + 5;
    *p = *p + m;
    return;
}

void bth14() {
    int i = 5, j = 10;
    f_b14(&i, j);
    printf("%d\n", i + j);
}

/* ===================== BAI 15 ===================== */
/* 15a: Ham tra ve con tro den so lon hon trong 2 so
   15b: Ham tra ve con tro den so lon nhat trong 3 so */
int* findLargerTwo(int *numa, int *numb) {
    if (*numa > *numb) return numa;
    else return numb;
}

int* findLarger(int *n1, int *n2, int *n3) {
    int *max = n1;
    if (*n2 > *max) max = n2;
    if (*n3 > *max) max = n3;
    return max;
}

void bth15() {
    int sub;
    printf("  15a. Tim so lon hon trong 2 so\n");
    printf("  15b. Tim so lon nhat trong 3 so\n");
    printf("  Chon (1=15a, 2=15b): ");
    scanf("%d", &sub);

    if (sub == 1) {
        int numa = 5, numb = 6;
        int *pMax = findLargerTwo(&numa, &numb);
        printf("%d\n", *pMax);
    } else {
        int a = 12, b = 45, c = 23;
        int *pMax = findLarger(&a, &b, &c);
        printf("%d\n", *pMax);
    }
}

/* ===================== BAI 16 ===================== */
/* In alphabet A-Z bang con tro char */
void bth16() {
    char ch;
    char *pCh;
    pCh = &ch;
    for (ch = 'A'; ch <= 'Z'; ch++) {
        printf("%c ", *pCh);
    }
    printf("\n");
}

/* ===================== BAI 17 ===================== */
/* Giai phuong trinh bac 1: ax + b = 0, tra ket qua qua con tro */
int gptb1(float a, float b, float *x) {
    if (a == 0) {
        if (b == 0) return 1;
        else return 2;
    }
    *x = -b / a;
    return 0;
}

void bth17() {
    float a = 2.0, b = -4.0, res;
    int code = gptb1(a, b, &res);
    if (code == 0)
        printf("%.2f\n", res);
    else
        printf("%d\n", code);
}

/* ===================== BAI 18 ===================== */
/* Giai phuong trinh bac 2: ax^2 + bx + c = 0, tra nghiem qua con tro */
int gptb2(float a, float b, float c, float *x1, float *x2) {
    if (a == 0) return 3;
    float delta = b * b - 4 * a * c;
    if (delta < 0) return 2;
    if (delta == 0) {
        *x1 = *x2 = -b / (2 * a);
        return 0;
    }
    *x1 = (-b + sqrt(delta)) / (2 * a);
    *x2 = (-b - sqrt(delta)) / (2 * a);
    return 1;
}

void bth18() {
    float a = 1.0, b = -3.0, c = 2.0, r1, r2;
    int code = gptb2(a, b, c, &r1, &r2);
    if (code == 1 || code == 0)
        printf("%.2f %.2f\n", r1, r2);
    else
        printf("%d\n", code);
}

/* ===================== MENU ===================== */
int menu() {
    int tuy_chon = 0;
    printf("\n 1.  Bai 1  - In dia chi bo nho cua bien float");
    printf("\n 2.  Bai 2  - Khai bao con tro, nhap/in gia tri va dia chi");
    printf("\n 3.  Bai 3  - Dung mot con tro cong 100 vao ba bien");
    printf("\n 4.  Bai 4  - Ham swap hoan doi 2 bien qua con tro");
    printf("\n 5.  Bai 5  - Ham swap3 hoan doi xoay vong 3 bien");
    printf("\n 6.  Bai 6  - Hoan doi gia tri bien vs hoan doi con tro");
    printf("\n 7.  Bai 7  - Tang luong (7a) / Dem so uoc (7b)");
    printf("\n 8.  Bai 8  - Ham fun gan gia tri qua con tro");
    printf("\n 9.  Bai 9  - Cac phep toan tren con tro (gan, +=, ++)");
    printf("\n10.  Bai 10 - Truy cap tung byte int qua con tro char");
    printf("\n11.  Bai 11 - Phan tich ham f: doi huong con tro cuc bo");
    printf("\n12.  Bai 12 - Con tro kep (**ppz) va 2 cap do gian tiep");
    printf("\n13.  Bai 13 - Bien x toan cuc vs x cuc bo trong ham P/Q");
    printf("\n14.  Bai 14 - Truyen gia tri vs truyen con tro trong ham f");
    printf("\n15.  Bai 15 - Ham tra con tro: so lon hon (15a) / lon nhat (15b)");
    printf("\n16.  Bai 16 - In alphabet A-Z bang con tro char");
    printf("\n17.  Bai 17 - Giai phuong trinh bac 1 qua con tro");
    printf("\n18.  Bai 18 - Giai phuong trinh bac 2 qua con tro");
    printf("\n-------------------------------------------------");
    printf("\nNhap tuy chon: ");
    scanf("%d", &tuy_chon);
    return tuy_chon;
}

/* ===================== MAIN ===================== */
int main() {
    int tuy_chon = menu();

    switch (tuy_chon) {
        case 1:  bth1();  break;
        case 2:  bth2();  break;
        case 3:  bth3();  break;
        case 4:  bth4();  break;
        case 5:  bth5();  break;
        case 6:  bth6();  break;
        case 7:  bth7();  break;
        case 8:  bth8();  break;
        case 9:  bth9();  break;
        case 10: bth10(); break;
        case 11: bth11(); break;
        case 12: bth12(); break;
        case 13: bth13(); break;
        case 14: bth14(); break;
        case 15: bth15(); break;
        case 16: bth16(); break;
        case 17: bth17(); break;
        case 18: bth18(); break;
        default:
            printf("Lua chon khong hop le!\n");
    }

    return 0;
}