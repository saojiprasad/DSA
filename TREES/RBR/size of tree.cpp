#include<iostream>
using namespace std;

struct Tree{
    int data;
    Tree *left;
    Tree *right;

    Tree(int x){
        data=x;
        left=nullptr;
        right=nullptr;
    }
};

int sizee(Tree *tree){
    return tree? (1+sizee(tree->left)+sizee(tree->right)):0;
}

int main(){
    Tree *first= new Tree(5);
    Tree *second=new Tree(40);
    Tree *third=new Tree(50);

    first->left=second;
    first->right=third;

    cout<<sizee(first)<<endl;

}