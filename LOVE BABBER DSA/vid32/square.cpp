#include<iostream>
using namespace std;

int output(int& a,int b){
    if(b==0)
        return 1;
    if(b==1)
        return a;
        
        int ans=output(a,b/2);
        
        if(b%2==0){
            return ans*ans;
        }
        else{
            return a*ans*ans;
        }
        
}


int main(){
    int a=2;
    int b=11;
    
    cout<<output(a,b);
    
}