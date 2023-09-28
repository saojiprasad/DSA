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

Node * removeDuplicates(Node *&head){
    Node *curr=head;
    // Node *temp=head->next;
    while(curr->next!=nullptr){
        if((curr->data)==(curr->next->data)){
            cout<<"IN  IF"<<"-->";
            Node *temp=curr->next;
            curr->next=curr->next->next;
            
            delete temp;
            // temp->next=temp->next->next;
        }
        else{
            cout<<"In else"<<"-->";
            curr=curr->next;
            // temp->next=temp->next;
        }
    }
    return head;

}

// Node* removeDuplicates(Node*& head) {
//     if (head == nullptr)
//         return head;

//     Node* curr = head;
//     while (curr->next != nullptr) {
//         if (curr->data == curr->next->data) {
//             Node* temp = curr->next;
//             curr->next = curr->next->next;
//             delete temp; // Free memory of duplicate node
//         }
//         else {
//             curr = curr->next;
//         }
//     }
//     return head;
// }


int main(){
    Node *first=new Node(10);
    Node *second=new Node(20);
    Node *third=new Node(20);
    Node *four=new Node(30);
    Node *five=new Node(30);
    Node *six=new Node(30);
    first->next=second;
    second->next=third;
    third->next=four;
    four->next=five;
    five->next=six;

    printList(first);
    removeDuplicates(first);
    printList(first);
   
    return 0;
}

