#include<stdio.h>
#include<stdbool.h>
bool searchMtrix(int** matrix,int matrixSize,int* matrixColSize,int target){
    int rows=matrixSize;
    int cols=matrixColSize[0];
    int left=0;
    int right=rows*cols-1;
    while(left<=right){
        int mid=left+(right-left)/2;
int r=mid/cols;
int c=mid%cols;
int value=matrix[r][c];

if(value==target){
    return true;
}else if(value<target){
    left=mid+1;
}else{
    right=mid-1;
}

    }
    return false;
}
int main(){
    int n,m,target;
    printf("Enter rows and colums: ");
    scanf("%d %d",&m,&n);

    int arr[m][n];
    int* matrix[m];
    for(int i=0;i<m;i++){
        matrix[i]=arr[i];

    }
    printf("Enter matrix element (sorted as per problam ): \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter target: ");
    scanf("%d",&target);
    int colSize[1]={n};
    if(searchMtrix(matrix,m,colSize,target))
    printf("found\n");
else
printf("not found\n");
return 0;
}