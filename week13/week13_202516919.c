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
/* strcat(s1,s2) noi s2 vao s1; strncat(s3,s1,6) noi 6 ky tu dau s1 vao s3 */
void bth1() {
    char s1[20] = "Happy ";
    char s2[] = "New Year ";
    char s3[40] = "";

    printf("s1 = %s \ns2 = %s \n", s1, s2);
    printf("strcat( s1, s2 ) = %s \n", strcat(s1, s2));
    printf("strncat( s3, s1, 6 ) = %s \n", strncat(s3, s1, 6));
    printf("strcat( s3, s1 ) = %s \n", strcat(s3, s1));
}

/* ===================== BAI 2 ===================== */
/* Ham spacecounter dem so ky tu khoang trang trong chuoi nhap vao */
int spacecounter(char inputline[]) {
    int count = 0, i = 0;
    while (inputline[i] != '\0') {
        if (inputline[i] == ' ') count++;
        i++;
    }
    return count;
}

void bth2() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    printf("%d\n", spacecounter(str));
}

/* ===================== BAI 3 ===================== */
/* Ham replace thay the ky tu replace_what bang replace_with trong chuoi str */
void replace(char str[], char replace_what, char replace_with) {
    for (int i = 0; str[i] != '\0'; ++i)
        if (str[i] == replace_what)
            str[i] = replace_with;
}

void bth3() {
    char str[100];
    char what, with;

    fgets(str, sizeof(str), stdin);
    scanf("%c", &what);
    scanf(" %c", &with);

    replace(str, what, with);
    printf("%s", str);
}

/* ===================== BAI 4 ===================== */
/* Kiem tra ma khach hang: 3 chu cai + 4 chu so, do dai dung 7 */
int check_customer_code(char str[]) {
    if (strlen(str) != 7) return 0;
    for (int i = 0; i < 3; i++)
        if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')))
            return 0;
    for (int i = 3; i < 7; i++)
        if (!(str[i] >= '0' && str[i] <= '9'))
            return 0;
    return 1;
}

void bth4() {
    char str[50];
    scanf("%s", str);
    printf("%d\n", check_customer_code(str));
}

/* ===================== BAI 5 ===================== */
/* my_strcpy sao chep chuoi source sang destination bang con tro, khong dung strcpy */
char* my_strcpy(char *destination, const char *source) {
    char *p = destination;
    while (*source != '\0') {
        *destination = *source;
        destination++;
        source++;
    }
    *destination = '\0';
    return p;
}

void bth5() {
    char src[] = "Hello";
    char dest[50];
    my_strcpy(dest, src);
    printf("%s\n", dest);
}

/* ===================== BAI 6 ===================== */
/* nameSlice cat chuoi tai vi tri khoang trang dau tien, chi giu lai phan ten */
void nameSlice(char userName[]) {
    int count = 0;
    while (userName[count] != ' ' && userName[count] != '\0')
        count++;
    if (userName[count] == ' ')
        userName[count] = '\0';
}

void bth6() {
    char name[41] = "Dennis Ritchie";
    nameSlice(name);
    printf("Your first name is: %s\n", name);
}

/* ===================== BAI 7 ===================== */
/* Cat bo khoang trang dau/cuoi chuoi, lay phan cuoi (ho ten cuoi) */
void bth7() {
    char str[100] = "  TRAN VAN A  ";
    char name[30] = "";
    int len = strlen(str);
    int end = len - 1;

    while (end >= 0 && str[end] == ' ') end--;
    if (end >= 0) str[end + 1] = '\0';

    int start = end;
    while (start >= 0 && str[start] != ' ') start--;
    if (start < 0 && end < 0) return;

    int idx = 0;
    for (int i = start + 1; i <= end; i++)
        name[idx++] = str[i];
    name[idx] = '\0';

    printf("%s\n", name);
}

/* ===================== BAI 8 ===================== */
/* strend kiem tra xem chuoi t co la hau to (suffix) cua chuoi s khong */
int strend(char *s, char *t) {
    int s_len = strlen(s), t_len = strlen(t);
    if (t_len <= s_len && strcmp(s + s_len - t_len, t) == 0)
        return 1;
    return 0;
}

void bth8() {
    char *s1 = "some really long string.";
    char *s2 = "ng.";
    char *s3 = "ng";

    if (strend(s1, s2))
        printf("The string (%s) has (%s) at the end.\n", s1, s2);
    else
        printf("The string (%s) doesn't have (%s) at the end.\n", s1, s2);

    if (strend(s1, s3))
        printf("The string (%s) has (%s) at the end.\n", s1, s3);
    else
        printf("The string (%s) doesn't have (%s) at the end.\n", s1, s3);
}

/* ===================== BAI 9 ===================== */
/* Tim san pham theo tu khoa bang strstr tren mang 2 chieu chuoi */
void bth9() {
    char products[5][2][50] = {
        {"TV127", "31 inch Television"},
        {"CD057", "CD Player"},
        {"TA877", "Answering Machine"},
        {"CS409", "Car Stereo"},
        {"PC655", "Personal Computer"}
    };
    char search_query[20] = "CD";

    for (int i = 0; i < 5; i++)
        if (strstr(products[i][0], search_query) != NULL)
            printf("%s  %s\n", products[i][0], products[i][1]);
}

/* ===================== BAI 10 ===================== */
/* str_any tra ve con tro den ky tu dau tien trong str1 xuat hien trong str2 */
char* str_any(char *str1, char *str2) {
    while (*str1 != '\0') {
        if (strchr(str2, *str1) != NULL)
            return str1;
        ++str1;
    }
    return NULL;
}

void bth10() {
    char s1[] = "computer";
    char s2[] = "abcd";
    char *res = str_any(s1, s2);
    if (res != NULL)
        printf("%c\n", *res);
}

/* ===================== BAI 11 ===================== */
/* swap bang con tro don chi doi dia chi cuc bo, khong anh huong bien ngoai;
   hoan doi that su phai lam truc tiep trong main bang bien tam t */
void bth11() {
    char *x = "ABC";
    char *y = "DEF";
    char *t;

    /* swap(x, y) khong doi duoc x, y bên ngoài vì chỉ đổi bản sao */
    /* Gọi swap nhưng x, y vẫn không đổi */
    {
        char *px = x, *py = y;
        char *tmp = px; px = py; py = tmp; /* đổi cuc bo - không tác dụng ra ngoài */
    }
    printf("(%s, %s)", x, y);   /* (ABC, DEF) - swap không có tác dụng */

    t = x; x = y; y = t;       /* Đổi trực tiếp trong main */
    printf("\n(%s, %s)\n", x, y); /* (DEF, ABC) */
}

/* ===================== BAI 12 ===================== */
/* Dem so tu trong chuoi bang co in_word: chuyen tu 0->1 khi gap ky tu khong phai trang */
void bth12() {
    char str[100] = "This is John";
    int word_count = 0, in_word = 0, i = 0;

    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r')
            in_word = 0;
        else if (in_word == 0) {
            in_word = 1;
            word_count++;
        }
        i++;
    }

    printf("Total number of words in the string is : %d\n", word_count);
}

/* ===================== BAI 13 ===================== */
/* Tim ky tu xuat hien nhieu nhat bang mang tan so freq[256], bo qua khoang trang */
void bth13() {
    char str[100] = "hello world";
    int freq[256] = {0};
    int i = 0, max_frequency = -1;
    char max_char = 0;

    while (str[i] != '\0') { freq[(unsigned char)str[i]]++; i++; }

    for (int j = 0; j < 256; j++)
        if (freq[j] > max_frequency && j != ' ' && j != '\n' && j != '\t') {
            max_frequency = freq[j];
            max_char = (char)j;
        }

    printf("Kytu xuat hien nhieu nhat: %c, So lan: %d\n", max_char, max_frequency);
}

/* ===================== BAI 14 ===================== */
/* Sap xep mang chuoi theo thu tu tang dan bang Selection Sort + strcpy/strcmp */
void bth14() {
    int n = 3;
    char arr[100][50] = {"zero", "one", "two"};
    char temp[50];

    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (strcmp(arr[i], arr[j]) > 0) {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }

    printf("The strings appears after sorting :\n");
    for (int i = 0; i < n; i++) printf("%s\n", arr[i]);
}

/* ===================== BAI 15 ===================== */
/* Lay chuoi con (substring) tu vi tri pos, do dai len, sao chep vao sub_str */
void bth15() {
    char main_str[100] = "this is test string";
    char sub_str[100] = "";
    int pos = 9, len = 4;
    int main_len = strlen(main_str), j = 0;

    if (pos < main_len)
        for (int i = pos; i < pos + len && main_str[i] != '\0'; i++)
            sub_str[j++] = main_str[i];
    sub_str[j] = '\0';

    printf("The substring retrieve from the string is : \"%s\"\n", sub_str);
}

/* ===================== BAI 16 ===================== */
/* Dem so lan xuat hien tu "the" trong chuoi (khong phan biet hoa/thuong) bang strstr */
void bth16() {
    char str[100] = "The string where the word the present more than once.";
    char temp[100];
    int count = 0;

    strcpy(temp, str);
    for (int i = 0; temp[i] != '\0'; i++)
        temp[i] = (temp[i] >= 'A' && temp[i] <= 'Z') ? temp[i] + 32 : temp[i];

    char *ptr = strstr(temp, "the");
    while (ptr != NULL) { count++; ptr += 3; ptr = strstr(ptr, "the"); }

    printf("The frequency of the word 'the' is : %d\n", count);
}

/* ===================== BAI 17 ===================== */
/* Xoa tat ca ky tu khong phai chu cai khoi chuoi, ghi de tai cho bang chi so j */
void bth17() {
    char str[100] = "gmail.com";
    int i = 0, j = 0;

    while (str[i] != '\0') {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            str[j++] = str[i];
        i++;
    }
    str[j] = '\0';

    printf("After removing the Output String : %s\n", str);
}

/* ===================== BAI 18 ===================== */
/* Tim tu dai nhat va ngan nhat trong chuoi bang cach tach tu vao mang 2 chieu */
void bth18() {
    char str[100] = "It is a string with smallest and largest word.";
    char words[20][20];
    char max_word[20], min_word[20];
    int row = 0, col = 0, i = 0;

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '.') {
            words[row][col++] = str[i];
        } else if (col > 0) {
            words[row][col] = '\0';
            row++; col = 0;
        }
        i++;
    }

    int max_len = strlen(words[0]), min_len = strlen(words[0]);
    strcpy(max_word, words[0]);
    strcpy(min_word, words[0]);

    for (int k = 1; k < row; k++) {
        int len = strlen(words[k]);
        if (len > max_len) { max_len = len; strcpy(max_word, words[k]); }
        if (len < min_len) { min_len = len; strcpy(min_word, words[k]); }
    }

    printf("The largest word is '%s'\n", max_word);
    printf("and the smallest word is '%s'\n", min_word);
    printf("in the string : '%s'\n", str);
}

/* ===================== BAI 19 ===================== */
/* Cau truc Student luu ho ten day du, ten, ho dem; splitName tach ten cuoi;
   sap xep theo ten, neu trung thi sap xep theo ho dem */
struct Student {
    char full_name[50];
    char first_name[20];
    char ho_dem[40];
};

void splitName(struct Student *std) {
    int len = strlen(std->full_name);
    int i = len - 1;

    while (i >= 0 && std->full_name[i] == ' ') i--;
    while (i >= 0 && std->full_name[i] != ' ') i--;

    if (i < 0) {
        strcpy(std->first_name, std->full_name);
        strcpy(std->ho_dem, "");
    } else {
        strcpy(std->first_name, &std->full_name[i + 1]);
        int k = 0;
        for (int j = 0; j <= i; j++) std->ho_dem[k++] = std->full_name[j];
        std->ho_dem[k] = '\0';
    }
}

void bth19() {
    int n = 3;
    struct Student list[3] = {
        {"Nguyen Van B", "", ""},
        {"Tran Anh B",   "", ""},
        {"Le Van A",     "", ""}
    };
    struct Student temp;

    for (int i = 0; i < n; i++) splitName(&list[i]);

    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++) {
            int cmp = strcmp(list[i].first_name, list[j].first_name);
            if (cmp > 0 || (cmp == 0 && strcmp(list[i].ho_dem, list[j].ho_dem) > 0)) {
                temp = list[i]; list[i] = list[j]; list[j] = temp;
            }
        }

    printf("Danh sach lop sau khi sap xep:\n");
    for (int i = 0; i < n; i++) printf("%s\n", list[i].full_name);
}

/* ===================== MENU ===================== */
int menu() {
    int tuy_chon = 0;
    printf("\n 1.  Bai 1  - strcat, strncat noi chuoi");
    printf("\n 2.  Bai 2  - spacecounter dem khoang trang trong chuoi");
    printf("\n 3.  Bai 3  - replace thay the ky tu trong chuoi");
    printf("\n 4.  Bai 4  - check_customer_code kiem tra ma khach hang");
    printf("\n 5.  Bai 5  - my_strcpy sao chep chuoi bang con tro");
    printf("\n 6.  Bai 6  - nameSlice lay ten dau trong chuoi ho ten");
    printf("\n 7.  Bai 7  - Lay ten cuoi trong chuoi ho ten co khoang trang");
    printf("\n 8.  Bai 8  - strend kiem tra hau to chuoi (suffix)");
    printf("\n 9.  Bai 9  - Tim san pham bang strstr tren mang 2 chieu");
    printf("\n10.  Bai 10 - str_any tim ky tu chung dau tien giua 2 chuoi");
    printf("\n11.  Bai 11 - swap con tro don, hoan doi that su trong main");
    printf("\n12.  Bai 12 - Dem so tu trong chuoi bang co in_word");
    printf("\n13.  Bai 13 - Tim ky tu xuat hien nhieu nhat bang freq[256]");
    printf("\n14.  Bai 14 - Sap xep mang chuoi tang dan bang Selection Sort");
    printf("\n15.  Bai 15 - Lay chuoi con (substring) tai vi tri pos, do dai len");
    printf("\n16.  Bai 16 - Dem so lan xuat hien tu 'the' bang strstr");
    printf("\n17.  Bai 17 - Xoa ky tu khong phai chu cai khoi chuoi");
    printf("\n18.  Bai 18 - Tim tu dai nhat va ngan nhat trong chuoi");
    printf("\n19.  Bai 19 - Struct Student, splitName, sap xep ho ten");
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