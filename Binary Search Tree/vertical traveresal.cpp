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

void Vtraversal(Node *root){
    map<int,vector<int>>mp;
    queue<pair<Node*,int>> q;

    q.push({root,0});
    while(!q.empty()){
        auto p=q.front();
        Node *curr=p.first;
        int hd=p.second;
        q.pop();
        mp[hd].push_back(curr->data);

        if(curr->left!=nullptr) q.push({curr->left,hd-1});

        if(curr->right!=nullptr) q.push({curr->right,hd+1});
    }

    for(auto s:mp){
        vector<int>v=s.second;
        for(auto i:v){
            cout<<i<<"  ";
        }
        cout<<endl;
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

    Vtraversal(root);
}