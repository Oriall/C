#include <stdio.h>
#include <string.h>

int check_customer_code(char str[])
{
    if (strlen(str) != 7)
    {
        return 0;
    }
    for (int i = 0; i < 3; i++)
    {
        if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')))
        {
            return 0;
        }
    }
    for (int i = 3; i < 7; i++)
    {
        if (!(str[i] >= '0' && str[i] <= '9'))
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char str[50];
    scanf("%s", str);
    
    int res = check_customer_code(str);
    printf("%d", res);
    
    return 0;
}