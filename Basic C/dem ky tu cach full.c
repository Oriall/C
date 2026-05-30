#include <stdio.h>
#include <string.h>

void Correct(char str[], int length)
{
    int first = 0, last = length - 1;
    while (first < last && str[first] == ' ')
        first++;
    while (last > first && str[last] == ' ')
        last--;

    int j = 0;
    char temp[1026];
    for (int i = first; i <= last; i++)
    {
        if (str[i] == ' ' && str[i + 1] == ' ')
            continue;
        temp[j++] = str[i];
    }
    temp[j] = '\0';
    strcpy(str, temp);
}

int demTu(char *s)
{
    if (s[0] == '\0')
        return 0;
    int dem = 1;
    for (int i = 0; s[i] != '\0'; i++)
        if (s[i] == ' ')
            dem++;
    return dem;
}

int main()
{
    int n;
    scanf("%d", &n);
    while (getchar() != '\n')
        ;

    int b[10002] = {0};
    int tongSoTu = 0;

    for (int i = 0; i < n; i++)
    {
        char s[1026];
        fgets(s, sizeof(s), stdin);
        s[strcspn(s, "\r\n")] = '\0';

        Correct(s, strlen(s));

        b[i] = demTu(s);
        tongSoTu += b[i];
    }

    printf("%d\n", tongSoTu);
    for (int i = 0; i < n; i++)
        printf("%d\n", b[i]);

    return 0;
}