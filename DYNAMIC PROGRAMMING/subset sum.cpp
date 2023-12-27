#include<bits/stdc++.h>
using namespace std;
const int N=1000;
int n,sum;
int arr[N];
vector<vector<int>>memo;
int solve(int i,int sum){
    if(i==-1) return (sum==0);

    if(memo[i][sum]!=-1) return memo[i][sum]; 


    bool ans=false;
    if(sum>=arr[i]){
        ans|=solve(i,sum-arr[i]);
    }
    ans|=solve(i-1,sum);
    return memo[i][sum]=ans;

}


int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    memo.resize(n,vector<int>(899+1,-1));

    cout<<solve(n-1,899);

}