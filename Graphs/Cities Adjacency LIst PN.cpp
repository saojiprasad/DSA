#include<iostream>
#include<unordered_map>
#include<string>
#include<list>
#include<vector>
using namespace std;

class Node{
    
    public:
    string name;
    list<string>nbrs;
    Node(string name){
        this->name=name;
    }
};

class Graph{

    unordered_map<string,Node*>m;

        public:
        Graph( vector<string>cities){
            for(auto city:cities){
                m[city]=new Node(city);
            }
        }

        void addEdge(string s,string e,bool undir=false){
            m[s]->nbrs.push_back(e);
            if(undir){
                m[e]->nbrs.push_back(s);
            }
        }

        void printGraph(){
            for(auto str:m){
                auto city=str.first;
                cout<<city<<"-->";
                Node *node=str.second;

                for(auto nbr:node->nbrs){
                    cout<<nbr<<",";
                }
                cout<<endl;
            }
        }

};


int main(){
        vector<string>s={"Delhi","London","Paris","New York"};

        Graph g(s);
        g.addEdge("Delhi","London");
        g.addEdge("Delhi","Paris");
        g.addEdge("Paris","New York");
        g.addEdge("New York","London");

        g.printGraph();


}