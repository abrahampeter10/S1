#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node *front=NULL;
struct node *rear=NULL;


int main() {
	int choice,n,x;
	do{
		
		printf("1)Enqueue\n");
		printf("2)DISPLAY\n");
		printf("3)Dequeue\n");
		printf("Select any  : ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
            Enqueue();
            break;
            case 2:
                display();
            break;
            case 3:
            Dequeue();
                
            break;
            
              default:
		    	printf("Invalid Option !  Try Again..\n");
		}
	}while(1);
	return 0;
}

void Enqueue(){
      struct node *newnode;
    newnode = (struct node*) malloc(sizeof(struct node));
    printf("Value: ");
    scanf("%d", &newnode->data);

    if  (front == NULL) {
        front = rear = newnode;
        newnode->next = NULL;
        return;
    }
    rear->next = newnode;
    rear = newnode;
    newnode->next = NULL;
}

void display(){

printf("Queue elements are: \n");
                for(struct node* current=front;current!=NULL;current=current->next){
                    printf("%d \n",current->data);
            } 
}

void Dequeue(){
printf("Deleted element is: %d\n",front->data);
                front=front->next;
            
            
}

