#include<stdio.h>
int main(){
   int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  int revers=0;
//    for(int i=0;i<3;i++){
//     for(int j=2;j>=0;j--){
//         printf("%d ",arr[i][j]);
//     }
for(int i=2;i>=0;i--){
    for(int j=0;j<3;j++){
        printf("%d ",arr[i][j]);
    }
}
   return 0;
}