#include <stdio.h>
#include <string.h>
#define ll long long
int main()
{
    char s[4][100], s1[3][100] = {"hn1", "hn2", "h3"};
    for (int i = 1; i <= 3; i++)
    {
        fgets(s[i], sizeof(s[i]), stdin);
        s[i][strcspn(s[i], "\n")] = '\0';
    }
    printf("%c", (char)218);
    for (int i = 1; i <= 10; i++)
    {
        printf("%c", (char)196);
    }
    printf("%c", (char)191);
    printf("\n");
    printf("%c%-10s%c",
           (char)179, "Chi tiết hành bị từ chối\n", (char)179);
    printf("===========================\n");

    for (int i = 1; i <= 3; i++)
    {
        printf("%c%-10s%-20s%c\n",
               (char)179, s1[i], s[i], (char)179);
    }
}