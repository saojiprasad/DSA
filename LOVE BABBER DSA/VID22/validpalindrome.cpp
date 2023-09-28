#include<iostream>
using namespace std;

bool valid(char ch){
    if((ch>= 'a' && ch<= 'z' ) ||  (ch>='A'&& ch<='Z')|| (ch>='1'&& ch<='9')){
         return 1;
    }
    return 0;
}

char lower(char ch){
    if(ch>='a'&& ch<='z'){
        return ch;
    }
    else{
        char temp = ch- 'A'+'a';
        return temp;
            }
}

bool palindrom(string a){
    int s=0;
    int e=a.length()-1;
    while(s<=e){
         if(a[s]!=a[e]){
            //cout<<"Not a Palindrom";
            return 0;
            break;
         }
         else{
            s++;
            e--;
           // cout<<"This is Palindrom";
         }
  //cout<<"This is Palindrom";

    }
//cout<<"This is Palindrom";
return 1;
}

int main (){
 string s;
cin>>s;

string temp;
 for(int i=0;i<s.length();i++){
 if(valid(s[i])){
    temp=s[i];
    cout<<temp;
     }
 }

     for(int i=0;i<temp.length();i++){
        temp[i]=lower(temp[i]);
     }
     cout<<palindrom(temp);

}