#include<stdio.h>
#include<string.h>
int main(){
  char str[]="bca";
  int len=strlen(str);// Bubble sort to sort characters

  for(int i=0;i<len-1;i++){
   for(int j=0;j<len-i-1;j++){
      if(str[j]>str[j+1]){
         char temp=str[j];
         str[j]=str[j+1];
         str[j+1]=temp;
      }
   }
  }
   printf("second string: %s\n",str);
   return 0;
    }

