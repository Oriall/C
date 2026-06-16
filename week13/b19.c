#include <stdio.h>
#include <string.h>

struct Student
{
    char full_name[50];
    char first_name[20];
    char ho_dem[40];
};

void splitName(struct Student *std)
{
    int len = strlen(std->full_name);
    int i = len - 1;
    
    while (i >= 0 && std->full_name[i] == ' ')
    {
        i--;
    }
    while (i >= 0 && std->full_name[i] != ' ')
    {
        i--;
    }
    
    if (i < 0)
    {
        strcpy(std->first_name, std->full_name);
        strcpy(std->ho_dem, "");
    }
    else
    {
        strcpy(std->first_name, &std->full_name[i + 1]);
        int k = 0;
        for (int j = 0; j <= i; j++)
        {
            std->ho_dem[k++] = std->full_name[j];
        }
        std->ho_dem[k] = '\0';
    }
}

int main()
{
    int n = 3;
    struct Student list[3] = {
        {"Nguyen Van B", "", ""},
        {"Tran Anh B", "", ""},
        {"Le Van A", "", ""}
    };
    struct Student temp;
    
    for (int i = 0; i < n; i++)
    {
        splitName(&list[i]);
    }
    
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int cmp_name = strcmp(list[i].first_name, list[j].first_name);
            if (cmp_name > 0)
            {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
            else if (cmp_name == 0)
            {
                if (strcmp(list[i].ho_dem, list[j].ho_dem) > 0)
                {
                    temp = list[i];
                    list[i] = list[j];
                    list[j] = temp;
                }
            }
        }
    }
    
    printf("Danh sach lop sau khi sap xep:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", list[i].full_name);
    }
    
    return 0;
}