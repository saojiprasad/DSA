#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<vector<int>>gr(N);
vector<int>vis(N);
void dfs(int cur,vector<int>vis){
    vis[cur]=1;
    cout<<cur<<" ";
    for(auto i:gr[cur]){
        if(!vis[i]){
            dfs(i,vis);
        }
    }
    cout<<cur<<" ";

}

void dfs1(int cur,vector<int>vis){
    vis[cur]=1;
    cout<<cur<<" ";
    for(auto i:gr[cur]){
        if(!vis[i]){
            dfs1(i,vis);
            cout<<cur<<" ";
        }
    }

}

int main(){
    int n;
    cin>>n;
    for(int i=1;i<n;i++){
        int x,y;
        cin>>x>>y;
    gr[x].push_back(y);
    gr[y].push_back(x);
    }
    // dfs(1,vis);
    dfs1(1,vis);
}