#include<bits/stdc++.h>
using namespace std;

const int N=100;
int arr[N][N],visited[N][N];
int n,m;

int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};

void flood_fill(int x,int y,int col){
    arr[x][y]=col;
    visited[x][y]=1;
    for(int i=0;i<4;i++){
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(nx>=0&&nx<n&&ny>=0&&ny<m&&!visited[nx][ny]&&arr[nx][ny]==1){
            flood_fill(nx,ny,col);
        }
    }


}


int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int total_count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==1&&!visited[i][j]){
                
                total_count++;
                flood_fill(i,j,total_count);
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }

}