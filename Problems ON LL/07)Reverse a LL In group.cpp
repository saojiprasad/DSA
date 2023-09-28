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

Node * reverseingroup(Node *head,int k){
    Node *first=head;
    Node *temp=nullptr;

    for(int i=0;i<k;i++){
        Node *next=first->next;
        first->next=temp;
        temp=first;
        first=next;
    } 
    Node *second=head;
    Node *tempp=nullptr;
    // for(second=first;second!=nullptr;second=second->next){
        while(second!=nullptr){
        Node *next=second->next;
        second->next=tempp;
        tempp=second;
        second=next;
        }
    // }
    return temp;

}

Node* reverseInGroup(Node* head, int k) {
    Node* current = head;
    Node* prev = nullptr;
    Node* next = nullptr;
    int count = 0;

    // Reverse k nodes
    while (current != nullptr && count < k) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }

    // Recursively reverse the remaining linked list
    if (next != nullptr) {
        head->next = reverseInGroup(next, k);
    }

    return prev;
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

    int k=3;
    printList(first);
    Node *ans=reverseInGroup(first,k);
    printList(ans);
    Node *anss=reverseingroup(first,k);
    printList(anss);
    return 0;
}

