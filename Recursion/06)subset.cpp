#include<iostream>
using namespace std;
void subset(string s,string output,int i){
    if(i==s.length()){
        cout<<output<<"-->";
        return;
    }

//Yes Choice 
    subset(s,output+s[i],i+1);

//No choice
    subset(s,output,i+1);

 
}
int main(){
    string s="abcde";
    string output="";
    subset(s,output,0);
}