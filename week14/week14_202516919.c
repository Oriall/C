#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bth1();
void bth2();
void bth3();
void bth4();
void bth5();
void bth6();
void bth7();
void bth8a();
void bth8b();
void bth8();
void bth9();
void bth10();
void bth11();
void bth12();
int  menu();

/* ===================== BAI 1 & 2 ===================== */
/* Khai bao struct, gan gia tri tung truong, cong myNum */
struct myStructure_1 {
    int myNum;
    char myLetter;
};

void bth1() {
    struct myStructure_1 s1, s2, s3;

    s1.myNum = 13; s1.myLetter = 'B';
    s2.myNum = 20; s2.myLetter = 'C';
    s3.myNum = s1.myNum + s2.myNum;
    s3.myLetter = 'A';

    printf("S2 - Number: %d, Letter: %c\n", s2.myNum, s2.myLetter);
    printf("S3 - Number: %d, Letter: %c\n", s3.myNum, s3.myLetter);
}

/* ===================== BAI 2 ===================== */
/* Them truong myString, dung strcpy de gan chuoi */
struct myStructure_2 {
    int myNum;
    char myLetter;
    char myString[30];
};

void bth2() {
    struct myStructure_2 s1;
    strcpy(s1.myString, "Some text");
    printf("My string: %s\n", s1.myString);
}

/* ===================== BAI 3 ===================== */
/* Khoi tao struct bang danh sach gia tri {} */
void bth3() {
    struct myStructure_2 s1 = {13, 'B', "Some text"};
    printf("%d %c %s\n", s1.myNum, s1.myLetter, s1.myString);
}

/* ===================== BAI 4 & 5 ===================== */
/* Sao chep struct bang phep gan =; sua truong cua ban sao khong anh huong ban goc */
void bth4() {
    struct myStructure_2 s1 = {13, 'B', "Some text"};
    struct myStructure_2 s2;

    s2 = s1;
    s2.myNum = 30;
    s2.myLetter = 'C';
    strcpy(s2.myString, "Something else");

    printf("%d %c %s\n", s1.myNum, s1.myLetter, s1.myString);
    printf("%d %c %s\n", s2.myNum, s2.myLetter, s2.myString);
}

/* ===================== BAI 5 ===================== */
/* Con tro den struct: pt->field tuong duong (*pt).field */
struct EmpAddress {
    char *ename;
    char stname[20];
    int pincode;
};

void bth5() {
    struct EmpAddress employee = {"John Alter", "Court Street", 654134};
    struct EmpAddress *pt = &employee;
    printf("%s from %s\n", pt->ename, (*pt).stname);
}

/* ===================== BAI 6 ===================== */
/* Struct Date luu sinh vien; Input/Printf; sao chep va chinh sua ban sao */
typedef struct {
    char name[150];
    int age;
    float grade;
} Student;

void inputStudent(Student *sv) {
    fgets(sv->name, sizeof(sv->name), stdin);
    sv->name[strcspn(sv->name, "\r\n")] = '\0';
    scanf("%d", &sv->age);
    scanf("%f", &sv->grade);
}

void printStudent(Student sv) {
    printf("%s %d %.1f\n", sv.name, sv.age, sv.grade);
}

void bth6() {
    Student sv1, sv2, sv3;

    inputStudent(&sv1);
    while (getchar() != '\n');
    inputStudent(&sv3);

    sv2 = sv1;
    strcat(sv2.name, " Lorem Ipsum");
    sv2.age  += 1;
    sv2.grade -= 1;

    printStudent(sv1);
    printStudent(sv2);
    printStudent(sv3);
}

/* ===================== BAI 7 ===================== */
/* Struct Date kiem tra ngay hop le: nam nhuan, so ngay trong thang */
typedef struct {
    int day;
    int month;
    int year;
} Date;

int isLeapYear(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

int isValidDate(Date d) {
    if (d.year <= 0 || d.month < 1 || d.month > 12) return 0;

    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeapYear(d.year)) days[2] = 29;

    return (d.day >= 1 && d.day <= days[d.month]);
}

void bth7() {
    Date d;
    scanf("%d %d %d", &d.day, &d.month, &d.year);
    printf("%s\n", isValidDate(d) ? "CORRECT" : "INCORRECT");
}

/* ===================== BAI 8a ===================== */
/* Struct Weather luu ten thang, luong mua, nhiet do; nhap qua scanf, in thong ke */
typedef struct {
    char monthName[20];
    int total_rain;
    int low_temp;
    int high_temp;
} Weather;

static const char *months_names[] = {
    "January","February","March","April","May","June",
    "July","August","September","October","November","December"
};

void bth8a() {
    Weather a[12];
    float totalRain = 0;
    int minTemp, maxTemp;
    int minMonth = 0, maxMonth = 0;

    for (int i = 0; i < 12; i++) {
        scanf("%d %d %d", &a[i].total_rain, &a[i].low_temp, &a[i].high_temp);
        totalRain += a[i].total_rain;
        strcpy(a[i].monthName, months_names[i]);

        if (i == 0) { minTemp = a[i].low_temp; maxTemp = a[i].high_temp; }
        if (a[i].low_temp  < minTemp) { minTemp = a[i].low_temp;  minMonth = i; }
        if (a[i].high_temp > maxTemp) { maxTemp = a[i].high_temp; maxMonth = i; }
    }

    printf("%.2f\n", totalRain / 12.0f);
    printf("%d %s\n", minTemp, a[minMonth].monthName);
    printf("%d %s\n", maxTemp, a[maxMonth].monthName);
}

/* ===================== BAI 8b ===================== */
/* Nhap co kiem tra hop le; in trung binh, max/min; sap xep luong mua tang dan */
void bth8b() {
    Weather data[12];
    int total_year_rain = 0;
    int max_temp = -100, min_temp = 100, max_month = 0, min_month = 0;

    for (int i = 0; i < 12; i++) {
        strcpy(data[i].monthName, months_names[i]);
        printf("--- Nhap du lieu thoi tiet cho %s ---\n", months_names[i]);
        do {
            printf("Tong luong mua (>=0 mm): ");
            scanf("%d", &data[i].total_rain);
        } while (data[i].total_rain < 0);

        do {
            printf("Nhiet do thap nhat va cao nhat (-40 den 50C): ");
            scanf("%d %d", &data[i].low_temp, &data[i].high_temp);
        } while (data[i].low_temp  < -40 || data[i].low_temp  > 50 ||
                 data[i].high_temp < -40 || data[i].high_temp > 50 ||
                 data[i].high_temp < data[i].low_temp);

        total_year_rain += data[i].total_rain;
        if (data[i].high_temp > max_temp) { max_temp = data[i].high_temp; max_month = i; }
        if (data[i].low_temp  < min_temp) { min_temp = data[i].low_temp;  min_month = i; }
    }

    printf("\nLuong mua trung binh thang: %.2f mm\n", (float)total_year_rain / 12);
    printf("Nhiet do cao nhat: %d C tai %s\n", max_temp, months_names[max_month]);
    printf("Nhiet do thap nhat: %d C tai %s\n", min_temp, months_names[min_month]);

    /* Selection sort tang dan theo luong mua */
    for (int i = 0; i < 11; i++)
        for (int j = i + 1; j < 12; j++)
            if (data[i].total_rain > data[j].total_rain) {
                Weather tmp = data[i]; data[i] = data[j]; data[j] = tmp;
            }

    printf("\nDanh sach sap xep theo luong mua tang dan:\n");
    printf("%-14s %-12s %-10s %-10s\n", "Thang", "Luong mua", "Thap nhat", "Cao nhat");
    for (int i = 0; i < 12; i++)
        printf("%-14s %-12d %-10d %-10d\n",
               data[i].monthName, data[i].total_rain,
               data[i].low_temp,  data[i].high_temp);
}

/* Sub-menu cho nhom bai 8 */
void bth8() {
    int sub;
    printf("\n  8a. Weather - nhap scanf thuan, in thong ke co ban");
    printf("\n  8b. Weather - nhap co kiem tra, sap xep luong mua");
    printf("\nNhap lua chon (8a=1, 8b=2): ");
    scanf("%d", &sub);
    if (sub == 1) bth8a();
    else          bth8b();
}

/* ===================== BAI 9 ===================== */
/* Struct Date: nhap 2 ngay hop le; so sanh va in ket qua <, >, hoac bang nhau */
int daysInMonth(int month, int year) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: return 31;
        case 4: case 6: case 9: case 11: return 30;
        case 2: return isLeapYear(year) ? 29 : 28;
        default: return 0;
    }
}

void inputDate(Date *d) {
    int valid = 0;
    while (!valid) {
        scanf("%d %d %d", &d->day, &d->month, &d->year);
        if (d->year > 0 && d->month >= 1 && d->month <= 12 &&
            d->day >= 1 && d->day <= daysInMonth(d->month, d->year))
            valid = 1;
        else
            printf("Invalid date, re-enter: ");
    }
}

int datecmp(Date d1, Date d2) {
    if (d1.year  != d2.year)  return d1.year  < d2.year  ? -1 : 1;
    if (d1.month != d2.month) return d1.month < d2.month ? -1 : 1;
    if (d1.day   != d2.day)   return d1.day   < d2.day   ? -1 : 1;
    return 0;
}

void bth9() {
    Date date1, date2;
    inputDate(&date1);
    inputDate(&date2);

    int cmp = datecmp(date1, date2);
    if (cmp == 0) {
        printf("Two dates are identical\n");
    } else if (cmp < 0) {
        printf("%d/%d/%d < %d/%d/%d\n",
               date1.day, date1.month, date1.year,
               date2.day, date2.month, date2.year);
    } else {
        printf("%d/%d/%d > %d/%d/%d\n",
               date1.day, date1.month, date1.year,
               date2.day, date2.month, date2.year);
    }
}

/* ===================== BAI 10 ===================== */
/* Struct Student (id, name, grade, rank); nhap n sinh vien qua fgets+scanf;
   xep loai A/B/C/D; sap xep giam dan theo diem; in ket qua */
typedef struct {
    char name[100];
    char id[20];
    float grade;
    char rank[5];
} SVRank;

void classify(SVRank *s) {
    if      (s->grade >= 9.0) strcpy(s->rank, "A");
    else if (s->grade >= 8.0) strcpy(s->rank, "B");
    else if (s->grade >= 6.5) strcpy(s->rank, "C");
    else                      strcpy(s->rank, "D");
}

void bth10() {
    int n;
    scanf("%d\n", &n);
    SVRank a[100];

    for (int i = 0; i < n - 1; i++) {
        fgets(a[i].id,   sizeof(a[i].id),   stdin);
        a[i].id[strcspn(a[i].id, "\r\n")] = '\0';
        fgets(a[i].name, sizeof(a[i].name), stdin);
        a[i].name[strcspn(a[i].name, "\r\n")] = '\0';
        scanf("%f\n", &a[i].grade);
        classify(&a[i]);
    }

    /* Phan tu cuoi: scanf khong co \n de tranh treo */
    int i = n - 1;
    fgets(a[i].id,   sizeof(a[i].id),   stdin);
    a[i].id[strcspn(a[i].id, "\r\n")] = '\0';
    fgets(a[i].name, sizeof(a[i].name), stdin);
    a[i].name[strcspn(a[i].name, "\r\n")] = '\0';
    scanf("%f", &a[i].grade);
    classify(&a[i]);

    /* Selection sort giam dan theo diem */
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i].grade < a[j].grade) {
                SVRank tmp = a[i]; a[i] = a[j]; a[j] = tmp;
            }

    for (int i = 0; i < n; i++)
        printf("%s %s %.1f %s\n", a[i].name, a[i].id, a[i].grade, a[i].rank);
}

/* ===================== BAI 11 ===================== */
/* Con tro toi mang con tro struct; truy cap qua (*(*pt+i))->field */
struct Employee {
    char *empname;
    int empid;
};

void bth11() {
    printf("\n Pointer : Show a pointer to an array which contents are pointer to structure :\n");
    printf("--------------------------------------------------------------------------------\n");

    static struct Employee emp1 = {"Jhon", 1001}, emp2 = {"Alex", 1002}, emp3 = {"Taylor", 1003};
    struct Employee (*arr[])       = {&emp1, &emp2, &emp3};
    struct Employee (*(*pt)[3])    = &arr;

    printf(" Employee Name: %s\n", (*(*pt + 1))->empname);
    printf(" Employee ID: %d\n",   (*(*pt + 1))->empid);
}

/* ===================== BAI 12 ===================== */
/* Struct myStructure_2 (tai su dung); tong hop tham khao cac khai niem da hoc */
void bth12() {
    /* Tong hop: khoi tao, sao chep, con tro, strcpy */
    struct myStructure_2 a = {1, 'X', "Alpha"};
    struct myStructure_2 b = a;          /* sao chep gia tri */
    struct myStructure_2 *p = &a;       /* con tro toi struct */

    strcpy(b.myString, "Beta");
    b.myNum = 99;

    printf("a: %d %c %s\n", a.myNum, a.myLetter, a.myString);
    printf("b: %d %c %s\n", b.myNum, b.myLetter, b.myString);
    printf("p->myNum = %d, (*p).myLetter = %c\n", p->myNum, (*p).myLetter);
}

/* ===================== MENU ===================== */
int menu() {
    int tuy_chon = 0;
    printf("\n 1.  Bai 1&2 - Struct co ban: gan gia tri, cong truong myNum");
    printf("\n 2.  Bai 2   - Struct voi truong chuoi; dung strcpy gan gia tri");
    printf("\n 3.  Bai 3   - Khoi tao struct bang danh sach {}");
    printf("\n 4.  Bai 4&5 - Sao chep struct bang =; sua ban sao khong anh huong goc");
    printf("\n 5.  Bai 5   - Con tro struct: pt->field va (*pt).field");
    printf("\n 6.  Bai 6   - Struct Student: Input/Print, sao chep va chinh sua");
    printf("\n 7.  Bai 7   - Struct Date: kiem tra ngay hop le, nam nhuan");
    printf("\n 8.  Bai 8   - Struct Weather: 8a=nhap thuan/8b=nhap co kiem tra+sap xep");
    printf("\n 9.  Bai 9   - Struct Date: nhap 2 ngay hop le, so sanh va in ket qua");
    printf("\n10.  Bai 10  - Struct Student: nhap fgets, xep loai, sap xep giam dan");
    printf("\n11.  Bai 11  - Con tro toi mang con tro struct");
    printf("\n12.  Bai 12  - Tong hop: khoi tao, sao chep, con tro, strcpy");
    printf("\n-------------------------------------------------");
    printf("\nNhap tuy chon: ");
    scanf("%d", &tuy_chon);
    return tuy_chon;
}

/* ===================== MAIN ===================== */
int main() {
    int tuy_chon = menu();

    switch (tuy_chon) {
        case  1: bth1();  break;
        case  2: bth2();  break;
        case  3: bth3();  break;
        case  4: bth4();  break;
        case  5: bth5();  break;
        case  6: bth6();  break;
        case  7: bth7();  break;
        case  8: bth8();  break;
        case  9: bth9();  break;
        case 10: bth10(); break;
        case 11: bth11(); break;
        case 12: bth12(); break;
        default: printf("Lua chon khong hop le!\n");
    }

    return 0;
}