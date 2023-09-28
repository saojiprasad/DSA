#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    cout<<v.size()<<endl;

    v.push_back(10);
    cout<<v.size()<<endl;

    v.push_back(10);
    cout<<v.size()<<endl;

    v.push_back(10);
    cout<<v.size()<<endl;

    v.push_back(10);
    cout<<v.capacity()<<endl;

    for(int i:v){
        cout<<i<<endl;
    }

    v.pop_back();
    cout<<"After POP";
    for(int i:v){
        cout<<i<<endl;
    }

   // cout<<v.size()<<endl;

    

    
} 