#include<stdio.h>
int myStrStr(char *str,char *pat){
 int i, j;
    int lenStr = strlen(str);
    int lenPat = strlen(pat);

    for (i = 0; i <= lenStr - lenPat; i++) {
        for (j = 0; j < lenPat; j++) {
            if (str[i + j] != pat[j])
                break;
        }
        if (j == lenPat)
            return i; // Match found
    }
    return -1; // No match
}


int main(){
    char str[]="hello world";
    char pat[]="world";
    int index=myStrStr(str,pat);
    if(index !=-1)
    printf("found at mindex: %d\n",index);
else
printf("not found\n");
return 0;
}