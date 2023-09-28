#include<iostream>
#include<bits/stdc++.h>
#include <vector>
using namespace std;


void addEdge(vector<int>adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int>adj[],int v){
    for(int i=0;i<v;i++){

        for(auto x:adj[i])
            cout<<x<<"--->";   
            cout<<endl;     
    }
}


bool dfs(int node,int col,int color[],vector<int>adj[]){
    color[node]=col;

    for(auto i:adj[node]){
        if(color[i]==-1){
        if(dfs(i,!col,color,adj)==false){
            return false;
        }
        }
        else if(color[i]==col){
            return false;
        }
    }
    return true;
}

bool isBipartateGraph(int V,vector<int>adj[]){
    int color[V];
    for(int i=0;i<V;i++) color[i]=-1;

    for(int i=0;i<V;i++){
        if(color[i]==-1){
            if(dfs(i,0,color,adj)==false){
                return false;
            }
        }
    }
    return true;
}


int main(){

    int v=4;
    vector<int>adj[v];
    addEdge(adj, 0, 2);
   	addEdge(adj, 0, 3);
	addEdge(adj, 2, 3);
	addEdge(adj, 3, 1);

    printGraph(adj,v);
    cout<<endl;
    // bool ans=isBipartateGraph(4,adj);
    cout<<isBipartateGraph(4,adj)<<endl;
	bool ans = isBipartateGraph(4, adj);    
	// if(ans)cout << "1\n";
	// else cout << "0\n";  

}