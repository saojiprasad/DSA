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
    Node *curr3=nullptr;

    if(curr1->data<=curr2->data){
            head=curr1;
            curr1=curr1->next;

        }
        else if(curr2->data<=curr1->data){
            head=curr2;
            curr2=curr2->next;
        }

    curr3=head;
    
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


int main(){
    Node *first=new Node(10);
    Node *second=new Node(20);
    Node *third=new Node(30);
    Node *fourth=new Node(40);

    first->next=second;
    second->next=third;
    third->next=fourth;

    Node *one=new Node(5);
    Node *two=new Node(15);
    Node *three=new Node(17);
    Node *four=new Node(18);
    Node *five=new Node(35);
    Node *ans=nullptr;
    one->next=two;
    two->next=three;
    three->next=four;
    four->next=five;
    printList(one);
    printList(first);
    ans=merge(first,one);
    printList(ans);
    return 0;
}

