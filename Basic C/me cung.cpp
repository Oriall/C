#include <bits/stdc++.h>
#define ll long long
#define nmax 1005
#define ii pair<int,int>
#define fi first
#define se second
using namespace std;
int n,m,x,y;
ll ham[nmax][nmax];
ll dx[]={1,0,0,-1};
ll dy[]={0,1,-1,0};
bool b[nmax][nmax];
int a[nmax][nmax];
bool checkbien(ll x,ll y)
{
    if (x==1 or x==n) return true;
    if (y==1 or y==m) return true;
    return false;
}
void BFS()
{
    if (a[x][y] == 1)
    {
        cout<<"-1";
        return;
    }
    if (checkbien(x,y))
    {
        cout<<1;
        return;
    }
    queue<ii>q;
    q.push({x,y});
    b[x][y] = 1;
    ham[x][y] = 1;
    while(!q.empty())
    {
        ii f=q.front();
        q.pop();
        for(int i=0;i<=3;i++)
        {
            ii u = {f.fi + dx[i],f.se + dy[i]};
            if(u.fi>0 and u.fi<=n and u.se>0 and u.se<=m)
            if(!b[u.fi][u.se] and a[u.fi][u.se] == 0)
            {
                q.push(u);
                b[u.fi][u.se] = 1;
                ham[u.fi][u.se] = ham[f.fi][f.se] + 1;
                if (checkbien(u.fi,u.se))
                {
                    cout<<ham[u.fi][u.se];
                    return;
                }
            } 
        }  
    }
    cout<<"-1";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m>>x>>y;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    BFS();
}