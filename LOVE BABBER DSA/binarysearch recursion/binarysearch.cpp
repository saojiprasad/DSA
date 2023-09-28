#include<iostream>
using namespace std;

bool binary(int arr[],int s,int e,int k){
    int mid=(s+e)/2;
    if(s>e){
        return 0;
    }
    if(arr[mid]==k){
        return 1;
    }
    
    if(arr[mid]<k){
        return binary(arr,mid+1,e,k);
    }
    else{
        return binary(arr,s,mid-1,k);
    }
    return -1;
    
    
}
int main(){
    int arr[6]={2,4,6,8,10,12};
    int n=6;
    int s=0;
    int e=n-1;
    int k=20;
    cout<<binary(arr,s,e,k);
    
}