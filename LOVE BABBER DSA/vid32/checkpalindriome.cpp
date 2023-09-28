#include<iostream>
using namespace std;

bool check(string str,int i,int j){
    if(i>j){
        return true;
    }
    
    if(str[i]!=str[j]){
        return false;
    }
    else{
        return check(str,i+1,j-1);
    }
    //return true;
}


int main(){
    string str="madam";
    
   cout<< check(str,0,str.length()-1);
    
}