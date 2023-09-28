// #include<iostream>
// using namespace std;

// int prin(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<"  ";
//     }
//     cout<<endl;
// }

// int swapp(int arr[],int n){
//    int i=0;
//    int j=n-1;
//     while(i<j){

//         swap(arr[i],arr[j]);
//         i++;
//         j--;

//     }

// }

// int main(){
//     int arr[6]={1,9,3,77,45,68};
//    int  abc=swapp(arr,6);
//     prin(arr,6);
//    // cout<<abc;
//     return 0;

// }

#include<iostream>
using namespace std;
int prin(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}
int reverse(int arr[],int n,int key){
   
   int s=key+1;
   int e=n-1;
     while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
     }
}
     int main(){
        
    int arr[6]={1,9,3,77,45,68};
    int key=3;
   int  abc=reverse(arr,6,key);
    prin(arr,6);
   // cout<<abc;
    return 0;

}

   

