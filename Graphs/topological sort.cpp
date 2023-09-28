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

    void dfss(int ss,bool visited[],stack<int>&st){

    visited[ss]=true;


    for(auto abc: l[ss]){
        if(!visited[abc]){
            dfss(abc,visited,st);
        }
    }
    st.push(ss);


}

    void dfs(){
    bool *visited=new bool[V];
    for(int i=0;i<V;i++){
        visited[i]=false;
    }
    stack<int>st;

    for(int i=0;i<6;i++){
        if(visited[i]==false){
            dfss(i,visited,st);
        }
    }
    while(!st.empty()){
        cout<<st.top()<<"-->";
        st.pop();
    }
}

    


};





int main(){
    Graph g(6);
    g.addEdge(5,0);
    g.addEdge(5,2);
    g.addEdge(4,0);
    g.addEdge(4,1);
    g.addEdge(2,3);
    g.addEdge(3,1);
    // g.addEdge();
    g.Printgraph();
    g.dfs();

}