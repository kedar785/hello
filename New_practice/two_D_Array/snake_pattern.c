#include<stdio.h>
int main(){
    int n;
    printf("Enter no row/colm: ");
    scanf("%d",&n);
    int num=1;
    for(int i=1;i<=n;i++){   //Snake pattern printing(GIG-ZAG)
        int row[n];
        for(int j=0;j<n;j++){
            row[j]=num;
            num++;           
        }
    
    if(i%2==0){
        for(int j=n-1;j>=0;j--){
            printf("%d ",row[j]);
        }
    }
    else{
        for(int j=0;j<n;j++){
            printf("%d ",row[j]);
        }
    }
    printf("\n");
}
return 0;
}