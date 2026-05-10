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
int  menu();

int main() {
    int tuy_chon = 0;
    tuy_chon = menu();

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
        case 20: bth20(); break;
        default:
            printf("Lua chon khong hop le!\n");
    }

    return 0;
}

int menu() {
    int tuy_chon = 0;
    printf("\n 1.  Bai 1  - Vong lap for voi bien dem tang deu");
    printf("\n 2.  Bai 2  - Vong lap for voi bien y thay doi");
    printf("\n 3.  Bai 3  - Vong lap for voi dieu kien if va i--");
    printf("\n 4.  Bai 4  - Dem ky tu nhap vao den dau cham");
    printf("\n 5.  Bai 5  - Tinh tong binh phuong va trung binh N so");
    printf("\n 6.  Bai 6  - Ve tam giac sao trai");
    printf("\n 7.  Bai 7  - Liet ke so nguyen to tu 2 den 100");
    printf("\n 8.  Bai 8  - Demo vong lap long nhau (inner/outer)");
    printf("\n 9.  Bai 9  - Tim so hoan hao tu 1 den N");
    printf("\n10.  Bai 10 - In tam giac so (trai va phai)");
    printf("\n11.  Bai 11 - Ve hinh sao (a: tam giac, b: hinh thoi, c: DHBK)");
    printf("\n12.  Bai 12 - Tinh tong chuoi cos(x) voi n so hang");
    printf("\n13.  Bai 13 - Tinh tong: 9+99+999+...+999...9 (n so 9)");
    printf("\n14.  Bai 14 - In tam giac so 0/1 xen ke");
    printf("\n15.  Bai 15 - Tinh tong: 1+11+111+...+111...1 (n so 1)");
    printf("\n16.  Bai 16 - Tim so Armstrong co N chu so");
    printf("\n17.  Bai 17 - In tam giac Pascal");
    printf("\n18.  Bai 18 - Tim so Fibonacci thu N");
    printf("\n19.  Bai 19 - Tinh UCLN va BCNN cua hai so");
    printf("\n20.  Bai 20 - In bang so (a: tang dan, b: doi xung)");
    printf("\n-------------------------------------------------");
    printf("\nNhap tuy chon: ");
    scanf("%d", &tuy_chon);
    system("cls");
    return tuy_chon;
}

/* Bai 1: Vong lap for - buoc nhay tang deu (y/x = 3) */
void bth1() {
    int x = 2;
    int y = 6;
    for (int j = x; j <= x * y; j += y / x)
        printf("j = %d\n", j);
}

/* Bai 2: Vong lap for - bien y tang theo moi vong lap */
void bth2() {
    int x = 2;
    int y = 10;
    for (int j = x; j <= x * y; j += y / x) {
        printf("j = %d y = %d\n", j, y);
        y = y + 2;
    }
}

/* Bai 3: Vong lap for - dieu kien re nhanh lam i-- */
void bth3() {
    int i;
    int x = 0;
    for (i = 1; i <= 100; i++) {
        x += i;
        if ((x % i) == 0) { i--; }
        printf("\nx = %d ", x);
        printf("i = %d", i);
    }
    printf("\n Ket qua sau khi thuc hien vong lap");
    printf("\n x = %d", x);
    printf("\n i = %d", i);
}

/* Bai 4: Dem ky tu duoc nhap vao cho den khi gap dau cham '.' */
void bth4() {
    char c;
    int count;
    printf("Nhap chuoi ky tu (ket thuc bang dau '.'): ");
    for (count = 0; (c = getchar()) != '.'; count++)
        { }
    printf("Number of characters is %d\n", count);
}

/* Bai 5: Tinh tong binh phuong va trung binh cong cua N so nguyen */
void bth5() {
    int N, a, i;
    long long S = 0;

    printf("Nhap N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        printf("Nhap so thu %d: ", i);
        scanf("%d", &a);
        S += (long long)a * a;
    }

    printf("Tong binh phuong: %lld\n", S);
    printf("Trung binh cong: %.2f\n", (double)S / N);
}

/* Bai 6: Ve tam giac sao can trai, N hang */
void bth6() {
    int N, i, j;

    printf("Nhap N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

/* Bai 7: Liet ke so nguyen to tu 2 den 100 (kiem tra can bac 2) */
void bth7() {
    int i, j;
    double sq;
    printf("%d\n", 2);
    for (i = 3; i <= 100; i = i + 2) {
        sq = sqrt(i);
        for (j = 3; j <= sq; j = j + 2) {
            if (i % j == 0)
                break;
        }
        if (j > sq) {
            printf("%d\n", i);
        }
    }
}

/* Bai 8: Demo vong lap long nhau voi nhan outer/inner */
void bth8() {
    int i, j;
    printf("         I    J\n");
    for (i = 1; i < 4; i = i + 1) {
        printf("Outer %6d\n", i);
        for (j = 0; j < i; j = j + 1) {
            printf("  Inner%9d\n", j);
        }
    }
}

/* Bai 9: Tim va in cac so hoan hao tu 1 den N */
void bth9() {
    int N, i, j, sum;

    printf("Nhap N: ");
    scanf("%d", &N);

    printf("Cac so hoan hao tu 1 den %d:\n", N);
    for (i = 1; i <= N; i++) {
        sum = 0;
        for (j = 1; j <= i / 2; j++) {
            if (i % j == 0)
                sum += j;
        }
        if (sum == i)
            printf("%d\n", i);
    }
}

/* Bai 10: In tam giac so can trai (a) va can phai (b) */
void bth10() {
    int N, i, j, num, lua_chon;

    printf("Chon kieu tam giac (1=can trai, 2=can phai): ");
    scanf("%d", &lua_chon);
    printf("Nhap N: ");
    scanf("%d", &N);

    num = 1;
    if (lua_chon == 1) {
        /* 10a: tam giac can trai */
        for (i = 1; i <= N; i++) {
            for (j = 1; j <= i; j++) {
                if (j > 1) printf(" ");
                printf("%d", num++);
            }
            printf("\n");
        }
    } else {
        /* 10b: tam giac can phai */
        for (i = 1; i <= N; i++) {
            for (j = 0; j < N - i; j++)
                printf("  ");
            for (j = 1; j <= i; j++) {
                if (j > 1) printf(" ");
                printf("%d", num++);
            }
            printf("\n");
        }
    }
}

/* Bai 11: Ve 3 kieu hinh sao (cung 1 lan nhap N) */
void bth11() {
    int n, i, j;
    printf("Nhap N: ");
    scanf("%d", &n);

    /* 11a: tam giac sao can giua, dinh tren, sao cach nhau */
    printf("11a:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i + 1; j++) printf(" ");
        for (j = 1; j <= i; j++) {
            printf("*");
            if (j < i) printf(" ");
        }
        printf("\n");
    }

    /* 11b: hinh thoi sao (tam giac xuoi + tam giac nguoc) */
    printf("11b:\n");
    for (i = 1; i <= n; i++) {
        for (j = 0; j < n - i; j++) printf(" ");
        for (j = 1; j <= 2 * i - 1; j++) printf("*");
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--) {
        for (j = 0; j < n - i; j++) printf(" ");
        for (j = 1; j <= 2 * i - 1; j++) printf("*");
        printf("\n");
    }

    /* 11c: hinh bieu tuong DHBK Ha Noi (co dinh N=10) */
    printf("11c:\n");
    int N = 10;
    for (i = 1; i <= 3; i++) {
        int indent = 3 - i;
        int stars  = 2 * i + 3;
        int gap    = 8 - 2 * i;
        for (j = 0; j < indent; j++) printf(" ");
        for (j = 0; j < stars;  j++) printf("*");
        for (j = 0; j < gap;    j++) printf(" ");
        for (j = 0; j < stars;  j++) printf("*");
        printf("\n");
    }
    printf("*****DHBK-HaNoi*****\n");
    for (i = N * 2 - 1; i >= 1; i -= 2) {
        int indent = (N * 2 - 1 - i) / 2 + 1;
        for (j = 0; j < indent; j++) printf(" ");
        for (j = 0; j < i;      j++) printf("*");
        printf("\n");
    }
}

/* Bai 12: Tinh tong chuoi cos(x) ~ 1 - x^2/2! + x^4/4! - ... voi n so hang */
void bth12() {
    double x;
    int n;

    printf("Nhap x va n: ");
    scanf("%lf %d", &x, &n);

    double s    = 0;
    double term = 1;

    for (int i = 0; i < n; i++) {
        s += term;
        term = term * (-1.0 * x * x) / ((2 * i + 1) * (2 * i + 2));
    }

    printf("%.2f\n", s);
}

/* Bai 13: Tinh tong S = 9 + 99 + 999 + ... (n so hang) */
void bth13() {
    int n;
    printf("Nhap N: ");
    scanf("%d", &n);

    long long s    = 0;
    long long term = 0;

    for (int i = 1; i <= n; i++) {
        term = term * 10 + 9;
        s += term;
    }

    printf("%lld\n", s);
}

/* Bai 14: In tam giac so 0/1 xen ke theo tong chi so hang va cot */
void bth14() {
    int n;
    printf("Nhap N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if ((i + j) % 2 == 0)
                printf("1");
            else
                printf("0");
            if (j < i) printf(" ");
        }
        printf("\n");
    }
}

/* Bai 15: Tinh tong S = 1 + 11 + 111 + ... (n so hang) */
void bth15() {
    int n;
    printf("Nhap N: ");
    scanf("%d", &n);

    long long s    = 0;
    long long term = 0;

    for (int i = 1; i <= n; i++) {
        term = term * 10 + 1;
        s += term;
    }

    printf("%lld\n", s);
}

/* Bai 16: Tim cac so Armstrong co N chu so */
void bth16() {
    int N, i;
    long long num, start, end, temp, sum, digit, p;

    printf("Nhap N: ");
    scanf("%d", &N);

    start = 1;
    for (i = 1; i < N; i++) start *= 10;
    end = start * 10 - 1;

    printf("Cac so Armstrong co %d chu so:\n", N);
    for (num = start; num <= end; num++) {
        temp = num;
        sum  = 0;
        while (temp > 0) {
            digit = temp % 10;
            p = 1;
            for (i = 0; i < N; i++) p *= digit;
            sum += p;
            temp /= 10;
        }
        if (sum == num)
            printf("%lld\n", num);
    }
}

/* Bai 17: In tam giac Pascal N hang */
void bth17() {
    int n;
    printf("Nhap N: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int val = 1;
        for (int j = 0; j <= i; j++) {
            printf("%4d", val);
            val = val * (i - j) / (j + 1);
        }
        printf("\n");
    }
}

/* Bai 18: Tim so Fibonacci thu N (F1=1, F2=2, F3=3, F4=5, ...) */
void bth18() {
    int n;
    printf("Nhap N: ");
    scanf("%d", &n);

    long long a = 1, b = 2, c;

    if (n == 1) {
        printf("%lld\n", a);
        return;
    }
    if (n == 2) {
        printf("%lld\n", b);
        return;
    }

    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    printf("%lld\n", b);
}

/* Bai 19: Tinh UCLN va BCNN cua hai so nguyen duong */
void bth19() {
    long long n, m, a, b, temp, ucln, bcnn;

    printf("Nhap hai so nguyen duong n va m: ");
    if (scanf("%lld %lld", &n, &m) != 2) return;

    a = n;
    b = m;

    while (b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    }

    ucln = a;
    bcnn = (n * m) / ucln;

    printf("UCLN: %lld\n", ucln);
    printf("BCNN: %lld\n", bcnn);
}

/* Bai 20: In bang so (a: tang dan lien tiep, b: doi xung tren moi hang) */
void bth20() {
    int n, i, j;
    printf("Nhap N: ");
    scanf("%d", &n);

    /* 20a: moi hang bat dau tu i, tang dan n phan tu */
    printf("20a:\n");
    for (i = 1; i <= n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", i + j);
        }
        printf("\n");
    }

    /* 20b: moi hang tang tu i den n roi giam ve 1 */
    printf("\n20b:\n");
    for (i = 1; i <= n; i++) {
        for (j = i; j <= n; j++) {
            printf("%d ", j);
        }
        for (j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

/*202516919*/