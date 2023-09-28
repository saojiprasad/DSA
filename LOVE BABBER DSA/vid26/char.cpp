#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    char arr1[6]="abcde";

    cout<<arr<<endl;
    cout<<arr1<<endl;

    char *c=&arr1[0];
    
    cout<<&c<<endl;
    cout<<*c<<endl;
    cout<<c<<endl;


    char temp='r';
    char *p=&temp;
    cout<<p<<endl;
}