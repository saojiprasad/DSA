//INCOMPLETE

#include<iostream>
#include<unordered_map>
using namespace std;

int okay(int arr1[],int arr2[],int n){
    int temp[n];
    for(int i=0;i<n;i++){
        temp[i]=arr1[i]-arr2[i];
    }
    
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
    
    
    
    unordered_map<int,int>m;
    int ps=0;
    int res=0;
    
    for(int i=0;i<n;i++){
        ps=+temp[i];
        if(m.find(ps)==m.end()){
            m.insert({ps,i});
        }
        if(m.find(ps)!=m.end()){
            res=max(res,m[ps]);
        }
        
        
    }
    
    return res;
    
}

int main(){
    int arr1[6]={0,1,0,0,0,0};
    int arr2[6]={1,0,1,0,0,1};
    int n=6;
    int m=6;
    
    cout<<okay(arr1,arr2,n);
}