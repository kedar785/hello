#include<stdio.h>
int main(){
int arr[5]={2,5,3,7,9};
for(int i=0;i<5;i++){
    if(arr[i]%2!=0){
        printf("%d\n",arr[i]);
    }
}
return 0;
}
