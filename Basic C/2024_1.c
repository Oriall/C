#include <stdio.h>
#include <string.h>
#define ll int
int main()
{
    int dem = 0;
    char b[10005] = {};
    char s[10002];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\t\n")] = '\0';
    ll si = strlen(s);
    for (int i = 0; i < si; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            b[dem] = s[i];
            dem++;
        }
    }
    if (dem == 0)
    {
           printf("%d\n", dem);
        printf("Xau rong");
    }
    else
    {
        printf("%d\n", dem);
        printf("%s", b);
    }
}