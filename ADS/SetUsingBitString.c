#include<stdio.h>

int present(int arr[],int size,int value);

void main(){

    int n,element,n1,n2;;
    
    printf("Enter the size of Universal set: ");
    scanf("%d", &n);
    int U[n];
    printf("\nEnter the array elements: ");
    for(int i=0;i<n;i++){
        printf("Element %d : ", i+1 );
        scanf("%d", &U[i]);
        if(present(U,i,U[i])){
            printf("Element already exist");
        
        i--;
        continue;
        }
    }

    
    printf("\nEnter the number of elements of set1: ");
    scanf("%d", &n1);
        int set1[n1];
    if(n1>n){
        printf("Invalid value");
        }
        else{
        
        printf("\nEnter the array elements: ");
        for(int i=0;i<n1;i++){
            printf("\nEnter the set element %d: ", i+1);
            scanf("%d", &element);
            if(!present(set1,i,element) && present(U,n,U[i])){
                set1[i]=element;
            }else{
                printf("Element can't be stored: ");
                i--;
            }

        }
    }
    printf("\nEnter the number of elements of set2: ");
    scanf("%d", &n2);
    int set2[n2];
    if(n2>n){
        printf("Invalid value");}
        else{
        printf("\nEnter the array elements: ");
        for(int i=0;i<n2;i++){
            printf("Enter the set element %d: ", i+1);
            scanf("%d", &element);
            if(!present(set2,i,element) && present(U,n,U[i])){
                set2[i]=element;
            }else{
                printf("Element can't be stored");
                i--;
            }

        }
    }


    int s1[n], s2[n];
    for(int i=0;i<n;i++){
        s1[i]=0;s2[i]=0;

        for(int j=0;j<n1;j++){
            if(U[i]==set1[j]){
                s1[i]=1;
                break;
            }
        }
//breaking is imp, otherwise set2 wont work, also i will not increase
        for(int j=0;j<n2;j++){
            if(U[i]==set2[j]){
                s2[i]=1;
                break;
            }
        }
    }

   int setunion[n];
for(int i=0;i<n;i++){
    if(s1[i] == 1 || s2[i] == 1){
        setunion[i] = 1;
    } else {
        setunion[i] = 0;
    }
}


    int intersection[n];
    for(int i=0;i<n;i++){
    if(s1[i] ==1  &&  s2[i] == 1){
        intersection[i]=1;

    }else{
        intersection[i]=0;
    }
    }

    

    printf("\nUniversal set elements: ");
    for(int i=0;i<n;i++){
        printf("%d\t", U[i]);
    }

    printf("\nSet 1 elements: ");
    for(int i=0;i<n1;i++){
        printf("%d\t", set1[i]);
    }    

     printf("\nSet 2 elements: ");
    for(int i=0;i<n2;i++){
        printf("%d\t", set2[i]);
    }
 
     printf("\nSet 1 elements after bitstring: ");
    for(int i=0;i<n;i++){
        printf("%d\t", s1[i]);
    }

      printf("\nSet 2 elements after bitstring: ");
    for(int i=0;i<n;i++){
        printf("%d\t", s2[i]);
    }

    printf("\nS1 union S2: ");
    for(int i=0;i<n;i++){
        printf("%d\t", setunion[i]);
    }


    printf("\nS1 intersection S2: ");
    for(int i=0;i<n;i++){
        printf("%d\t", intersection[i]);
    }
}



int present(int arr[],int size,int value){
    for(int i=0;i<size;i++){
        if(arr[i]==value)
        return 1;

    }

    return 0;
}

