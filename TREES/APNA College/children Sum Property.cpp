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
    Node(int x)
    {
        data=x;
        left=nullptr;
        right=nullptr;
    }
};

class BinaryTree{
    public:
    int idx=-1;
    
    
    Node *buildtree(int nodes[],int size){
        idx++;
        if(idx==size||nodes[idx]==-1) {
            return NULL;
        }

        Node *newNode=new Node(nodes[idx]);
        newNode->left=buildtree(nodes,size);
        newNode->right=buildtree(nodes,size);
        return newNode;
    }
    

};

// bool childsum(Node *root){
//     // if(root==nullptr){
//     //     return;
//     // }
//     queue<Node*>q;
//     q.push(root);
//     while(!q.empty()){

//         Node* curr=q.front();

//         q.pop();
//         if((curr->left!=nullptr&&curr->data!=curr->right->data+curr->left->data)||
//         (curr->left==nullptr&&curr->right!=nullptr)||
//         (curr->left!=nullptr && curr->right==nullptr)){
//             return false;
//         }
//         q.push(curr->left);
//         q.push(curr->right);

       
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

int main(){
    int nodes[11]={3,1,-1,-1,2,1,-1,-1,1,-1,-1};
    BinaryTree *tree=new BinaryTree();
    Node *root=tree->buildtree(nodes,11);
    cout<<childsum(root);
    
}