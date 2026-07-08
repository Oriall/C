#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

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
int  menu();

/* ===================== BAI 1 ===================== */
/* Ghi chuoi "Hello World" ra file van ban hello.txt */
void bth1() {
    FILE *out = fopen("hello.txt", "w");
    if (out == NULL) {
        printf("Khong mo duoc file!\n");
        return;
    }
    fprintf(out, "Hello World");
    fclose(out);
    printf("Da ghi xong hello.txt\n");
}

/* ===================== BAI 2 ===================== */
/* Dem so tu (token) trong file vanban.txt */
void bth2() {
    int dem = 0;
    char s[80];
    FILE *f = fopen("vanban.txt", "r");
    if (f == NULL) {
        printf("Khong mo duoc file!\n");
        return;
    }
    while (fscanf(f, "%s", s) == 1) {
        dem++;
    }
    fclose(f);
    printf("So tu: %d\n", dem);
}

/* ===================== BAI 3 ===================== */
/* Thong ke chu thuong/hoa/so/khoang trang; chuyen sang chu hoa ghi vanban2.txt */
void bth3() {
    FILE *input, *output;
    int ch;
    int thuong = 0, hoa = 0, so = 0, khoangtrong = 0;

    input = fopen("vanban.txt", "r");
    if (input == NULL) {
        printf("Khong mo duoc file vanban.txt!\n");
        return;
    }
    output = fopen("vanban2.txt", "w");
    if (output == NULL) {
        fclose(input);
        printf("Khong tao duoc file vanban2.txt!\n");
        return;
    }

    while ((ch = fgetc(input)) != EOF) {
        if (ch >= 'a' && ch <= 'z') thuong++;
        else if (ch >= 'A' && ch <= 'Z') hoa++;
        else if (ch >= '0' && ch <= '9') so++;

        if (isspace(ch)) khoangtrong++;

        fputc(toupper(ch), output);
    }

    fclose(input);
    fclose(output);

    printf("So chu thuong : %d\n", thuong);
    printf("So chu hoa    : %d\n", hoa);
    printf("So chu so     : %d\n", so);
    printf("So khoang trang: %d\n", khoangtrong);
}

/* ===================== BAI 4 ===================== */
/* Dem so dong trong file input.txt */
#define LINE_LENGTH 80
void bth4() {
    FILE *fp;
    char line[LINE_LENGTH];
    int count = 0;

    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("Khong mo duoc file!\n");
        return;
    }
    while (fgets(line, LINE_LENGTH, fp) != NULL) {
        count++;
    }
    printf("So dong: %d\n", count);
    fclose(fp);
}

/* ===================== BAI 5 ===================== */
/* Nhap 3 diem, ghi ra file, doc lai, tinh diem trung binh */
void bth5() {
    float toan, ly, hoa, dtb;
    FILE *f;

    printf("Nhap diem toan, ly, hoa: ");
    scanf("%f %f %f", &toan, &ly, &hoa);

    f = fopen("my_score.txt", "w");
    if (f == NULL) { printf("Loi file!\n"); return; }
    fprintf(f, "%f %f %f", toan, ly, hoa);
    fclose(f);

    f = fopen("my_score.txt", "r");
    if (f == NULL) { printf("Loi file!\n"); return; }
    fscanf(f, "%f %f %f", &toan, &ly, &hoa);
    fclose(f);

    dtb = (toan + ly + hoa) / 3.0;
    printf("Diem trung binh: %.2f\n", dtb);
}

/* ===================== BAI 6 ===================== */
/* Ghi mang 3 so nguyen ra file nhi phan */
void bth6() {
    FILE *fp;
    int c[3] = {3, 4, 5};

    fp = fopen("file_nhi_phan.dat", "wb");
    if (fp == NULL) { printf("Loi file!\n"); return; }
    fwrite(c, 3, sizeof(int), fp);
    fclose(fp);
    printf("Da ghi 3 so nguyen vao file_nhi_phan.dat\n");
}

/* ===================== BAI 7 ===================== */
/* Doc mang 3 so nguyen tu file nhi phan */
void bth7() {
    FILE *fp;
    int buffer[3];
    int i;

    fp = fopen("file_nhi_phan.dat", "rb");
    if (fp == NULL) { printf("Loi file! (Hay chay bai 6 truoc)\n"); return; }
    fread(buffer, 3, sizeof(int), fp);
    for (i = 0; i < 3; i++) {
        printf("Phan tu thu %d : %d\n", i, buffer[i]);
    }
    fclose(fp);
}

/* ===================== BAI 8 ===================== */
/* Sinh ngau nhien 10-29 so nguyen vao fb2.dat; tinh kich thuoc file va so phan tu */
void bth8() {
    FILE *fp;
    int i, n, filesize, so_phan_tu;

    srand(time(NULL));
    fp = fopen("fb2.dat", "wb");
    if (fp == NULL) { printf("Loi file!\n"); return; }
    n = 10 + rand() % 20;
    for (i = 0; i < n; i++) {
        int r = 1 + rand() % 100;
        fwrite(&r, 1, sizeof(int), fp);
    }
    fclose(fp);

    fp = fopen("fb2.dat", "rb");
    if (fp == NULL) { printf("Loi file!\n"); return; }
    fseek(fp, 0, SEEK_END);
    filesize = ftell(fp);
    so_phan_tu = filesize / sizeof(int);
    printf("Kich thuoc file (byte): %d\n", filesize);
    printf("So phan tu: %d\n", so_phan_tu);
    fclose(fp);
}

/* ===================== BAI 9 ===================== */
/* Doc gia tri tai vi tri pos trong fb2.dat */
void bth9() {
    FILE *fp;
    int pos, val;

    fp = fopen("fb2.dat", "rb");
    if (fp == NULL) { printf("Loi file! (Hay chay bai 8 truoc)\n"); return; }

    printf("Nhap vi tri can doc: ");
    if (scanf("%d", &pos) != 1) { fclose(fp); return; }

    fseek(fp, pos * sizeof(int), SEEK_SET);
    if (fread(&val, 1, sizeof(int), fp) == 1) {
        printf("Gia tri tai vi tri %d: %d\n", pos, val);
    } else {
        printf("Vi tri ngoai pham vi file!\n");
    }
    fclose(fp);
}

/* ===================== BAI 10 ===================== */
/* Ghi them mot so nguyen vao cuoi fb2.dat */
void bth10() {
    FILE *fp;
    int n = 6;

    fp = fopen("fb2.dat", "ab");
    if (fp == NULL) { printf("Loi file!\n"); return; }
    fwrite(&n, 1, sizeof(int), fp);
    fclose(fp);
    printf("Da ghi them gia tri %d vao cuoi fb2.dat\n", n);
}

/* ===================== BAI 11 ===================== */
/* Cap nhat gia tri tai mot vi tri chi dinh trong fb2.dat */
void bth11() {
    FILE *fp;
    int n, index;

    fp = fopen("fb2.dat", "r+b");
    if (fp == NULL) { printf("Loi file! (Hay chay bai 8 truoc)\n"); return; }

    printf("Nhap vi tri va gia tri moi: ");
    if (scanf("%d %d", &index, &n) != 2) { fclose(fp); return; }

    fseek(fp, index * sizeof(int), SEEK_SET);
    fwrite(&n, 1, sizeof(int), fp);
    fclose(fp);
    printf("Da cap nhat vi tri %d thanh %d\n", index, n);
}

/* ===================== BAI 12 ===================== */
/* Ghi 100 so le vao Songuyen.dat; doc tu phan tu 50 den het */
void bth12() {
    FILE *fp;
    int i, val;

    fp = fopen("Songuyen.dat", "wb");
    if (fp == NULL) { printf("Loi file!\n"); return; }
    for (i = 0; i < 100; i++) {
        int odd = 2 * i + 1;
        fwrite(&odd, 1, sizeof(int), fp);
    }
    fclose(fp);

    fp = fopen("Songuyen.dat", "rb");
    if (fp == NULL) { printf("Loi file!\n"); return; }
    fseek(fp, 50 * sizeof(int), SEEK_SET);
    printf("Cac phan tu tu vi tri 50:\n");
    while (fread(&val, 1, sizeof(int), fp) == 1) {
        printf("%d\n", val);
    }
    fclose(fp);
}

/* ===================== BAI 13 ===================== */
/* Quan ly thi sinh: nhap, loc khoa CNTT, tim theo SBD, sap xep theo diem */
typedef struct {
    int SoBaoDanh;
    char HoTen[31];
    char Khoa[5];
    float DiemThi;
} ThiSinh;

void bth13() {
    FILE *fp, *fout, *ftxt;
    ThiSinh ds[100], ts;
    int n = 0, i, j, sbd;

    fp = fopen("ThiSinh.dat", "wb");
    if (fp == NULL) { printf("Loi file!\n"); return; }
    printf("Nhap thi sinh (SBD = -1 de ket thuc):\n");
    while (1) {
        printf("So bao danh: ");
        if (scanf("%d", &ts.SoBaoDanh) != 1) break;
        if (ts.SoBaoDanh == -1) break;
        while (getchar() != '\n');
        printf("Ho ten: ");
        fgets(ts.HoTen, sizeof(ts.HoTen), stdin);
        ts.HoTen[strcspn(ts.HoTen, "\n")] = '\0';
        printf("Khoa: ");
        fgets(ts.Khoa, sizeof(ts.Khoa), stdin);
        ts.Khoa[strcspn(ts.Khoa, "\n")] = '\0';
        printf("Diem thi: ");
        scanf("%f", &ts.DiemThi);
        fwrite(&ts, 1, sizeof(ThiSinh), fp);
    }
    fclose(fp);

    /* Loc thi sinh khoa CNTT */
    fp = fopen("ThiSinh.dat", "rb");
    fout = fopen("CNTT.dat", "wb");
    if (fp == NULL || fout == NULL) { printf("Loi file!\n"); return; }
    printf("\nDanh sach CNTT diem > 21:\n");
    printf("STT\tSBD\tHo Ten\tDiem\n");
    i = 1;
    while (fread(&ts, 1, sizeof(ThiSinh), fp) == 1) {
        if (strcmp(ts.Khoa, "CNTT") == 0) {
            fwrite(&ts, 1, sizeof(ThiSinh), fout);
            if (ts.DiemThi > 21) {
                printf("%d\t%d\t%s\t%.1f\n", i++, ts.SoBaoDanh, ts.HoTen, ts.DiemThi);
            }
        }
    }
    fclose(fp);
    fclose(fout);

    /* Tim theo SBD */
    fp = fopen("ThiSinh.dat", "rb");
    if (fp == NULL) { printf("Loi file!\n"); return; }
    printf("\nNhap SBD can tim: ");
    if (scanf("%d", &sbd) == 1) {
        int found = 0;
        while (fread(&ts, 1, sizeof(ThiSinh), fp) == 1) {
            if (ts.SoBaoDanh == sbd) {
                printf("%d\t%s\t%s\t%.1f\n", ts.SoBaoDanh, ts.HoTen, ts.Khoa, ts.DiemThi);
                found = 1;
                break;
            }
        }
        if (!found) printf("Khong tim thay\n");
    }
    fclose(fp);

    /* Sap xep theo diem giam dan */
    fp = fopen("CNTT.dat", "rb");
    if (fp == NULL) { printf("Loi file!\n"); return; }
    while (fread(&ds[n], 1, sizeof(ThiSinh), fp) == 1) n++;
    fclose(fp);

    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (ds[i].DiemThi < ds[j].DiemThi) {
                ThiSinh temp = ds[i]; ds[i] = ds[j]; ds[j] = temp;
            }

    fout = fopen("CNTT_sapxeptheodiemthi.dat", "wb");
    ftxt = fopen("CNTT_sapxeptheodiemthi.txt", "w");
    if (fout == NULL || ftxt == NULL) { printf("Loi file!\n"); return; }
    printf("\nDanh sach CNTT sap xep theo diem giam dan:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%s\t%.1f\n", ds[i].SoBaoDanh, ds[i].HoTen, ds[i].DiemThi);
        fwrite(&ds[i], 1, sizeof(ThiSinh), fout);
        fprintf(ftxt, "%d\t%s\t%s\t%.1f\n", ds[i].SoBaoDanh, ds[i].HoTen, ds[i].Khoa, ds[i].DiemThi);
    }
    fclose(fout);
    fclose(ftxt);
}

/* ===================== BAI 14 ===================== */
/* Quan ly hang hoa: nhap, thong ke, tim theo so luong, cap nhat ton kho */
typedef struct {
    char TenHang[31];
    int SoLuong;
    float DonGia;
} HangHoa;

void bth14() {
    FILE *fp;
    HangHoa hh;
    int q, i, found, req_sl;
    char req_ten[31];
    int tong_sl = 0;
    float tong_st = 0;

    fp = fopen("HangHoa.dat", "wb");
    if (fp == NULL) { printf("Loi file!\n"); return; }
    printf("Nhap hang hoa (Ten = * de ket thuc):\n");
    while (1) {
        printf("Ten hang: ");
        fgets(hh.TenHang, sizeof(hh.TenHang), stdin);
        hh.TenHang[strcspn(hh.TenHang, "\n")] = '\0';
        if (strcmp(hh.TenHang, "*") == 0) break;
        printf("So luong, don gia: ");
        if (scanf("%d %f", &hh.SoLuong, &hh.DonGia) != 2) break;
        while (getchar() != '\n');
        fwrite(&hh, 1, sizeof(HangHoa), fp);
    }
    fclose(fp);

    fp = fopen("HangHoa.dat", "rb");
    if (fp == NULL) { printf("Loi file!\n"); return; }
    printf("\nSTT\tTen Hang\tSo Luong\tDon Gia\tThanh Tien\n");
    i = 1;
    while (fread(&hh, 1, sizeof(HangHoa), fp) == 1) {
        float tt = hh.SoLuong * hh.DonGia;
        printf("%d\t%s\t%d\t%.1f\t%.1f\n", i++, hh.TenHang, hh.SoLuong, hh.DonGia, tt);
        tong_sl += hh.SoLuong;
        tong_st += tt;
    }
    printf("Tong so luong: %d, Tong tien: %.1f\n", tong_sl, tong_st);
    fclose(fp);

    fp = fopen("HangHoa.dat", "rb");
    if (fp == NULL) { printf("Loi file!\n"); return; }
    printf("\nNhap so luong can tim: ");
    if (scanf("%d", &q) == 1) {
        found = 0;
        while (fread(&hh, 1, sizeof(HangHoa), fp) == 1) {
            if (hh.SoLuong == q) {
                printf("%s\t%d\t%.1f\n", hh.TenHang, hh.SoLuong, hh.DonGia);
                found = 1;
            }
        }
        if (!found) printf("Khong tim thay\n");
    }
    fclose(fp);
    while (getchar() != '\n');

    fp = fopen("HangHoa.dat", "r+b");
    if (fp == NULL) { printf("Loi file!\n"); return; }
    printf("\nNhap ten hang can xuat: ");
    fgets(req_ten, sizeof(req_ten), stdin);
    req_ten[strcspn(req_ten, "\n")] = '\0';
    printf("Nhap so luong xuat: ");
    if (scanf("%d", &req_sl) == 1) {
        found = 0;
        while (fread(&hh, 1, sizeof(HangHoa), fp) == 1) {
            if (strcmp(hh.TenHang, req_ten) == 0) {
                found = 1;
                if (hh.SoLuong >= req_sl) {
                    hh.SoLuong -= req_sl;
                    fseek(fp, -(long)sizeof(HangHoa), SEEK_CUR);
                    fwrite(&hh, 1, sizeof(HangHoa), fp);
                    printf("Da cap nhat. So luong con lai: %d\n", hh.SoLuong);
                } else {
                    printf("Khong du hang trong kho!\n");
                }
                break;
            }
        }
        if (!found) printf("Khong tim thay mat hang!\n");
    }
    fclose(fp);
}

/* ===================== BAI 15 ===================== */
/* Loc bo comment // va /* ... *\/ trong file ma nguon */
void bth15() {
    char fin_name[100], fout_name[100];
    FILE *fin, *fout;
    int ch, next;
    int in_line_comment = 0, in_block_comment = 0;

    printf("Nhap ten file nguon va file dich: ");
    if (scanf("%s %s", fin_name, fout_name) != 2) return;

    fin = fopen(fin_name, "r");
    fout = fopen(fout_name, "w");
    if (fin == NULL || fout == NULL) {
        printf("Khong mo duoc file!\n");
        if (fin) fclose(fin);
        if (fout) fclose(fout);
        return;
    }

    while ((ch = fgetc(fin)) != EOF) {
        if (in_line_comment) {
            if (ch == '\n') {
                in_line_comment = 0;
                fputc(ch, fout);
            }
        } else if (in_block_comment) {
            if (ch == '*') {
                next = fgetc(fin);
                if (next == '/') in_block_comment = 0;
                else ungetc(next, fin);
            }
        } else {
            if (ch == '/') {
                next = fgetc(fin);
                if (next == '/') in_line_comment = 1;
                else if (next == '*') in_block_comment = 1;
                else {
                    fputc(ch, fout);
                    if (next != EOF) fputc(next, fout);
                }
            } else {
                fputc(ch, fout);
            }
        }
    }

    fclose(fin);
    fclose(fout);
    printf("Da loc comment va ghi ra %s\n", fout_name);
}

/* ===================== MENU ===================== */
int menu() {
    int tuy_chon = 0;
    printf("\n 1.  Bai 1  - Ghi chuoi ra file van ban (hello.txt)");
    printf("\n 2.  Bai 2  - Dem so tu trong file van ban");
    printf("\n 3.  Bai 3  - Thong ke ky tu va chuyen chu hoa");
    printf("\n 4.  Bai 4  - Dem so dong trong file");
    printf("\n 5.  Bai 5  - Ghi/doc diem va tinh diem trung binh");
    printf("\n 6.  Bai 6  - Ghi mang so nguyen ra file nhi phan");
    printf("\n 7.  Bai 7  - Doc mang so nguyen tu file nhi phan");
    printf("\n 8.  Bai 8  - Sinh so ngau nhien, tinh kich thuoc file");
    printf("\n 9.  Bai 9  - Doc gia tri tai vi tri bat ky (fseek)");
    printf("\n10.  Bai 10 - Ghi them du lieu vao cuoi file (append)");
    printf("\n11.  Bai 11 - Cap nhat gia tri tai vi tri chi dinh");
    printf("\n12.  Bai 12 - Ghi 100 so le, doc tu giua file");
    printf("\n13.  Bai 13 - Quan ly thi sinh (struct + file nhi phan)");
    printf("\n14.  Bai 14 - Quan ly hang hoa (struct + file nhi phan)");
    printf("\n15.  Bai 15 - Loc bo comment trong file ma nguon");
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
        case 13: bth13(); break;
        case 14: bth14(); break;
        case 15: bth15(); break;
        default: printf("Lua chon khong hop le!\n");
    }

    return 0;
}