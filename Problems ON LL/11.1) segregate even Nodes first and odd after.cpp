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

Node *segregateoutput(Node *&head){
    Node * last=head;
    
    while(last->next!=nullptr){
        last=last->next;
    }

    Node *odd=head;
    while(odd!=nullptr){
        if(odd->data%2==0){
            break;
        }
        else{
            odd=odd->next;
        }
    }
    if(odd==last){
        return head;
    }
    Node *even=head;
    while(even!=nullptr){
        if(even->data%2==1){
            break;
        }
        else{
            even=even->next;
        }
    }
    if(even=last){
        return head;
    }

    while(head->data%2!=0){
        last->next=head;
        last=last->next;
        head=head->next;
        
    }
    Node *first=head;
    int t=4;

    while(t--){
        cout<<"EUUUU";
        if(first->next->data%2==1){
            last->next=first->next;

            first->next=first->next->next;
            last=last->next;
            // last->next=nullptr;
        }
        else{
            first=first->next;
        }
    }
    // if (head != nullptr) {
        last->next = nullptr;
    

    cout<<last->data<<endl;
    cout<<head->data<<endl;
    cout<<first->data<<endl;
    return head;

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
    segregateoutput(first);
   printList(first);
    return 0;
}

