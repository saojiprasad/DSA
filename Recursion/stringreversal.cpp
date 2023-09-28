#include<iostream>>
using namespace std;

string reversal(string s){
    
    if(s.length()==0|| s.length()==1){
        return s;
    }

    char first=s[0];
    string rem=s.substr(1);

    return reversal(rem)+first;
    


}

int main(){
    string s;
    cin>>s;
    
    cout<<reversal(s);
}