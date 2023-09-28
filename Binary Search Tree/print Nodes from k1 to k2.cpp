#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
	int data;
	node *left;
	node *right;
};

void Print(node *root,int k1,int k2){
    if(root==nullptr) return;
    
    if(root->data>=k1&&root->data<=k2){
        Print(root->left,k1,k2);
        cout<<root->data<<"--->";
        Print(root->right,k1,k2);
    }
        
    else if(root->data<k1){
        Print(root->right,k1,k2);
    }    
    else{
        Print(root->left,k1,k2);
    }
}

void inorder(node *root){
    if(root==nullptr){
        return;
    }
    inorder(root->left);
    cout<<root->data<<"-->";
    inorder(root->right);
}

node* newNode(int data)
{
	node *temp = new node();
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;
	
	return temp;
}
int main()
{
	node *root = new node();
	int k1 = 1, k2 = 8;
	
	
	root = newNode(20);
	root->left = newNode(8);
	root->right = newNode(22);
	root->left->left = newNode(4);
	root->left->right = newNode(12);
	inorder(root);
	cout<<endl;
	Print(root, k1, k2);
	return 0;
}


