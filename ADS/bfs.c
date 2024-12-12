#include<stdio.h>

#include<limit.h>

#define MAX=100;

int n;
int queue[MAX];
int front =-1, rear=-1;


void main(){
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    int V[n];
    for(int i=0;i<n;i++){
        V[i]=0;
    }

    int Adj[MAX][MAX];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("A[%d][%d]", i,j);
            scanf("%d", &Adj[i][j]);
        }
    }

    int source;
    printf("Enter the starting node: ");
    scanf("%d," &source);
    if(source<0 && source>n){
        printf("Invalid entry");
        return;
    }
    printf("BFS traversal: ");
    
}