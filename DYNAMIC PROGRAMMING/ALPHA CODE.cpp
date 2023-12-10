#include<bits/stdc++.h>
using namespace std;
string s;
vector<int>memo;
int dp(int index){
    if(index==s.size()) return 1;
    if(memo[index]!=-1) return memo[index];
    if(s[index] == '0') return 0;
    
    int ans=dp(index+1);
    // if(s[index]>'0'&&s[index]<='9'){
    //     ans+=dp(index+1);
    // }
    if(index+1<s.size()&&s[index]=='1'){
        ans+=dp(index+2);
    }
    if(index+1<s.size()&& s[index]=='2' && s[index+1]<='6'){
        ans+=dp(index+2);
    }
        return memo[index]=ans;
}


int main(){
    
    while(1){
    cin>>s;
    if(s[0]=='0') break;
    memo.clear();
    memo.resize(s.size(),-1);
    cout<<dp(0)<<endl;
    }
}