#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node(){
        this->data=data;
        this->next=NULL;
    }

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    
};

void print(Node * head){

    while(head!=NULL){
        cout<<head->data<<"-->";
        head=head->next;
            }
}


int main(){
    Node *first=new Node(100);
    Node *second=new Node(200);
    Node *third=new Node(300);
    Node *four=new Node(500);

    first->next=second;
    second->next=third;
    third->next=four;
    print(first);
    //cout<<(head->data);
    
}