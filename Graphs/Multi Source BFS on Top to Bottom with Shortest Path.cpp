#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m],dist[n][m];
    queue<pair<int,int>>q;
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,-1,1};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            dist[i][j]=INT_MAX;
            if(a[i][j]&&i==0){
                q.push({i,j});
                dist[i][j]=0;
            }
        }
    }
    while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        if(x==n-1) break;
        for(int i=0;i<4;i++){
            int xx=x+dx[i];
            int yy=y+dy[i];
            if(xx>=0 && xx<n && yy>=0 && yy<m && dist[xx][yy]==INT_MAX&&a[xx][yy]==1){
                q.push({xx,yy});
                dist[xx][yy]=dist[x][y]+1;
            }
        }
    }
    int ans=INT_MAX;
    for(int j=0;j<m;j++){
        ans=min(ans,dist[n-1][j]);
    }
    
    cout<<ans<<endl;
}