#include<iostream>
using namespace std;

void unique(int arr[],int n){
    int ans;
    for(int i=0;i<n;i++){
         ans=ans^arr[i];

    }
    cout<<ans;

}
int main(){

    int arr[7]={1,2,3,4,3,2,1};

    cout<<"Unique element is : ";
unique(arr,7);    
}