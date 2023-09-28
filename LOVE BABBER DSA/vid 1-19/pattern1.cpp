// /*#include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int s=n-i;
//         while(s){
//             cout<<" ";
//             s=s-1;
//         }
//         int j=1;
//         while(j<=i){
//             cout<<"*";
//             j=j+1;
//         }
//         i=i+1;
//         cout<<endl;
//     }
// }
// #include<iostream>
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   int i=1;
//   while(i<=n){
//     int j=1;
//     int s=n-i+j;
//     while(j<=s){
        
//     cout<<"*";
//       j=j+1;
//     }
//     i=i+1;
//     cout<<endl;
//   }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int s= n - i ;
//         while(s){
//             cout<<" ";
//             s=s-1;
//         }
//         int j=1;
//         while(j<=i){
//             cout<<j;
//             j=j+1;
//         }
//         int p=i-1;
//         while(p){
//             cout<<p;
//             p=p-1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
    
// }*/
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n)
//     {
//         int p=1;
//         int a=n-i+1;
//         while(p<=a){
//             cout<<p;
//             p=p+1;
//         }
//         int q=1;
//         int b=i-1;
//         while(q<=b)
//         {
//             cout<<"*";
//             q=q+1;
//         }
//         int r=1;
//         int c=i-1;
//         while(r<=c)
//         {
//             cout<<"*";
//             r=r+1;
//         }
//         int s=1;
//         int d=n-i+1;
//         int e=d;
//         while(s<=d){
//             cout<<e;
//             e--;
//             s=s+1;
//         }
        


//         i=i+1;
//         cout<<endl;
//     }
// }
#include<iostream>
using namespace std;
int main(){
    int n=3;
    for(int i=0;i<n;i++){
       for(int j=0;j<=i;j++){
           cout<<"*";
       }
       cout<<endl;
   }
       for(int i=n-1;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<"*";

        }
        cout<<endl;
   }
}