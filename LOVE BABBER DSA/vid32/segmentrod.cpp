#include<iostream>
#include<limits.h>
using namespace std;

int seg(int n,int x,int y,int z){
    if(n==0){
        return 0;
    }
    if(n<0){
        return INT_MIN;
    }
    int a=seg(n-x,x,y,z)+1;
    int b=seg(n-y,x,y,z)+1;
    int c=seg(n-z,x,y,z)+1;
    int ans=0;
    ans=max(a,max(b,c));
    return ans;
    
    
}

int main(){
    int n=7;
    int x=5;
    int y=2;
    int z=2;
    
    cout<<seg(n,x,y,z);
}