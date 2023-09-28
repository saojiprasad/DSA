#include<iostream>
using namespace std;

int altswap(int arr[],int n){
    int s;
    //int se=s+1;

    for(s=0;s+1<n;s+=2){
        // if(s+1<n){

        swap(arr[s],arr[s+1]);
        // }
        
    }
    
}

int main(){

    int arr[6]={1,2,3,4,5,6};

    altswap(arr,6);

    for(int i=0;i<6;i++){
        cout<<arr[i];
        
    }
}
