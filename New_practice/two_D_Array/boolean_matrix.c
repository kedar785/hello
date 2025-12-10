#include<stdio.h>
int main(){
    int r,c;
    printf("Enter row and columns: ");
    scanf("%d %d",&r ,&c);
    int mat[r][c];
    int row[r], col[c];
    for(int i=0;i<r;i++)row[i]=0;
    for(int j=0;j<c;j++)col[j]=0;

    printf("Enter the matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        scanf("%d", &mat[i][j]);
        if(mat[i][j]==1){
            row[i]=1;
            col[j]=1;
        }
    }
}
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        if(row[i]==1 || col[j]==1){
            mat[i][j]=1;
        }
    }
}
printf("\n Final Mztrix:\n");
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("%d ",mat[i][j]);
    }
    printf("\n");
}
return 0;
}