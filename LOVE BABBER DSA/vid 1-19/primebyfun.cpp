#include<iostream>
using namespace std;

bool isprime(int n){

for(int i=2;i<n;i++){
if(n%2==0){
    return 0;
}

}
return 1;
}
int main(){

    int a;
    cin>>a;
    if(isprime(a)){
        cout<<"is prime ";
    }
    else{
    cout<<"not a prime";
}
}