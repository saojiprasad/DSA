#include<iostream>
using namespace std;

bool issort(int arr[],int size){
    if(size==0||size==1){
        return true;
    }

    if(arr[0]> arr[1]){
        return false;
    }
    else{
        bool ans=issort(arr+1,size-1);
        return ans;
    }

}

int main(){
    int arr[9]={1,2,3,4,6,5,7,8,9};
    int size=9;
    bool ans=issort(arr,size);
    
    if(ans){
        cout<<"sorted";
    }
    else{
        cout<<"not";
    }
}
