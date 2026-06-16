#include <stdio.h>
#include <string.h>

int main()
{
    char str[100] = "It is a string with smallest and largest word.";
    char words[20][20];
    char max_word[20], min_word[20];
    int row = 0, col = 0, i = 0;
    
    while (str[i] != '\0')
    {
        if (str[i] != ' ' && str[i] != '.')
        {
            words[row][col++] = str[i];
        }
        else
        {
            if (col > 0)
            {
                words[row][col] = '\0';
                row++;
                col = 0;
            }
        }
        i++;
    }
    
    int max_len = strlen(words[0]);
    int min_len = strlen(words[0]);
    strcpy(max_word, words[0]);
    strcpy(min_word, words[0]);
    
    for (int k = 1; k < row; k++)
    {
        int len = strlen(words[k]);
        if (len > max_len)
        {
            max_len = len;
            strcpy(max_word, words[k]);
        }
        if (len < min_len)
        {
            min_len = len;
            strcpy(min_word, words[k]);
        }
    }
    
    printf("The largest word is '%s'\n", max_word);
    printf("and the smallest word is '%s'\n", min_word);
    printf("in the string : '%s'\n", str);
    
    return 0;
}