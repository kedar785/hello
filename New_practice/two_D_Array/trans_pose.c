//transpose:- matrix ke row ko colum me and colum ko row me badal deta hai.
#include<stdio.h>
int main(){
    int A[10][10],T[10][10];
    int r,c;
    printf("Enter number of row: ");
    scanf("%d",&r);
     printf("Enter number of colum: ");
    scanf("%d",&c);
    printf("Enter element of matrix: ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
         
            scanf("%d",&A[i][j]);
        }
    }
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            T[j][i]= A[i][j];
        }
    }
    printf("\nTranspose of matrix: \n");
     for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d \t",T[i][j]);
        }
        printf("\n");
    }
    return 0;
}