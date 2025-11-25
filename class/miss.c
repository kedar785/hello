#include<stdio.h>
int main(){
    int arr[6]={1,2,3,5}; 
    int n= 5;
    int total = n*(n+1)/2;
    int sum=0;
    for(int i=0;i<n-1;i++){
         sum += arr[i];
    }
    int missing  = total - sum;
    printf("missing number = %d\n",missing);
    return 0;
}