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
void delAnyPos();

void main(){
    while(1){
    int choice;
    printf("\nEnter your choice: ");
    printf("\n1:INSERT - - - 2: DELETE - - - 3: DISPLAY - - - 4: EXIT - - - 5: CREATE -- 6:REVERSE - - - 7: SEARCH - - - 8: SORT ");
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
        case 6:
        reverse(head);
        break;
        case 7:
        searchElement();
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
        newnode->next=NULL;
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

    newnode->next=head;
    head=newnode;
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
    while(current->next!=NULL){
        current=current->next;
    }
    current->next=newnode;
    current=newnode;
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
    printf("Elements are: ");
    for(current=head;current!=NULL;current=current->next){
        printf("%d->", current->data);
    }
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
        return;
    }
    else{
        struct node *deleteNode=NULL;
        current=head;
        while(current->next->next!=NULL){
            current=current->next;
        }
        free(current->next);
        current->next=NULL;
    }
    size--;
    display();
}

void deleteBeg(){
    struct node *temp;
    temp=head;
    head=head->next;
    free(temp);
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


void reverse(struct node *head){
    if(head==NULL)
    return;
    reverse(head->next);
    printf("%d ", head->data);
}
int search(int key){
    int count=0;
    if(head==NULL)
    printf("NO nodes to search");
else{

    current=head;
    while(current->next!=NULL){
        if(current->data==key){
        count++;
        }
        current=current->next;
    }
    if(count==1)
    return 1;
    else
    return 0;
}
}

void searchElement(){
    int key;
    printf("Enter value to search: ");
    scanf("%d", &key);
    if(search(key)==1)
    printf("Element found");
    else
    printf("Element not found");
}
void sort(){
    if(head==NULL){
        printf("Nothing to print");
    }else{
        current=head;
        while(current!=NULL){

        struct node *index=current->next;

        while(index!=NULL){
            if(index->data<current->data){
                int temp=index->data;
                index->data=current->data;
                current->data=temp;
            }
            index=index->next;
        }
        current=current->next;
        }
    }
    display();
}
