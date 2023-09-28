#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *prev;

    Node(){
        data=0;
        next=NULL;
        prev=NULL;
    }

    Node(int x){
        data=x;
        next=NULL;
        prev=NULL;
    }
};

void print(Node *head){
    Node *temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<"--->";
        temp=temp->next;
    }

}

int getlen(Node *head){
    int len=0;
    Node *temp=head;

    while(temp!=nullptr){
        len++;
        temp=temp->next;
    }
}


int main(){
        Node *first=new Node(100);
        Node *second=new Node(200);
        Node *third=new Node(300);

        first->next=second;
        first->prev=nullptr;
        second->prev=first;
        second->next=third;
        third->prev=second;
        third->next=nullptr;

        print(first);

}