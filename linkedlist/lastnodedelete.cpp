#include<iostream>
using namespace std;

struct Node{

//public:
int data;
Node* next;

Node(int x){
    data=x;
    next=NULL;
}
};

Node *Ending(Node *head,int data){
        Node *temp=new Node(data);
        if(head==NULL){
            return temp;
        }
        Node *curr=head;
        while(curr->next!=NULL){
            curr=curr->next;
        }
        curr->next=temp;
return head;

}
 

/////DELETE NODE CODE
// Node *remove(Node * head){
//         Node *curr=head;
//         while(curr->next->next!=NULL){
//             curr=curr->next;
//         }
//         delete (curr->next);
//         curr->next=NULL;
//         return head;
// }

void print(Node *&head){
   // Node *curr= head;{
        while(head!=NULL){
            cout<<(head->data)<<endl;
            head=head->next;
        }
    }

int main(){
    Node *head=NULL;
    head=Ending(head,102);
    head=Ending(head,1022);
    head=Ending(head,1033);
    head=Ending(head,1000);
   //remove(head);
    //Ending(head,100);


    print(head);
    cout<<search(head,1022);
}
