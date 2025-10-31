// #include<stdio.h>
// int palindrom(int arr[],int i,int j){
//     if(i>=j){
//         return 1;
//     } if (arr[i]!=arr[j]){
//         return 0;
//     }
//     return palindrom(arr,++i,--j);
// }
// int main(){
//     int arr[3]={1,2,1};
// int startIndex=0;
// int endIndex=2;
// int data=palindrom(arr,startIndex,endIndex);
// printf("%d",data);
//  }

// #include<stdio.h>
// int Bs(int arr[] ,int i,int j,int target){
//     if(i>j){
//         return 0; 
//     }
//     int mid=(i+j)/2;
//     if(arr[mid]==target){
//         return mid;
//     }
//     else if(arr[mid]<target){
//         return Bs(arr,mid+1,j,target);
//     }
//     else{
//         return Bs (arr,i,mid-i,target);
//     }
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     int i=0;int j=4;
//     int target=4;
//     int data=Bs(arr,i,j,target);
//     printf("%d",data);
// }

//check array sorted or not
// #include<stdio.h>
// int sorted(int arr[],int i,int j){
// if(i>=j){
//     return 1;}
// if(arr[i]>arr[i+1]){
//     return 0;
// }
// return sorted(arr,i+1,j);
// }
// int main(){
//     int arr[]={1,2,3,};
//     int i=0;
//     int j=2;
//     int data=sorted(arr,i,j);
//     printf("%d",data);
// }

#include<stdio.h>
int sorted(int arr[],int i,int j){
    if(i>=j){
        return 1;
    }
    if(arr[i]>arr[i+1]){
    return 0;
 }
return sorted(arr,i+1,j);
 }
int main(){
    int arr[]={1,2,1};
    int i=0;
    int j=2;
    int data=sorted(arr,i,j);
    printf("%d",data);
}