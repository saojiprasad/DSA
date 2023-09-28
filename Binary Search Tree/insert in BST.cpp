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

Node *insert(Node* root,int value){
    if(root==nullptr){
        return new Node(value);
    }
    if(root->data>value){
        root->left=insert(root->left,value);
    }
    else{
        root->right=insert(root->right,value);
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
    // cout<<search(root,180);
    Node* prasad=insert(root,123);
    inorder(prasad);
}