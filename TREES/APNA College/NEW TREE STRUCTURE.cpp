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

// bool childsum(Node* root) {
//     if (root == nullptr) {
//         return true;
//     }

//     queue<Node*> q;
//     q.push(root);

//     while (!q.empty()) {
//         Node* curr = q.front();
//         q.pop();

//         int leftData = (curr->left) ? curr->left->data : 0;
//         int rightData = (curr->right) ? curr->right->data : 0;

//         if (curr->data != leftData + rightData) {
//             return false;
//         }

//         if (curr->left) {
//             q.push(curr->left);
//         }
//         if (curr->right) {
//             q.push(curr->right);
//         }
//     }

//     return true;
// }

bool childsum(Node *root)
{
    if(root==nullptr){
        return true;
    }
    if(root->left==nullptr&& root->right==nullptr){
        return true;
    }
    int sum=0;
    if(root->left!=nullptr){
        sum+=root->left->data;
    }
    if(root->right!=nullptr){
        sum+=root->right->data;
    }

    return ((root->data==sum)&&childsum(root->left)&&childsum(root->right));
}


void preorder(Node* root){
    if(root==nullptr) return;
    cout<<root->data<<"  ";
    preorder(root->left);
    preorder(root->right);
}


int main(){
    Node *first= new Node(3);
    Node *second=new Node(1);
    Node *third=new Node(2);
    Node *fourth=new Node(1);
    Node *five=new Node(1);
    first->left=second;
    first->right=third;
    third->left=fourth;
    third->right=five;
    preorder(first);
    cout<<childsum(first);
}