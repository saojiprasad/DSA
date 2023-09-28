#include<iostream>
using namespace std;

// int largest(int arr[][3],int n,int m){

//     int maxi=0;
//     int rowIndex=0;
//     for(int i=0;i<3;i++){
//     int sum=0;
//         for(int j=0;j<3;j++){
//    sum=sum+arr[i][j];
//         }
//         if(maxi<sum){
//             maxi=sum;
//             rowIndex=i;
//         }
      
// }
// cout<<"The maximum sum is"<<maxi;
// return rowIndex;




//}

int main(){
    int maxi=0;
    int rowIndex=0;
    int arr[3][3]={1,23,4,5,4,6,78,8,9};
for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
//int sum=0;

for(int i=0;i<3;i++){
    int sum=0;
        for(int j=0;j<3;j++){
//cout<<arr[i][j]<<"\t";
   sum=sum+arr[i][j];
        }
        cout<<sum;
        cout<<endl;

         if(maxi<sum){
            maxi=sum;
            rowIndex=i;
        }

    }

    cout<<maxi<<" "<<rowIndex;
  
  //cout<<"THe largest row sum is "<<largest(arr,3,3);

}