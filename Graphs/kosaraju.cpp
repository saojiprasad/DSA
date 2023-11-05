#include<bits/stdc++.h>
using namespace std;

const int N=1e5;

vector<int>gr[N],grr[N];
vector<int>order(N);
vector<int>vis(N);
vector<int>col(N);



void dfs(int cur){
    vis[cur]=true;

    for(auto i:gr[cur]){
        if(!vis[i]){
            dfs(i);
        }
    }
    order.push_back(cur);
}

void dfs2(int cur,int comp){
    vis[cur]=1;
    col[cur]=comp;
    for(auto i:grr[cur]){
        if(!vis[i]) dfs2(i,comp);
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y; cin>>x>>y;
        gr[x].push_back(y);
        grr[y].push_back(x);
    }

    for(int i=1;i<=n;i++){
        if(!vis[i]) dfs(i);
    }
    reverse(order.begin(),order.end());
    int comp=1;
    // memset(vis,0,sizeof(vis));
    vis.assign(n + 1, 0);
    for(int i=1;i<=n;i++){
        if(!vis[i]) dfs2(i,comp++);
    }

    for(int i=1;i<=n;i++){
        cout<<i<<"   "<<col[i]<<endl;
    }

}