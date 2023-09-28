#include<iostream>
using namespace std;

void find(string s,string ans){
    
    if(s.length()==0){
        cout<<ans<<"-->";
       
    }
    
    
    for(int i=0;i<s.length();i++){
        char c=s[i];
        string ss=s.substr(0,i)+s.substr(i+1);
        find(ss,ans+c);
        }
       
}

int main(){
    string s="abcd";
    string ans="";

    find(s,ans);

}