#include<iostream>
using namespace std;

struct Node{

//public:
int data;
Node* next;

Node(int x){
    data=x;
    next=NULL;
}
};

Node *Ending(Node *head,int data){
        Node *temp=new Node(data);
        if(head==NULL){
            return temp;
        }
        Node *curr=head;
        while(curr->next!=NULL){
            curr=curr->next;
        }
        curr->next=temp;
return head;

}

 

int main(){
    Node *head=NULL;
    head=Ending(head,102);
    head=Ending(head,1022);
    head=Ending(head,1033);
    head=Ending(head,1000);
   
    //Ending(head,100);
   // print(head);
}
