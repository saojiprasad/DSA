#include<iostream>
using namespace std;

int print(int ans[],int n){
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    
}

int merge(int arr1[],int n,int arr2[],int m){
    int i=0;
    int j=0;
    int key=0;
    while(i<(n-m)&&j<m){
        if(arr1[i]<arr2[j]){
            arr1[key++]=arr1[i++];
            //key++;
            //i++;
        }
        else{
           arr1[key++]=arr2[j++];
            //key++;
            //j++;
           // i++;

        }
        
    }
    // while(i<n-m){
    //     arr1[key]=arr1[i];
    //     key++;
    //     i++;
    // }
    while(j<m){
       arr1[key]=arr2[j];
        key++;
        j++;
      //  i++;

}
}

int main(){

    int arr1[5]={1,9};
    int arr2[3]={3,5,7};

  //  int arr[5]={0};

    merge(arr1,5,arr2,3);

    print(arr1,5);
}