#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// class heap{
//     public:
//     int arr[100];
//     int size=0;

//     int left(int i){
//         return (2*i+1);
//     }
//     int right(int i){
//         return (2*i+2);
//     }
//     int parent(int i){
//         return ((i-1)/2);
//     }
//     void insert(int x){
//         size=size+1;
//         // int index=size;
//         arr[size-1]=x;
//         for(int i=size-1;i!=0&&arr[parent(i)]>arr[i];){
//             swap(arr[i],arr[parent(i)]);
//             i=parent(i);
//         }
//     }

//     void print(){
//         for(int i=0;i<size;i++){
//             cout<<arr[i]<<"  ";
//         }
//         cout<<endl;
//     }


// };

void heapify(int arr[],int size,int i){
    int left=2*i+1;
    int right=2*i+2;
    int smallest=i;

    if(left<size&&arr[smallest]>arr[left]){
        smallest=left;
    }
    if(right<size&&arr[smallest]>arr[right]){
        smallest=right;
    }

    if(smallest!=i){
        swap(arr[i],arr[smallest]);
        heapify(arr,size,smallest);
    }
}

int extractmin(int arr[],int size){
    if(size==0){
        return 0;
    }

    if(size==1){
        size--;
        return arr[size];
    }

    swap(arr[0],arr[size-1]);
    size--;
    heapify(arr,9,0);
    return arr[size];


}


void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[10]={20,25,30,35,40,80,32,100,70,60};
    print(arr,10);
    int ans=extractmin(arr,10);
    cout<<ans<<endl;
    // heapify(arr,10,0);/

    print(arr,9);  
} 