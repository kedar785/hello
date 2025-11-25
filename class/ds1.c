#include<stdio.h>
int main(){
    int a[5];
    int s=0,i;
    printf("Address of Array| Element\n");
    for(int i=0;i<5;i++)
    printf("&a[%d]=%4\n",i,&a[i]);
printf("Enter 5 int \n");
for(int i=0;i<5;i++)
scanf("%d", &a[i]);
for(int i=0;i<5;i++)
s=s+a[i];
printf("\n%d",s);
getch();
}
