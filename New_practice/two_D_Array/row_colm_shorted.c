#include<stdio.h>
int searchMatrix(int matrix[][4],int row,int cols,int target){
    int i=0;
    int j=cols-1;
    while(i<row && j>=0){
        if(matrix[i][j]==target){
            return 1;

        }else if(matrix[i][j]>target){
            j--;
        }else{
            i++;
        }
    }
    return 0;
}
int main(){
    int matrix[4][4]={
        {1,4,7,11},
        {2,5,8,12},
        {3,6,9,16},
        {10,13,14,17}
    };
    int target=11;
    if(searchMatrix(matrix ,4,4, target)){
        printf("Element %d found in matrix.\n",target);
    }else{
    printf("Element %d NOT found in matrix.\n",target);
    }
    return 0;
}