#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
  int data;
  struct node* right_child;
  struct node* left_child;
};

struct node* new_node(int x){
    struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->left_child=NULL;
    temp->right_child=NULL;
    return temp;
}
struct node* search(struct node* root, int x){
    if(root==NULL || root->data==x)
        return root;
    else if(x>root->data)
        return search(root -> right_child, x);
    else
        return search(root -> left_child, x);
}
struct node* insert(struct node* root, int x){
    if(root==NULL)
        return new_node(x);
    else if(x>root->data)
        root->right_child=insert(root->right_child, x);
    else
        root->left_child=insert(root->left_child, x);
    return root;
}
struct node* find_minimum(struct node* root){
    if(root==NULL)
        return NULL;
    else if(root->left_child!=NULL)
//  node with minimum value will have no left child
        return find_minimum(root->left_child);
//  left most         
    return root;
}
void inorder(struct node* root){
    if(root!=NULL){
        inorder(root->left_child);
        cout<<root->data<<" ";
        inorder(root->right_child);
    }
}
struct node* Delete(struct node* root, int x){
    if(root==NULL)
        return NULL;
    if(x>root->data)
        root->right_child=Delete(root->right_child, x);
    else if(x< root->data)
        root->left_child=Delete(root->left_child, x);
    else{
        // No child node
        if(root->left_child == NULL && root->right_child==NULL){
            free(root);
            return NULL;
        }
        // one child node
        else if(root->left_child==NULL || root->right_child==NULL){
            struct node* temp;
            if(root->left_child==NULL)
                temp=root->right_child;
            else
                temp=root->left_child;
            free(root);
            return temp;
        }
        // Two children
        else{
            struct node* temp=find_minimum(root->right_child);
            root->data=temp->data;
            root->right_child=Delete(root->right_child, temp->data);
        }
    }
    return root;
}
int main(){
    struct node* root;
    root=new_node(20);
    insert(root,5);
    insert(root,1);
    insert(root,15);
    insert(root,9);
    insert(root,7);
    insert(root,12);
    insert(root,30);
    insert(root,25);
    insert(root,40);
    insert(root,45);
    insert(root,42);
    
    inorder(root);
    cout<<endl;
    
    root=Delete(root,1);
    root=Delete(root,40);
    root=Delete(root,45);
    root=Delete(root,9);
    
    inorder(root);
    cout<<endl;
    
    return 0;
    
    
    
    return 0;
}
