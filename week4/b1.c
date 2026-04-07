#include <stdio.h>
#include <string.h>
int main()
{

    int month1, day1, year1, month2, day2, year2,t;
    char c, c2[2];
    float d;
    // scanf("%c%c", &c, &c2[0]);
    // printf("%c %c\n", c, c2[0]);
    scanf("%d", &t);
    printf("%d\n", t);
    scanf("%2d%2d%4d", &month1, &day1, &year1);
    printf("%2d %2d %4d\n",
           month1, day1, year1);
    scanf("%2d/%2d/%4d", &month2, &day2, &year2);
    printf("%d %d %d\n", month2, day2, year2);
    for (int i = 0; i < 2; i++)
    {
        scanf(" %c", &c2[i]);
    }
    for (int i = 0; i < 2; i++)
    {
        printf("%c ", c2[i]);
    }
    printf("\n");
    scanf("%f", &d);
    printf("%.2f\n", d);
}