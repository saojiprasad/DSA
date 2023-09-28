#include<iostream>
using namespace std;

int print(int ans[],int n){
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    
}

int merge(int arr1[],int n,int arr2[],int m,int arr[]){
    int i=0;
    int j=0;
    int key=0;
    while(i<n&&j<m){
        if(arr1[i]<arr2[j]){
            arr[key]=arr1[i];
            key++;
            i++;
        }
        else{
            arr[key]=arr2[j];
            key++;
            j++;

        }
        
    }
    while(i<n){
        arr[key]=arr1[i];
        key++;
        i++;
    }
    while(j<m){
        arr[key]=arr2[j];
        key++;
        j++;

}
}

int main(){

    int arr1[5]={1,4,6,8,9};
    int arr2[3]={2,5,7};

    int arr[8]={0};

    merge(arr1,5,arr2,3,arr);

    print(arr,8);
}