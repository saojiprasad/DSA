#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    char a[n][m];
    int dist[n][m];
    queue<pair<int,int>>q;
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,-1,1};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            dist[i][j]=INT_MAX;
            if(a[i][j]=='w'){
                q.push({i,j});
                dist[i][j]=0;
            }
        }
    }
    int ans=0;
    while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int xx=x+dx[i];
            int yy=y+dy[i];
            if(xx>=0 && xx<n && yy>=0 && yy<m && dist[xx][yy]==INT_MAX&&a[xx][yy]=='b'){
                q.push({xx,yy});
                dist[xx][yy]=dist[x][y]+1;
            }
        }

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans=max(ans,dist[i][j]);
        }
    }
    cout<<ans<<endl;
}