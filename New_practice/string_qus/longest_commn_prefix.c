#include<stdio.h>
#include<string.h>
char* longestCommonPrefix(char strs[] [100],int n){
    static char prefix[100];
    strcpy(prefix,strs[0]);
    for(int i=1;i<n;i++){
        while(strncmp(prefix,strs[i],strlen(prefix))!=0){
            prefix[strlen(prefix)-1]='\0';
            if(strlen(prefix)==0)
            return prefix;
        }
    }
    return prefix;
}
int main(){
    int n;
    printf("no of string: ");
    scanf("%d",&n);
    char strs[n][100];
    printf("String enter karo:\n");
    for(int i=0;i<n;i++){
        scanf("%s",strs[i]);
    }
    printf("longest common prefix:%s\n",longestCommonPrefix(strs,n));
    return 0;
}