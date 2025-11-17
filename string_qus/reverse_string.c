#include<stdio.h>
#include<string.h>
void main(){
    int temp,i;
    char str[30],len;
    printf("Enter the strung: ");
    gets(str);
    len=strlen(str);
    for(i=0;i<=len/2;i++){
        temp=str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=temp;
    }
    printf("Reverse string is:%s",str);
}