#include<iostream>
using namespace std;
inline int getmax(int& a,int& b){
    return (a>b) ? a:b;
}
int main(){
    int a=9;
    int b=8;
    //int ans=(a>b)? a:b;
    cout<<getmax(a,b);
}