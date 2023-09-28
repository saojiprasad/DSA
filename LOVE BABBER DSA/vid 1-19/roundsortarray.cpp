#include<iostream>
using namespace std;

int pivot(int arr[],int n){

    int s=0,e=n-1;
    int mid=(s+e)/2;

    while(s<e){
        if(arr[0]<=arr[mid]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=(s+e)/2;
    }
    return e;
}

int search(int arr[],int pivot,int n,int key){
    int s=0,e=n-1;
    int mid=(s+e)/2;
    int ans;

    while(s<=e){
        if(arr[mid]==key){
            ans=mid;

        }
        if(arr[mid]>key)
        {
            e=mid-1;
        }
        else{
            s=mid+1;

        }
        mid=(s+e)/2;
    }
    return ans;

}

int main(){
    int arr[5]={7,9,1,2,3};
    int key=1;

   int pp= pivot(arr,5);

    if(key>=arr[pp]&& key<=arr[5-1]){

        cout<<search(arr,pp,5-1,key);
    }
    else{
        cout<<search(arr,0,pp-1,key);
    }
}