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

Node *deleteNode(Node *&given){
    Node *temp=given;
    temp->data=temp->next->data;
    temp->next=temp->next->next;

    return temp;
}

int main(){
    Node *first=new Node(10);
    Node *second=new Node(20);
    Node *third=new Node(30);
    Node *four=new Node(40);
    Node *five=new Node(50);

    first->next=second;
    second->next=third;
    third->next=four;
    four->next=five;

    printList(first);
    deleteNode(third);
    printList(first);


    return 0;
}

