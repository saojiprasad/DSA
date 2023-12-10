#include<bits/stdc++.h>
using namespace std;
int memo[100005];
int dp(int n,int arr[]){
    if(n==0){
        return 0;
    }
    if(memo[n]!=-1) return memo[n];
    int ans=0;
    for(int i=1;i<=n;i++){
        ans=max(ans,(arr[i]+dp(n-i,arr)));
    }

    return memo[n]=ans;
}


int main(){
    int n=8;
    int arr[9];
    memset(memo,-1,sizeof(memo));
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }

    cout<<dp(n,arr);
}