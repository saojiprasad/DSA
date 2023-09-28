//PENDING
#include<iostream>
using namespace std;

int print(int ans[],int n){
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    
}

int adding(int arr1[],int n,int arr2[],int m,int arr[],int o){
    int i=n-1;
    int j=m-1;
    int key=o-1;
    int carry=0;
    while(i>=m&&j>=0){
        int val1=arr[i];
        int val2=arr[j];

        int sum=val1+val2+carry;
        carry=sum/10;
        sum=sum%10;
        arr[sum];

        
    }
    while(i>=0){
        int sum =
    }
}

int main(){
    int arr1[3]={1,2,5};
    int arr2[3]={3,4,5};
    int arr[3]={0};

    adding(arr1,3,arr2,3,arr,3);
   print(arr,3);
}