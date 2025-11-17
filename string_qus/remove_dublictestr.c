#include<stdio.h>
#include<String.h>
int main(){
    char str[100];
    char result[100];
    int i,j,k=0;
    int found;
    printf("Enter a String: ");
    gets(str);
    for(i=0;i<strlen(str);i++){
        found=0;
        for(j=0;j<k;j++){
            if(str[i]==result[j]){
                found=1;
                break;
            }
        }
        if(!found){
            result[k]=str[i];
            k++;
        }
    }
    result[k]='\0';
    printf("String after remove duplication: %s\n",result);
    return 0;
}