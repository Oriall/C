#include <stdio.h>
#include <string.h>
typedef struct
{
    char name[1002];
    int test;
} Test;

int main()
{
    char s[10002];
    int b;
    Test a;
    
    fgets(a.name, sizeof(a.name), stdin);
    a.name[strcspn(a.name, "\r\n")] = '\0';
    scanf("%d",&a.test);
    printf("%d",a.test+6);
    printf("%s",a.name);
}