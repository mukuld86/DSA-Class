#include<stdio.h>
#include<stdlib.h>
#define MAX 50
void insert();
void display();
void queue_delete();
int queue_array[MAX];
int rear=-1;
int front=-1;

int main(){
    int choice;
    while(1){
        printf("\n1. Insert element to the queue\n");
        printf("2. Delete element from queue\n");
        printf("3. Display all elements of the queue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                insert();
                break;
            case 2:
                queue_delete();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Wrong Choice!\n");
                break;
        }
    }
    return 0;
}

void insert(){
    int add_item;
    if(rear==MAX-1){
        printf("Queue Overflow!\n");
        return;
    }
    if(front==-1)
        front=0;
    printf("Insert the element in queue: ");
    scanf("%d",&add_item);
    rear=rear+1;
    queue_array[rear]=add_item;
    
}
void queue_delete(){
    if(front==-1 || front>rear){
        printf("Queue UNDERFLOW!\n");
        return;
    }    
    printf("Element deleted from Queue is: %d\n",queue_array[front]);
    front++;
    
}
void display(){
    if(front==-1 || front>rear){
        printf("Queue is Empty!\n");
        return;
    }
    printf("Queue is : ");
    for(int i=front;i<=rear;i++){
        printf("%d ",queue_array[i]);
    }
    printf("\n");
    
}
