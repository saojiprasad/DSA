#include<bits/stdc++.h>
using namespace std;

vector<int> bellman(int V,int src,vector<vector<int>>edges){
    vector<int>dist(V+1,INT32_MAX);
    dist[src]=0;

    for(int i=0;i<V;i++){
        for(auto edge:edges){
            int u=edge[0];
            int v=edge[1];
            int wt=edge[2];

            if(dist[u]+wt<dist[v]&&dist[u]!=INT32_MAX){
                dist[v]=dist[u]+wt;
            }
        }
    }
    for(auto edge:edges){
        int u=edge[0];
            int v=edge[1];
            int wt=edge[2];
            if(dist[u]+wt<dist[v]&&dist[u]!=INT32_MAX){
                cout<<"negative";
                exit(0);
            }
    }
    return dist;


}


int main(){
        int n,m;
        cin>>n>>m;
        vector<vector<int>>edges;

        for(int i=0;i<m;i++){
            int u,v,wt;
            cin>>u>>v>>wt;
            edges.push_back({u,v,wt});
        }
        vector<int>distances=bellman(n,1,edges);

        for(int i=1;i<=n;i++){
            cout<<i<<"  "<<distances[i]<<endl;
        }
}