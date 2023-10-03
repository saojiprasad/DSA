#include<bits/stdc++.h>
using namespace std;

class DisjointSet{
    vector<int>rank,size,parent;
    public:
        DisjointSet(int n){
            rank.resize(n+1,0);
            size.resize(n+1);
            parent.resize(n+1);
            for(int i=0;i<n;i++){
                parent[i]=i;
                size[i]=1;
            }
        }

        int  findUPar(int node){
            if(node == parent[node])
            return node;

            return parent[node]=findUPar(parent[node]);

        }

        void UnionBySize(int u,int v){
            int ult_u=findUPar(u);
            int ult_v=findUPar(v);

            if(ult_u==ult_v){
                return;
            }

            if(size[ult_u]<size[ult_v]){
                parent[ult_u]=ult_v;
                size[ult_v]+=size[ult_u];
            }
            else{
                parent[ult_v]=ult_u;
                size[ult_u]+=size[ult_v];
            }

        }

};

int main(){
    DisjointSet ds(7);
    ds.UnionBySize(1,2);
    ds.UnionBySize(2,3);
    ds.UnionBySize(4,5);
    ds.UnionBySize(6,7);
    ds.UnionBySize(5,6);

    if(ds.findUPar(1)==ds.findUPar(2)){
        cout<<"SAME"<<endl;
    }
    else{
        cout<<"NOT SAME"<<endl;
    }
    ds.UnionBySize(3,7);
    if(ds.findUPar(3)==ds.findUPar(7)){
        cout<<"SAME"<<endl;
    }
    else{
        cout<<"NOT SAME"<<endl;
    }


}
