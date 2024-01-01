#include<bits/stdc++.h>
using namespace std;
const int N=2000;
int s[N],v[N]; 
int knapsack(int index,int size){
    if(index==0) return 0;
    int sum=0;
    if(s[index-1]<=size){
       sum=v[index-1]+knapsack(index-1,size-s[index-1]);
    }
    sum=max(sum,knapsack(index-1,size));
    return sum;
}

int main(){
    int size,n;

    cin>>size>>n;

    for(int i=0;i<n;i++){
        cin>>s[i]>>v[i];
    }
    cout<<knapsack(n,5)<<endl;
}