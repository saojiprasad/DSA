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

void inorder(Node *root,int arr[],int &i){
    if(root==nullptr){
        return;
    }

    inorder(root->left,arr,i);
    arr[i]=root->data;
    i++;
    inorder(root->right,arr,i);

}

bool issumpair(int arr[],int i,int sum){
    // int i=i;
    int l=0;
    while(l<i){
        if(arr[l]+arr[i]==sum){
            return true;
        }
        else if(arr[l]+arr[i]>sum){
            i--;
            // l++;
        }
        else{
            l++;
        }
    }
    return false;
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
    int arr[100];
    int i=0;
    inorder(root,arr,i);
    // for(int l=0;l<i;l++){
    // cout<<arr[l]<<" "<<endl;
    
    cout<<issumpair(arr,i,220);
    

}
    
