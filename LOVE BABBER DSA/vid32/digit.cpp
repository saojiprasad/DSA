#include<iostream>
using namespace std;
int digit(int n){
    if(n==0){
        return ;
    }
    digit(n/10);
    int ans=n%10;
    cout<<ans;
    
    

}

int main(){
    int n;
    cin>>n;

    cout<<digit(n);
}