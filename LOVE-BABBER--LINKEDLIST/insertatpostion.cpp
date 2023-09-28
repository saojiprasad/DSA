#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *prev;

    Node(){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }

    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
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

void insertatpos(int data, Node *&head,Node *& tail,int pos){
    Node *temp=head;
    while(temp!=NULL){

    }

}


void print(Node * head){

    while(head!=NULL){
        cout<<head->data<<"-->";
        head=head->next;

            }
            cout<<endl;
}

Node* reverseDoublyLinkedList(Node* head) {
    Node* current = head;
    Node* temp = nullptr;

    while (current->next != nullptr) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

    if (temp != nullptr) {
        head = temp->prev;
    }

    return head;
}
int main(){
    Node *head=new Node(NULL);
    //Node *first=new Node(1000);
    Node *tail=new Node(NULL);

    insertathead(head,tail,100);
    insertathead(head,tail,1000);
    insertathead(head,tail,10000);
    insertathead(head,tail,100000);
    //insertattail(head,tail,200000);
    print(head);
    reverseDoublyLinkedList(head);
    print(head);
} 