#include<iostream>
#include<bits/stdc++.h>
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

void inorder(Node *root,int count,map<int,int>&mp){
    if(root==nullptr){
        return;
    }

    inorder(root->left,count-1,mp);
    mp[count]+=root->data;
    // cout<<mp[count]<<" ";
    inorder(root->right,count+1,mp);

}

void sum(Node* root){
    map<int,int>mp;
    inorder(root,0,mp);
    // cout<<mp.size();
    for(auto i:mp){
        cout<<i.second<<" ";
    }

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

   sum(root);
    

}
    
