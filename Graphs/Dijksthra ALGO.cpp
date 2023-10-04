#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    list<pair<int,int>>*l;
    public:

    Graph(int n){
        V=n;
l = new list<pair<int, int>>[n];
    }
    void addedge(int u,int v,int w,bool isdir=true){
        l[u].push_back({w,v});
        if(isdir)
        l[v].push_back({w,u});
    }
    
    int dijkshtra(int src,int desc){
        set<pair<int,int>>s;
        vector<int>dist(V,INT_MAX);
        dist[src]=0;
        s.insert({0,src});
        while(!s.empty()){
                auto it=s.begin();

                int node=it->second;
                int nodeDisc=it->first;
                s.erase(it);

                for (auto nbrpair : l[node]) {
                int nbr = nbrpair.second;
                int currentWeight = nbrpair.first;

                if (currentWeight + nodeDisc < dist[nbr]) {
                    auto f = s.find({dist[nbr], nbr});
                    if (f != s.end()) {
                        s.erase(f);
                    }
                    dist[nbr] = nodeDisc + currentWeight;
                    s.insert({dist[nbr], nbr});
                }
            }
    }
    for(int i=0;i<V;i++){
            cout<<i<<"  "<<dist[i]<<endl;
        }
        return dist[desc];
    }
};

int main(){
    Graph g(5);
    g.addedge(0,1,1);
    g.addedge(1,2,1);
    g.addedge(0,2,4);
    g.addedge(0,3,7);
    g.addedge(3,2,2);
    g.addedge(3,4,3);
    g.dijkshtra(0,4);
}