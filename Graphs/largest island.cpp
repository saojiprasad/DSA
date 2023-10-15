// #include<iostream>
// #include<vector>
// using namespace std;


// int dfs(vector<vector<int>>&grid,vector<vector<bool>>&visited,int i,int j,int n,int m){
//         visited[i][j]=true;
//         int dx[4]={1,-1,0,0};
//         int dy[4]={0,0,1,-1};
//         int ans=1;
//         cout<<"HIhisdhoh"<<endl;
        
//         for(int k=0;k<4;k++){
//             int nx=i+dx[k];
//             int ny=j+dy[k];
//             if(!visited[nx][ny] && nx>=0 && ny>=0 && nx<n && ny<m && grid[nx][ny]==1){
//             int count=dfs(grid,visited,nx,ny,n,m);
//             // cout<<count<<endl;
//             ans+=count;
//             }
//         }
//         return ans;
//     }



//     int maxAreaOfIsland(vector<vector<int>>grid) {
        
//         int n=grid.size();
//         int m=grid{0].size();
//         cout<<n<<"  "<<m<<endl;
//         vector<vector<bool>>visited(n,vector<bool>(m,false));
//         int ans=0;
//         for(int i=0;i<n;i++){
//             cout<<"huhihi"<<endl;
//             for(int j=0;j<m;j++){
//                 cout<<"uu"<<endl;
//                 if(visited[i][j]==false && grid[i][j]==1){
//                     cout<<"HI"<<endl;
//                     int len=dfs(grid,visited,i,j,n,m);
//                     if(len>ans){
//                         ans=len;
//                     }
//                 }
//             }
//         }
//         return ans;
//     }

//     int main(){
//         vector<vector<int>>grid={
//             {1,0,0,1,0},
//             {1,0,1,0,0},
//             {0,0,1,0,1},
//             {1,0,1,1,1},
//             {1,0,1,1,0}
//         };
//         int nsns=maxAreaOfIsland(grid);
//         cout<<nsns<<endl;

//     }

#include<iostream>
#include<vector>
using namespace std;

int dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, int i, int j) {
    visited[i][j] = true;
    int n=grid.size();
    int m=grid[0].size();
    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};
    int ans = 1;

    for (int k = 0; k < 4; k++) {
        int nx = i + dx[k];
        int ny = j + dy[k];
        if (nx >= 0 && ny >= 0 && nx < n && ny < m &&!visited[nx][ny] &&  grid[nx][ny] == 1) {
            int count = dfs(grid, visited, nx, ny);
            ans += count;
        }
    }
    return ans;
}

int maxAreaOfIsland(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    int maxArea=0;
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    // int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!visited[i][j] && grid[i][j] == 1) {
                // int len = dfs(grid, visited, i, j, n, m);.
                int area = dfs(grid, visited, i, j);
                maxArea = max(maxArea, area);
            }
        }
    }
    return maxArea;
}

int main() {
    vector<vector<int>> grid = {{0,0,1,0,0,0,0,1,0,0,0,0,0},{0,0,0,0,0,0,0,1,1,1,0,0,0},{0,1,1,0,1,0,0,0,0,0,0,0,0},{0,1,0,0,1,1,0,0,1,0,1,0,0},{0,1,0,0,1,1,0,0,1,1,1,0,0},{0,0,0,0,0,0,0,0,0,0,1,0,0},{0,0,0,0,0,0,0,1,1,1,0,0,0},{0,0,0,0,0,0,0,1,1,0,0,0,0}};

    cout << maxAreaOfIsland(grid) << endl;

    return 0;
}
