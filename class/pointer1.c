#include<stdio.h>
int main(){
    int x=5;
    int *a=&x;
    printf("%d\t",x);
    printf("%d\t",&x);
    printf("%d\t",a);
    printf("%d\t",*a);
}