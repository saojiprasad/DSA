#include<iostream>
using namespace std;

bool search(int num[],int s,int key){

    //int a;
    //cin>>a;

    for(int i=0;i<s;i++){
        if(num[i]==key){
             return true;
        }
        
        
    }
    return false;
}
int main(){

    int arr[5]={2,3,4,5,6};
    cout<<"Enter the element you want to search\n";
    int key;
    cin>>key;

    bool found = search(arr,5,key);

    if( found==true ){
        cout<<"Element is found";

    }
else{
    cout<<"Element is not found";
}
return 0;
}

    










  
// #include<iostream>
// using namespace std;

// int main(){

//     int arr[5]={1,2,3,4,5};
//     int a=3;

//     for(int i=0;i<5;i++){
//         if(a=arr[i]){
//             cout<<"a is at this postion"<<arr[i];
//         }

//     }


// }
