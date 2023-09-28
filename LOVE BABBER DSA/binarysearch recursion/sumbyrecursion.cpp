#include<iostream>
using namespace std;

int summ(int arr[],int n){
    
    if(n==0|| n==1){
        return 0;
    }
    // if(n==1){
    //     return arr[0];
    // }
    else{
        int sum=summ(arr+1,n-1);
         sum=sum+arr[0];
         return sum;
    }

    return -1;




}


int main(){

    int arr[7]={1,2,3,4,5,16,7};
    int n=7;
    cout<<summ(arr,n);
}