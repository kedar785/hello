#include<stdio.h>
#include<string.h>
void countAndSay(int n){
    if(n<=0)return;
    char curr[1000]="1";
    char next[1000];
    for(int i=1;i<n;i++){
        int len=strlen(curr);
        int k=0;
        for (int j=0;j<len;j++){
            int count=1;
        
        while (j+1<len && curr[j]==curr[j+1]){
            count++;
            j++;
        }
        next[k++]=count+'0';
        next[k++]=curr[j];
    }
    next[k]='\0';
    strcpy(curr,next);
}
printf("%s\n",curr);
}
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    countAndSay(n);
    return 0;
}