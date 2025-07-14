// Tree traversal
#include<bits/stdc++.h>
using namespace std;
struct node{
	int element;
	struct node* left;
	struct node* right;
};
struct node* createNode(int val){
	struct node* Node=(struct node*)malloc(sizeof(struct node));
	Node->element=val;
	Node->left=NULL;
	Node->right=NULL;
	return Node;
}
void traversePreorder(struct node* root){
    if(root==NULL)
        return;
    cout<<root->element<<" ";
    traversePreorder(root->left);
    traversePreorder(root->right);
}
void traverseInorder(struct node* root){
    if(root==NULL)
        return;
    traverseInorder(root->left);
	cout<<root->element<<" ";
    traverseInorder(root->right);
}
void traversePostorder(struct node* root){
    if(root==NULL)
        return;
    traversePostorder(root->left);
    traversePostorder(root->right);
    cout<<root->element<<" ";
}
int main(){
    struct node* root=createNode(36);
    root->left=createNode(26);
    root->right=createNode(46);
    root->left->left=createNode(21);
    root->left->right=createNode(31);
    root->left->left->left=createNode(11);
    root->left->left->right=createNode(24);
    root->right->left=createNode(41);
    root->right->right=createNode(56);
    root->right->right->left=createNode(51);
    root->right->right->right=createNode(66);
    
    cout<<"Preorder traversal: ";
    traversePreorder(root);
    cout<<"\n\nInorder traversal: ";
    traverseInorder(root);
    cout<<"\n\nPostorder traversal: ";
    traversePostorder(root);
	return 0;
}
