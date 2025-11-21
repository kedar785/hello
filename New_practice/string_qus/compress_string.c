#include<stdio.h>
int compress(char* chars,int charsize){
int write=0;
int i=0;
while(i<charsize ){
    char current=chars[i];
    int count=0;
    while(i<charsize && chars[i]==current){
        count++;
        i++;
    }
    chars[write++]=current;
    if(count>1){
        char buffer[10];
        int len=sprintf(buffer,"%d",count);
        for(int k=0;k<len;k++){
            chars[write++]=buffer[k];
        }
    }
}
return write;
}
int main(){
    char chars[]={'a','b','c','c','c'};
    int size=sizeof(chars)/sizeof(chars[0]);
    int newLength=compress(chars,size);
    printf("Compressed string: ");
    for(int i=0;i<newLength;i++){
        printf("%c",chars[i]);
    }
    printf("\nNew Length : %d\n",newLength);
    return 0;
}