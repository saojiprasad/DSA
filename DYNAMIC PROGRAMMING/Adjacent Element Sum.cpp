#include<bits/stdc++.h>
using namespace std;



//MEMO
// int solveUtil(int i,vector<int>&v,vector<int>&dp){
//     if(i==0){
//         return v[0];
//     }
//     if(i<0) return 0;
//     if(dp[i]!=-1){
//         return dp[i];
//     }
    

//     int pick=v[i]+solveUtil(i-2,v,dp);
//     int notpick=0+solveUtil(i-1,v,dp);

//     return dp[i]=max(pick,notpick);

// }

//TABULATION

// int solve(vector<int>v,vector<int>dp){
//     dp[0]=v[0];
//     int n=v.size();
//     for(int i=1;i<v.size();i++){

//         int pick=v[i];
//         if(i>1){
//             pick+=dp[i-2];
//         }
//         int notpick=dp[i-1];

//         dp[i]=max(pick,notpick);

//     }

//     return dp[n-1];

// }

// SPACE OPTIMIZATION





// int solve(int n, vector<int>& v) {
//     vector<int> dp(n,-1); 
//     return solveUtil(n-1, v, dp); 
// }

int main(){
    vector<int>v{3,2,1,4};

    int n=v.size();
    // vector<int> dp(n,-1);

    //  SPACE OPTIMIZATION

    int prev=v[0];
    int prev2=0;

    for(int i=1;i<n;i++){
        int take=v[i];
        if(i>1) 
        take+=prev2;

        int nottake=prev;

        int cur=max(take,nottake);
        prev2=prev;
        prev=cur;
        
    }

    cout<<prev;
    
}