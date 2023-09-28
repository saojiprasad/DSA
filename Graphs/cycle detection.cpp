#include<iostream>
// #include<list>
#include<bits/stdc++.h>
using namespace std;
class Graph{

    int V;
    list<int>*l;
    public:
    Graph(int v){
        V=v;
        l=new list<int>[V];
    }

    void addEdge(int i,int j,bool isdir=false){
        l[i].push_back(j);
        if(isdir){
            l[j].push_back(i);
        }
    }
    void Printgraph(){
        for(int i=0;i<V;i++){
            cout<<i<<"-->";

            for(auto x:l[i]){
                cout<<x<<',';
            }
            cout<<endl;
        }
    }

    bool dfs(int node,vector<bool>&visited,vector<bool>&stack){
        visited[node]=true;
        stack[node]=true;


        for(auto nbr:l[node]){

            if(!visited[nbr]){
                if(dfs(nbr,visited,stack)){
                    return true;
                }
            }
            else if(stack[nbr]){
                return true;
            } 
        }
        stack[node]=false;
        return false;

    }

    bool cycle(){
        vector<bool>visited(V,false);
        vector<bool>stack(V,false);

        for(int i=0;i<V;i++){
            if(!visited[i])
                if(dfs(i,visited,stack)){
                    return true;
                }
        }
        return false;


    }



};

int main(){
    Graph g(6);
    g.addEdge(0,1);
    g.addEdge(2,1);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(5,3);
    g.addEdge(4,5);
    g.Printgraph();
    cout<<endl;
    cout<<g.cycle()<<endl;
}