#include<iostream>
using namespace std;
int expo(int x,int n,int m){
    // int ans=1;

    // for(int i=0;i<b;i++){
    //     ans=a*ans;
    // }
    // return ans;
    // //return ans;
    int ans =1;
    int anss=0;
    for(int i=0;i<n;i++){
        ans = ans*x;
    }
   // return ans;
    anss=ans%m;
	//anss=anss%m;
    return anss;
}
int main(){
    int a=4;
    int b=3;
    int c=10;
    cout<<expo(a,b,c);
}