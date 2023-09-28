#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
void solve(vector <int>& arr,int i,int sum,int& maxi){
    if(i>=arr.size()){
        maxi=max(sum,maxi);
        return;
    }
    
    solve(arr,i+2,sum+arr[i],maxi);
    
    
    solve(arr,i+1,sum,maxi);
}

int main(){
    vector <int> arr{1,2,3,4,5};
    int n=5;
    int sum=0;
    int i=0;
    int maxi=INT_MIN;
    solve(arr,i,sum,maxi);
    
    cout<<maxi;
    
    
}