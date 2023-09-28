#include<iostream>
using namespace std;
int main(){
    int n=5;
    int *ptr=&n;
    int **ptr2=&ptr;

    cout<<n<<endl;
    cout<<&n<<endl;
    cout<<"pointer";
     cout<<*ptr<<endl;
     cout<<ptr<<endl;
     cout<<"double";
      cout<<**ptr2<<endl;
       cout<<*ptr2<<endl;
       cout<<ptr2<<endl; 
    //   cout<<&ptr2;   
    double d=433.4;
    double *p=&d;

    // cout<<"Size of integer="<<sizeof(n)<<endl;
    // cout<<"Size of pointer="<<sizeof(ptr)<<endl;
    // cout<<"Size of double="<<sizeof(n)<<endl;
    // cout<<"Size of pointer="<<sizeof(p)<<endl;
    // cout<<"brfore  "<<n<<endl;
    // *ptr=*ptr*2;
    // cout<<"after  "<<n<<endl;


    // int i=9;
    // int *t=&i;
    // //t=t+1;
    // cout<<t<<endl;
}