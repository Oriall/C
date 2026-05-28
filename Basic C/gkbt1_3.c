#include <stdio.h>
int main(){
    int a,b,a1,b1,bf[10002];
    int t=6;
    while (t--)
    {
        
        scanf("%d %d %d %d",&a,&b,&a1,&b1);
        if (a1>b1){
            bf[a]+=3;
        }
        else if (a1==b1){
            bf[a]+=1;
            bf[b]+=1;
        }
        else if (b1>a1){
            bf[b]+=3;
        }
    }
    for (int i=1;i<=4;i++){
        printf("%d %d",i,bf[i]);
        printf("\n");
    }
}