#include<iostream>
using namespace std;

class Node{
    public: 
    int data;
    Node *perv;
    Node *next;

    Node(int x){
        data=x;
        next=NULL;
        perv=NULL;
    }
};

Node *delhead(Node * &head){
    
    if(head==NULL)
        return NULL;
    
    
    
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    else{
        Node *ptr=head;
        head=head->next;
        head->perv=NULL;
        delete ptr;
        return head;

    }
}




void print(Node *&head){
    Node *curr=head;

    while(curr!=NULL){
        cout<<curr->data<<"-->";
        curr=curr->next;
    }
}

int main(){
    Node *head=new Node(10);
    Node *temp1=new Node(20);
    Node *temp2=new Node(30);

    head->next=temp1;
    temp1->perv=head;
    temp1->next=temp2;
    temp2->perv=temp1;

    
    //insert(head,100);
    //insertatend(head,1000);
    delhead(head);
    print(head);



}
