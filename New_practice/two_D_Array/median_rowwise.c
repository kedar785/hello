#include<stdio.h>
int count(int arr[],int n,int x){
    int l=0,h=n-1;
    while(l<=h){
        int m=(l+h)/2;
        if(arr[m]<=x) l=m+1;
        else h=m-1;
    }
    return l;
}
int main(){
    int r,c,a[100][100];
    printf("Enter row and colum");
    scanf("%d %d",&r,&c);
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
  scanf(" %d",&a[i][j]);
    int low=a[0][0],high =a[0][c-1];
     for(int i=1;i<r;i++){
        if(a[i][0]<low)low=a[i][0];
        if(a[i][c-1]>high)high=a[i][c-1];
     }
     int need=(r*c+1)/2;
     while(low<high){
        int mid=(low+high)/2,cnt=0;
        for(int i=0;i<r;i++)
        cnt +=count(a[i],c,mid);
    if(cnt<need)low=mid+1;
    else high=mid;
     }
     printf("%d",low);
     return 0;
}