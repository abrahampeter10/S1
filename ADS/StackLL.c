#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};
struct node *top=NULL;

void push(){
 
                    struct node *newnode = (struct node*)malloc(sizeof(struct node));
                    printf("Enter the element to be pushed : ");
                    scanf("%d", &newnode->data);
                    newnode->next=top;
                    top=newnode;
                    printf("Element %d pushed to stack\n",newnode->data);
                
}
void pop(){
    if(top==NULL){
        printf("STACK UNDERFLOW\n");
    }else{
        struct node *temp=top;
        top=top->next;
        free(temp);
    }
}
void display(struct node *top)
{
    if(top==NULL){
                 printf("STACK UNDERFLOW\n");
    }
                 else {
                    printf("Stack elements are : \n");
                        printf("%d\n", top->data);
                        display(top->next);
                    
}}
 void peek()
 {
     if(top==NULL){
					printf("STACK UNDERFLOW\n");
				 }else{
				printf("Topmost element is: %d \n", top->data);
				 }
 }
int main() {
	int choice,n,x;
	do{
		printf("1)PUSH\n");
		printf("2)DISPLAY\n");
		printf("3)PEEK\n");
		printf("4)POP\n");
		printf("Select any  : ");
		scanf("%d",&choice);
		switch(choice){
			case 1:

            push();   
				break;
			case 2:
			 display(top);
				break;
			 case 3:
			 peek();
			break;
			 case 4:
			 pop();
		 	break;
			default:
			printf("\nInvalid Operation! Try Again... \n");
		}
	}while(1);
	return 0;
}

 
