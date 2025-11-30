#include<stdio.h>
int main(){
    int r1,c1,r2,c2;
    printf("Enter row and colums of first matrix: ");
    scanf("%d %d",&r1,&c1);
    printf("Enter row and colum of second matrox: ");
    scanf("%d %d",&r2,&c2);
    if(r1 !=r2){
        printf("matrix multiplication not possible!\n");
        return 0;
    }
    int A[r1][c1],B[r2][c2],C[r1][r2];
    printf("\nEnter element first matrix: \n");
    for(int i=0;i<r1;i++){
      for(int j=0;j<c1;j++)
      scanf("%d",&A[i][j]);
    }
    printf("\nEnter element second matrix: \n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++)
         scanf("%d",&B[i][j]);
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++)
        C[i][j]=0;
    }
    for(int i=0;i<r1;i++){
    for(int j=0;j<c2;j++){
     for(int k=0;k<c1;k++ ){
      C[i][j] +=A[i][k] * B[k][j];
     }
    }
}
printf("\nResult (A*B):\n");
for(int i=0;i<r1;i++){
for(int j=0;j<c2;j++)
printf("%d ",C[i][j]);
printf("\n");
}
return 0;
}