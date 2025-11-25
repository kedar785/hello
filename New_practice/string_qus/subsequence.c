#include<stdio.h>
#include<string.h>
int isSubsequence(char s1[],char s2[]){
    int i=0,j=0;
    while(s1[i]!='\0' && s2[j]!='\0'){
        if(s1[i]==s2[j]){
            i++;
        }
        j++;
    }
    return (s1[i]=='\0');
}
int main(){
    char s1[100],s2[100];
    printf("Enter first string(subsequence): ");
    scanf("%s",s1);
    printf("Enter second string: ");
    scanf("%s",s2);
    if (isSubsequence(s1,s2))
  
     printf("yes,\"%s\"is a subsequence of \"%s\".\n",s1,s2);
else
  printf("No,\"%s\"is a subsequence of \"%s\".\n",s1,s2);
   return 0;
}