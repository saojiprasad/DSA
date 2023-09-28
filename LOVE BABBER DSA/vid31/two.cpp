#include<iostream>
using namespace std;
int print(int n){
    if(n==0){
        return 0;
    }
    cout<<n;
     return print(n-1);


}
int main(){
    int a=5;
    cout<<print(a);
    
}