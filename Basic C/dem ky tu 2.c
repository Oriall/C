#include <stdio.h>
#include <string.h>

int demTu(const char *s)
{
    int dem = 0;
    int trongTu = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != ' ' && s[i] != '\t')
        {
            if (!trongTu)
            {
                dem++;
                trongTu = 1;
            }
        }
        else
        {
            trongTu = 0;
        }
    }
    return dem;
}

int main()
{
    int n;
    scanf("%d", &n);
    while (getchar() != '\n');

    int b[10002] = {0};
    int tongSoTu = 0;

    for (int i = 0; i < n; i++)
    {
        char s[65536];
        int len = 0;
        int c;
        while ((c = getchar()) != '\n' && c != EOF)
            if (len < 65535)
                s[len++] = c;
        s[len] = '\0';

        b[i] = demTu(s);
        tongSoTu += b[i];
    }

    printf("%d\n", tongSoTu);
    for (int i = 0; i < n; i++)
        printf("%d\n", b[i]);

    return 0;
}