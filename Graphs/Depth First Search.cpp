#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int>adj[],int u,int v,bool undir=false){
    adj[u].push_back(v);
    if(undir)
    adj[v].push_back(u);
}

void printGraph(vector<int>adj[],int v){
    for(int i=0;i<v;i++){
        cout<<i<<"=";
        for(auto x:adj[i]){
            cout<<x<<"--->";
        }   
            cout<<endl;     
    }
}

void DFSrec(vector<int>adj[],int s,bool visited[]){


    visited[s]=true;
    cout<<s<<"---->";

    for(auto i:adj[s]){
            DFSrec(adj,i,visited);
    }


}

void DFS(vector<int>adj[],int v,int s){
    bool visited[v];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    DFSrec(adj,0,visited);
}


int main(){

    int v=6;
    vector<int>adj[v];
    addEdge(adj,0,1);
    addEdge(adj,1,2);
    addEdge(adj,2,3);
    addEdge(adj,0,4);
    addEdge(adj,4,5);
    addEdge(adj,5,6);
    addEdge(adj,6,4);


    DFS(adj,6,0);
    // printGraph(adj,v);


}
