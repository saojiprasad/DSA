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


// void linetraversal(Node *root){
//     if(root==nullptr) return;

//     queue<Node*> q;
//     q.push(root);
//     q.push(nullptr);

//     while(q.size()>1){
//         Node *curr=q.front();
//         q.pop();
//         if(curr==nullptr){
//             cout<<"\n";
//             q.push(nullptr);
//             // continue;
//         }
//         else{
//         cout<<curr->data<<" ";
//         if(curr->left!=nullptr)
//         q.push(curr->left);

//         if(curr->right!=nullptr)
//         q.push(curr->right);
//     }
//     }
// }

int sizeoftree(Node *root){
    if(root==nullptr) return 0;
    stack<Node*>s;
    int count=0;
    // int arr[]={0};
    while(root!=nullptr|| !s.empty() ){
        if(root!=nullptr)
        {
            s.push(root);
            count++;
            root=root->left;
        }
        else{
            root=s.top();
            

            s.pop();
            root=root->right;
            
            // cout<<count<<"  ";
        }
    }
    return count;

}


int main(){
    int nodes[14]={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    BinaryTree *tree=new BinaryTree();
    Node *root=tree->buildtree(nodes,14);
    // cout<<root->data<<"-->"<<endl;
    // linetraversal(root);
    int a=sizeoftree(root);
    cout<<a<<endl;

}