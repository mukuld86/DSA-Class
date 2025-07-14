#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node* next;
	struct Node* prev;
};
void reversePrint(struct Node** head_ref){
	struct Node* tail = *head_ref;
	while(tail->next != NULL){
		tail=tail->next;
	}
	while(tail!=*head_ref){
		cout<<tail->data<<" ";
		tail=tail->prev;
	}
	cout<<tail->data<<endl;
}
void push(struct Node** head_ref, int new_data){
	struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
	
	new_node->data=new_data;
	new_node->prev=NULL;
	new_node->next=(*head_ref);
	
	if((*head_ref)!=NULL){
		(*head_ref)->prev=new_node;
	}
	(*head_ref)=new_node;
}

int main(){
	struct Node* head=NULL;
	push(&head,2);
	push(&head,4);
	push(&head,6);
	push(&head,8);
	push(&head,10);
	cout<<"Linked List elements in reverse order: ";
	reversePrint(&head);
	
	return 0;
}
