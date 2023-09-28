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

Node * selfbalanceingTree(int arr[],int s,int e){
    
    if(s==e){
        return nullptr;
    }
    

    Node* curr=nullptr;
    int m=(s+e)/2;
    curr=new Node(arr[m]);

    curr->left=selfbalanceingTree(arr,s,m);
    curr->right=selfbalanceingTree(arr,m+1,e);
    
    return curr;
}




int main(){
    int arr[7]={7,10,11,15,30,35,40};
    int n=7;
    int s=0,e=n-1;
    Node * prasad=selfbalanceingTree(arr,s,e);
    inorder(prasad);
}