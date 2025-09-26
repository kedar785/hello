#include<stdio.h>
int sum(){
    int a=5;
    int b=10;
    int c=a+b;
    return c;
}
int main(){
    int data= sum();
    printf("%d",data);
    return 0;
}