#include<iostream>
using namespace std;
int odd(int num){
  
    if(num%2==0){
        cout<<"even";

    }
    else{
        cout<<"odd";
    }
}

int main(){

    int a;
    cin>>a;
    int ans=odd(a);

    

}