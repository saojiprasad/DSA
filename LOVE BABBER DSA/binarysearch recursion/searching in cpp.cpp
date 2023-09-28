#include<iostream>
using namespace std;

bool summ(int arr[],int n,int k){
    
    if(n==0 ){
        return 0;
    }
    if(arr[0]==k){
        return 1;
    }
    else{
        summ(arr+1,n-1,k);
    }

   // return -1;
}


int main(){

    int arr[7]={1,2,3,4,5,16,7};
    int n=7;
    int k=4;
    bool ans=summ(arr,n,k);
    cout<<ans;
}