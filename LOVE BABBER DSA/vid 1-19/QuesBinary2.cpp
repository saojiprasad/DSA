#include<iostream>
using namespace std;

int main(){
    int n=5;
    int arr[5]={1,5,3,2,1};

    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    int ans;

    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;

        }
        else{
            e=mid;
            ans=e;
        }
        mid=(s+e)/2;

    }
    cout<<ans;

}