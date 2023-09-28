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

Node *inserthead(Node *&head,int data){
    Node *temp=new Node(data);
    if(head==NULL){
        temp->next=temp;
    }
    else{
        Node * curr=head;
        while(curr->next!=head)
           curr=curr->next;
        
    
            curr->next=temp;
            temp->next=head;
            head=temp;
    return head;
}
}

Node *insertionathead(Node *head,int data){
        Node *temp=new Node(data);
        if(head==NULL)
        {
            temp->next=temp;

        }
        else{

            temp->next=head->next;
            head->next=temp;

            int t=head->data;
            head->data=temp->data;
            temp->data=t;



        }


}

Node *effi(Node * &head,int data){
    Node *temp=new Node(data);

    if(head==NULL){
        temp->next=temp;
        //return temp;
    }
    else{

        temp->next=head->next;
        head->next=temp;



        int t=head->data;
        head->data=temp->data;
        temp->data=t;
        //temp=temp->next;
        //return head;
        head=head->next;
        return head;
    }

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
int main(){
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=head;
    // effi(head,100);
    dele(head);
    print(head);
    // delete head->next->next->next-;
    // delete head->next->next;
    // delete head->next;
    // delete head;
    

}