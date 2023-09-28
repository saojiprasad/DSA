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

// int middleofll(Node *&head){
//     Node *temp=head;
//     Node *curr=head;
//     int count=0;
//     if(temp->next==nullptr){
//         return (temp->data);
//     }
//     else{
//     while(temp!=nullptr)
//     {
//         count++;
//         cout<<count<<"-->";
//         temp=temp->next;
//     }
    
//     for(int i=0;i<count/2;i++)
//         curr=curr->next;
//     }
//     return (curr->data);
   
//     // return 0;
// }

int effi(Node *head){
    Node *fast=head;
    Node *slow=head;
    while(fast!=nullptr&& fast->next!=nullptr){
        fast=fast->next->next;
        slow=slow->next;
    }
    return (slow->data);
}


int main(){
    Node *first=new Node(10);
    // first->next=nullptr;
    Node *second=new Node(20);
    Node *third=new Node(30);
    Node *four=new Node(40);
    Node *five=new Node(50);
    first->next=second;
    second->next=third;
    third->next=four;
    four->next=five;
    printList(first);
    cout<<effi(first);
    return 0;
}

