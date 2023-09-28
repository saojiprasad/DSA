#include<iostream>
using namespace std;

bool search(int arr[],int n,int k){
    if(n==0){
        return false;
    }
   
   if(arr[0]==k){
       return true;
   }
   else{
       bool ans= search(arr+1,n-1,k);
    return ans;
}
}

int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    
    int n=8;
    int k=14;
    
    cout<<search(arr,n,k);
}