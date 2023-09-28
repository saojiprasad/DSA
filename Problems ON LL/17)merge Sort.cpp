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
    Node *fast=head;
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




node* mergeSort(node *head) {
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



// int main(){
//     Node *first=new Node(10);
//     Node *second=new Node(20);
//     Node *third=new Node(30);
//     Node *fourth=new Node(40);

//     first->next=second;
//     second->next=third;
//     third->next=fourth;

//     Node *one=new Node(5);
//     Node *two=new Node(15);
//     Node *three=new Node(17);
//     Node *four=new Node(18);
//     Node *five=new Node(35);
//     Node *ans=nullptr;
//     one->next=two;
//     two->next=three;
//     three->next=four;
//     four->next=five;
//     printList(one);
//     printList(first);
//     ans=merge(first,one);
//     printList(ans);
//     return 0;
// }



int main(){
    Node *first=new Node(18);
    Node *second=new Node(21);
    Node *third=new Node(44);
    Node *fourth=new Node(50);
    Node *five=new Node(50);
    Node *six=new Node(54);
    Node *seven=new Node(71);
    Node *eight=new Node(81);
    Node *nine=new Node(84);
    Node *ten=new Node(90);

    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=five;
    five->next=six;
    six->next=seven;
    seven->next=eight;
    eight->next=nine;
    nine->next=ten;


    
    return 0;
}

