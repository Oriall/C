#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nmax 100005
int main()
{
    ll a[nmax];
    ll n,s=0;
    cin>>n;
    for (int i=1;i<=n;i++)
        cin>>a[i];
    for (int i=1;i<=n;i++)
    {
        s=s+a[i];
    }
    for (int i=1;i<=n;i++)
    {
        if (a[i]==(s-a[i]))
        {
            cout<<a[i];
            return 0;
        }
    }
    cout<<"N";
}
