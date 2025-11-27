#include<stdio.h>
int main(){
    int n;
   
    printf("Entersize of squer element:\n");
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //Transpose
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    //Rivers each row
    for(int i=0;i<n;i++){
        for(int j=0,k=n-1;j<k;j++,k--){
            int temp=a[i][j];
            a[i][j]=a[i][k];
            a[i][k]=temp;        }
    }
    printf("\nMatrix after 90 degree clockwise rotation:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
       
    }
    return 0;
}