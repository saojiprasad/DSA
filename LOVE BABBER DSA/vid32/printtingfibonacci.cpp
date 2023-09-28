#include<iostream>
using namespace std;

int fibo(int x){
    if(x==0||x==1){
        return x;
    }
    
        int series=fibo(x-1)+fibo(x-2);
        return series;
    
    //return -1;
}

void print(int x){
    for(int i=0;i<x;i++){
        cout<<fibo(i);
    }
    cout<<endl;
}

int main(){
    int x=8;
    cout<<fibo(x);
    print(x);
}