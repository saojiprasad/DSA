// #include<bits/stdc++.h>
// using namespace std;

// // void heapify(int arr[],int i,int size){
// //     int left=2*i+1;
// //     int right=2*i+2;
// //     int smallest=i;
// //     if(left<size&&arr[left]<arr[smallest]){
// //         smallest=left;
// //     }
// //     if(right<size&&arr[right]<arr[smallest]){
// //         smallest=right;
// //     }

// //     if(smallest!=i){
// //         swap(arr[i],arr[smallest]);
// //         heapify(arr,smallest,size);
// //     }

// // }
// void print (int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// void heapify(int arr[],int size,int i){
//     int left=2*i+1;
//     int right=2*i+2;
//     int smallest=i;

//     if(left<size&&arr[smallest]>arr[left]){
//         smallest=left;
//     }
//     if(right<size&&arr[smallest]>arr[right]){
//         smallest=right;
//     }

//     if(smallest!=i){
//         swap(arr[i],arr[smallest]);
//         heapify(arr,size,smallest);
//     }
    
// }


// void ddb(int arr[],int size,int i,int x){
//         arr[i]=x;
//         heapify(arr,size,0);

//         print(arr,8);
// }

// int main(){
//     int arr[8]={20,80,200,90,100,250,500,120};
//     ddb(arr,8,3,10);
    
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[], int size, int i) {
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int smallest = i;

    if (left < size && arr[left] < arr[smallest]) {
        smallest = left;
    }
    if (right < size && arr[right] < arr[smallest]) {
        smallest = right;
    }

    if (smallest != i) {
        swap(arr[i], arr[smallest]);
        heapify(arr, size, smallest);
    }
}

void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void ddb(int arr[], int size, int i, int x) {
    if (i >= size) {
        cout << "Index out of bounds." << endl;
        return;
    }

    arr[i] = x;

    // Determine whether to move the updated value up or down the heap
    int parent = (i - 1) / 2;
    if (i > 0 && arr[parent] > arr[i]) {
        while (i > 0 && arr[parent] > arr[i]) {
            swap(arr[i], arr[parent]);
            i = parent;
            parent = (i - 1) / 2;
        }
    } else {
        heapify(arr, size, 0);
    }

    print(arr, size);
}

int main() {
    int arr[8] = {20, 80, 200, 90, 100, 250, 500, 120};
    ddb(arr, 8, 2, 10);

    return 0;
}
