#include<bits/stdc++.h>
using namespace std;

int solve(int *input,int n){
    int *output=new int[n];
    output[0]=1;

    for(int i=1;i<n;i++){
        output[i]=1;
        for(int j=i-1;j>=0;j--){
            if(input[i]<input[j]) continue;

            int pos=output[i]+1;
            if(output[i]<pos)
            output[i]=pos;
        }
    }
    int maxi=0;
    for(int i=0;i<n;i++) maxi=max(maxi,output[i]);
    return maxi;
}


int main(){
    int n;
    cin>>n;
    int * input=new int[n];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    cout<<solve(input,n);
}