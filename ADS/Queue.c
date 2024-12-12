#include <stdio.h>
#include <stdlib.h>
#define MAX 25

int queue[MAX];
int front=-1;
int rear=-1;

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
            
            if(rear==MAX-1){
                printf("Queue is full\n");
            }else{
                printf("Enter the element to be inserted: ");
            scanf("%d",&x);
            rear++;
            queue[rear]=x;
            }
            break;
            case 2:
            if(rear==-1)
            {
                printf("Queue is empty");
            }else{
                printf("Queue elements are: \n");
                for(int i=front+1;i<=rear;i++){
                    printf("%d \n",queue[i]);
                }
                
            } 
            break;
            case 3:
            if(front==rear==-1){
                printf("Queue is empty");
            }else {
                printf("Deleted element is: %d\n",queue[front+1]);
                front++;
            }
            
            break;
            
              default:
		    	printf("Invalid Option !  Try Again..\n");
		}
	}while(1);
	return 0;
}

