#include <stdio.h>
#include <string.h>

int main()
{
    char main_str[100] = "this is test string";
    char sub_str[100] = "";
    int pos = 9;
    int len = 4;
    int main_len = strlen(main_str);
    int j = 0;

    if (pos < main_len)
    {
        for (int i = pos; i < pos + len && main_str[i] != '\0'; i++)
        {
            sub_str[j++] = main_str[i];
        }
    }
    sub_str[j] = '\0';

    printf("The substring retrieve from the string is : \"%s\"", sub_str);
    return 0;
}