#include <stdio.h>

void nameSlice(char userName[])
{
    int count = 0;
    while (userName[count] != ' ' && userName[count] != '\0')
    {
        count++;
    }
    if (userName[count] == ' ')
    {
        userName[count] = '\0';
    }
}

int main()
{
    char name[41] = "Dennis Ritchie";
    nameSlice(name);
    printf("Your first name is: %s", name);
    return 0;
}