#include<stdio.h>
int main(){
    int arr[]={2,1,5,4,7,8,1,2};
   int n=sizeof(arr)/4;
   int k=2;
   int wsum=0;
   int msum=0;
   for(int i=0;i<k;i++){
    wsum+=arr[i];
   }
   for(int i=k;i<n;i++){
    wsum+=arr[i]-arr[i-k];
    if(wsum>msum){
        msum=wsum;
    }
   }
   printf("%d",msum);
}