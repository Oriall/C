#include <stdio.h>

void replace(char str[], char replace_what, char replace_with)
{
    for (int i = 0; str[i] != '\0'; ++i)
    {
        if (str[i] == replace_what)
        {
            str[i] = replace_with;
        }
    }
}

int main()
{
    char str[100];
    char what, with;
    
    fgets(str, sizeof(str), stdin);
    scanf("%c", &what);
    scanf(" %c", &with);
    
    replace(str, what, with);
    printf("%s", str);
    
    return 0;
}