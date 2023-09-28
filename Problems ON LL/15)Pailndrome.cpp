#include<iostream>
using namespace std;

struct Node{
    char data;
    Node *next;
    Node(char x){
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




int main(){
    Node *first=new Node('P');
    Node *second=new Node('R');
    Node *third=new Node('R');
    Node *four=new Node('P');

    first->next=second;
    second->next=third;
    third->next=four;

    printList(first);
    
    return 0;
}

