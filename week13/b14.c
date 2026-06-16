#include <stdio.h>
#include <string.h>

int main()
{
    int n = 3;
    char arr[100][50] = {"zero", "one", "two"};
    char temp[50];

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(arr[i], arr[j]) > 0)
            {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }

    printf("The strings appears after sorting :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", arr[i]);
    }

    return 0;
}