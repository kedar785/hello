#include<stdio.h>
int main(){
    int a[5]={8,6,3,4};
    int even=a[0];
    for(int i=1;i<4;i++){
        if(a[i]%2==0){
            printf("even= %d\n",a[i]);
        }
    }
    return 0;
}