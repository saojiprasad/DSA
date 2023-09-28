#include<iostream>
using namespace std;

bool issort(int arr[],int n){
    if(n==0|| n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        issort(arr+1,n-1);
    }
    //return ans;
}


int main(){

    int arr[7]={1,2,3,4,5,16,7};
    int n=7;
    cout<<issort(arr,n);

}