#include<iostream>
using namespace std;
void print(int p){
   // cout<<&p;
  //  cout<<*p;
    cout<<p;
}
int main(){
    int v=5;
    int *p=&v;
    print(*p);
}