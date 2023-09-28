#include<iostream>
using namespace std;
int search(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    
    int ans;

    while(s<=e){
  int squ=mid*mid;
        if(squ==key){
            //ans=mid;
            return mid;
        }
        if(squ>key){
            e=mid-1;

        }
        else{
            s=mid+1;
        }
        mid=(s+e)/2;
    }
   // return ans;
    
}
int main(){
    int arr[9]={0,1,2,3,4,5,6,7,8};
    int key=9;
    int n;

    cout<<search(arr,9,key);
}