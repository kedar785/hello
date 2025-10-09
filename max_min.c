#include<stdio.h>
int main(){
    int arr[]={3,5,8,4,2};
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<5;i++){
       
        if(arr[i]>max){
            max=arr[i];
        }else if(arr[i]<min){
            min=arr[i];
        }
       
    }
    printf("maximum= %d\n",max);
printf("minimum= %d\n",min);
return 0;
}