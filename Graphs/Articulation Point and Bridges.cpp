#include<bits/stdc++.h>
using namespace std;

const int N=1e5;
vector<int>gr[N];
vector<pair<int,int>>bridges;
set<int>arti;

int vis[N],dis[N],low[N],tme=1;

void dfs(int cur,int par){
    vis[cur]=1;
    dis[cur]=low[cur]=tme++;
    int child=0;
    for(auto i:gr[cur]){
        if(!vis[i]){
            dfs(i,cur);
            child++;
            //we know the cur and disc of i (adjcent node);
            low[cur]=min(low[cur],low[i]);

            //bridges
            if(low[i]>dis[cur]){
                bridges.push_back({cur,i});
            }

            //articulation point
            if(par!=0&&low[i]>=dis[cur]){
                arti.insert(cur);
            }
        }
        else if(i!=par){
            //backage
            low[cur]=min(low[cur],dis[i]);

        }
    }
    if(par==0&&child>1){
        arti.insert(cur);
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
    dfs(1,0);
    for(auto i : arti) cout<<i<<"   ";
    cout<<endl;
    for(auto i : bridges) cout<<i.first<<"   "<<i.second<<endl;
}