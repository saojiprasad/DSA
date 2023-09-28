#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(){
        data=0;
        left=NULL;
        right=NULL;

    }
    Node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};





void preorder(Node* root){
    if(root==nullptr) return;
    cout<<root->data<<"  ";
    preorder(root->left);
    preorder(root->right);
}

void spiral(Node * root){
    stack <Node *>s1;
    stack<Node*>s2;
    s1.push(root);

    while(!s1.empty()||s2.empty()){
        while(!s1.empty()){
            Node *curr=s1.top();
            cout<<curr->data<<"  ";
            s1.pop();
            if(curr->left!=nullptr){
                s2.push(curr->left);
            }
            if(curr->right!=NULL)
            {
                s2.push(curr->right);
            }
        }
        while(!s2.empty()){
            Node *curr=s2.top();
            cout<<curr->data<<"  ";
            s2.pop();
            if(curr->right!=NULL){
                s1.push(curr->right);
            }
            if(curr->left!=NULL){
                s1.push(curr->left);
            }
        }
    }

}


int main(){
    Node *first= new Node(1);
    Node *second=new Node(2);
    Node *third=new Node(3);
    Node *fourth=new Node(4);
    Node *five=new Node(5);
    Node *six=new Node(6);
    Node *seven=new Node(7);
    Node *eight=new Node(8);
    Node *nine=new Node(9);
    Node *ten=new Node(10);

    first->left=second;
    first->right=third;
    second->left=fourth;
    second->right=five;
    third->left=six;
    third->right=seven;
    fourth->left=eight;
    fourth->right=nine;
    six->left=ten;
    preorder(first);
    spiral(first);

    
}