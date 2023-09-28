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

bool detect(Node *head){
    Node *first=head;
    Node *second=head;

    while(second!=nullptr&&second->next!=nullptr){
        first=first->next;
        second=second->next->next;
        
        if(first==second){
            return true;
        }
    }
    return false;
}


int main(){
    Node *first=new Node(10);
    Node *second=new Node(20);
    Node *third=new Node(30);
    Node *four=new Node(40);
    Node *five=new Node(50);
    Node *six=new Node(60);
    Node *seven=new Node(70);
    first->next=second;
    second->next=third;
    third->next=four;
    four->next=five;
    five->next=six;
    six->next=seven;
    //seven->next=third;
    
    cout<<detect(first);
    //printList(first);

   
    return 0;
}
