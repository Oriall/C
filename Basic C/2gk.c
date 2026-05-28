#include <stdio.h>
#include <string.h>
int main()
{
    int dem=0;
    char s[50];
    scanf("%s",s);
    for (int i=0;i<strlen(s);i++){
        if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            dem++;
           
        }
        if (s[i]=='#'){
            break;
        }
    }
    printf("%d",dem);
}