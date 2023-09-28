// #include<iostream>
// using namespace std;
// int main(){
// int n=6;
// bool count=1;
//     int arr[6]={0,1,1,0,1,0};
//     int i=n;
//     int j=n-1;
// while(count){
//     while(arr[i]==0){
//         i++;
    
//     while(arr[j]==1){
//         j--;
    
//     while(arr[i]==1&arr[j]==0){
//         swap(arr[i],arr[j]);
    
  
// }
// cout<<arr[i]<<arr[j];
//     }
//     }
// }}


#include<iostream>
using namespace std;

void p(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void so(int arr[],int n){

   int left=0, mid=1, right=n-1;
while(left<right){
   while(arr[left]==0){
    left++;
    if(arr[left]==1){
        arr[left]=(arr[left]<2&&arr[left]>0);
        left++;
   }
   while(arr[right]==2){
    right--;
    if(arr[right]=1){
        arr[right]=(arr[right]<2&&arr[right]>0);
        right--;
    }
   }
   if(arr[left]==2&&arr[right]==0&&left<right){
   swap(arr[left],arr[right]);
   left++;
   right--;
   }
}
}
}
int main(){

    int arr[8]={0,0,2,2,0,0,1,2};

    so(arr,8);
    p(arr,8);
}
