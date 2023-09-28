#include<iostream>
using namespace std;

// int paiiir(int arr[],int n,int ans){
// //int ans;
//     for(int i=0;i<n;i++){

//         for (int j=i+1;j<n;j++){
//              if(arr[i]+arr[j]==ans){
//                 return arr[i];
//                 return arr[j];
            
//              }
//              else{
//                 break;
//              }

//         }
//     }
    
    
// }
int main(){

    int arr[5]={1,3,2,4,5};
    int sum=12;
    //int ans=0;
    for(int i=0;i<5;i++){

        for (int j=i+1;j<5;j++){
            for(int k=j+1;k<5;k++){

            
             if(sum==arr[i]+arr[j]+arr[k]){
              cout<<arr[i]<<arr[j]<<arr[k];
                // return arr[j];
             }
             }
            //  else{
            //     break;
            //  }

        }
    }

    //int ans= paiiir(arr,5,sum);
    //cout<<ans;
}