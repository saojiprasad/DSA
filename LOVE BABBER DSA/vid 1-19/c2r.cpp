#include<iostream>
using namespace std;

int fact(int num){

    int ans=1;
    for(int i=1;i<=num;i++){
        ans=ans*i;

    }
    return ans;
}

    int c2r(int n,int r){
      
      int nume= fact(n);

      int deno=fact(r)*fact(n-r);

      return nume/deno;
      //return ok;
    }

int main(){
    int a ,b;
    cin>>a>>b;
    //int best=c2r(a,b);
    cout<<c2r(a,b);
}

