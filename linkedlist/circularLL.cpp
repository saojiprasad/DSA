#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;

    Node(int x){
        data=x;
        next=NULL;
    }
};

void print(Node *head){
    Node *temp=head;

    do{
        cout<<temp->data<<"--->";
        temp=temp->next;
    }while(temp!=head);
}

int main(){
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=head;

    print(head);
    // delete head->next->next->next-;
    // delete head->next->next;
    // delete head->next;
    // delete head;
    

}