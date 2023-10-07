#include<bits/stdc++.h>
using  namespace std;

class Node{
    public:
    int x;
    int y;
    int dist;

    Node(int x,int y,int dist){
        this->x=x;
        this->y=y;
        this->dist=dist;
    }
};

class compare{
    public:
    bool operator()(const Node &a,const Node &b){
        return a.dist<b.dist;
    }
};

int shortest_path(vector<vector<int>>grid){
    int n=grid.size();
    int m=grid[0].size();

    int i=0,j=0;

    vector<vector<int>>dist(m+1,vector<int>(n+1,INT16_MAX));
    dist[i][j]=grid[0][0];

    int dx[]={0,0,-1,1};
    int dy[]={1,-1,0,0};

    set<Node, compare>s;
    s.insert(Node(0,0,dist[0][0]));

   while (!s.empty()){
   auto it=s.begin();
   int cx=it->x;
   int cy=it->y;
   int cd=it->dist;
    s.erase(it);

    for(int k=0;k<4;k++){
        int nx=cx+dx[k];
        int ny=cy+dy[k];
        if(nx >= 0 && nx < m && ny >= 0 && ny < n && cd + grid[nx][ny] < dist[nx][ny]){
            Node temp(nx,ny,dist[nx][ny]);
            if(s.find(temp)!=s.end()){
                s.erase(s.find(temp));
            }

            int nd=grid[nx][ny]+cd;
            dist[nx][ny]=nd;
            s.insert(Node(nx,ny,nd));
        }
    }

    
   }
   return dist[n-1][m-1];
}


int main(){
    vector<vector<int>>grid={{31,100,65,12,8},
                        {10,13,47,157,6},
                        {100,113,174,11,30},
                        {88,124,47,20,140},
                        {99,32,111,41,20}};


        int shortestpath=shortest_path(grid);
        cout<<shortestpath<<endl;
   }