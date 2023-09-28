#include<iostream>
using namespace std;
int main(){
    int arr[10]={3,5,7,9};
    // cout<<arr<<endl;
    // cout<<&arr[3]<<endl;
    // cout<<&arr[1]<<endl;
    // cout<<&arr[2]<<endl;

    // cout<<"2-"<<*(arr+1)<<endl;
    // cout<<"2-"<<(*arr)+1<<endl;
    // cout<<"2-"<<*arr<<endl;

    // int i=3;
    // cout<<arr[i]<<endl;
    // int *ptr=&arr[0];
    // cout<<sizeof(arr)<<endl;
    // cout<<sizeof(*ptr)<<endl;

    int *ptr=&arr[0];
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<&arr[1]<<endl;
    ptr=ptr+1;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    
}