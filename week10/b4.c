#include<stdio.h>
int main(){
 int a[100002],n,nn=1e9,dem1=0;
 scanf("%d",&n);
 for (int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    if (a[i]%2!=0) dem1+=a[i];
    else {
        if (a[i]<nn) nn=a[i];
    };
 }
 printf("%d\n",dem1);
 if (nn!=1e9) printf("%d",nn);
 else printf("KHONG CO SO CHAN TRONG MANG");
}
