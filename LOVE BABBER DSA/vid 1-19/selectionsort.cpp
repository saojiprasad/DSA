#include<iostream>
using namespace std;
// int sele(int arr[],int n){
    
//     for(int i=0;i<n-1;i++){
//         int midIndex =i;

//         for(int j=0;j<n;j++){
//             if(arr[j]<arr[i]){
//                 midIndex=j;
//             }
//         }

//         swap(arr[midIndex],arr[i]);
//     }
      

// }
int main(){
    int arr[5]={1,5,42,3,2};
    int n=5;

        for(int i=0;i<n;i++){

            for(int j=i+1;j<n;j++){
             if(arr[j]<arr[i]){
                swap(arr[i],arr[j]);
             }   
            }


        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<endl;
        }
}