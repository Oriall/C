#include <stdio.h>

char* my_strcpy(char *destination, const char *source)
{
    char *p = destination;
    while (*source != '\0')
    {
        *destination = *source;
        destination++;
        source++;
    }
    *destination = '\0';
    return p;
}

int main()
{
    char src[] = "Hello";
    char dest[50];
    
    my_strcpy(dest, src);
    printf("%s", dest);
    
    return 0;
}