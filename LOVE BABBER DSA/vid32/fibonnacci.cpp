#include<iostream>
using namespace std;
int recursion(int n){
    //int sum=0;
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
 
        int sum=recursion(n-1)+recursion(n-2);

    return sum;


}
int main(){
    int n;
    cin>>n;

    cout<<recursion(n);
}