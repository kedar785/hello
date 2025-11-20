#include<stdio.h>
#include<string.h>
#include<stdbool.h> 
bool isPalindrome(char s[],int i,int r){
    while(i<r){
        if(s[i]!=s[r])
        return 0;
    i++;
    r--;
    }
    return true;
}
bool validPalindrome(char s[]){
    int left =0;
    int right=strlen(s)-1;
    while(left<right){
        if(s[left]!=s[right]){
            return isPalindrome(s,left+1,right)||
            isPalindrome(s,left,right-1);
        }
        left++;
        right--;

    }
    return true;
}
int main(){
    char s[100];
    printf("Enter string: ");
    scanf("%s",s);
    if(validPalindrome(s))
    printf("yes,valid palindrome after at most one removal: ");
else
printf(" no can not be palindrome evem after one removal:\n");
return 0;
}