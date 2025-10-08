#include<stdio.h>
int main(){
    char name[]="hii";//'\0'atomatically add hota hai
char data[10];
for(int i=0;name[i]!='\0';i++){
    data[i]=name[i];
}
for(int i=0;name[i]!='\0';i++){
printf("%c",data[i]);}

    // for(int i=0;name[i]!='\0';i++){
    // printf("%c\n",name[i]);}
    // // int i=0;
    // int ln= strlen(name);
    // printf("%d",ln);
//    while(name[i] !='\0') {
//     printf("%c\n",name[i]);
//     i++;
    

}