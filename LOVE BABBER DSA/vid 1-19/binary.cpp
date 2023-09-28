// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//  /*   int n;
//     cin>>n;

//     int a=0;
//     int b=0;

//     while(n!=0){
//         int d=n%10;
//         if(d==1){

//          b=b+pow(2,a);
//     }
//     n=n/10;
//     a++;

    
//     }
//     cout<<b;
// }

// int n;
// cin>>n;
// int a,ans;
// int i=0;
// while(n!=0)
// {
//     a=n%2;

//     n=n/2;
//     while(a!=0){
//         ans=pow(10,i)*a+ans;
//         i++;
        
       
//     }

//  cout<<ans;

// }

// }*/
// int n;
// cin>>n;
// //int a;
// int b=0;
// int i=0;
// while(n!=0){
// int a=n&1;
// b=(a*pow(10,i))+b;



// n=n>>1;
// i++;

// }
// cout<<b;
// }

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int ans =0;
    int i=0;
    
    while(n!=0){
        int bits=n&1;
        
        ans= (bits*pow(10,i))+ans;
        
        n=n>>1;
        i++;
        
      
    }  cout<<ans;
    
}