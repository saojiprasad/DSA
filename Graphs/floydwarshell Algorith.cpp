#include<iostream>
#include<bits/stdc++.h>
#define I 10000
using namespace std;

vector<vector<int>>Floydwall_Algo(vector<vector<int>>graph){
        int V=graph.size();
        vector<vector<int>>dist(graph);
        for(int k=0;k<V;k++){

                for(int j=0;j<V;j++){
                        for(int i=0;i<V;i++){
                                if(dist[i][j]>dist[i][k]+dist[k][j]){
                                        dist[i][j]=dist[i][k]+dist[k][j];
                                }
                        }
                }
        }
        return dist;

}


int main(){
        vector<vector<int>>graph={{0,I,-2,I},{4,0,3,I},{I,I,0,2},{I,-1,I,0}};
        int n=graph.size();
        vector<vector<int>>ans=Floydwall_Algo(graph);
        for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                        
                        cout<<ans[i][j]<<" ";
                }
                cout<<endl;
        }
}