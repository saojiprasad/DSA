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


void print(Node *root,int level){
    if(root==nullptr){
        return;
    }

    if(level==1){
        cout<<root->data<<" ";
    }
    else if(level>1){
        print(root->left,level-1);
        print(root->right,level-1);
    }
}
void levelorder(Node *root){
    if(root==nullptr){
        return;
    }
    int k=height(root);
    for(int i=0;i<=k;i++){
        print(root,i);
    }
}

int main() {
    
    
    int nodes[13]={10,20,40,-1,-1,50,-1,-1,30,-1,70,-1,-1};
    BinaryTree* tree = new BinaryTree();
    Node* root = tree->buildtree(nodes, 13);
    levelorder(root);
    


    return 0;
}
