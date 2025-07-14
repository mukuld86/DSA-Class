// write a program to perform the traversing in the singly linked list
#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
	int data;			
	struct node* next;
};
struct node *head;
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
void display_forward(struct node *newnode){
	int pos=1;
	struct node *temp=head;
	while(newnode!=NULL){
		cout<<"At Node "<<pos<<": "<<newnode->data<<endl;
		newnode=newnode->next;
		pos++;
	}
	cout<<"All elements displayed by forward traversing!\n";
}
int main(){
	struct node *head=NULL;
	int n;
	cout<<"Enter the number of elements you want to insert: ";
	cin>>n;
	for(int i=0;i<n;i++){
		int element;
		cout<<"Enter element: ";
		cin>>element;
		addLast(&head,element);
	}
	display_forward(head);
	return 0;
}
