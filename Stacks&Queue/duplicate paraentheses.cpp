#include <bits/stdc++.h> 
using namespace std;
bool duplicateParanthesis(string &expr)
{
    stack<char> s;
    int n=expr.size();
    for(int i=0;i<n;i++){
        int count=0;
        if(expr[i]==')'){
            while(s.top()!='('){
                s.pop();
                count++;
            }
            if(count<1){
                return true;
            }
            else{
                s.pop();
            }
            } 
        else{
          s.push(expr[i]);
        }
    }
        return false;
}
int main()
{
    string s;
    cin>>s;

    cout<<duplicateParanthesis(s);
}