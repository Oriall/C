#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(int n,int a,int b,int c){
    if (n==0) return;
    solve(n-1,a,c,b);
    cout<<a<<" "<<b<<"\n";
    solve(n-1,c,b,a);
}
int main(){
    int n1,a1,b1,c1;
    cin>>n1>>a1>>b1>>c1;
    cout << (1 << n1) - 1 << "\n";// 2^n-1
    solve(n1,a1,b1,c1);
}