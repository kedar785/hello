#include<stdio.h>
int main(){
    int n,m;
    printf("Enter no of row and colm: ");
    scanf("%d %d",&n,&m);
    int a[n][m];
    printf("Enter matrix element:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    } 
    printf("Boundry Traversal: ");
    for(int j=0;j<m;j++){
        printf("%d ",a[0][j]);
    }
    for(int i=1;i<n;i++){
        printf("%d ",a[i][m-1]);
    }
if(n>1){
    for(int j=m-2;j>=0;j--){
        printf("%d ",a[n-1][j]);
    }
}
if(m>1){
    for(int i=n-2;i>=1;i--){
        printf("%d ",a[i][0]);
    }
}
return 0;
}