#include<iostream>
int main(){
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter element of matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("primary diagonal: ");
    for(int i=0;i<n;i++){
        printf("%d",a[i][i]);
    }
    printf("\nSecondry diagonal: ");
    for(int i=0;i<n;i++){
        printf("%d",a[i][n-i-1]);
    }
    return 0;
}