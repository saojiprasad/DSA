#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node() {
        data = 0;
        left = nullptr;
        right = nullptr;
    }
    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};

class BinaryTree {
public:
    int idx = -1;

    Node* buildtree(int nodes[], int size) {
        idx++;
        if (idx == size || nodes[idx] == -1) {
            return NULL;
        }

        Node* newNode = new Node(nodes[idx]);
        newNode->left = buildtree(nodes, size);
        newNode->right = buildtree(nodes, size);
        return newNode;
    }
};

int height(Node *root){
    if(root==nullptr){
        return 0;
    }
    
        return max(height(root->left),height(root->right))+1;
    
}


void findk(Node *root,int n,int k){
    if(n==k){
        return;
    }

    while(n!=k-1){
        cout<<root->data<<" ";
        
        findk(root->left,n+1,k);
        findk(root->right,n+1,k);
    }


    
}

int main() {
    //int k=2;
    
    int nodes[13]={10,20,40,-1,-1,50,-1,-1,30,-1,70,-1,-1};
    BinaryTree* tree = new BinaryTree();
    Node* root = tree->buildtree(nodes, 13);
    int k=height(root);
    cout<<k;
    // findk(root,0,k);

    return 0;
}
