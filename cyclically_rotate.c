#include<stdio.h>
void rotateByone(int arr[],int n){
    int last=arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=last;}
 int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("orignzl array: ");
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
rotateByone(arr, n);
printf("\nRotated array: ");
for(int i=0;i<n;i++)
printf("%d ",arr[i]);
return 0;
}
