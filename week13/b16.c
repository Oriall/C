#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100] = "The string where the word the present more than once.";
    char temp[100];
    int count = 0;
    
    strcpy(temp, str);
    for (int i = 0; temp[i] != '\0'; i++)
    {
        temp[i] = tolower((unsigned char)temp[i]);
    }
    
    char *ptr = strstr(temp, "the");
    while (ptr != NULL)
    {
        count++;
        ptr += 3;
        ptr = strstr(ptr, "the");
    }
    
    printf("The frequency of the word 'the' is : %d\n", count);
    return 0;
}