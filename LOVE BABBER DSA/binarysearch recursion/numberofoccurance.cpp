#include<iostream>
using namespace std;

int first(int arr[],int s,int e,int k)
{

    int mid=s+(e-s)/2;
    int ans=mid;
    if(s>e){
        return 0;
    }
    if(ans)
    if(arr[mid]==k){
        ans=mid;
        return first(arr,s,mid-1,k);
        return ans;
    }
    if(arr[mid]<k){
       return first(arr,mid+1,e,k);
    }
    else{
       return first(arr,s,mid-1,k);
    }
    return -1;
}


int main(){
    int arr[8]={1,2,3,3,3,3,4,4};
    //int n=8;
    int k=4;
    cout<<first(arr,0,8,k);


}