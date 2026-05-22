#include <stdio.h>
#define ll long long
void sort(int a[], int n) {
    for (int i=1;i<n;i++){
        for (int j=i+1;j<=n;j++){
            if (a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main() {
    int a[10002],nn,n;
    scanf("%d", &n);
    for (int i=1;i<=n;i++){
        scanf("%d", &a[i]);
    }
    sort(a,n);
    for (int i=1;i<=n;i++){
        printf("%d ", a[i]);
    }
}
    