#include<iostream>
using namespace std;
int main(){
    int i=8;
    int &j=i ;
    cout<< i <<endl;;
    i++;
    cout<<i<<endl;
    j++;
    cout<<j<<endl;
    
}