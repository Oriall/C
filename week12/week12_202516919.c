#include <stdio.h>
#include <stdlib.h>

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
/* In dia chi cua tung phan tu mang x[4] va dia chi mang */
void bth1() {
    int x[4];
    int i;

    for (i = 0; i < 4; ++i)
        printf("&x[%d] = %p\n", i, (void*)&x[i]);

    printf("Address of array x: %p\n", (void*)x);
}

/* ===================== BAI 2 ===================== */
/* Con tro p tro vao dau mang, q = p + 2; in dia chi va gia tri, khoang cach */
void bth2() {
    int a[3] = {17, 289, 4913};
    int *p, *q;

    p = a;
    q = p + 2;

    printf("a is %p\n", (void*)a);
    printf("p is %p, q is %p\n", (void*)p, (void*)q);
    printf("p points to %d and q points to %d\n", *p, *q);
    printf("The pointer distance between p and q is %ld\n", q - p);
    printf("The integer distance between p and q is %ld\n", (long int)q - (long int)p);
}

/* ===================== BAI 3 ===================== */
/* Nhap 3 so bang con tro (x + i), tinh tong bang *(x + i) */
void bth3() {
    int i, x[3], sum = 0;

    printf("Enter 3 numbers: ");
    for (i = 0; i < 3; ++i) {
        scanf("%d", x + i);
        sum += *(x + i);
    }

    printf("Sum = %d\n", sum);
}

/* ===================== BAI 4 ===================== */
/* Con tro ptr tro vao x[2]; truy cap phan tu truoc/sau bang offset */
void bth4() {
    int x[5] = {1, 2, 3, 4, 5};
    int* ptr;

    ptr = &x[2];

    printf("*ptr = %d \n", *ptr);
    printf("*(ptr+1) = %d \n", *(ptr + 1));
    printf("ptr[1] = %d \n", ptr[1]);
    printf("*(ptr-1) = %d\n", *(ptr - 1));
    printf("ptr[-1] = %d\n", ptr[-1]);
}

/* ===================== BAI 5 ===================== */
/* Ham addNumbers nhan con tro mang, tinh tong 5 phan tu bang de quy con tro */
int addNumbers(int *fiveNumbers) {
    int i, sum = 0;
    for (i = 0; i < 5; i++, fiveNumbers++)
        sum += *fiveNumbers;
    return sum;
}

void bth5() {
    int X[5];
    int i, S;

    for (i = 0; i < 5; i++)
        scanf("%d", &X[i]);

    S = addNumbers(X);
    printf("%d\n", S);
}

/* ===================== BAI 6 ===================== */
/* Ham countEven nhan con tro mang, dem so phan tu chan bang *(arr + i) */
int countEven(int* arr, int size) {
    int i, count = 0;
    for (i = 0; i < size; i++)
        if (*(arr + i) % 2 == 0) count++;
    return count;
}

void bth6() {
    int N, i, S;
    scanf("%d", &N);

    int X[N];
    for (i = 0; i < N; i++)
        scanf("%d", &X[i]);

    S = countEven(X, N);
    printf("%d\n", S);
}

/* ===================== BAI 7 ===================== */
/* Ham maximum tra ve con tro den phan tu lon nhat trong mang double */
double* maximum(double* a, int size) {
    if (size <= 0) return NULL;
    int i;
    double* max_ptr = a;
    for (i = 1; i < size; i++)
        if (*(a + i) > *max_ptr)
            max_ptr = (a + i);
    return max_ptr;
}

void bth7() {
    int N, i;
    scanf("%d", &N);

    double X[N];
    for (i = 0; i < N; i++)
        scanf("%lf", &X[i]);

    double* pS = maximum(X, N);
    if (pS != NULL) {
        printf("%p\n", (void*)pS);
        printf("%.2lf\n", *pS);
    }
}

/* ===================== BAI 8 ===================== */
/* getSales: nhap doanh so bang con tro; totalSales: tinh tong 4 quy */
void getSales(double *sales, int quarters) {
    int i;
    for (i = 0; i < quarters; i++)
        scanf("%lf", sales + i);
}

double totalSales(double *sales, int quarters) {
    int i;
    double total = 0;
    for (i = 0; i < quarters; i++)
        total += *(sales + i);
    return total;
}

void bth8() {
    double quarterly_sales[4];
    getSales(quarterly_sales, 4);
    printf("%.2lf\n", totalSales(quarterly_sales, 4));
}

/* ===================== BAI 9 ===================== */
/* Mang con tro ptrarray[4] tro lan luot den w, x, y, z; in gia tri va dia chi */
void bth9() {
    int* ptrarray[4];
    int w = 100, x = 200, y = 300, z = 400;

    ptrarray[0] = &w;
    ptrarray[1] = &x;
    ptrarray[2] = &y;
    ptrarray[3] = &z;

    for (int i = 0; i < 4; i++)
        printf("The value %d has the adddress %p\n", *ptrarray[i], (void*)ptrarray[i]);
}

/* ===================== BAI 10 ===================== */
/* Mang con tro ptr[MAX] tro den tung phan tu cua var[]; in gia tri va dia chi */
const int MAX = 3;

void bth10() {
    int var[] = {10, 100, 200};
    int i, *ptr[3];

    for (i = 0; i < MAX; i++)
        ptr[i] = &var[i];

    for (i = 0; i < MAX; i++)
        printf("Value of var[%d] = %d\n", i, *ptr[i]);

    for (i = 0; i < MAX; i++)
        printf("%p %p\n", (void*)ptr[i], (void*)&var[i]);
}

/* ===================== BAI 11 ===================== */
/* Mang con tro char* names[MAX] tro den cac chuoi; in gia tri, ky tu dau va dia chi */
void bth11() {
    const int MAX11 = 4;
    char *names[] = {
        "Zara Ali",
        "Hina Ali",
        "Nuha Ali",
        "Sara Ali"
    };
    int i;

    for (i = 0; i < MAX11; i++)
        printf("Value of names[%d] = %s\n", i, names[i]);

    for (i = 0; i < MAX11; i++)
        printf("%p %c %p\n", (void*)&names[i], *names[i], (void*)names[i]);
}

/* ===================== BAI 12 ===================== */
/* Ham reversearray dao nguoc mang bang hai con tro i, j dung *(arr+i), *(arr+j) */
void reversearray(int *arr, int size) {
    int i = 0, j = size - 1, tmp;
    while (i < j) {
        tmp = *(arr + i);
        *(arr + i) = *(arr + j);
        *(arr + j) = tmp;
        i++;
        j--;
    }
}

void bth12() {
    int N, i;
    scanf("%d", &N);

    int a[N];
    for (i = 0; i < N; i++)
        scanf("%d", &a[i]);

    reversearray(a, N);

    for (i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\n");
}

/* ===================== BAI 13 ===================== */
/* ++*p tang gia tri tai *p (khong dich con tro); sau do p += 2 dich con tro */
void bth13() {
    int arr[] = {1, 2, 3, 4, 5};
    int *p = arr;

    printf("%d ", ++*p);   /* Tang arr[0] len 1 => in 2 */
    p += 2;
    printf("%d\n", *p);    /* p tro vao arr[2] => in 3 */
}

/* ===================== BAI 14 ===================== */
/* Ham f(char **p): dich p them (sizeof(int)-1) buoc, lay phan tu [-1] */
void f(char **p) {
    char *t;
    t = (p += sizeof(int) - 1)[-1];
    printf("%s\n", t);
    printf("%p\n", (void*)t);
}

void bth14() {
    char *argv[] = { "ab", "cd", "ef", "gh", "ij", "kl" };
    int i;

    for (i = 0; i < 6; i++)
        printf("%p\n", (void*)&argv[i]);

    f(argv);
}

/* ===================== BAI 15 ===================== */
/* ptr2 = ptr1 ghi nho dia chi cu; ptr1 tro sang chuoi moi; ptr2 van giu chuoi cu */
void bth15() {
    char *ptr1 = "hello world";
    char *ptr2;

    ptr2 = ptr1;
    ptr1 = "program";

    printf("Xau ptr 1 : %s \t Xau ptr2: %s \n", ptr1, ptr2);
}

/* ===================== BAI 16 ===================== */
/* *&*&*ptr: & va * triet tieu nhau, ket qua la ky tu dau chuoi 'A' */
void bth16() {
    char *ptr = "ABCDE";
    printf("%c\n", *&*&*ptr);
}

/* ===================== BAI 17 ===================== */
/* Con tro void* co the tro den bat ky kieu du lieu; ep kieu (char*)pc de duyet mang */
void bth17() {
    int i, N = 5;
    float X = 3.5;
    char A[4] = {'a', 'b', 'c', 'd'};
    void *pi, *pf, *pc = A;

    pi = &N;
    pf = &X;
    printf("%p\n%p\n", pi, pf);

    for (i = 0; i < 4; i++)
        printf("%c", *((char*)pc++));
    printf("\n");
}

/* ===================== BAI 18 ===================== */
/* Ep void* sang char* luu vao pTmp, dung *(pTmp++) de duyet mang ky tu */
void bth18() {
    char A[4] = {'a', 'b', 'c', 'd'};
    char *pTmp;
    void *pC = A;
    pTmp = (char*)pC;

    for (int i = 0; i < 4; i++)
        printf("%c ", *(pTmp++));
    printf("\n");
}

/* ===================== MENU ===================== */
int menu() {
    int tuy_chon = 0;
    printf("\n 1.  Bai 1  - In dia chi cac phan tu mang x[4]");
    printf("\n 2.  Bai 2  - Con tro p va q, khoang cach dia chi va gia tri");
    printf("\n 3.  Bai 3  - Nhap mang bang con tro, tinh tong");
    printf("\n 4.  Bai 4  - Truy cap mang qua con tro offset (ptr+1, ptr-1)");
    printf("\n 5.  Bai 5  - Ham addNumbers nhan con tro, tinh tong 5 phan tu");
    printf("\n 6.  Bai 6  - Ham countEven dem so phan tu chan");
    printf("\n 7.  Bai 7  - Ham maximum tra ve con tro phan tu lon nhat");
    printf("\n 8.  Bai 8  - getSales va totalSales bang con tro");
    printf("\n 9.  Bai 9  - Mang con tro ptrarray[4] tro den bien don");
    printf("\n10.  Bai 10 - Mang con tro ptr[MAX] tro den mang var[]");
    printf("\n11.  Bai 11 - Mang con tro char* names[], in gia tri va dia chi");
    printf("\n12.  Bai 12 - Ham reversearray dao nguoc mang bang con tro");
    printf("\n13.  Bai 13 - Bieu thuc ++*p va dich con tro p += 2");
    printf("\n14.  Bai 14 - Ham f(char **p), phep tinh con tro kep");
    printf("\n15.  Bai 15 - Con tro chuoi: gan lai ptr1, ptr2 giu chuoi cu");
    printf("\n16.  Bai 16 - Bieu thuc *&*&*ptr tren chuoi ky tu");
    printf("\n17.  Bai 17 - Con tro void* tro den int, float, char");
    printf("\n18.  Bai 18 - Ep kieu void* sang char* de duyet mang ky tu");
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