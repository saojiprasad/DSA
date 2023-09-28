#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    
};

void InsertAtHead(Node *&head ,int data){
    if(head==NULL){
        head = new Node(data);
        return;
    }
    
    Node *n =new Node(data);
    n->next=head;
    head=n;
}
void print(Node *head){
  
        while(head!=NULL){
            cout<<(head->data)<<endl;
            head=head->next;
        }
    }
Node* recPrint(Node *head){
    if(head==NULL || head->next==NULL){
        return head;
    }   
    Node * shead=recPrint(head->next);
    head->next->next = head;
    head->next=NULL;
    return shead;
}
int main(){
    
    Node *head=NULL;
    InsertAtHead(head,4);
    InsertAtHead(head,3);
    InsertAtHead(head,2);
    InsertAtHead(head,1);
    //InsertAtMiddle(head,100,2);
    
    print(head);
    head=recPrint(head);
    print(head);
    
    
}