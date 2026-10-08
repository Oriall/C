#include <stdio.h>
#include <string.h>
#define ll int
typedef struct
{
    char name[2003];
    int thang;
    int hoa;
    int thua;
    int diem;
} Soccer;
int main()
{
    int n, dem = 0, idA, idB, tmp, banA, banB;
    char trade[1002];
    Soccer a[1002];
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%s", a[i].name);
        a[i].diem = 0;
    }
    int tran = (n * (n - 1)) / 2;
    for (int i = 1; i <= tran; i++)
    {
        scanf("%d %d", &idA, &idB);
        scanf("%d %d", &banA, &banB);
        if (banA > banB)
        {
            a[idA].diem += 3;
        }
        else if (banA < banB)
        {
            a[idB].diem += 3;
        }
        else if (banA == banB)
        {
            a[idB].diem++;
            a[idA].diem++;
        }
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (a[i].diem < a[j].diem)
            {
                tmp = a[i].diem;
                strcpy(trade, a[i].name);
                a[i].diem = a[j].diem;
                strcpy(a[i].name, a[j].name);
                a[j].diem = tmp;
                strcpy(a[j].name, trade);
            }
        }
    }
    for (int i = 1; i <= 3; i++)
    {
        printf("%s %d\n", a[i].name, a[i].diem);
    }
}