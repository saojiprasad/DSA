#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int x){
        this->data=x;
        this->next=NULL;
    }
};

int main(){
    Node * one= new Node(10);
    
    cout<<one->data<<endl;
    cout<<one->next<<endl;
}