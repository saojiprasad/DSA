#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"  ";
    }
    cout<<endl;
}

vector<int> reverse(vector<int> v,int key){
    //int key;
    int s=key +1,e=v.size()-1;

    while(s<e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
   // return v;
}

int main(){

    vector<int>v;
    int key=1;
    v.push_back(3);
    v.push_back(4);
    v.push_back(35);
    v.push_back(34);
    v.push_back(31);
   vector<int> ans=reverse(v,key);
   //cout<<ans;

    print(ans);


}
