#include<stdio.h>
int main(){
    int arr[5]={2,3,4,6,5};
     arr[0]=2;
    printf("revers :");
    for(int i=4;i>=0;i--){
        arr[i];
        printf("%d ",arr[i]);
    }
}