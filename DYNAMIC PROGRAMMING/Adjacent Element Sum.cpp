#include<bits/stdc++.h>
using namespace std;

int solveUtil(int i,vector<int>&v,vector<int>&dp){
    if(i==0){
        return v[0];
    }
    if(i<0) return 0;
    if(dp[i]!=-1){
        return dp[i];
    }
    

    int pick=v[i]+solveUtil(i-2,v,dp);
    int notpick=0+solveUtil(i-1,v,dp);

    return dp[i]=max(pick,notpick);

}

int solve(int n, vector<int>& v) {
    vector<int> dp(n,-1); 
    return solveUtil(n-1, v, dp); 
}

int main(){
    vector<int>v{3,2,1,4};

    int n=v.size();
    cout<<solve(n,v);
}