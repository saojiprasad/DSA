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

// void reverse(Node *head){
//     Node * curr=head;
//     if(curr==nullptr){
//         return;
//     }
//     // cout<<(curr->data)<<"______>";
//     reverse(curr->next);
//     cout<<(curr->data)<<"---->";
// }

Node* reverse(Node * &head){
    if(head==nullptr|| head->next==nullptr){
        return head;
    }
    Node *resthead=reverse(head->next);
    Node *resttail=head->next;
    resttail->next=head;
    head->next=nullptr;

    return resthead;

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
    //Node *ans=reverse(first);
    printList(first);
    return 0;
}

