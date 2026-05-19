#include <bits/stdc++.h>
#define nmax 1000009
using namespace std;
map<int,int> a;
long long t,n,x,ans=0;
int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    
    cin>>t;
    while(t--)
    {
        cin>>n;
        for (int i=1;i<=n;i++)
        {
            cin>>x;
            if (a[x]==0) ans++;
            a[x]++;
        }
    }
    cout<<ans+1;
}