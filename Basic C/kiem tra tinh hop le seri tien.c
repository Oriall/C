#include <stdio.h>
#include <string.h>
int main()
{
    char s[50], s1[50];
    int ktra = 0, loi = 0, result, dem = 0, d1, d2;
    scanf("%s", s);
    if (s[0] >= 'A' && s[0] <= 'Z')
    {
        if (s[1] >= 'A' && s[1] <= 'Z')
        {
            ktra++;
        }
        else
        {
            loi++;
            result = -1;
        }
    }
    else
    {
        loi++;
        result = -1;
    }
    d1 = s[2] - '0';
    d2 = s[3] - '0';
    int nam = d1 * 10 + d2;

    if (nam >= 3 && nam <= 25)
    {
        ktra++;
    }
    else
    {
        loi++;
        result = -2;
    }
    for (int i = 4; i < strlen(s); i++)
    {

        if (s[i] >= '0' && s[i] <= '9')
        {
            s1[dem] = s1[dem] + s[i];
            dem++;
        }
    }
    if (dem == 6)
    {
        int so3;
        sscanf(s1, "%d", &so3);
        if (so3 >= 1 && so3 <= 999999)
        {
            ktra++;
        }
        else
        {
            loi++;
            result = -3;
        }
    }
    else
    {
        loi++;
        result = -3;
    }
    if (loi > 1)
    {
        printf("-4");
    }
    else if (loi == 1)
    {
        printf("%d", result);
    }
    else if (loi == 0)
    {
        printf("0");
    }
}