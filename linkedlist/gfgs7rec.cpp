#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

// void print(Node *head){
//     Node *curr=head;
//     if(curr==NULL){
//         return;
//     }
//     while(curr!=NULL){
//         cout<<curr->data<<"-->";
//         curr=curr->next;
//     }
// }

void print(Node *head){
    
    if(head==NULL){
        return;
    }
    print(head->next);
    cout<<head->data<<"-->";
    
}


int main(){
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    
    print(head);
    
}