#include<iostream>
using namespace std;
int main(){
    int n=10;
    int s=0,e=n-1;
    int m=(s+e)/2;
    int arr[10]={1,2,3,4,5,6,7,8,9,17};
    int flag=1;

    cout<<"Enter the number you want to search\n";
    int key=6;

    while(s<=e){
        //m=(s+e)/2;
            if(arr[m]==key){
               cout<<"Ele is present at"<<m;
               flag =1;
              // break;
            }
            if(key<arr[m]){
                e=m-1;
            }
            else{
                s=m+1;
            }
            m=(s+e)/2;
 

    }
if(flag==0){
cout<<"Ele is not present in array";
}
    
    
    
    
    }