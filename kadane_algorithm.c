#include<stdio.h>
#include<limits.h>//INT_MIN ke liye
int kadane(int arr[],int n){
    int currentsum=0;
    int maxsum=INT_MIN;
    for (int i=0;i<n;i++){
        currentsum=currentsum+arr[i];
        if(currentsum>maxsum)
        maxsum=currentsum;
    if(currentsum<0)
    currentsum=0;
    }
    return maxsum;
}
int main(){
    int arr[]={-2,4,-1,3,5,-7,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxsum=kadane(arr,n);
    printf("Maximum subarray sum = %d\n",maxsum);
    return 0;
}