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

void InsertAtMiddle(Node *head,int data,int pos){
    if(pos==0){
        InsertAtHead(head,data);
    }
    else{
        Node *temp=head;
        
        for(int i=1;i<pos-1;i++){
            temp=temp->next;
        }
        Node *n=new Node(data);
        n->next=temp->next;
        temp->next=n;
        
    }
    
}

void print(Node *&head){
   // Node *curr= head;{
        while(head!=NULL){
            cout<<(head->data)<<endl;
            head=head->next;
        }
    }


int main(){
    
    Node *head=NULL;
    InsertAtHead(head,4);
    InsertAtHead(head,3);
    InsertAtHead(head,2);
    InsertAtHead(head,1);
    InsertAtMiddle(head,100,2);
    
    print(head);
    
    
    
}