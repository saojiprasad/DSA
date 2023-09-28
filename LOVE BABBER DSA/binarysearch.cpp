#include<iostream>
using namespace std;

bool binary(int arr[],int s,int e,int k){
    if(s>e){
        return true;
    }
    int mid = s + (s-e)/2;
    if(arr[mid]==k)
        return true;
    
    
    if(arr[mid]<k){
        return binary(arr,mid+1,e,k);
    }
    else{
        return binary(arr,s,mid-1,k);
    }
    
}

int main(){
    int arr[6]={1,2,3,4,5,6};
    // int s=0;
    // int e=6-1;
    
    int k=6;
    
    cout<<binary(arr,0,5,6);
    
}