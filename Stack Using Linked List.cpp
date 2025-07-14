#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct stack{
	int data;
	struct stack *next;
};
struct stack *top=NULL;
struct stack *push(struct stack*,int);
struct stack *display(struct stack*);
struct stack *pop(struct stack*);
int peek(struct stack*);

int main(){
	int val,option;
	do{
		printf("\nMAIN MENU");
		printf("\n1. PUSH");
		printf("\n2. POP");
		printf("\n3. PEEK");
		printf("\n4. DISPLAY");
		printf("\n5. EXIT");
		printf("\nEnter your Option: ");
		scanf("%d",&option);
		switch(option){
			case 1:
				printf("\nEnter the number to be pushed on Stack: ");
				scanf("%d",&val);
				top=push(top,val);
				break;
			case 2:
				top=pop(top);
				break;
			case 3:
				val=peek(top);
				if(val!=-1){
					printf("\nThe value at the top of stack is: %d",val);
				}
				else{
					printf("\nSTACK IS EMPTY");
				}
				break;
			case 4:
				top=display(top);
				break;
			default:
				printf("Please Select a Valid Option!\n");
				break;
		}
	}while(option!=5);	
	return 0;
}

struct stack *display(struct stack *top){
	struct stack *ptr;
	ptr=top;
	if(ptr==NULL){
		printf("\STACK IS EMPTY");
	}
	else{
		while(ptr!=NULL){
			printf("\n%d",ptr->data);
			ptr=ptr->next;
		}
	}
	return top;
}

struct stack *push(struct stack *top,int val){
	struct stack *ptr;
	ptr=(struct stack*)malloc(sizeof(struct stack));
	ptr->data=val;
	if(top==NULL){
		ptr->next=NULL;
		top=ptr;
	}
	else{
		ptr->next=top;
		top=ptr;
	}
	return top;
}

struct stack *pop(struct stack *top){
	struct stack *ptr;
	ptr=top;
	if(top==NULL)
		printf("\nSTACK UNDERFLOW");
	else{
		top=top->next;
		printf("\nThe value being deleted is: %d",ptr->data);
	}
	return top;	
}

int peek(struct stack *top){
	if(top==NULL){
		return -1;
	}
	else{
		return top->data;
	}
}
