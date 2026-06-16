#include <stdio.h>
#include <string.h>

int main()
{
    char str[100] = "  TRAN VAN A  ";
    char name[30] = "";
    int len = strlen(str);
    int end = len - 1;

    while (end >= 0 && str[end] == ' ')
    {
        end--;
    }
    if (end >= 0)
    {
        str[end + 1] = '\0';
    }

    int start = end;
    while (start >= 0 && str[start] != ' ')
    {
        start--;
    }
    if (start < 0 && end < 0)
    {
        return 0;
    }

    int idx = 0;
    for (int i = start + 1; i <= end; i++)
    {
        name[idx++] = str[i];
    }
    name[idx] = '\0';
    printf("%s", name);

    return 0;
}