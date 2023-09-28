#include<iostream>
#include<queue>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    queue<int> q1,q2;

    for(int i=0;i<(n/2);i++) q1.push(arr[i]);
    for(int i=(n/2);i<n;i++) q2.push(arr[i]);

    queue<int> q3;

    while(!q1.empty()&&!q2.empty())
    {
        q3.push(q1.front());
        q3.push(q2.front());
        q1.pop();
        q2.pop();
    }
    while(!q3.empty()){
        cout<<q3.front()<<"  ";
        q3.pop();
    }



}