#include<bits/stdc++.h>
using namespace std;
//TOP TO DOWN APPROACH
int fib(int n,int dp[]){
    if(n==0||n==1){
        return n;
    }
    if(dp[n]!=0){
        return dp[n];
    }

    // int ans;
    dp[n]=fib(n-1,dp)+fib(n-2,dp);
    return dp[n];
}
//BOTTOM TO UP APPROACH
int fibb(int n){
    int dp[100];
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}

//Space Optimization

int spaceoptimization(int n){
    if(n==0||n==1){
        return n;
    }
    int a=0;
    int b=1;
    int c;
    for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}

int  main(){
    int n;
    cin>>n;
    int dp[100]={0};
    cout<<spaceoptimization(n)<<endl;
    cout<<fib(n,dp)<<endl;
    cout<<fibb(n)<<endl;

}