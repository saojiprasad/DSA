#include<iostream>
using namespace std; 
int sum(int num[],int s){
    int a=0;

    for(int i=0;i<s;i++){
        a=a+num[i];
    }
     return a;

}

int main(){

    int arr[5];

    for(int i=0;i<5;i++){
        cin>>arr[i]; 
    }

    cout<<sum(arr,5);
}