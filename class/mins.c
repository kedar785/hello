#include<stdio.h>
int main(){
int arr[6]={-2,-3,-5,-6,-7};
 int min = arr[0];
for(int i=1;i<6;i++){
    if(arr[i]<min)
    min = arr[i];
}
printf("minimum = %d\n",min);
return 0;
}