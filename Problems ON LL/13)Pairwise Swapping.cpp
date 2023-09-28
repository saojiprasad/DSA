#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

void printList(Node *head){
    Node *curr =head;
    while(curr!=NULL){
        cout<<(curr->data)<<"----->";
        curr=curr->next;
    }
    cout<<endl;
}

Node *swapping(Node *head){
     Node *temp=head;
     //Node *temp1=head->next;
    //  int t=4;
     while(temp!=nullptr&&temp->next!=nullptr){
        swap(temp->data,temp->next->data);
        temp=temp->next->next;
     }
     return head;
}
int main(){
    Node *first=new Node(10);
    Node *second=new Node(20);
    Node *third=new Node(30);
    Node *four=new Node(40);

    first->next=second;
    second->next=third;
    third->next=four;

    printList(first);
    swapping(first);
    printList(first);

    return 0;
}

