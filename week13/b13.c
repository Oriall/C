#include <stdio.h>

int main()
{
    char str[100] = "hello world";
    int freq[256] = {0};
    int i = 0;
    int max_frequency = -1;
    char max_char;

    while (str[i] != '\0')
    {
        freq[(unsigned char)str[i]]++;
        i++;
    }

    for (int j = 0; j < 256; j++)
    {
        if (freq[j] > max_frequency && j != ' ' && j != '\n' && j != '\t')
        {
            max_frequency = freq[j];
            max_char = (char)j;
        }
    }

    printf("Kytu xuat hien nhieu nhat: %c, So lan: %d", max_char, max_frequency);
    return 0;
}