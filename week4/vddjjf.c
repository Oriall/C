#include <stdio.h>
int main(){
    int max=-1e9,a=1,b=2,c=3;
    max=(a>b)? ((a>c)?a:c):((b>c)?b:c);
    printf("%d",max);
}