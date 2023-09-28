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

    void addEdge(int i,int j,bool isdir=true){
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


};

int main(){
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(2,4);
    g.addEdge(1,3);
    g.addEdge(3,4);
    g.Printgraph();

}