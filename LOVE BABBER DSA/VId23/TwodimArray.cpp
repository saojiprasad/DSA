#include<iostream>
using namespace std;

bool ispresent(int arr [][3],int target,int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
}
return 0;
}
 int main(){
    int arr[3][3]={1,23,4,5,4,6,78,8,9};
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cin>>arr[i][j];
    //     }
    //     cout<<endl;
    // }
 

  for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
        // cout<<"Enter the targert";
        // int target;
        // cin>>target;

        if((ispresent(arr,8,3,3))){
            cout<<"element found";
        }
        else{
            cout<<"element not found";
        }



 }