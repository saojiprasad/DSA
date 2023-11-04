#include<bits/stdc++.h>
using namespace std;
vector<int>order;
vector<bool>vis;
int n,m;

void dfs(int cur,vector<vector<int>>v)
{
    vis[cur]=true;
    for(auto i: v[cur]){
        if(!vis[i]){
            dfs(i,v);
        }
    }
    order.push_back(cur);
    // return;
}


int main(){
   
    
    cin>>n>>m;
    vector<vector<int>>v(n+1);
    vis.resize(n+1,false);
    for(int i=0;i<m;i++){
        int u,x;
        cin>>u>>x;
        // while(true){
        //     cin>>x;
        //     if(x<0) break;
            v[u].push_back(x); 
        // }
        
    }
    for(int i=1;i<=n;i++){
        if(!vis[i])
        dfs(i,v);
    }
    reverse(order.begin(),order.end());
    for(auto i: order){
        cout<<i<<endl;
    }
    return 0;
}