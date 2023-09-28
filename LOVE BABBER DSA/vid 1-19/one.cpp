/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<"*";
            j=j+1;
        }
        i=i+1;
        cout<<endl;
    }
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int count=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n){
            cout<<count<<"  ";
            count=count+1;
            j=j+1;
        }
        i=i+1;
        cout<<endl;
    }
}
#include<iostream>
using namespace std;
int main(){
    int n;
    
    cin>>n;
     int i=1;
     
     while(i<=n){
        int j=1;
        int count=i;
        while(j<=i){
            
            cout<<count;
             
            j=j+1;
            count=count-1;
        }
    
        i=i+1;
        cout<<endl;
     }
}output revese numbers in pattern..... 

*/
#include<iostream>
using namespace std;
int main(){
    int n;
   // char ch;
    cin>>n;
    int i =1;
     char start='A';
    while(i<=n){
       
        int j=1;
        //char ch;
        
         
        while(j<=n){
       //char ch ='A'+ j - 1;
        cout<< start;
        j=j+1;
        start=start+1;
        
    }
     cout<<endl;
    i=i+1;
    }

}