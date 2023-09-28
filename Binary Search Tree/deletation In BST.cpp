#include<iostream>
using namespace std;

class Node{

public:
int data;
Node* left;
Node* right;

Node(){
    data=0;
    left=right=NULL;
}

Node(int x){
    data=x; 
    left=nullptr;
    right=nullptr;
}

Node *createBinaryTREE(Node *root,int value ){
    if(root==nullptr){
        // Node * root=new Node(100);
        return new Node(value);
    }
    
    if(value>root->data){
        root->right = createBinaryTREE(root->right, value);
    }
    if(value<root->data){
        root->left=createBinaryTREE(root->left,value);
    }

    return root;

}

};

void inorder(Node *root){
    if(root==nullptr){
        return;
    }

    inorder(root->left);
    cout<<root->data<<"-->";
    inorder(root->right);

}

Node*getsuccessor(Node * root){
    root=root->right;
    while(root!=nullptr&&root->left!=nullptr){
    root=root->left;
    }

    return root;
}

Node * dele(Node * root,int value){

    if(root==nullptr){
        return root;
    }
    
    if(root->data>value){
       root->left= dele(root->left,value);
    }
    else if(root->data<value){
        root->right=dele(root->right,value);
    }
    else{
        if(root->left==NULL){
            Node*temp=root->left;
            delete root;
            return temp;
        }
        else if(root->right==NULL){
            Node* temp=root->right;
            delete root;
            return temp;
        }
        else{
            Node *succ=getsuccessor(root);
            root->data=succ->data;
            root->right=dele(root->right,value);
        }
    }
    return root;
}

int main(){
    Node b;
    Node *root=NULL;
    root=b.createBinaryTREE(root,100);
    b.createBinaryTREE(root,60);
    b.createBinaryTREE(root,90);
    b.createBinaryTREE(root,130);
    b.createBinaryTREE(root,180);
    b.createBinaryTREE(root,122);

    inorder(root);
    cout<<endl;
    Node *prasad=dele(root,122);
    inorder(prasad);
}