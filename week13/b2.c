#include <stdio.h>

int spacecounter(char inputline[])
{
    int count = 0;
    int i = 0;
    while (inputline[i] != '\0')
    {
        if (inputline[i] == ' ')
        {
            count++;
        }
        i++;
    }
    return count;
}

int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    
    int res = spacecounter(str);
    printf("%d", res);
    
    return 0;
}