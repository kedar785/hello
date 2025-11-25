#include<stdio.h>
void sort(int arr[],int n){
int temp;
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
if(arr[i]>arr[j]){
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
    }
}
}
int main(){
int n,k;
printf("Enter the size of array: ");
scanf("%d",&n);
int arr[n];
printf("Enter %d elements:",n);
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("Enter the value of k: ");
scanf("%d",&k);
sort(arr,n);
printf("sorted array: ");
for(int i=0;i<n;i++){
    printf("%d",arr[i]);
}
if(k<=n){
    printf("\nkth Minimum element = %d",arr[k-1]);
    printf("\nkth Mmaximum element = %d",arr[n-k]);
}else{
    printf("\nk is greter than the number of element in array");
}
return 0;
}