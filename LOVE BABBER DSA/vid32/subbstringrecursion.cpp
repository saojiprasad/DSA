#include<iostream>
using namespace std;

void sub(string str,string output,int i){
    if(i>=str.length()){
        cout<<output<<endl;
        return;
    }
    
    //exclude
    sub(str,output,i+1);
    
    //include
    output.push_back(str[i]);
    sub(str,output,i+1);
    
    
    
    
    
}

int main(){
    string str="abc";
    string output="";
    int i=0;
    sub(str,output,i);
    
}