#include<stdio.h>
int  main(){
int A[]={1,2,3,4,5};
int B[]={4,5,6,7,8};   
int m=5,n=5;
int i,j;
printf("intersection: ");
for(i=0;i<m;i++){
for(j=0;j<n;j++){
    if(A[i]==B[j]){
    printf("%d ",A[i]);


    break;}
}
}
printf("\nunion: ");
for(i=0;i<m;i++){
    printf("%d ",A[i]);
}
for(i=0;i<n;i++){
    int found=0;
    for(j=0;j<m;j++){
        if(B[i]==A[j]){
            found=1;
            break;
        }
    }
    if(!found)
    printf("%d ",B[i]);
}
printf("\n");
return 0;
}