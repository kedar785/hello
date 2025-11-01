#include<stdio.h>
int checkSortedAndRotated(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        int next=(i+1)%n;
        if (arr[i]>arr[next]){
            count++;
        }
    }
    if(count==0)
    printf("array is sorted but not rotated.\n");
 else if(count==1)
    printf("array is sorted and rotated.\n");
 else
    printf("array is NOT sorted and rotated.\n");
return 0;
}
int main(){
    int arr1[]={3,4,5,1,2};
    int arr2[]={1,2,3,4,5};
    int arr3[]={2,1,3,4,5};
    int n1=sizeof(arr1)/
         sizeof(arr1[0]);
    int n2=sizeof(arr2)/
         sizeof(arr2[0]);
    int n3=sizeof(arr3)/
         sizeof(arr3[0]);
    printf("for arr1: ");
    checkSortedAndRotated( arr1,n1);
     printf("for arr2: ");
    checkSortedAndRotated( arr2,n2);
     printf("for arr3: ");
    checkSortedAndRotated( arr3,n3);
    return 0;
}