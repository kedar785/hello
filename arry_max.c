#include<stdio.h>
int main(){
    int arr[5]={8,7,4,6};
    int even=arr[0];
    for(int i=0;i<4;i++){
        if(arr[i]%2==0){
            printf("%d\n", arr[i]);
            
        }
    }
    return 0;

}