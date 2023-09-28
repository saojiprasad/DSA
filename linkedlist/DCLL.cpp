#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int x){
        data=x;
        next=NULL;
        prev=NULL;
    }
};

void print(Node *head){
    Node *temp=head;

    do{
        cout<<temp->data<<"--->";
        temp=temp->next;
    }while(temp!=head);
}

// Node *inserthead(Node *&head,int data){
//     Node *temp=new Node(data);
//     if(head==NULL){
//         temp->next=temp;
//     }
//     else{
//         Node * curr=head;
//         while(curr->next!=head)
//            curr=curr->next;
        
    
//             curr->next=temp;
//             temp->next=head;
//             head=temp;
//     return head;
// }
// }

// Node *insertionathead(Node *head,int data){
//         Node *temp=new Node(data);
//         if(head==NULL)
//         {
//             temp->next=temp;
//         }
//         else{
//             temp->next=head->next;
//             head->next=temp;

//             int t=head->data;
//             head->data=temp->data;
//             temp->data=t;
//         }
// }

// Node *effi(Node * &head,int data){
//     Node *temp=new Node(data);

//     if(head==NULL){
//         temp->next=temp;
//         //return temp;
//     }
//     else{

//         temp->next=head->next;
//         head->next=temp;
//         int t=head->data;
//         head->data=temp->data;
//         temp->data=t;
//         //temp=temp->next;
//         //return head;
//         head=head->next;
//         return head;
//     }

// }

// Node *dele(Node * &head){
//     if(head==NULL){
//         return NULL;
//     }
//     if(head->next==head){
//         delete head;
//         return NULL;
//     }
//     else{
//         Node *curr=head;
//         while(curr->next!=head)
//             curr=curr->next;
        

//         curr->next=head->next;
//         delete head;
//         head=curr->next;
//         return (curr->next);
        
//     }
//     return head;


// }

Node *insertionathead(Node * head,int data){
    Node * temp=new Node(data);

    if(head==nullptr){
        temp->next=temp;
        temp->prev=temp;
        return temp;
    }
    else{
    temp->next=head;
    head->prev->next=temp;
    temp->prev=head->prev;
    head->prev=temp;
   // head=temp;
    return temp;

    //--->>> GFGs

    // temp->prev=head->prev;
    // temp->next=head;
    // head->prev->next=temp;
    // head->prev=temp;
    // head=temp;
    // return head;
    }


}

int main(){
    Node *first=new Node(10);
    Node *second=new Node(20);
    Node *third=new Node(30);

    first->next=second;
    first->prev=third;

    second->next=third;
    second->prev=first;

    third->next=first;
    third->prev=second;


    print(first);
    insertionathead(first,100);
    cout<<endl;
    print(first);

    
    

}