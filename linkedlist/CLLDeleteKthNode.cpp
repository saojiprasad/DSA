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

Node *dele(Node * &head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==head){
        delete head;
        return NULL;
    }
    else{
        Node *curr=head;
        while(curr->next!=head)
            curr=curr->next;
        

        curr->next=head->next;
        delete head;
        head=curr->next;
        return (curr->next);
        
    }
    return head;


}

Node *effi(Node *&head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==head){
        delete head;
        return NULL;
    }
    else{
        head->data=head->next->data;
        Node *temp=head->next;
        head->next=head->next->next;
        delete temp;
    }

return head;

}

Node *gfgdelekth(Node * &head,int k){
    Node *curr=head;
    for(int i=0;i<k-2;i++){
        curr=curr->next;
    }
    Node *temp=curr->next;
    curr->next=curr->next->next;
    delete temp;
    return head;

}

Node* predelekth(Node* head, int k) {
    if (k == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* curr = head;
    int count = 1;

    while (curr && curr->next &&count < k - 1) {
        curr = curr->next;
        count++;
    }

    if (curr && curr->next && curr->next->next) {
        Node* temp = curr->next;
        curr->next = temp->next;
        delete temp;
    }

    return head;
}

Node* prevvdelekth(Node* head, int k) {
    if (k <= 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* curr = head;
    int count = 1;

    while (curr && curr->next && count < k - 1) {
        curr = curr->next;
        count++;
    }

    if (curr && curr->next && curr->next->next) {
        Node* temp = curr->next;
        curr->next = temp->next;
        delete temp;
    }

    return head;
}

Node* delekth(Node* head, int k) {
    if (k <= 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* curr = head;
    int count = 1;

    while (curr && count < k - 1) {
        curr = curr->next;
        count++;
    }

    if (curr && curr->next) {
        Node* temp = curr->next;
        curr->next = temp->next;
        if (count == k - 1) {
            delete temp;
        }
    }

    return head;
}



int main(){
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=head;
    // effi(head,100);
    int k=8;
    //effi(head);
    delekth(head,k);
    print(head);
    // delete head->next->next->next-;
    // delete head->next->next;
    // delete head->next;
    // delete head;
    

}