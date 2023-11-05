#include<bits/stdc++.h>
using namespace std;

const int N=1e5;
vector<int>gr[N];
int Par[N];

void dfs(int cur,int par){
    Par[cur]=par;
    for(auto i:gr[cur]){
        if(i!=par){
            dfs(i,cur);
        }
    }
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        gr[x].push_back(y);
        gr[y].push_back(x);
    }

    dfs(10,0);
    int x=6;
    while(x){
        cout<<x<<"  ";
        x=Par[x];
    }
    return 0;
}