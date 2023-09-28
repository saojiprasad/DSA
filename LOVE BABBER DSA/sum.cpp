#include<iostream>
using namespace std;

int addd(int arr[],int size){
    if(size==1){
        return arr[0];
    }
    int ans=arr[size-1]+addd(arr,size-1);
    return ans;
    
}

int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    
    cout<<addd(arr,size);
    
    
    
    }