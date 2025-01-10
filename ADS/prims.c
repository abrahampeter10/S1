#include<stdio.h>

int n, adj[10][10], visited[10];

int main(){
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    printf("Enter the adjacency matrix:  ");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("\nA[%d][%d]", i,j);
            scanf("%d",&adj[i][j]);
            if(adj[i][j]==0)
            adj[i][j]=__INT_MAX__;
        }
    }
  int e=0,cost=0;
  visited[0]=1;
  while(e<n-1){
    int u,v,min=__INT_MAX__;
    for(int i=0;i<n;i++){
        if(visited[i]==1){
            for(int j=0;j<n;j++){
                if(adj[i][j]<min && visited[j]!=1){
                    min=adj[i][j];
                    u=i;
                    v=j;
                }
            }
        }
    }
    visited[v]=1;
    printf("%d", min);
    cost=cost+min;
    e++;
  }
  printf("MST is: %d", cost);
}
