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


int levelorder(Node *root){
    if(root==nullptr) return 0;

    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node *curr=q.front();
        
        q.pop();
        cout<<curr->data<<endl;
        if(curr->left!=nullptr){
            q.push(curr->left);
        }
        if(curr->right!=nullptr){
             q.push(curr->right);
        }

    }


}



int main(){
    int nodes[14]={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    BinaryTree *tree=new BinaryTree();
    Node *root=tree->buildtree(nodes,14);
    // cout<<root->data<<"-->"<<endl;
    levelorder(root);

}