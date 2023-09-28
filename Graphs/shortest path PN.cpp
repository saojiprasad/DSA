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

    void bfs(int source,int dest=-1){
        queue<int>q;
        bool * visited=new bool[V]{0};
        int *parent=new int[V];
        int *dist=new int[V]{0};

        for(int i=0;i<V;i++){
            parent[i]=-1;
        }
        q.push(source);
        visited[source]=true;
        parent[source]=source;
        dist[source]=0;

        while (!q.empty())
        {
            /* code */
            int f=q.front();
            cout<<f<<endl;
            q.pop();
            for(auto nbr:l[f]){

                if(!visited[nbr]){
                    visited[nbr]=true;
                    q.push(nbr);
                    parent[nbr]=f;
                    dist[nbr]=dist[f]+1;
                }
            }
        }
        
        for(int i=0;i<V;i++){
            cout<<"shortest Path dist to  "<<i<<"  is  "<<dist[i]<<endl;
        }
        
        if(dest!=-1){
            int temp=dest;
            while(temp!=source){
                cout<<temp<<"--";
                temp=parent[temp];
            }
            cout<<endl;
        }
        for(int i=0;i<V;i++){
        cout<<parent[i]<<"  ";
        }
    }


};

int main(){
    Graph g(7);
    g.addEdge(0,1);
    g.addEdge(3,5);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(4,5);
    g.addEdge(5,6);
    g.addEdge(0,4);
    g.addEdge(3,4);
    g.Printgraph();
    g.bfs(0,6);


}