#include<stdio.h>
#include<math.h>
#define ll long long
ll lt(int n){
    ll tong=1;
for (int j=1;j<=n;j++)
    {
 tong=tong*j;
 }
    return tong;
}
int main(){
int n,dau=0;
float x;
scanf("%f",&x);
scanf("%d",&n);

double dk=pow(10,-n);
double tong2 = 1.0,ct=1.0;
int i = 1;
do {
    ct = pow(-1, i) * pow(x, 2*i) / lt(2*i);
    tong2 += ct;
    i++;
} while (fabs(ct) >= dk);

printf("%.2f",tong2);
}
