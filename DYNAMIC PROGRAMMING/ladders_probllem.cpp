#include<bits/stdc++.h>
using namespace std;

int ladder_top_down(int n,int k,int dp[]){
    if(n==0){
        return 1;
    }
    //rec
    if(dp[n]!=0){
        return dp[n];
    }
    int ways=0;
    for(int i=1;i<=k;i++){
        if(n-i>=0)
        ways+=ladder_top_down(n-i,k,dp);
    }
    return dp[n]=ways;
}  

void ladder_bottom_up(int n,int k){
    int dp[100]={0};
    dp[0]=1;
    for(int i=1;i<=n;i++){
        dp[i]=0;
        for(int j=1;j<=k;j++){
            if(i-j>=0)
                dp[i]+=dp[i-j];
        }
    }
    for(int i=0;i<=n;i++){
        cout<<dp[i]<<" ";
    }
}

int main(){
    int n,k;
    cin>>n>>k;
    // cout<<ladder_top_down(n,k,dp)<<endl;
    ladder_bottom_up(n,k);
}