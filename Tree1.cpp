// Creating tree and finding the size of the tree
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
};
node* newNode(int data){
    node* Node=new node();
    Node->data=data;
    Node->left=NULL;
    Node->right=NULL;
    return (Node);
}
int size(node* Node){
    if(Node==NULL){
        return 0;
    }
    else
    	return (size(Node->left) + 1 + size(Node->right));
}
int main(){
    node* root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    root->right->left=newNode(6);
    root->right->right=newNode(7);
    cout<<"Size of the tree is "<<size(root)<<endl;
    
    return 0;
}
