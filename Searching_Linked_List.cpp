// write a program to search an element in the linked list
#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int data;			// data part
	struct node* next;	// address to the next node
};
struct node* head;
void addLast(struct node **head, int val){
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=val;
	newnode->next=NULL;
	
	if(*head==NULL){
		*head=newnode;
	}
	else{
		struct node *lastnode= *head;
		
		while(lastnode->next!=NULL){
			lastnode = lastnode->next;
		}
		lastnode->next = newnode;
	}
}
void display(struct node *newnode){
	int pos=1;
	struct node *temp=head;
	while(newnode!=NULL){
		cout<<newnode->data<<" is at position: "<<pos<<endl;
		newnode=newnode->next;
		pos++;
	}
	cout<<"NULL\n";
}
void search(struct node *newnode, int item){
	struct node *temp=head;
	while(newnode!=NULL){
		if(item==newnode->data){
			cout<<"Found!\n";
			return;
		}
		newnode=newnode->next;
	}
	cout<<"Not found!\n";
}

int main(){
	struct node *head=NULL;
	addLast(&head,10);
	addLast(&head,20);
	addLast(&head,30);
	display(head);
	int element;
	cout<<"Enter element to search: ";
	cin>>element;
	search(head,element);
	return 0;
}
