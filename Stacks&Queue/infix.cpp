#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    string output="";
    stack<char> st;
    int n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]>=97&&s[i]<=122){
            output+=s[i];
        }
        else if(s[i]==')'){
            do{
    
                if(st.top()!='('||st.top()!=')')
            output+=st.top();

            st.pop();
            }while(st.top()!='(');
            st.pop();

        }
        else{
            st.push(s[i]);
        }
        
    }
    while(!st.empty()){
            output+=st.top();
            st.pop();
        }

    cout<<output<<endl;


}