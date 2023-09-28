#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int>arr,int n,int d){
    int temp[n];
    // for(int i=0;i<n-d;i++){
    //     temp[i]=arr[i+d];
    // }
    // for(int i=0;i<d;i++){
    //     temp[n-d+i]=arr[i];
    // }

    for(int i=0;i<d;i++){
        temp[i]=arr[n-d+i];
    }
    for(int i=0;i<n-d;i++){
        temp[i+d]=arr[i];
    }




    for(auto i:temp){
        cout<<i;
    }
}


int main(){
    vector<int>arr{1,2,3,4,5,6,7,8,9};
    int d=2;
    rotate(arr,9,2);
}