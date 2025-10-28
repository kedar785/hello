#include<stdio.h>
#include<string.h>
int main(){
    char name[]="madam";
    int freq[256] = {0};
    int i;
    for(i=0;i<strlen(name);i++){
        freq[(int)name[i]]++;
    }
    printf("Result: ");
    for(i=0;i<strlen(name);i++){
         //if(freq[(int)name[i]]==1){//esse single wala later output ma ata hai
         if(freq[(int)name[i]]>1){
            printf("%c",name[i]);
        }
    }printf("\n");
    return 0;
    // int ln= strlen(name);
    // int isTrue=1;
    // for(int i=0;i<ln/2;i++){
    //     if(name[i]!=name[ln-i-1]){
    //         isTrue=0;
    //         break;
    //     }
    // }
    // if(isTrue==1){
    //     printf("palindrom hai");
    // }else{
    //     printf("palindrom nhi hai");
    // }
}