#include<iostream>
using namespace std;
// void swap(int a,int b){
//     int t;
//     a=t;
//     b=a;
//     t=b;

// }
void reverse(int arr[],int n){
    int start=0;
    int end=n-1;

    // while(start<end){
    //     swap(arr[start],arr[end]);
    //     start++;
    //     end--;
    // }
        for(start=0;start<end;start++){
            swap(arr[start],arr[end]);
            end--;
        }

}
void printarray(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[5]={1,4,3,2,5};
    int brr[6]={1,3,4,6,2,7};

    reverse(arr,5);
    reverse(brr,6);

    printarray(arr,5);
    printarray(brr,6);

    //for(int i=0;i<6;i++){
      //  cout<<arr[i];
        
   // }
}