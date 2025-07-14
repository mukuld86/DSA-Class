// Insertion in the beginning of a Linked List

#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node{
	int data;
	struct Node* next;
};
struct Node* head;
void Insert_at_begin(int x){
	struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
	new_node->data=x;
	new_node->next=head;
	head=new_node;
}
void Print(){
	struct Node* temp=head;
	cout<<"\nList is: ";
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
int main(){
	head=NULL;
	cout<<"Enter how many numbers: ";
	int n,i,x;
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"Enter the number: ";
		cin>>x;
		Insert_at_begin(x);
	}
	Print();
	return 0;
}
