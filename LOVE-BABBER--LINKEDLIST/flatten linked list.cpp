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
//MY LOGIC
// void insertathead(Node * &head,Node *&first){
//  first->next=head;   
//  head=first; 
// }

//BY BABBER

void insertathead(Node* & head,Node * &tail,int data){
    Node * newNode= new Node(data);

    newNode->next=head;
    if(head==NULL){
        tail=newNode;
    }
   
   head=newNode;
}

void insertattail(Node *&head,Node *tail,int data){
    Node *okay= new Node(data);
    
    if(tail==NULL){
        tail=okay;
        head=okay;
    }
    else{
        tail->next=okay;
    }
    tail=okay;

}


void print(Node * head){

    while(head!=NULL){
        cout<<head->data<<"-->";
        head=head->next;

            }
}

int main(){
    Node *head=new Node(NULL);
    //Node *first=new Node(1000);
    Node *tail=new Node(NULL);

    insertathead(head,tail,100);
    insertathead(head,tail,1000);
    insertathead(head,tail,10000);
    insertathead(head,tail,100000);
    insertattail(head,tail,200000);
    print(head);
} 