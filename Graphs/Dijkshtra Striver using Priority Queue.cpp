#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> dijkstra(int V,vector<vector<int>>adj[],int S){
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<int>Dist(V,INT16_MAX);
        Dist[S]=0;
        pq.push({0,S});

        while(!pq.empty()){
            int node=pq.top().second;
            int dis=pq.top().first;
            pq.pop();
            for(auto it:adj[node]){
                auto v=it[0];
                auto wt=it[1];
                if(wt+dis<Dist[v]){
                    Dist[v]=wt+dis;

                    pq.push({wt+dis,v});
                }
            }
        }
        return Dist;
    }
};


int main()
{
    // Driver code.
    int V = 3, S = 2;
    vector<vector<int>> adj[V];
    vector<vector<int>> edges;
    vector<int> v1{1, 1}, v2{2, 6}, v3{2, 3}, v4{0, 1}, v5{1, 3}, v6{0, 6};
    
    adj[0].push_back(v1);
    adj[0].push_back(v2);
    adj[1].push_back(v3);
    adj[1].push_back(v4);
    adj[2].push_back(v5);
    adj[2].push_back(v6);

    Solution obj;
    vector<int> res = obj.dijkstra(V, adj, S);

    for (int i = 0; i < V; i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}