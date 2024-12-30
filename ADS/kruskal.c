#include<stdio.h>

#define size 50

int parent[50], Adj[50][50];
int n;

int find(int vertex){
    if(parent[vertex]!=vertex)
    parent[vertex]=find(parent[vertex]);
    return parent[vertex];
}

void Union(int u, int v){
    int rootU=find(u);
    int tootV=find(v);
    parent[tootV]=rootU;
}

void kruskal(){
    int e=0, cost=0;

    for(int i=0;i<n;i++){
        parent[i]=i;
    }

    while(e<n-1){
        int u,v,min=__INT_MAX__;
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(Adj[i][j]<min){
                min=Adj[i][j];
                u=i;
                v=j;
            }
        }
    }

    if(find(u)!=find(v)){
        printf("\nMST of {%d,%d} is:  %d ",u,v,min);
        cost+=min;
        Union(u,v);
        e++;
    }
    Adj[u][v]=Adj[v][u]=__INT_MAX__;
 }
 printf("\n Total Cost is %d ", cost);
}
void main(){
      printf("\nEnter the number of vertices in the graph: ");
    scanf("%d", &n);

    printf("Enter the adjacency matrix (weight):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &Adj[i][j]);
            if(Adj[i][j]==0)
            Adj[i][j]=__INT_MAX__;
        }
    }
    kruskal();
}
