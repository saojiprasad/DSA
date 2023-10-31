#include<bits/stdc++.h>
using namespace std;

//TOP DOWN APPROACH

int mincoin(int n,int coins[],int T,int dp[]){
    if(n==0){
        return 0;
    }
    if(dp[n]!=0){
        return dp[n];
    }
    int ans=INT_MAX;
    for(int i=0;i<T;i++){
        if(n-coins[i]>=0){
        int subpro=mincoin(n-coins[i],coins,T,dp);
        ans=min(ans,subpro+1);
        }
    }
    return dp[n]=ans;
}


// int mincoinss(int n,int coins[]){
//     int d[n+1]={0};
//     d[0]=0;
//     int ans=INT_MAX;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<3;j++){
//             if(n-coins[j]>=0){
//                 ans=min(ans,d[coins[j]]);
//             }
//         }
//         d[i]=ans+1;
//     }
//     return d[n];
// }

//BOTTOM UP APPROACH
int mincoinss(int n,int coins[],int T){
    int dp[n+1]={0};
    for(int i=1;i<=n;i++){
        dp[i]=INT_MAX;
        for(int j=0;j<T;j++){
            if(i-coins[j]>=0){
            int sub=dp[i-coins[j]];
            dp[i]=min(dp[i],sub+1);
            }
        }
    }
    return dp[n];
}

int main(){
    int n=15;
    int coins[]={1,2,5};
    // int d[100]={0};
    // cout<<mincoin(n,coins,3,dp)<<endl;
    cout<<mincoinss(n,coins,3);


}