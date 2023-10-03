#include<bits/stdc++.h>
using namespace std;
// #define for0(i,n) for(int i=0;i<n;i++)

class DSU{
    int  *parent;
    int *rank;
    
    public:
    DSU(int n){
        parent=new int[n];
        rank=new int[n];
        for(int i=0;i<n;i++){
            parent[i]=-1;
            rank[i]=1;
        }
    }
    int find(int n){
        if(parent[n]==-1){
            return n;
        }
        return parent[n]=find(parent[n]);
    }

    void unite(int u,int v){
        int ul=find(u);
        int vl=find(v);

        if(ul!=vl){
            if(rank[ul]<rank[vl]){
                parent[ul]=vl;
                rank[vl]+=rank[ul];
            }
            else{
                parent[vl]=ul;
                rank[ul]+=rank[vl];
            }
        }
    }
};
class Graph{
    vector<vector<int>>edgelist;
    int V;
    DSU s;
    public:
    Graph(int n):V(n),s(n){}


    void Addedge(int x,int y,int w){
        edgelist.push_back({w,x,y});
    }

    int kruskal_mst(){
        int ans=0;
    sort(edgelist.begin(),edgelist.end());

    for(auto it : edgelist){
        int w=it[0];
        int x=it[1];
        int y=it[2];

        if(s.find(x)!=s.find(y)){
            s.unite(x,y);
            ans+=w;
        }
    }
    return ans;
    }

};


int main(){

    Graph g(4);
    g.Addedge(0,1,1);
    g.Addedge(1,3,3);
    g.Addedge(3,2,4);
    g.Addedge(2,0,2);
    g.Addedge(0,3,2);
    g.Addedge(1,2,2);
    cout<<g.kruskal_mst()<<endl;
    

}