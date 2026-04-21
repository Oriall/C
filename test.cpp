#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin>>n;

    vector<int>deg(n,0);
    vector<set<int>>adj(n);

    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        adj[u].insert(v);
        adj[v].insert(u);
        deg[u]++;
        deg[v]++;
    }

    priority_queue<int,vector<int>,greater<int>>leaves;
    for(int i=0;i<n;i++)
        if(deg[i]==1)leaves.push(i);

    vector<int>result;
    int remaining=n;

    while(remaining>2){
        int leaf=leaves.top();leaves.pop();
        int par=*adj[leaf].begin();

        result.push_back(par);
        adj[leaf].erase(par);
        adj[par].erase(leaf);
        deg[par]--;

        if(deg[par]==1)leaves.push(par);
        remaining--;
    }

    for(int i=0;i<(int)result.size();i++){
        if(i>0)cout<<' ';
        cout<<result[i];
    }
    cout<<'\n';
}

vector<pair<int,int>>decodePrufer(vector<int>&code,int n){
    vector<int>freq(n,0);
    for(int x:code)freq[x]++;

    priority_queue<int,vector<int>,greater<int>>leaves;
    for(int i=0;i<n;i++)
        if(freq[i]==0)leaves.push(i);

    vector<pair<int,int>>edges;
    for(int x:code){
        int leaf=leaves.top();leaves.pop();
        edges.push_back({leaf,x});
        freq[x]--;
        if(freq[x]==0)leaves.push(x);
    }

    int u=leaves.top();leaves.pop();
    int v=leaves.top();leaves.pop();
    edges.push_back({u,v});

    return edges;
}

void gentest(int n){
    srand(time(NULL));
    int m=n-2;

    vector<int>code(m);
    for(int i=0;i<m;i++)
        code[i]=rand()%n;

    auto edges=decodePrufer(code,n);

    shuffle(edges.begin(),edges.end(),default_random_engine(time(NULL)));
    for(int i=0;i<(int)edges.size();i++)
        if(rand()%2)swap(edges[i].first,edges[i].second);

    cout<<n-1<<'\n';
    for(int i=0;i<(int)edges.size();i++)
        cout<<edges[i].first<<' '<<edges[i].second<<'\n';

    cerr<<"Expected: ";
    for(int i=0;i<m;i++)
        cerr<<code[i]<<" \n"[i==m-1];
}

int main(){
    int choice;
    cin>>choice;
    if(choice==-1){
        int n;
        cin>>n;
        gentest(n);
    }else{
        solve();
    }
    return 0;
}