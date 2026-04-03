#include <stdio.h>
#define ll long long
int main() {
    ll n,a[100002],tong=0;
    scanf("%lld", &n);
    if (n<1 || n>100) {
        printf("INVALID");
        return 0;
    } else {
       
    for (ll i = 1; i <= n; i++) {
        scanf("%lld", &a[i]);
        if (a[i] % 3 == 0) {
            tong+=a[i];
        }
    }
    printf("%lld", tong);
}
    
}