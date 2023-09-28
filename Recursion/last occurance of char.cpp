#include<iostream>
using namespace std;
// int occu(string s,int i,char c){
//     if(s.length()==0 || s.length()==1){
//         return 0;
//     }
//     if(s[i]==c){
//         return i;
//     }
//     else {
//         occu(s,i+1,c);
//     }

// }
void occu(string s,char c,int i,int &ans){
    if(i>=s.length()){
        return ;
    }
    if(s[i]==c){
        ans= i;
    }
    occu(s,c,i+1,ans);
    //return ans;
}
int main(){
    string s={"abcddcde"};
    char c = 'd';
    int ans=-1;
    int i=0;
    occu(s,c,i,ans);
    cout<<ans;
}

