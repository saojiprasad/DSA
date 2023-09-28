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

void view(Node *root){
    if(root==nullptr){
        return;
    }

    stack<Node*>s;
    s.push(root);
    while(!s.empty()){
        Node* curr=s.top();
        cout<<curr->data<<" ";

        if(curr->left!=nullptr){
            s.pop();
            s.push(curr->left);
        }
        else if(curr->right!=nullptr){
            s.pop();
            s.push(curr->right);
        }
        else{
            return;
        }


    }


}


int main(){
    int nodes[15]={1,2,3,-1, 4, 4, -1, -1, 5 ,6 ,-1, -1, -1, -1, -1};
    BinaryTree *tree=new BinaryTree();
    Node *root=tree->buildtree(nodes,15);
    view(root);
}