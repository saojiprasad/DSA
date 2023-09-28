#include<iostream>
using namespace std;
// int fun(int n){

// cout<< n <<endl;
//     if(n==0){
//         return 1;
//     }
//   //  int s=1;
    
//   // fun(n-1);
   
   
//    return   fun(n-1)*n;


// }
int power(int n){
    cout<<n<<endl;
    if(n==0)
    return 1;

    return n*power(n-1);
}
int main(){
    int  a=5;
   int ans= power(a);

   cout<<ans;
}