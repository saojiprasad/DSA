#include<iostream>
using namespace std;
int pivot(int arr[],int n){

int s=0;
int e=n-1;
int mid=(s+e)/2;
int left_sum=0;
int right_sum=0;

while(s<e){
    while(s<mid){
        left_sum=left_sum+arr[s];
    }
  





}




}

int main(){
    int arr[6]={1,2,3,9,3,3};
    cout<<pivot(arr,6);

}