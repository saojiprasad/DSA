// #include<iostream>
// using namespace std;

// int main(){

//     int ans=0;
//     int n=5;
//     int s=0,e=n-1;
//     int mid= s =(e-s)/2;

//     int arr[5]={6,7,8,1,2};

//     while(s<e){
//      if(arr[mid]>=arr[0]){
//     s=mid+1;
    
//      }
//      else{
//         mid=e;
        

//      }
//       mid= s =(e-s)/2;
//     int ans=s;
//     }
//     cout<<ans;
// }

#include<iostream>
 using namespace std;
 int pivot(int arr[],int n){

    int s=0;
    int e= n-1;
    int mid= s +(e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;

        }
      mid= s +(e-s)/2;
    }
    return s;
 }
 int main(){

    int arr[5]={4,5,6,1,2};
    cout<<pivot(arr,5);
     }