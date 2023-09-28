#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    
  

    switch(c){
        case 1:
        cout<<"Sum of given number is : "<<a+b;
        break;

        case 2:
        cout<<"sub of given number is :"<<a-b;
        break;
        
        case 3: 
        cout<<"Mul of the given number is :"<<a*b;
        break;
        
        case 4:
        cout<<"div of the two numbers is : "<<a/b;
        break;
        
    }

}