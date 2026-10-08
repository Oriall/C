#include <stdio.h>
#include <string.h>
#define ll int
int main()
{
    int n,a[10002],dem=0;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if (a[i]%3==0){
            dem+=a[i];
        }
    }
    if (n<1 || n>100) printf("INVALID");
    else
    printf("%d",dem);
}