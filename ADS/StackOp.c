#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int stack[MAX];
int top=-1;
int max=100;

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
                    if(top==max-1){
                        printf("STACK OVERFLOW\n");
                } else {
                    printf("Enter the element to be pushed : ");
                    scanf("%d", &n);
                    top++;
                    stack[top]=n;
                    printf("Element %d pushed to stack\n",n);
                }
				break;
			case 2:
			 if(top==-1)
                 printf("STACK UNDERFLOW\n");
                 else {
                    printf("Stack elements are : \n");
                    for(int i=top;i>=0;i--){
                        printf("%d\n",stack[i]);
                    }
				break;
			 case 3:
				 if(top==-1){
					printf("STACK UNDERFLOW\n");
				 }else{
				printf("Topmost element is: %d \n", stack[top]);
				 }
			break;
			 case 4:
				if(top==-1){
				printf("STACK UNDERFLOW\n");

				} else {
					printf("Popped element is : %d\n",stack[top]);
					top--;
				}
		 	break;
				
			default:
			printf("\nInvalid Operation! Try Again... \n");
		}}
	}while(1);
	return 0;
}