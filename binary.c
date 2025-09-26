#include<stdio.h>
int Bsearch(int arr[5]){
    int s=0;
    int end=4;
    int t=4;
    while(s<=end)
    {
        int mid=(s+end)/2;
        if(arr[mid]==t){
        return mid;
        }else if(arr[mid]<t){
            s =mid+1;
        }
        else{
            end=mid-1;
        }
    }return -1;
}
int main(){
    int arr[5]={1,2,3,45,5};
    int data=Bsearch(arr);
    printf("%d",data);
}