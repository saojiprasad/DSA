#include<iostream>
using namespace std;
int bin(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;

    while(start<=end){

        if(arr[mid]==key){
            return mid;
        }
        else if(key<arr[mid]){
                end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=(start+end)/2;

    }
return -1;

}
int main(){

    int arr[10]={1,2,3,4,5,6,7,8,9,10};

    cout<<bin(arr,10,0);
}