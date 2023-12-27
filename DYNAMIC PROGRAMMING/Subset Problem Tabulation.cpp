#include<bits/stdc++.h>
using namespace std;

int main(){
    int sum,n;
    cin>>sum>>n;
    int arr[n+1];
    arr[0]=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }

    int dp[n+1][sum+1];
    dp[0][0]=true;
    for(int i=1;i<=sum;i++){
         dp[0][i]=false;
    }

    for(int i=1;i<=n;i++){
        for(int j=0;j<=sum;j++){
            dp[i][j]=dp[i-1][j];
            if(j-arr[i]>=0)
             dp[i][j]|=dp[i-1][j-arr[i]];
        }
    }

    cout<<dp[n][sum];
}