#include<bits/stdc++.h>
using namespace std;

int maxarr(int arr[],int n){
    int maxarea=0;
    stack<int>small;
    int nsl[n];
    int nsr[n];
    //find Next smallest right
    for(int i=n-1;i>=0;i--){

    while(!small.empty()&&arr[small.top()]>=arr[i])
    small.pop();
    
    if(!small.empty()){
        nsr[i]=small.top();
    }
    else{
        nsr[i]=n;
    }
    small.push(i);
    }
    while(!small.empty()){
        small.pop();
    }

    //find next smallest left
    for(int i=0;i<n;i++){

    while(!small.empty()&&arr[small.top()]>=arr[i])
    small.pop();
    
    if(!small.empty()){
        nsl[i]=small.top();
    }
    else{
        nsl[i]=-1;
    }
    small.push(i);
    }

    //find Max Area
    for(int i=0;i<n;i++){
        int height=arr[i];
        int width=nsr[i]-nsl[i]-1;
        int area=height*width;
        maxarea=max(area,maxarea);
    }
    return maxarea;

}

int main(){
    int n=6;
    int arr[n]={2,1,5,6,2,3};
    cout<<maxarr(arr,n);
  //  cout<<ans;
}