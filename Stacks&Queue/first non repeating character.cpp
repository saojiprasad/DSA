#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str="aabccxb";

    int arr[26]={0};
    queue<char> q;
    for(int i=0;i<str.size();i++){
        char ch=str[i];
        q.push(ch);
        arr[ch-'a']++;

        while(!q.empty()&&arr[q.front()-'a']>1){
            q.pop();
        }
        if(q.empty()==1){
            cout<<"-1"<<" ";
        }
        else{
            cout<<q.front()<<" ";
        }
    }

}