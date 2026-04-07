#include <stdio.h>
#include <string.h>

int main() {
    int s;
    char kq[20],kq2[20];
    int len,tong=0;
    scanf("%d",&s);
    sprintf(kq,"%d",s);
    len=strlen(kq);
    for (int i=0;i<len;i++){
        if (i>0 && (len-i)%3==0){
            kq2[tong++]=',';
        }
        kq2[tong++]=kq[i];
    }
    kq2[tong]='\0';

    printf("Ket qua: %s\n", kq2);
    return 0;
}