/* ========================================================================== */
#include <stdio.h>
#include <string.h>

char* str_any(char *str1, char *str2)
{
    while (*str1 != '\0')
    {
        if (strchr(str2, *str1) != NULL)
        {
            return str1;
        }
        ++str1;
    }
    return NULL;
}

int main()
{
    char s1[] = "computer";
    char s2[] = "abcd";
    char *res = str_any(s1, s2);

    if (res != NULL)
    {
        printf("%c", *res);
    }

    return 0;
}