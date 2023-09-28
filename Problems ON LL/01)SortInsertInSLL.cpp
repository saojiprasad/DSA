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

Node *sortedinsert(Node * &head,int data){
    Node *temp=new Node (data);
    cout<<"Temp Created"<<endl; 
    if(head==nullptr){
        return head;
    }else{
        cout<<"Now I'm in Else cond"<<endl;
    Node * curr=head;
    while( curr->next!=NULL &&curr->next->data < data )
    curr=curr->next;

    cout<<"I'm out of while loop"<<endl;
    temp->next=curr->next;
    curr->next=temp;
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
    sortedinsert(first,45);
    printList(first);
    return 0;
}

