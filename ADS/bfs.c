#include <stdio.h>


int queue[10], visited[10],n, adj[10][10], start;
int front=-1, rear=-1;

void enqueue(int value);
int dequeue();
void bfs(int start);

int main(){
    printf("Enter the number of nodes: ");
    scanf("%d", &n);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             

    printf("Enter the Adjacency matrix elements: ");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("\n Adj[%d][%d]: ", i,j);
            scanf("%d",&adj[i][j]);
        }
    }
      for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }
    printf("Enter the element to start with: ");
    scanf("%d",&start);
    printf("BFS elements: ");
    bfs(start);
    return 0;
}
    void bfs(int start){
        enqueue(start);
        visited[start]=1;
        printf("\t%d", start);
        while(front<=rear){
            int node=dequeue();
            for(int i=0;i<n;i++){
            if(adj[node][i]==1 && visited[i]!=1){
                visited[i]=1;
               
                printf("%d", i);
                 enqueue(i);
                
                
            }
            }
        }
    }

void enqueue(int value){

    if(front==-1 && rear==-1){
        front=0;
        rear=0;
    } else{
        rear++;
    }
        queue[rear]=value;
        
    
}

int dequeue() {

    int node = queue[front];
    front++;
    return node;
}
