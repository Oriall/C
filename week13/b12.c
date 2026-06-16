#include <stdio.h>

int main()
{
    char str[100] = "This is John";
    int word_count = 0;
    int in_word = 0;
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r')
        {
            in_word = 0;
        }
        else if (in_word == 0)
        {
            in_word = 1;
            word_count++;
        }
        i++;
    }

    printf("Total number of words in the string is : %d", word_count);
    return 0;
}