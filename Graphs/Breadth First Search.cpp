#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int>adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int>adj[],int v){
    for(int i=0;i<v;i++){
        cout<<i<<"  ";
        for(auto x : adj[i]){
            cout<<x<<"--->";
        }   
            cout<<endl;     
    }
}

void BreadthFirstSearch(vector<int>adj[],int v,int s){
    bool visited[v];
    for(int i=0;i<v;i++)
        visited[i]=false;

    queue<int>q;
    visited[s]=true;
    q.push(s);

    while(!q.empty()){
        int u=q.front();
        q.pop();
        cout<<u<<"-->";

        for(auto i:adj[u]){
            if(visited[i]==false){
                visited[i]=true;
                q.push(i);
            }
        }
    }
}

int main(){

    int v=5;
    vector<int>adj[v];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,2);
    addEdge(adj,1,3);
    addEdge(adj,2,4);
    addEdge(adj,2,3);
    addEdge(adj,3,4);

    printGraph(adj,v);
    BreadthFirstSearch(adj,5,0);
}
