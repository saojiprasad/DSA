#include<iostream>
using namespace std;
void p(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int sort012(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=0;
    int temp;

    while(mid<=e){
        switch(arr[mid]){
            case 0:{
                temp=arr[s];
                arr[s]=arr[mid];
                arr[mid]=temp;
                s++;
                mid++;
                break;
            }
            case 1:
            mid++;
            break;
            
            case 2:{
                temp =arr[mid];
                arr[mid]=arr[e];
                arr[e]=temp;
               // mid++;
                e--;


            }

        }
    }
    }

   
int main(){

    int arr[8]={0,0,2,2,0,0,1,2};

    sort012(arr,8);
    p(arr,8);
}