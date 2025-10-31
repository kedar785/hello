// #include<stdio.h>
// int main(){
//     int arr[5]={4,5,3,4,5};
//     int xor=0;
//     for(int i=0;i<5;i++){  
//         xor=xor^arr[i];
//     }
//     printf("%d",xor);
// }

//binary swap
// #include<stdio.h>
// int main(){

//    int  a=5; 
//    int b=3;
//     a=a^b;
//    b=a^b;
//    a=a^b;
// printf("a =%d\n ",a);
// printf("b =%d ",b);
// }

//missing num
#include<stdio.h>
int main(){
    int arr[4]={1,2,4,5};
    int xor=0;
    int xor1=0;
    for(int i=0;i<5;i++){
        xor=xor^1;
    }
    for(int i=0;i<4;i++){
        xor1=xor1^arr[i];
    }
    printf("%d",xor^xor1);
}