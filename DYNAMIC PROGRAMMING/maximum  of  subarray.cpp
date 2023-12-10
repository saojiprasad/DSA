#include<bits/stdc++.h>
using namespace std;

int maxi(int a[],int n){
    int dp[100];
    dp[0]=a[0]<0?0:a[0];
    int maxii=dp[0];
    for(int i=1;i<n;i++){
        dp[i]=dp[i-1]+a[i];
        if(dp[i]<0){
            dp[i]=0;
        }
        maxii=max(dp[i],maxii);
    }
    return maxii;
}

//Space Optimized

int spaceopti(int a[],int n){
    int maxii=0;
    int cur=0;
    int maxi=0;
    for(int i=0;i<n;i++){
        maxi=min(maxi,a[i]);
        cur+=a[i];
        if(cur<0){
            cur=0;
        }
        maxii=max(cur,maxii);
    }
    if(maxii==0){
        maxii=maxi;
    }
    return maxii;

}


int main(){
    int arr[10]={-3,-4,-5,-6,-1,-1,-2,-12,-4,-7};
    cout<<spaceopti(arr,10);
    cout<<endl;
    cout<<maxi(arr,10);
}

