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

Node *insert(Node * &head,int data){

    Node *temp=new Node(data);
    temp->next=head;
    if(head!=NULL){
        head=temp;
        //head=temp;
        //return head;
    }
    //temp->next=head;
    //head->perv=temp;
   //head=temp;

    return temp;
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

    
    insert(head,100);
   // insertatend(head,1000);
    print(head);



}
