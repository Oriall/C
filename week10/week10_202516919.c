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
void bth19();
int  menu();

/* ===================== BAI 1 ===================== */
/* Khoi tao mang s[] voi cong thuc s[i] = 2 + 2*i, in ra bang gia tri */
void bth1() {
    #define ARRAY_SIZE 10
    int s[ARRAY_SIZE];
    int i;

    for (i = 0; i < ARRAY_SIZE; i++)
        s[i] = 2 + 2 * i;

    printf("Element\tValue\n");
    for (i = 0; i < ARRAY_SIZE; i++)
        printf("%d\t%d\n", i, s[i]);
}

/* ===================== BAI 2 ===================== */
/* 2a: Nhap luong mua tung thang tu ban phim
   2b: Luong mua duoc khoi tao san, in bang luon */
void bth2() {
    #define MONTHS 12
    int sub;
    printf("  2a. Nhap luong mua tu ban phim\n");
    printf("  2b. Luong mua khoi tao san\n");
    printf("  Chon (1=2a, 2=2b): ");
    scanf("%d", &sub);

    int RainFall[MONTHS];
    int i;

    if (sub == 1) {
        printf("Nhap luong mua 12 thang:\n");
        for (i = 0; i < MONTHS; i++)
            scanf("%d", &RainFall[i]);
    } else {
        int preset[MONTHS] = {40, 45, 95, 130, 220, 210, 185, 135, 80, 40, 45, 30};
        for (i = 0; i < MONTHS; i++)
            RainFall[i] = preset[i];
    }

    printf("month\trainfall (in mm)\n");
    for (i = 0; i < MONTHS; i++)
        printf("%d\t%d\n", i + 1, RainFall[i]);
}

/* ===================== BAI 3 ===================== */
/* Nhap mang n phan tu, in nguoc tu cuoi ve dau */
void bth3() {
    int arr[10];
    int n, i;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = n - 1; i >= 0; i--)
        printf("%d ", arr[i]);
    printf("\n");
}

/* ===================== BAI 4 ===================== */
/* Tinh tong cac so le va tim so chan nho nhat trong mang */
void bth4() {
    int a[100002], n;
    int nn = 2147483647;
    int dem1 = 0;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        if (a[i] % 2 != 0)
            dem1 += a[i];
        else {
            if (a[i] < nn) nn = a[i];
        }
    }

    printf("%d\n", dem1);
    if (nn != 2147483647)
        printf("%d", nn);
    else
        printf("KHONG CO SO CHAN TRONG MANG");
}

/* ===================== BAI 5 ===================== */
/* Tinh tong cac cuc dai dia phuong (lon hon ca phan tu truoc lan sau) */
void bth5() {
    int arr[100];
    int n, i;
    int sum = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 1; i < n - 1; i++)
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            sum += arr[i];

    printf("%d\n", sum);
}

/* ===================== BAI 6 ===================== */
/* Ham tinh tong cac phan tu trong mang, truyen mang vao ham */
int calc_sum(int arr[], int size) {
    int i, sum = 0;
    for (i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}

void bth6() {
    int arr[100];
    int n, i;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("%d\n", calc_sum(arr, n));
}

/* ===================== BAI 7 ===================== */
/* So sanh hai mang: tra ve 1 neu bang nhau, 0 neu khac nhau */
int compare_arrays(const int arr1[], const int arr2[], int size) {
    int i;
    for (i = 0; i < size; i++)
        if (arr1[i] != arr2[i]) return 0;
    return 1;
}

void bth7() {
    int arr1[100], arr2[100];
    int n, i;

    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &arr1[i]);
    for (i = 0; i < n; i++) scanf("%d", &arr2[i]);

    printf("%d\n", compare_arrays(arr1, arr2, n));
}

/* ===================== BAI 8 ===================== */
/* 8a: Sap xep mang giam dan (DesSort)
   8b: Chi sap xep cac so le giam dan, so chan giu nguyen vi tri (OddSort) */
void DesSort(int a[], int n) {
    int i, j, tmp;
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (a[i] < a[j]) {
                tmp = a[i]; a[i] = a[j]; a[j] = tmp;
            }
}

void OddSort(int a[], int n) {
    int i, j, tmp;
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (a[i] % 2 != 0 && a[j] % 2 != 0)
                if (a[i] < a[j]) {
                    tmp = a[i]; a[i] = a[j]; a[j] = tmp;
                }
}

void bth8() {
    int sub;
    printf("  8a. Sap xep mang giam dan\n");
    printf("  8b. Chi sap xep cac so le giam dan\n");
    printf("  Chon (1=8a, 2=8b): ");
    scanf("%d", &sub);

    int arr[10], n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);

    if (sub == 1)
        DesSort(arr, n);
    else
        OddSort(arr, n);

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

/* ===================== BAI 9 ===================== */
/* Dem so phan tu bang 0, day 0 lien tiep dai nhat,
   in tan suat xuat hien cua tung gia tri (dung qsort + mang dem) */
#define NMAX 1000005
int b9[NMAX];

int cmp9(const void *a, const void *b) {
    long long x = *(const long long *)a;
    long long y = *(const long long *)b;
    if (x < y) return -1;
    if (x > y) return  1;
    return 0;
}

void bth9() {
    long long n;
    scanf("%lld", &n);

    long long *a = (long long *)malloc(n * sizeof(long long));
    for (int i = 0; i < NMAX; i++) b9[i] = 0;

    int count_zero = 0, max_len = 0, current_len = 0;

    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
        if (a[i] == 0) {
            count_zero++;
            current_len++;
            if (current_len > max_len) max_len = current_len;
        } else {
            current_len = 0;
        }
        if (a[i] >= 0 && a[i] < NMAX)
            b9[a[i]]++;
    }

    printf("%d\n", count_zero);
    printf("%d\n", max_len);

    qsort(a, n, sizeof(long long), cmp9);

    for (int i = 0; i < n; i++) {
        if (a[i] >= 0 && a[i] < NMAX && b9[a[i]] > 0) {
            printf("%lld %d\n", a[i], b9[a[i]]);
            b9[a[i]] = 0;
        }
    }

    free(a);
}

/* ===================== BAI 10 ===================== */
/* Bang cuu chuong 10x10, nhap hang m va cot n, in gia tri tuong ung */
void bth10() {
    int matrix[10][10];
    int i, j, m, n;

    for (i = 0; i < 10; i++)
        for (j = 0; j < 10; j++)
            matrix[i][j] = (i + 1) * (j + 1);

    scanf("%d %d", &m, &n);
    printf("%d\n", matrix[m - 1][n - 1]);
}

/* ===================== BAI 11 ===================== */
/* Nhan hai ma tran 3x3: C = A x B */
void bth11() {
    int A[3][3], B[3][3], C[3][3];
    int i, j, k;

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &A[i][j]);

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &B[i][j]);

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++) {
            C[i][j] = 0;
            for (k = 0; k < 3; k++)
                C[i][j] += A[i][k] * B[k][j];
        }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
}

/* ===================== BAI 12 ===================== */
/* Tinh tong cac cuc dai dia phuong trong mang A[20] */
void bth12() {
    int A[20];
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);

    int tong = 0;
    for (int i = 1; i <= n - 2; i++)
        if (A[i] > A[i - 1] && A[i] > A[i + 1])
            tong += A[i];

    printf("%d\n", tong);
}

/* ===================== BAI 13 ===================== */
/* Dao nguoc mang so thuc bang ham reverse() */
void reverse(float a[], int size) {
    for (int i = 0; i < size / 2; i++) {
        float tmp = a[i];
        a[i] = a[size - 1 - i];
        a[size - 1 - i] = tmp;
    }
}

void bth13() {
    int n;
    float a[100];

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%f", &a[i]);

    reverse(a, n);

    for (int i = 0; i < n; i++)
        printf("%.2f ", a[i]);
    printf("\n");
}

/* ===================== BAI 14 ===================== */
/* Tach mang thanh hai mang: so chan va so le, in rieng tung mang */
void bth14() {
    int n, a[100], chan[100], le[100], c = 0, l = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
            chan[c++] = a[i];
        else
            le[l++] = a[i];
    }
    for (int i = 0; i < c; i++) printf("%d ", chan[i]);
    printf("\n");
    for (int i = 0; i < l; i++) printf("%d ", le[i]);
    printf("\n");
}

/* ===================== BAI 15 ===================== */
/* Chen phan tu x vao mang da co, sau do sap xep tang dan */
void bth15() {
    int n, a[100], x;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &x);
    a[n++] = x;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j]) {
                int t = a[i]; a[i] = a[j]; a[j] = t;
            }
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

/* ===================== BAI 16 ===================== */
/* Tinh dinh thuc (determinant) cua ma tran 3x3 */
void bth16() {
    int a[3][3], det;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    det = a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1])
        - a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0])
        + a[0][2] * (a[1][0] * a[2][1] - a[1][1] * a[2][0]);
    printf("%d\n", det);
}

/* ===================== BAI 17 ===================== */
/* Kiem tra ma tran co nhieu hon 50% phan tu bang 0 khong */
void bth17() {
    int m, n, a[100][100], zero = 0;
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            if (a[i][j] == 0) zero++;
        }
    if (zero >= (m * n) / 2.0)
        printf("YES\n");
    else
        printf("NO\n");
}

/* ===================== BAI 18 ===================== */
/* Tim phan tu xuat hien nhieu hon n/2 lan (thuat toan Boyer-Moore Voting)
   In phan tu do, hoac -1 neu khong ton tai */
void bth18() {
    int n, a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int candidate = a[0], count = 1;
    for (int i = 1; i < n; i++) {
        if (count == 0) {
            candidate = a[i]; count = 1;
        } else if (a[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    int actual_count = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == candidate) actual_count++;

    if (actual_count > n / 2)
        printf("%d\n", candidate);
    else
        printf("-1\n");
}

/* ===================== BAI 19 ===================== */
/* Duyet ma tran theo hinh xoay oc (spiral order) tu ngoai vao trong */
void bth19() {
    int m, n, a[10][10];
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    int row_start = 0, row_end = m - 1;
    int col_start = 0, col_end = n - 1;

    while (row_start <= row_end && col_start <= col_end) {
        /* Trai sang phai (hang tren) */
        for (int i = col_start; i <= col_end; i++)
            printf("%d ", a[row_start][i]);
        row_start++;

        /* Tren xuong duoi (cot phai) */
        for (int i = row_start; i <= row_end; i++)
            printf("%d ", a[i][col_end]);
        col_end--;

        /* Phai sang trai (hang duoi) */
        if (row_start <= row_end) {
            for (int i = col_end; i >= col_start; i--)
                printf("%d ", a[row_end][i]);
            row_end--;
        }

        /* Duoi len tren (cot trai) */
        if (col_start <= col_end) {
            for (int i = row_end; i >= row_start; i--)
                printf("%d ", a[i][col_start]);
            col_start++;
        }
    }
    printf("\n");
}


int menu() {
    int tuy_chon = 0;
    printf("\n 1.  Bai 1  - Khoi tao mang s[i] = 2 + 2*i, in bang gia tri");
    printf("\n 2.  Bai 2  - Luong mua 12 thang (2a: nhap, 2b: co san)");
    printf("\n 3.  Bai 3  - Nhap mang va in nguoc");
    printf("\n 4.  Bai 4  - Tong so le va so chan nho nhat");
    printf("\n 5.  Bai 5  - Tong cac cuc dai dia phuong");
    printf("\n 6.  Bai 6  - Ham tinh tong mang (calc_sum)");
    printf("\n 7.  Bai 7  - So sanh hai mang (compare_arrays)");
    printf("\n 8.  Bai 8  - Sap xep giam dan (8a: tat ca, 8b: chi so le)");
    printf("\n 9.  Bai 9  - Dem so 0, day 0 dai nhat, tan suat xuat hien");
    printf("\n10.  Bai 10 - Bang cuu chuong, truy xuat o [m][n]");
    printf("\n11.  Bai 11 - Nhan hai ma tran 3x3");
    printf("\n12.  Bai 12 - Tong cuc dai dia phuong (A[20])");
    printf("\n13.  Bai 13 - Dao nguoc mang so thuc (reverse)");
    printf("\n14.  Bai 14 - Tach mang thanh mang chan va mang le");
    printf("\n15.  Bai 15 - Chen phan tu x vao mang roi sap xep tang dan");
    printf("\n16.  Bai 16 - Tinh dinh thuc ma tran 3x3");
    printf("\n17.  Bai 17 - Kiem tra ma tran co >= 50%% phan tu bang 0");
    printf("\n18.  Bai 18 - Tim phan tu xuat hien > n/2 lan (Boyer-Moore)");
    printf("\n19.  Bai 19 - Duyet ma tran xoay oc (spiral order)");
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
        case 19: bth19(); break;
        default:
            printf("Lua chon khong hop le!\n");
    }

    return 0;
}