#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int menu();
void bth1();
void bth2();
void bth3();
void bth4();
void bth5();
void bth6();
void bth7a();
void bth7b();
void bth8a();
void bth8b();
void bth9();
void bth10();
void bth11();
void bth12();
void bth13();
void bth14();
void bth15();
void bth16();
void bth17();

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
        case 7:  bth7a(); break;
        case 8:  bth7b(); break;
        case 9:  bth8a(); break;
        case 10: bth8b(); break;
        case 11: bth9();  break;
        case 12: bth10(); break;
        case 13: bth11(); break;
        case 14: bth12(); break;
        case 15: bth13(); break;
        case 16: bth14(); break;
        case 17: bth15(); break;
        case 18: bth16(); break;
        case 19: bth17(); break;
        default:
            printf("Lua chon khong hop le!\n");
    }

    return 0;
}

int menu() {
    int tuy_chon = 0;
    printf("\n 1.  Bai 1  - Tim ky tu nho nhat trong 3 ky tu");
    printf("\n 2.  Bai 2  - Phan loai tuoi (if-else)");
    printf("\n 3.  Bai 3  - Phan loai tuoi (switch)");
    printf("\n 4.  Bai 4  - Tro choi doan so ngau nhien");
    printf("\n 5.  Bai 5  - Tim so nho nhat trong 3 so");
    printf("\n 6.  Bai 6  - Tinh phi gui xe");
    printf("\n 7.  Bai 7a - So ngay trong thang (if-else)");
    printf("\n 8.  Bai 7b - So ngay trong thang (switch)");
    printf("\n 9.  Bai 8a - Xep loai diem (switch)");
    printf("\n10.  Bai 8b - Xep loai diem chu (if-else)");
    printf("\n11.  Bai 9  - Demo fall-through switch");
    printf("\n12.  Bai 10 - Giai phuong trinh bac 2");
    printf("\n13.  Bai 11 - Giai he phuong trinh 2 an");
    printf("\n14.  Bai 12 - Kiem tra va phan loai tam giac");
    printf("\n15.  Bai 13 - Hoa don tien dien");
    printf("\n16.  Bai 14 - Tinh tien nuoc sinh hoat");
    printf("\n17.  Bai 15 - Tinh tien phong khach san");
    printf("\n18.  Bai 16 - Tinh tien ve xe khach");
    printf("\n19.  Bai 17 - Tra tien bang tien giay");
    printf("\n-------------------------------------------------");
    printf("\nNhap tuy chon: ");
    scanf("%d", &tuy_chon);
    system("cls");
    return tuy_chon;
}

/* Bai 1: Tim ky tu nho nhat (thu tu alphabet) trong 3 ky tu */
void bth1() {
    char ch1, ch2, ch3;
    char alpha_first;

    printf("Nhap 3 ky tu: ");
    scanf(" %c %c %c", &ch1, &ch2, &ch3);

    alpha_first = ch1;
    if (ch2 < alpha_first) alpha_first = ch2;
    if (ch3 < alpha_first) alpha_first = ch3;

    printf("Ky tu nho nhat: %c\n", alpha_first);
}

/* Bai 2: Phan loai tuoi dung if-else */
void bth2() {
    int tuoi;
    printf("Nhap tuoi: ");
    scanf("%d", &tuoi);

    if (tuoi < 18) {
        printf("TRE EM\n");
    } else if (tuoi < 65) {
        printf("TRUONG THANH\n");
    } else {
        printf("NGUOI GIA\n");
    }
}

/* Bai 3: Phan loai tuoi dung switch */
void bth3() {
    int tuoi;
    printf("Nhap tuoi: ");
    scanf("%d", &tuoi);

    int phan_loai = (tuoi < 18) ? 1 : (tuoi < 65 ? 2 : 3);

    switch (phan_loai) {
        case 1: printf("tre em\n");       break;
        case 2: printf("truong thanh\n"); break;
        case 3: printf("nguoi gia\n");    break;
    }
}

/* Bai 4: Tro choi doan so ngau nhien */
void bth4() {
    int myNum, yourNum;
    int guessCount = 0;
    int maxGuesses = 2;

    srand(time(NULL));
    myNum = 1 + rand() % 10;

    printf("Doan so tu 1 den 10 (toi da %d lan):\n", maxGuesses);

    while (guessCount < maxGuesses) {
        printf("Nhap so cua ban: ");
        scanf("%d", &yourNum);
        guessCount++;

        if (yourNum == myNum) {
            printf("Correct!\n");
            return;
        } else if (yourNum < myNum) {
            printf("Your guess was too small.\n");
        } else {
            printf("Your guess was too large.\n");
        }

        if (guessCount < maxGuesses) {
            printf("Remaining guesses: %d\n", maxGuesses - guessCount);
        }
    }

    printf("Thua. The correct number was %d.\n", myNum);
}

/* Bai 5: Tim so nho nhat trong 3 so nguyen */
void bth5() {
    int a, b, c, min;

    printf("Nhap 3 so nguyen: ");
    scanf("%d %d %d", &a, &b, &c);

    min = a;
    if (b < min) min = b;
    if (c < min) min = c;

    printf("So nho nhat: %d\n", min);
}

/* Bai 6: Tinh phi gui xe theo loai va gio */
void bth6() {
    char loai;
    int gio;
    double phi;

    printf("Nhap loai xe (C/B/A) va so gio: ");
    scanf(" %c %d", &loai, &gio);

    if (loai == 'C') {
        phi = (gio <= 2) ? gio * 0.70 : 2 * 0.70 + (gio - 2) * 2.50;
    } else if (loai == 'B') {
        phi = (gio <= 2) ? gio * 1.50 : 2 * 1.50 + (gio - 2) * 2.00;
    } else {
        phi = (gio <= 2) ? gio * 2.50 : 2 * 2.50 + (gio - 2) * 3.25;
    }

    printf("Phi gui xe: %.2f\n", phi);
}

/* Bai 7a: So ngay trong thang dung if-else */
void bth7a() {
    int thang;
    printf("Nhap thang (1-12): ");
    scanf("%d", &thang);

    if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
        printf("30 ngay\n");
    } else if (thang == 2) {
        printf("28 hoac 29 ngay\n");
    } else {
        printf("31 ngay\n");
    }
}

/* Bai 7b: So ngay trong thang dung switch */
void bth7b() {
    int thang;
    printf("Nhap thang (1-12): ");
    scanf("%d", &thang);

    switch (thang) {
        case 4: case 6: case 9: case 11:
            printf("30 ngay\n"); break;
        case 2:
            printf("28 hoac 29 ngay\n"); break;
        default:
            printf("31 ngay\n"); break;
    }
}

/* Bai 8a: Xep loai diem bang so nguyen (switch) */
void bth8a() {
    int diem;
    printf("Nhap diem (0-10): ");
    scanf("%d", &diem);

    switch (diem) {
        case 10: case 9: printf("loai gioi\n");      break;
        case 8:  case 7: printf("loai kha\n");        break;
        case 6:  case 5: printf("loai trung binh\n"); break;
        default:          printf("loai kem\n");        break;
    }
}

/* Bai 8b: Xep loai diem thuc bang chu (if-else) */
void bth8b() {
    double diem;
    printf("Nhap diem (0.0 - 10.0): ");
    scanf("%lf", &diem);

    if      (diem >= 9.5) printf("A+\n");
    else if (diem >= 8.5) printf("A\n");
    else if (diem >= 8.0) printf("B+\n");
    else if (diem >= 7.0) printf("B\n");
    else if (diem >= 6.5) printf("C+\n");
    else if (diem >= 5.5) printf("C\n");
    else if (diem >= 5.0) printf("D+\n");
    else if (diem >= 4.0) printf("D\n");
    else                   printf("F\n");
}

/* Bai 9: Demo fall-through trong switch */
void bth9() {
    int a;
    printf("Nhap a: ");
    scanf("%d", &a);

    switch (a) {
        case 1:
            printf("a=1\n");
        case 2:
            printf("a=2\n");
            break;
        case 3:
            printf("a=3\n");
            break;
    }
}

/* Bai 10: Giai phuong trinh bac 1 hoac bac 2 */
void bth10() {
    double a, b, c;
    printf("Nhap he so a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        if (b == 0) {
            printf("%s\n", c == 0 ? "VO SO NGHIEM" : "VO NGHIEM");
        } else {
            printf("%.2f\n", -c / b);
        }
        return;
    }

    double delta = b * b - 4 * a * c;

    if (delta < 0) {
        double thuc = -b / (2 * a);
        double ao   = sqrt(-delta) / (2 * a);
        if (ao < 0) ao = -ao;
        printf("%.2f + j%.2f\n", thuc, ao);
        printf("%.2f - j%.2f\n", thuc, ao);
    } else if (delta == 0) {
        printf("%.2f\n", -b / (2 * a));
    } else {
        double x1 = (-b - sqrt(delta)) / (2 * a);
        double x2 = (-b + sqrt(delta)) / (2 * a);
        if (x1 > x2) { double tmp = x1; x1 = x2; x2 = tmp; }
        printf("%.2f\n%.2f\n", x1, x2);
    }
}

/* Bai 11: Giai he phuong trinh 2 an (Cramer) */
void bth11() {
    double a, b, c, d, e, f;
    printf("Nhap he so hang 1 (a b c): ");
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("Nhap he so hang 2 (d e f): ");
    scanf("%lf %lf %lf", &d, &e, &f);

    double D  = a * e - b * d;
    double Dx = c * e - b * f;
    double Dy = a * f - c * d;

    if (D != 0) {
        printf("x = %.2f\n", Dx / D);
        printf("y = %.2f\n", Dy / D);
    } else {
        printf("%s\n", (Dx == 0 && Dy == 0) ? "VO SO NGHIEM" : "VO NGHIEM");
    }
}

/* ============================================================
   Bai 12: Kiem tra tam giac va phan loai
   ============================================================ */
void bth12() {
    double x1, y1, x2, y2, x3, y3;
    printf("Nhap toa do diem 1 (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Nhap toa do diem 2 (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);
    printf("Nhap toa do diem 3 (x3 y3): ");
    scanf("%lf %lf", &x3, &y3);

    double a = sqrt((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3));
    double b = sqrt((x1-x3)*(x1-x3) + (y1-y3)*(y1-y3));
    double c = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));

    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("TAM GIAC KHONG HOP LE\n");
        return;
    }
    printf("TAM GIAC HOP LE\n");

    double eps = 1e-9;
    double a2 = a*a, b2 = b*b, c2 = c*c;

    if (fabs(a - b) < eps && fabs(b - c) < eps)
        printf("TAM GIAC DEU\n");
    else
        printf("KHONG PHAI TAM GIAC DEU\n");

    if (fabs(a - b) < eps || fabs(b - c) < eps || fabs(a - c) < eps)
        printf("TAM GIAC CAN\n");
    else
        printf("KHONG PHAI TAM GIAC CAN\n");

    if (fabs(a2 - b2 - c2) < eps || fabs(b2 - a2 - c2) < eps || fabs(c2 - a2 - b2) < eps)
        printf("TAM GIAC VUONG\n");
    else
        printf("KHONG PHAI TAM GIAC VUONG\n");

    if (a2 < b2 + c2 && b2 < a2 + c2 && c2 < a2 + b2)
        printf("TAM GIAC NHON\n");
    else
        printf("KHONG PHAI TAM GIAC NHON\n");
}

/* ============================================================
   Bai 13: Hoa don tien dien (tich hop doc so bang chu)
   ============================================================ */
static void docSoNhoHon1000(long long n) {
    const char *donvi[] = {"", "mot", "hai", "ba", "bon", "nam",
                           "sau", "bay", "tam", "chin"};
    const char *chuc[]  = {"", "muoi", "hai muoi", "ba muoi", "bon muoi", "nam muoi",
                           "sau muoi", "bay muoi", "tam muoi", "chin muoi"};
    if (n == 0) return;
    if (n >= 100) {
        printf("%s tram ", donvi[n / 100]);
        n %= 100;
        if (n > 0 && n < 10) printf("linh ");
    }
    if (n >= 10) {
        printf("%s ", chuc[n / 10]);
        n %= 10;
    }
    if (n > 0) printf("%s ", donvi[n]);
}

static void docSo(long long n) {
    if (n == 0) { printf("khong dong"); return; }
    long long ty    = n / 1000000000LL;
    long long trieu = (n % 1000000000LL) / 1000000;
    long long nghin = (n % 1000000) / 1000;
    long long le    = n % 1000;
    if (ty)    { docSoNhoHon1000(ty);    printf("ty ");    }
    if (trieu) { docSoNhoHon1000(trieu); printf("trieu "); }
    if (nghin) { docSoNhoHon1000(nghin); printf("nghin "); }
    if (le)    { docSoNhoHon1000(le);                      }
    printf("dong");
}

void bth13() {
    int kwh;
    printf("Nhap so kWh tieu thu: ");
    scanf("%d", &kwh);

    double tien = 0;
    if      (kwh <= 50)  tien = kwh * 1678;
    else if (kwh <= 100) tien = 50*1678 + (kwh-50)*1734;
    else if (kwh <= 200) tien = 50*1678 + 50*1734 + (kwh-100)*2014;
    else if (kwh <= 300) tien = 50*1678 + 50*1734 + 100*2014 + (kwh-200)*2536;
    else if (kwh <= 400) tien = 50*1678 + 50*1734 + 100*2014 + 100*2536 + (kwh-300)*2834;
    else                 tien = 50*1678 + 50*1734 + 100*2014 + 100*2536 + 100*2834 + (kwh-400)*2927;

    double   vat   = tien * 0.08;
    double   tong  = tien + vat;
    long long tongLL = (long long)tong;

    /* --- In bang hoa don --- */
    #define W1  5
    #define W2  22
    #define W3  5
    #define W4  10
    #define W5  10
    #define W6  13
    #define LINE "\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4"

    printf("\xda%.*s\xc2%.*s\xc2%.*s\xc2%.*s\xc2%.*s\xc2%.*s\xbf\n",
        W1,LINE, W2,LINE, W3,LINE, W4,LINE, W5,LINE, W6,LINE);
    printf("\xb3 %-*s\xb3 %-*s\xb3 %-*s\xb3 %-*s\xb3 %-*s\xb3 %-*s\xb3\n",
        W1-1,"STT", W2-1,"Ten hang hoa, dich vu",
        W3-1,"DVT", W4-1,"So luong", W5-1,"Don gia", W6-1,"Thanh tien");
    printf("\xc3%.*s\xc5%.*s\xc5%.*s\xc5%.*s\xc5%.*s\xc5%.*s\xb4\n",
        W1,LINE, W2,LINE, W3,LINE, W4,LINE, W5,LINE, W6,LINE);
    printf("\xb3 %-*s\xb3 %-*s\xb3 %-*s\xb3 %-*s\xb3 %-*s\xb3 %-*s\xb3\n",
        W1-1,"A", W2-1,"B", W3-1,"C", W4-1,"1", W5-1,"2", W6-1,"3=1x2");
    printf("\xc3%.*s\xc5%.*s\xc5%.*s\xc5%.*s\xc5%.*s\xc5%.*s\xb4\n",
        W1,LINE, W2,LINE, W3,LINE, W4,LINE, W5,LINE, W6,LINE);
    printf("\xb3 %-*d\xb3 %-*s\xb3 %-*s\xb3 %*d\xb3 %-*s\xb3 %*.0f\xb3\n",
        W1-1,1, W2-1,"Dien tieu thu", W3-1,"kWh", W4-1,kwh, W5-1,"-", W6-1,tien);
    printf("\xc3%.*s\xc5%.*s\xc5%.*s\xc5%.*s\xc5%.*s\xc5%.*s\xb4\n",
        W1,LINE, W2,LINE, W3,LINE, W4,LINE, W5,LINE, W6,LINE);
    printf("\xb3 %-*s\xb3 %-*s\xb3 %*.0f\xb3\n",
        W1+W2+1,"", W3+W4+W5+2,"Cong tien hang:", W6-1,tien);
    printf("\xb3 %-*s\xb3 %-*s\xb3 %*.0f\xb3\n",
        W1+W2+1,"Thue suat GTGT: 8%", W3+W4+W5+2,"Tien thue GTGT:", W6-1,vat);
    printf("\xb3 %-*s\xb3 %-*s\xb3 %*.0f\xb3\n",
        W1+W2+1,"Ty gia:", W3+W4+W5+2,"Tong cong TT:", W6-1,tong);
    printf("\xc0%.*s\xc1%.*s\xc1%.*s\xd9\n",
        W1+W2+2,LINE LINE, W3+W4+W5+3,LINE LINE, W6,LINE);

    printf("So tien bang chu: ");
    docSo(tongLL);
    printf("\n");
}

/* ============================================================
   Bai 14: Tinh tien nuoc sinh hoat
   ============================================================ */
void bth14() {
    int m3;
    printf("Nhap so m3 nuoc tieu thu: ");
    scanf("%d", &m3);

    double tien = 0;
    if      (m3 <= 10) tien = m3 * 5973;
    else if (m3 <= 20) tien = 10*5973 + (m3-10)*7052;
    else if (m3 <= 30) tien = 10*5973 + 10*7052 + (m3-20)*8669;
    else               tien = 10*5973 + 10*7052 + 10*8669 + (m3-30)*15929;

    tien = tien * 1.05 + tien * 0.10;   /* VAT 5% + phi BVMT 10% */

    printf("Tien nuoc: %d dong\n", (int)tien);
}

/* ============================================================
   Bai 15: Tinh tien phong khach san
   ============================================================ */
void bth15() {
    int loai, dem, ngayNghi;
    printf("Nhap loai phong (1/2/3): ");
    scanf("%d", &loai);
    printf("Nhap so dem: ");
    scanf("%d", &dem);
    printf("Ngay nghi le? (1=co, 0=khong): ");
    scanf("%d", &ngayNghi);

    double donGia;
    switch (loai) {
        case 1: donGia = 500000;  break;
        case 2: donGia = 900000;  break;
        case 3: donGia = 1500000; break;
        default: printf("Loai phong khong hop le!\n"); return;
    }

    double tong = donGia * dem;
    if (ngayNghi) tong *= 1.20;   /* phu thu le +20% */
    if (dem >= 5) tong *= 0.85;   /* giam 15% neu o >= 5 dem */

    printf("Tong tien: %d dong\n", (int)tong);
}

/* ============================================================
   Bai 16: Tinh tien ve xe khach (6 hang ghe)
   ============================================================ */
void bth16() {
    int n1, n2, n3, n4, n5, n6;
    int ngayNghi, khuHoi;

    printf("Nhap so ve hang 1->6: ");
    scanf("%d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6);
    printf("Ngay nghi le? (1=co, 0=khong): ");
    scanf("%d", &ngayNghi);
    printf("Ve khu hoi? (1=co, 0=khong): ");
    scanf("%d", &khuHoi);

    double tong = n1*895000  + n2*1111000 + n3*1279000
                + n4*1417000 + n5*1452000 + n6*1566000;

    if (ngayNghi) tong *= 1.15;   /* phu thu le +15% */
    if (khuHoi)   tong *= 0.90;   /* giam 10% khu hoi */

    printf("Tong tien ve: %d dong\n", (int)tong);
}

/* ============================================================
   Bai 17: Tra tien bang tien giay (menh gia lon nhat truoc)
   ============================================================ */
void bth17() {
    int tien;
    printf("Nhap so tien (don vi dong): ");
    scanf("%d", &tien);

    int menh_gia[] = {500000, 200000, 100000, 50000, 20000, 10000, 5000, 1000};
    int ten[]      = {500,    200,    100,    50,    20,    10,    5,    1};
    int n = 8;

    for (int i = 0; i < n; i++) {
        int so_to = tien / menh_gia[i];
        if (so_to > 0) {
            printf("%3d nghin x %d to\n", ten[i], so_to);
            tien -= so_to * menh_gia[i];
        }
    }
}
/*202516919*/