#include<bits/stdc++.h>
using namespace std;

int maxi(int a[],int n){
    int dp[100];
    dp[0]=a[0]<0?0:a[0];
    int maxii=a[0];
    for(int i=1;i<n;i++){
        dp[i]=dp[i-1]+a[i];
        if(dp[i]<0){
            dp[i]=0;
        }
        maxii=max(dp[i],maxii);
    }
    return maxii;
}

int main(){
    int arr[10]={3,4,5,6,1,-1,-2,12,-4,7};
    cout<<maxi(arr,10);
}

