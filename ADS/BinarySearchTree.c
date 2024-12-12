#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *right;
    struct node *left;
};

struct node *root = NULL;
int display();
void insertion();
void deletion();

void main(){
    while(1){
        int choice;
        printf("Enter:\n 0 for Display\n 1 for insertion \n 2. Deletion");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0: display();
            break;
        case 1: insertion();
        break;
        case 2: deletion();
        break;
        default: printf("Enter a valid choice");
            break;
        }
        
    }
}


struct node *insert(struct node *root, struct node *newnode){
    if(root == NULL)
    root = newnode;
    else if(root->data>newnode->data){
        root->left=insert(root->left,newnode);
    }
    else{
        root->right=insert(root->right, newnode);
    }
    return root;
}

void insertion(){
    struct node *newnode;
    newnode=(struct node *) malloc(sizeof(struct node));
    printf("Enter the element to insert: ");
    scanf("%d", &newnode->data);
    newnode->left=newnode->right=NULL;
    root=insert(root, newnode);
}
struct node *findMin(struct node *root){
    while(root->left!=NULL){
        root=root->left;
    }
    return root;
}


struct node *delete(struct node *root, int value){

    if(root==NULL){
        printf("Not found");
        return root;
    }

    struct node *temp;
    if(value<root->data){
        root->left=delete(root->left,value);

    }else if(value>root->data){
        root->right=delete(root->right, value);
    }
    else {
        // Single child
        if(root->left==NULL){
            temp=root->right;
            free(root);
            return temp;
        }else if(root->right==NULL){
            temp=root->left;
            free(root);
            return temp;
        }

        root->data=findMin(root->right)->data;
        root->right=delete(root->right,root->data);
    }
    return root;

}



void deletion(){
    int value;
    printf("Enter the value to delete: ");
    scanf("%d",&value);
    root=delete(root,value);
    }


void preOrder(struct node *root){
    if(root==NULL){
            return;
}

            printf("%d -> ", root->data);
            preOrder(root->left);
            preOrder(root->right);
        
    }

void inOrder(struct node *root){
    if(root==NULL){
    return;
    }
    
            inOrder(root->left);
            printf("%d -> ", root->data);
            inOrder(root->right);
        
    }


void postOrder(struct node *root){
    if(root==NULL){
            return;

    }
            
            postOrder(root->left);
            postOrder(root->right);
            printf("%d -> ", root->data);
        
    
}

/// 

int display(){
    if(root==NULL){
        printf("NO elements");
         return 1;
    }
   
    printf("\nPre Order Traversal: ");
    preOrder(root);
printf("\nIn Order Traversal: ");
    inOrder(root);
    printf("\n Post Order Traversal: ");
    postOrder(root);
    return 0;
}

