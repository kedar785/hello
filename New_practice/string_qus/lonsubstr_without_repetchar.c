#include<stdio.h>
#include<string.h>
int lengthOfLongestSubstring(char *s){
    int n=strlen(s);
    int lastIndex[256];
    int maxLen=0;
    
    int start=0;
    for(int i=0;i<256;i++)
    lastIndex[i]=-1;
 for(int end=0;end<n;end++){
    char c=s[end];
    if(lastIndex[(unsigned char)c]>=start){
   start =(lastIndex[(unsigned char)c]+1);
    }
lastIndex[(unsigned char)c]=end;
int windowLen=end-start+1;
if(windowLen>maxLen)
maxLen=windowLen;
}
return maxLen;
}
int main(){
   char s[]="abbaccc";
   printf("Longest length = %d\n",lengthOfLongestSubstring(s));
   return 0;
}