#include<bits/stdc++.h>
using namespace std;

const int N= 1e5+1;

vector<int>gr[N];
int vis[N];

void dfs(int cur,int par){
    // cout<<cur<<"  ";
    vis[cur]=1;

    for(auto i:gr[cur]){
        if(!vis[i]){
            dfs(i,cur);
        }
        else if(i!=par){
            cout<<cur<<"  "<<i<<"\n";
        }
    }

}

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        gr[x].push_back(y);
        gr[y].push_back(x);
    }

    for(int i=1;i<=n;i++){
        if(!vis[i]){
            dfs(i,0);
        }
    }

}