#include <stdio.h>
#include <string.h>
#include <math.h>
float lam_tron(float x)
{
    return round(x * 10) / 10;
}
int main()
{
    char s1[50];
    char s[10000][50];
    float dt[10003], ds[10003];
    float ln = -1e9, nn = 1e9, dt2;
    int lngt, nngt, dem = 0, dem1 = 0;
    for (int i = 1; i <= 5; i++)
    {
        scanf("%s %f %f", s[i], &dt[i], &ds[i]);
        dt[i] = lam_tron(dt[i]);
        ds[i] = lam_tron(ds[i]);
    }
    int cn, gt;
    char lenh[50];
    scanf("%d", &cn);
    if (cn == 1)
    {
        scanf("%s %d", lenh, &gt);
        if (strcmp(lenh, "area") == 0)
        {
            if (gt == 1)
            {
                for (int i = 1; i <= 5; i++)
                {
                    if (ln < dt[i])
                    {
                        ln = dt[i];
                        lngt = i;
                    }
                }
                printf("%s %.1f", s[lngt], dt[lngt]);
                return 0;
            }
            if (gt == 0)
            {
                for (int i = 1; i <= 5; i++)
                {
                    if (nn > dt[i])
                    {
                        nn = dt[i];
                        nngt = i;
                    }
                }
                printf("%s %.1f", s[nngt], dt[nngt]);
                return 0;
            }
        }
        if (strcmp(lenh, "pop") == 0)
        {
            if (gt == 1)
            {
                for (int i = 1; i <= 5; i++)
                {
                    if (ln < ds[i])
                    {
                        ln = ds[i];
                        lngt = i;
                    }
                }
                printf("%s %.1f", s[lngt], ds[lngt]);
                return 0;
            }
            if (gt == 0)
            {
                for (int i = 1; i <= 5; i++)
                {
                    if (nn > ds[i])
                    {
                        nn = ds[i];
                        nngt = i;
                    }
                }
                printf("%s %.1f", s[nngt], ds[nngt]);
                return 0;
            }
        }
    }
    if (cn == 2)
    {
        scanf("%f", &dt2);
        for (int i = 1; i <= 5; i++)
        {
            if (dt[i] < dt2)
            {
                dem++;
                printf("%s %.1f\n", s[i], dt[i]);
            }
        }
        if (dem == 0)
            printf("0");
    }
    if (cn == 3)
    {
        char ten[50];
        scanf("%s", ten);
        for (int i = 0; i < strlen(ten); i++)
        {
            if (ten[0] >= 'a' && ten[0] <= 'z')
            {
                ten[0] -= 32;
            }
            if (ten[i] == '_')
            {
                if (ten[i + 1] >= 'a' && ten[i + 1] <= 'z')
                {
                    ten[i + 1] -= 32;
                }
            }
        }
        for (int i=1;i<=5;i++){
            if ((strcmp(s[i], ten)) == 0)
            {
                printf("%s %f %f",s[i],dt[i],ds[i]);
                return 0;
            }
        }
    }
}