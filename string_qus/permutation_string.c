#include<stdio.h>
#include<String.h>
void swap(char *x,char *y){
char temp=*x;
*x=*y;
*y=temp;
}
void permut(char *str,int left,int right){
    if(left==right){
        printf("%s\n",str);
    }else{
        for(int i=left;i<=right;i++){
            swap(&str[left],&str[i]);//character swap
            permut(str,left+1,right);//recuesion
            swap(&str[left],&str[i]);//backtrak
        }
    }
}
int main(){
    char str[20];
    printf("Enter a string: ");
    scanf("%s",str);
    int n=strlen(str);
    permut(str,0,n-1);
    return 0;
}
