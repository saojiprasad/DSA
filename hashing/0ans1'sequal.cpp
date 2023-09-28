#include<iostream>
#include<unordered_map>
using namespace std;

int okay(int arr[],int n){
    unordered_map<int,int>m;
    int ps=0;
    int res=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            arr[i]=-1;
        }
    }
    
    for(int i=0;i<n;i++){
         
         
         ps+=arr[i];
         if(m.find(ps)==m.end()){
             m.insert({ps,i});
         }
         if(m.find(ps)!=m.end()){
             res=max(res,i-m[ps]);
         }
    }
    return res;
}


int main(){
    int arr[7]={1,1,1,1,1,0,0};
    int n=7;
    
    cout<<okay(arr,n);
}