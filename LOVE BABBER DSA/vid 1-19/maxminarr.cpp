#include<iostream>
using namespace std;

int maxi(int num[],int n){
 //int INT_MIN;
    int m= INT32_MIN;
    for(int i=0;i<n;i++){
        if(num[i]>m){
            m=num[i];
        }
        

    }
    return m;
}
int mini(int num[],int n){

    //int INT_MAX;
    int m=INT32_MAX;
    for(int i=0;i<n;i++){
        if(num[i]<m){
            m=num[i];
        }
        
    }
    return m;
}

int main(){
    //int size;
    //cin>>size;
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];

        
    }
    cout<<maxi(arr,5);
    
    cout<<mini(arr,5);
}