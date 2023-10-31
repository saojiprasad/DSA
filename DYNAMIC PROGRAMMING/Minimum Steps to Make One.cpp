#include<bits/stdc++.h>
using namespace std;
 
//TOP DOWN APPROACH
int minsteps(int n,int dp[]){
    if(n==1){
        return 0;
    }

    if(dp[n]!=0){
        return dp[n];
    }

    int x,y,z;
    x=y=z=INT_MAX;
    if(n%3==0){
        z=1+minsteps(n/3,dp);
    }
    
    if(n%2==0){
        y=1+minsteps(n/2,dp);
    }
    x=1+minsteps(n-1,dp);

    int ans=min({x,y,z});
    return dp[n]=ans;

}

//BOTTOM TO DOWN APPROACH

int bottom(int n){
    int dp[100]={0};
    dp[0]=0;
    dp[1]=0;
    for(int i=2;i<=n;i++){
        int x,y,z;
        x=y=z=INT_MAX;

        if(i%3==0){
            x=dp[i/3];
        }
        if(i%2==0){
            y=dp[i/2];
        }
        z=dp[i-1];

        int ans=min({x,y,z});
        dp[i]=ans+1;
    }
    return dp[n];
}

int main(){
    int n;
    cin>>n;
    int dp[n+1]={0};
    cout<<minsteps(n,dp)<<endl;
    cout<<bottom(n)<<endl;

}