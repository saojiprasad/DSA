#include<iostream>
#include<vector>
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

// Node *rev(Node *head){
//     vector <int> arr;

//     for(Node *curr=head;curr!=nullptr;curr=curr->next){
//         arr.push_back(curr->data);
//     }

//     for(Node *curr=head;curr!=nullptr;curr=curr->next){
//     curr->data=arr.back();
//     arr.pop_back();
//     }
//     return head;


// }

Node *effi(Node * head){
    Node *prev=nullptr;
    Node *curr=head;
    

    while(curr!=nullptr){
       // cout<<"HI"<<"--->";
        Node *next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;

}

// ListNode* reverseList(ListNode* head) {
//     ListNode* previous = nullptr;
//     ListNode* current = head;

//     while (current != nullptr) {
//         ListNode* next = current->next;    // Store the next node
//         current->next = previous;    // Reverse the pointer
//         previous = current;    // Move previous to the current node
//         current = next;    // Move current to the next node
//     }

//     return previous;    // Return the new head of the reversed list
// }

Node *efi(Node *head){
    Node * curr=head;
    Node * temp=nullptr;

    while(curr!=nullptr){
        Node *next=curr->next;
        curr->next=temp;
        temp=curr;
        curr=next;
    }
    return temp;
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
    Node *ans=efi(first);
    printList(ans);
    return 0;
}

