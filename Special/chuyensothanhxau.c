#include<stdio.h>
int main()
{
    int n,dem1=0,dem2=0;
    char str[20];
    scanf("%d",&n);
    sprintf(str,"%d",n);
    for (int i=0;i<str[i]!='\0';i++){
        int so=str[i]-'0';
        if (so%2==0) dem1++;
        if (so%2!=0) dem2++;
        if (dem1>0 && dem2>0)
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
}
