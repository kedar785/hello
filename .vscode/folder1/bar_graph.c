// #include<stdio.h>
// #include<string.h>
// int main(){
//     int height[9]={1,8,6,2,5,4,8,3,7};
// int i=0;
// int j=8;
// int maxArea=0;                              
// while(i<j){
//     int h;
//     if(height[i]<height[j]){
//         h=height[i];
//     }else
//     {
//         h=height[j];
//     }
//     int w=j-i;
//     int area=h*w;
//     if(area>maxArea){
//         maxArea=area;
//     }
//     if(height[i]<height[j]){
//         i++;
//     }else{
//         j--;
//     }printf(" Maximum area :%d",maxArea);
// }

// }

// #include<stdio.h>
// #include<string.h>
// struct student{
//     char name[50];
//     int RollNo;
//     int age;
// };
// int main(){
// struct student s1;
// s1.age=18;
// printf("%d\n",s1.age);
// strcpy(s1.name,"kedar");
// printf("%s\n",s1.name);
// s1.RollNo=674628;
// printf("%d",s1.RollNo);
// }

#include<stdio.h>
struct student{
    char name[10];
    int RollNo;
    float marks;
};
int main (){
    struct student s1[5];
    for(int i=0;i<5;i++){
        printf("Entter your name");
        scanf(" %s",s1[i].name);
        scanf("%d",s1[i].RollNo);
        scanf("%f",s1[i].marks);
    }

}