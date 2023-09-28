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


/********************************************************************

    Following is the representation of the Singly Linked List Node:

    class node{
        public:
            int data;
            node * next;
            node(int data){
                this->data=data;
                this->next=NULL;
            }
    };
    
********************************************************************/
Node *findmid(Node *head){
    Node *slow=head;
    Node *fast=head->next;
    while(fast!=nullptr&&fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

Node *merge(Node *first,Node *one){

    if(first==nullptr){
        return one;
    }
    if(one==nullptr){
        return first;
    }
    Node *head=nullptr;
    Node *curr1=first;
    Node *curr2=one;
   

    if(curr1->data<=curr2->data){
            head=curr1;
            curr1=curr1->next;

        }
        else if(curr2->data<=curr1->data){
            head=curr2;
            curr2=curr2->next;
        }

     Node *curr3=head;
    
    while(curr1!=nullptr && curr2!=nullptr){
        
        if(curr1->data<=curr2->data){
            curr3->next=curr1;
            curr1=curr1->next;

        }
        else if(curr2->data<=curr1->data){
            curr3->next=curr2;
            curr2=curr2->next;
        }
        curr3=curr3->next;
    }
    if(curr1!=nullptr){
        curr3->next=curr1;
    }
    else{
        curr3->next=curr2;
    }


    return head;

}




Node* mergeSort(Node *head) {
    if(head==nullptr||head->next==nullptr){
        return head;
    }

    Node *mid=findmid(head);

    Node *left=head;
    Node *right=mid->next;
    mid->next=NULL;

    left=mergeSort(left);
    right=mergeSort(right);

    Node *ans=merge(left,right);

    return ans;


}



int main(){
    Node *first=new Node(71);
    Node *second=new Node(1);
    Node *third=new Node(4);
    Node *fourth=new Node(530);
    Node *five=new Node(23);
    Node *six=new Node(542);
    Node *seven=new Node(7221);
    Node *eight=new Node(812);
    Node *nine=new Node(840);
    Node *ten=new Node(906);

    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=five;
    five->next=six;
    six->next=seven;
    seven->next=eight;
    eight->next=nine;
    nine->next=ten;

    printList(first);
    Node* ans=mergeSort(first);
    printList(ans);


    
    return 0;
}



