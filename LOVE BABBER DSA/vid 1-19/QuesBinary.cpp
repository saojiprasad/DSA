#include<iostream>
using namespace std;
int fir(int arr[],int n,int key){
    int s=0,e=n-1;
    int mid=(s+e)/2;
    int ans;

    while(s<=e){
        if(arr[mid]==key){
                ans=mid;
                e=mid-1;

        }

    
    else if(arr[mid]<key){
        e=mid-1;

    }
    else{
        s=mid+1;
    }
mid=(s+e)/2;
}
return ans;
}
int las(int arr[],int n,int key){
    int s=0,e=n-1;
    int mid=(s+e)/2;
    int ans;

    while(s<=e){
        if(arr[mid]==key){
                ans=mid;
                s=mid+1;

        }

    
    else if(arr[mid]<key){
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

 int arr[11]={1,2,3,3,3,3,3,3,3,3,4};
     cout<<fir(arr ,11,3);
     cout<<las(arr ,11,3);

     int ans=las(arr,7,3)-fir(arr,7,3)+1;
     cout<<ans;
 }