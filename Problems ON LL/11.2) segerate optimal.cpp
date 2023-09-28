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

Node *segregateoutput(Node *head){
    Node *es=nullptr;
    Node *ee=NULL;
    Node *os=NULL;
    Node *oe=NULL;

    for(Node *curr=head;curr!=nullptr;curr=curr->next){
        int x=curr->data;

        if(x%2==0){
            if(es==nullptr){
            es=curr;
            ee=curr;
            }
            else{
                // ee=curr;
                // es->next=ee;
                ee->next=curr;
                ee=ee->next;
            }
        }
        else{
            if(os==nullptr){
                os=curr;
                oe=curr;
            }
            else{
            //   oe=curr;
            //   os->next=oe;
            oe->next=curr;
            oe=oe->next;
            
            }
        }
        // oe=nullptr;
        // es=nullptr;
    }
    if(os==nullptr||es==nullptr)
    return head;

    ee->next=os;
    oe->next=nullptr;
    cout<<es->data<<endl;
    return es;

}

int main(){
    Node *first=new Node(17);
    Node *second=new Node(15);
    Node *third=new Node(30);
    Node *four=new Node(40);
    Node *five=new Node (50);
    Node *six=new Node (35);
    Node *seven=new Node(13);
    Node *eight=new Node(80);
    Node *nine=new Node(90);

    first->next=second;
    second->next=third;
    third->next=four;
    four->next=five;
    five->next=six;
    six->next=seven;
    seven->next=eight;
    eight->next=nine;


    printList(first);
   first= segregateoutput(first);
   printList(first);
    return 0;
}
