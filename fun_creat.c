// #include<stdio.h>
// void sum(int a){
//     //return a;
//     if(a==0){
//         return;
//     }
    
    
//     //printf("%d",a);//revers print
//     sum(a-1);
    
//     printf("%d",a);
// };
// int main(){
//     sum(5);
// }

//sum
// #include<stdio.h>
// int sum(int a){
//     if(a==0){
//         return 0;
//     }
//     return a+sum(a-1);
// }
// int main(){
//     int data= sum(5);
//     printf("%d",data);
// }

//factorial
// #include<stdio.h>
// int (int asum){
//     if(a==0 ||a==1){
//         return 1;
//     }
//     return a*sum(a-1);
// };
// int main(){
//     int data= sum(3);
//     printf("%d",data);
// }

//2^n
// #include<stdio.h>
// int pow(int x,int n){
//     if(n==0){
//     return 1;
// }
// return x*pow(x,n-1);
// }
// int main(){
//     int data= pow(2,3);
//     printf("%d",data);
// }

//arr sum
#include<stdio.h>
int sum(int arr[],int n){
    if(n==0){
        return 0;
    }
    return arr[n-1]+sum(arr,n-1);
};
int main(){
int arr[]={1,2,3,4,5};
int n=5;
int data= sum(arr,n);
printf("%d",data);
}
