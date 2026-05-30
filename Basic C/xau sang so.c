#include <stdio.h>
#include <string.h>
int main()
{
    int nam, thang, day, gio, phut, giay, n, ngay, dem = 0, ln = -1e9, nam2, thang2, day2, gio2, phut2, giay2, ngay2, nam3, thang3, day3, gio3, phut3, giay3, ngay3;
    char a[10002][50], test[50];
    while (1)
    {

        scanf("%s", test);
        if (test[0] == '#')
        {
            break;
        }
        dem++;
        sscanf(test, "%d", &nam);
        scanf("%d %d", &thang, &ngay);
        scanf("%d:%d:%d %d", &gio, &phut, &giay, &n);

        sprintf(a[dem], "%04d%02d%02d%02d%02d%02d%d", nam, thang, ngay, gio, phut, giay, n);
    }
    for (int i = 1; i < dem; i++)
    {
        for (int j = i + 1; j <= dem; j++)
        {
            int nam2, thang2, ngay2, gio2, phut2, giay2;
            int nam3, thang3, ngay3, gio3, phut3, giay3;
            sscanf(a[i], "%04d%02d%02d%02d%02d%02d", &nam2, &thang2, &ngay2, &gio2, &phut2, &giay2);
            int tong = (nam2 * 100000 + thang2 * 1000 + ngay2 * 100) * 2 + (gio2 * 10000 + phut2 * 1000 + giay2 * 100);
            sscanf(a[j], "%04d%02d%02d%02d%02d%02d", &nam3, &thang3, &ngay3, &gio3, &phut3, &giay3);
            int tong2 = (nam3 * 100000 + thang3 * 1000 + ngay3 * 100) * 2 + (gio3 * 10000 + phut3 * 1000 + giay3 * 100);
            if (tong > tong2)
            {
                char temp[50];
                strcpy(temp, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], temp);
            }
        }
    }
    int nam4, thang4, ngay4, gio4, phut4, giay4,n4;
    for (int i = 1; i <= dem; i++)
    {
        sscanf(a[i], "%04d%02d%02d%02d%02d%02d%d", &nam4, &thang4, &ngay4, &gio4, &phut4, &giay4, &n4);
        printf("%04d %02d %02d %02d:%02d:%02d %d", nam4, thang4, ngay4, gio4, phut4, giay4, n4);
        printf("\n");
    }
}