#include<stdio.h>
int main(){
    int n,i;
    int t1=0,t2=1;
    int nextTerm;
    printf("inter the number");
    scanf("%d",&n);
    printf("fibonacci series: ");
    for(int i=1;i<=n;i++){
        printf("%d\t",t1);
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
    }
    return 0;
}