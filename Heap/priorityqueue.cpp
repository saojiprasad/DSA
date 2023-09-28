#include<iostream>
#include<queue>
using namespace std;

int main(){
    
    int arr[]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        arr[i]=-arr[i];
    }
    priority_queue<int>p(arr,arr+5);
    // p.push(10);
    // p.push(50);
    // p.push(4);



    while(!p.empty()){
        cout<<-p.top()<<endl;
        p.pop();
    }
}