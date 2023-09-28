#include<iostream>
using namespace std;
int duplicate(int num[],int n){
int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^num[i];

        for(int i=1;i<n;i++)
    {
        ans=ans^i;
    }



    }
    

    return ans;
}

int main(){

    int arr[5]={4,2,1,3,4};

    cout<<duplicate(arr,5);
}