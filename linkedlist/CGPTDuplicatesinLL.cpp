#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(){
        data=0;
        next=nullptr;
    }
    Node(int x){
        data=x;
        next=NULL;

    }
};

void print(Node * &head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"--->";
        temp=temp->next;
    }
}

Node * duplicate(Node * &head){
    Node *curr=head;
    while(curr!=nullptr && curr->next!=NULL){
        if(curr->data==curr->next->data){
            curr->next=curr->next->next;
            curr=curr->next;
        }
        else{
            curr=curr->next;
        }
    }
    // Node *temp=curr;
    // while(temp!=NULL){
    //     cout<<temp->data<<"--->";
    //     temp=temp->next;
    // }
    //print(head);
    return head;
}


int main(){

Node *head=nullptr;
Node *p=nullptr;
Node *temp=nullptr;
int n;
cout<<"enter the numbers of nodes you want in the linked list---->";
cin>>n;
int x;
// Node *temp=head;

for(int i=0;i<n;i++){
cout<<"ENter the data for the nodes --->";
cin>>x;
p=new Node(x);

if(head==nullptr){
    head=p;
    temp=head;
}else{
    temp->next=p;
    temp=temp->next;
}
p=p->next;
}


print(head);
duplicate(head);
print(head);

}