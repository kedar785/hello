// #include<stdio.h>
// void swap(int a,int b);
// int main(){
    // int age=33;
    // int *ptr=&age;
    // printf("%u\n",&age);
    // printf("%u\n",ptr);
    // printf("%u\n",&ptr);
    // printf("%u\n",*ptr);
    // return 0;



    // int i=5;
    // int *ptr=&i;
    // int **pptr=&ptr;
    // printf("%d\n",**pptr);

    
//     #include<stdio.h>
// void swap(int a,int b);
// int main(){
//     int x=3, y=5;
//     swap(x,y);
//     printf("x=%d & y=%d\n",x,y);
//     return 0;
// }
// void swap(int a,int b){
//     int t=a;
//     a=b;
//     b=t;
//     printf("a= %d & b= %d\n",a,b);
// }
   

#include<stdio.h>
int main(){
    
// int arr[4]={1,2,3,4};
// int *p=arr;
// for(int i=3;i>=0;i--){
// printf("%d  ",*(p+i));
// }
int sum=0;
int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
    sum=sum+arr[i][j];
}
printf("%d\n",sum);
    
}
}