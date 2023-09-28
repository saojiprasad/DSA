#include<iostream>
#include<bits/stdc++.h>
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

int Intersection(Node *head1,Node *head2){

    Node *temp=head1;
    unordered_set<Node*>hs;

    while(temp!=nullptr){
        hs.insert(temp);
        temp=temp->next;
    }
   // temp=head2;
    while(head2!=nullptr){
        if(hs.find(head2)!=hs.end()){
            cout<<head2->data;
            break;  
        }
        head2=head2->next;
    }
    return 0;

}

int main(){
    Node *first=new Node(17);
    Node *second=new Node(15);
    Node *third=new Node(30);
    Node *four=new Node(40);
    Node *five=new Node (50);
    Node *six=new Node (35);
    Node *seven=new Node(13);
    Node *eight=new Node(80);
    Node *nine=new Node(90);

    first->next=second;
    second->next=third;
    third->next=four;
    four->next=five;
    five->next=six;
    six->next=seven;
    seven->next=eight;
    eight->next=nine;

    Node *head2=new Node (100);
    Node *head3=new Node(1000);
    Node *head4=new Node (10000);
    
    head2->next=head3;
    head3->next=head4;
    head4->next=five;


    // printList(first);
    // printList(head2);
    Intersection(first,head2);
    return 0;
}

