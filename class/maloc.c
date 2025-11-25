// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//    int arr[]= {0,-2,3,5,67,24};
//     int n;
//     printf("Enter size: ");
//     scanf("%d",&n);
//     int *arr=(int *)malloc(n * sizeof(int));
//     printf("Enter %d element:\n",n);
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int j=0;
//     for(int i=0;i<n;i++);{
//         if(arr[i]==0){
//             arr[j]=arr[i];
//             j++;
//         }
//     }
// for(int i=0;i<n;i++);{
//         if(arr[i]<0){
//             arr[j]=arr[i];
//             j++;
//         }
//     }
//     for(int i=0;i<n;i++);{
//         if(arr[i]>0){
//             arr[j]=arr[i];
//             j++;
//         }
//     }
//     printf("%d",arr[j]);
// }

#include<stdio.h>
#include<stdlib.h>
 int main(){
    printf("\nNow enter new size: ");
    int newsize;
    scanf("%d",&newsize);
    int *arr=(int *)realloc(arr,newsize * sizeof(int));
    printf("Enter %d new element:\n",newsize);
    for(int i=0;i<newsize;i++)
    scanf("%d",&arr[i]);
free(arr);
return 0;
 }