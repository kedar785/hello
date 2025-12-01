#include<stdio.h>
int main(){
    int m,n;
    printf("Enter the row and column: ");
    scanf("%d %d",&m,&n);
    int arr[m][n];
    int row[m],col[n];
    for(int i=0;i<m;i++)row[i]=0;
    for(int j=0;j<n;j++)col[j]=0;
    printf("Enter the matrix: \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
            if(arr[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(row[i]==1 || col[j]==1){
                arr[i][j]=0;
            }
        }
    }
    printf("\nOutput Matrix: \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
          printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}