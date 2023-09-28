#include<iostream>
using namespace std;
int main(){

int n=1330;
int a;
cin>>a;
int b,c,d,e;


switch(a){
case 1:cout<<"how many hundred notes ae required\n";
 b=n/100;
 n=n%100;
 cout<<b<<endl;
 //break;

 case 2:cout<<"how many fifty notes ae required\n";
 c=n/50;
 n=n%50;
 cout<<c<<endl;
 //break;
 

 case 3:cout<<"how many twenty notes ae required\n";
 d=n/20;
 n=n%20;

 cout<<d<<endl;
 //break;

 case 4:cout<<"how many one's notes ae required\n";
 e=n/1;
 n=n%1;
 cout<<e<<endl;
 //break;
}
}



