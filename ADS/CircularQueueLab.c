#include<stdio.h>

#define size 50

int front=-1;
int rear=-1;

int queue[size];

void enqueue();
void dequeue();
void display();

void main() {
	while (1) {
		int choice;
		printf("Enter 0 to display, 1 to enqueue, 2 to dequeue, 5 to exit: ");
		scanf("%d", &choice);
		switch(choice) {
			case 0:
				display();
				break;
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 5:
				return;
			default:
				break;
		}
	}
}

void enqueue(){
    if((rear+1)%size==front){
        printf("Queue is full");
    }

    int item;
    printf("Enter the value to insert: ");
    scanf("%d", &item);

    if(front==-1 && rear==-1){
        front=0;
        }
    
    rear=(rear+1)%size;
    queue[rear]=item;
    
}

void dequeue(){
    if(front==-1){
        printf("Underflow");
    }
    if(front==rear){
        front=rear=-1;
    }else{
    printf("Deleted element is: %d", queue[front]);
        front=(front+1)%size;
    }   

}

void display(){
    if(front==-1 && rear==-1){
        printf("\nQueue is empty");
    }else{
        for(int i=front;i<=rear;i=(i+1)%size)
        printf("%d\t", queue[i]);

       
    }
}