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

// int nthnode(Node *head,int n){
//     Node *temp=head;
//     int count=0;
//     while(temp!=nullptr){
//         count++;
//         cout<<count<<"---->";
//         temp=temp->next;
//     }
//     int ans=count-n;
//     cout<<endl;
//     Node *curr=head;
//     for(int i=0;i<ans;i++){
//         curr=curr->next;
//         //cout<<curr->data<<"------------>";
//        // cout<<i<<"--->";
//     }
//     return (curr->data);

// }
 //Two Pointer Approach
// int effi(Node *head,int n){
// Node *first=head;
// Node *second=head;

// for(int i=0;i<n;i++){
//     first=first->next;
// }


// while(first!=nullptr){
//     first=first->next;
//     second=second->next;
// }
// return (second->data);
// }

int effi(Node *head, int n)
    {
            Node* temp=head;
            int count=0;
            while(temp!=nullptr){
                count++;
                temp=temp->next;
            }
           Node *first=head;
           for(int i=0;i<n;i++){
               first=first->next;
           }
           if(n>count){
               return -1;
           }else{
           Node *second=head;
           while(first!=nullptr){
               first=first->next;
               second=second->next;
           }
           
           return (second->data);
           }
    }




int main(){
    Node *first=new Node(10);
    Node *second=new Node(20);
    Node *third=new Node(30);
    Node *four=new Node(40);
    Node *five=new Node(50);
    first->next=second;
    second->next=third;
    third->next=four;
    four->next=five; 
    int n=1;
    printList(first);
    cout<<effi(first,n);
    return 0;
}

