#include <stdio.h>

int main()
{
    char str[100] = "gmail.com";
    int i = 0;
    int j = 0;
    
    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';
    
    printf("After removing the Output String : %s\n", str);
    return 0;
}