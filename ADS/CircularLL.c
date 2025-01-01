#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *next;
    int data;
};

struct node *head=NULL, *current=NULL;
int size=0,n;

int insert();
void insertBeg();
void insertEnd();
void insertAnyPos();
void create();
void display();
int delete();
void deleteEnd();
void deleteBeg();
void deleteAnyPos();



void main(){
    while(1){
    int choice;
    printf("\nEnter your choice: ");
    printf("\n1:INSERT - - - 2: DELETE - - - 3: DISPLAY - - - 4: EXIT - - - 5: CREATE ");
    scanf("%d", &choice);
    switch(choice){
        case 1:
        insert();
        break;
        case 2:
        delete();
        break;
        case 3:
        display();
        break;
        case 4:
        return;
        case 5:
        create();
        break;
        default: 
        printf("\n Invalid Entry");
        break;
    }
    }
}

void create(){
    printf("\n Enter number of elements: ");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        struct node *newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the value to insert [%d]: ", i+1);
        scanf("%d", &newnode->data);
        newnode->next=head;
        if(head==NULL){
            head=newnode;
            current=newnode;
        }
        else{
            current->next=newnode;
            current=newnode;
        }
        size++;
    }
    display();
}

int insert()
{
    int choice;
    printf("\nWhere do you want to insert?\n1. At Beginning\n2. At End\n3. At a Position: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        insertBeg();
        break;
    case 2:
        insertEnd();
        break;
    case 3:
        insertAnyPos();
        break;
    default:
        printf("Enter a correct choice among the three!!!\n");
    }
    return 0;
}

void insertBeg(){

    struct node *newnode = (struct node*)malloc(sizeof(struct node));

    printf("\n Enter the data to insert: ");
    scanf("%d", &newnode->data);
    if(head==NULL){
    head=newnode;
    newnode->next=head;

    }else{
       current=head;
       while(current->next!=head){
        current=current->next;
       } 
        newnode->next=head;
        head=newnode;
       current->next=newnode;

    }
    size++;
    display();
}

void insertEnd(){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    printf("\n Enter the data to insert: ");
    scanf("%d", &newnode->data);
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
    }else{
    current=head;
    while(current->next!=head){
        current=current->next;
    }
    newnode->next=head;
    current->next=newnode;
    }
    size++;
        display();
}

void insertAnyPos(){
    int pos;
    printf("\n Enter the postion to insert: ");
    scanf("%d", &pos);
    if(pos<0 || pos>size-1){
        printf("\n Can't insert");
        return;
    }
    if(pos==1){
        insertBeg();
        return;
    }
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    printf("\n Enter the data to insert: ");
    scanf("%d", &newnode->data);
    current=head;
    for(int i=1;i<pos-1;i++){
        current=current->next;
    }
    newnode->next=current->next;
    current->next=newnode;
    size++;
        display();
}

void display(){
    if(head==NULL){
        printf("\n Nothing to display");
        return;
    }
    current=head;
    printf("Elements are: ");
    do{
        printf("%d-> ", current->data);
        current=current->next;
    }    while(current!=head);
    printf("NULL");
}


int delete(){
    int choice;
    printf("\nWhere do you want to delete?\n1. At Beginning\n2. At End\n3. At a Position: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        deleteBeg();
        break;
    case 2:
        deleteEnd();
        break;
     case 3:
         delAnyPos();
         break;
    default:
        printf("Enter a correct choice.\n");
    }
    return 0;
}

void deleteEnd(){
    if(head==NULL){
        printf("Nothin to delete");
    }
    else{
        struct node *deleteNode;
        current=head;
        while(current->next->next!=head){
            current=current->next;
        }
        deleteNode=current->next;
        current->next=head;
        free(deleteNode);
        
    }
    size--;
    display();
}


void deleteBeg(){
    struct node *temp;
    current=head;
    while(current->next!=head){
        current=current->next;
    }
    head=head->next;
    current->next=head;
    
    size--;
display();
}

void delAnyPos(){
    int pos;
    printf("Enter position to delete: ");
    scanf("%d", &pos);
    if(pos==1){
        deleteBeg();
    }
    else{
        current=head;
        struct node *delete;
        for(int i=1;i<pos-1;i++){
            current=current->next;
        }
        delete=current->next;
        current->next=current->next->next;
        free(delete);

    }
}
