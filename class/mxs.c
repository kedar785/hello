#include<stdio.h>
int main(){
    int arr[6]={1,-5,3,-4,5,7};
int maxsum=arr[0];
for(int i=0;i<6;i++){
    int currsum=0;
    for(int j=i;j<6;j++){
        currsum=currsum+arr[j];
    
    if(currsum>maxsum){
        maxsum=currsum;
    }
}
}
printf("%d",maxsum);

}